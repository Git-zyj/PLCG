/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121567
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) (-(1167883271)))) != (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */long long int) var_19))))));
        var_20 -= ((/* implicit */unsigned char) arr_1 [i_0] [i_0]);
        var_21 |= ((/* implicit */unsigned int) (unsigned char)166);
    }
    for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        var_22 = ((/* implicit */int) max((var_22), (422323098)));
        arr_5 [i_1] = ((/* implicit */unsigned short) var_14);
        var_23 = ((/* implicit */unsigned int) ((((arr_4 [7]) & (arr_4 [i_1]))) + (arr_3 [i_1] [i_1])));
        var_24 = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((2632117345U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)132)))))))))));
        var_25 = ((/* implicit */_Bool) arr_4 [i_1]);
    }
    var_26 -= ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)15)) : (-1917584838));
}
