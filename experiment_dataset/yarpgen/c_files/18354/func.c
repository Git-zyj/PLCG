/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18354
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_15 = ((/* implicit */_Bool) var_11);
        var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((arr_1 [i_0] [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))))));
        var_17 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (-(1777143547)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) 1777143547)) : (var_7))) : (max((((/* implicit */unsigned int) var_2)), (arr_0 [i_0])))))));
        arr_3 [i_0] [i_0] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? ((-(var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)93)))))) ? ((-(max((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_0])))))) : (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) var_6)))))));
    }
    var_18 = ((/* implicit */unsigned short) ((unsigned int) (~(((/* implicit */int) (unsigned char)162)))));
    var_19 = ((/* implicit */unsigned int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_6) : (var_1))))))), ((unsigned char)219)));
    var_20 = ((/* implicit */_Bool) var_5);
}
