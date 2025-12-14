/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10027
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
    var_10 = ((/* implicit */long long int) var_7);
    var_11 = ((/* implicit */_Bool) ((long long int) max((((/* implicit */long long int) var_9)), (((var_8) / (var_1))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned short) (+(((/* implicit */int) (unsigned char)172)))));
        var_12 = ((/* implicit */_Bool) (unsigned char)94);
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        var_13 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)65524))));
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_5)))) : (var_6)));
    }
}
