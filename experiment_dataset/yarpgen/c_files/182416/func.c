/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182416
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
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_0 [i_0])) : (((((/* implicit */int) var_17)) >> (((-9223372036854775794LL) - (-9223372036854775804LL))))))))));
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_16)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_10))))), (max((((/* implicit */long long int) var_14)), (-8139546907488067136LL)))))) ? (((((/* implicit */_Bool) 7U)) ? (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (arr_0 [i_0])))) : (((/* implicit */int) ((_Bool) arr_1 [i_0] [i_0]))))) : (((((/* implicit */int) arr_0 [i_0])) ^ (((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0]))))))));
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_0 [i_0]), (((/* implicit */signed char) arr_1 [i_0] [i_0]))))) ? (((arr_1 [i_0] [i_0]) ? (((/* implicit */int) (short)6694)) : (((/* implicit */int) arr_0 [i_0])))) : (((((/* implicit */int) arr_1 [i_0] [i_0])) % (((/* implicit */int) arr_0 [i_0]))))));
    }
    for (long long int i_1 = 1; i_1 < 15; i_1 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            var_20 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_1 + 1])) ? (((/* implicit */int) arr_4 [i_1 - 1])) : (((/* implicit */int) (_Bool)1))));
            arr_11 [i_1] [11U] [i_2 - 1] = ((((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) < (((var_8) % (((/* implicit */unsigned int) ((/* implicit */int) var_15))))));
            var_21 ^= ((((/* implicit */_Bool) arr_4 [i_2 - 1])) ? (((/* implicit */int) arr_4 [i_2 - 1])) : (((/* implicit */int) arr_4 [i_2 - 1])));
        }
        arr_12 [i_1] = (!(((/* implicit */_Bool) ((var_18) ? (((/* implicit */int) arr_6 [i_1 - 1])) : (((/* implicit */int) arr_6 [i_1 - 1]))))));
    }
    var_22 = ((/* implicit */signed char) (-(((/* implicit */int) var_0))));
}
