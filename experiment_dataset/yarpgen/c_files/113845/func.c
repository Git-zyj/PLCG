/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113845
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_12 = ((/* implicit */unsigned short) max(((-(((/* implicit */int) ((((/* implicit */int) var_10)) != (((/* implicit */int) var_1))))))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) <= (max((((/* implicit */long long int) (signed char)4)), (8596623218414698762LL))))))));
    var_13 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_14 &= ((/* implicit */unsigned short) ((unsigned char) var_6));
        var_15 = min(((-(((/* implicit */int) ((unsigned char) var_9))))), (((/* implicit */int) ((signed char) arr_0 [i_0] [i_0 - 1]))));
    }
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)61)) ? (((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */short) (unsigned char)54)), ((short)-22073)))) << (((((((/* implicit */_Bool) (signed char)4)) ? (1711414079) : (((/* implicit */int) (signed char)-12)))) - (1711414062)))))) : (-750561718911875917LL)));
}
