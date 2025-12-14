/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109745
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
    var_15 = (!(((/* implicit */_Bool) var_13)));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_16 = ((/* implicit */unsigned char) arr_1 [i_0] [i_1]);
            /* LoopSeq 2 */
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                var_17 = ((/* implicit */long long int) ((arr_3 [i_0] [i_1] [i_2]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                var_18 = ((/* implicit */unsigned char) arr_1 [i_0] [i_1]);
            }
            for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 1) 
            {
                arr_10 [i_1] [i_1] = ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_3] [i_0])) : ((-(arr_4 [i_1]))));
                /* LoopSeq 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((var_4) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_4]))))))));
                    var_20 = ((((/* implicit */_Bool) arr_8 [i_0] [i_0])) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_1] [i_1] [i_3] [i_4])) : (((/* implicit */int) arr_13 [i_4] [i_3] [i_3] [i_1] [i_1] [i_0])));
                    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) arr_7 [i_4] [i_3]))));
                }
                for (unsigned long long int i_5 = 1; i_5 < 20; i_5 += 1) 
                {
                    var_22 = ((/* implicit */unsigned int) arr_12 [i_0] [i_0] [i_1] [i_3] [i_0]);
                    var_23 = (!(((/* implicit */_Bool) arr_9 [i_5 + 1] [i_5] [i_5 + 1] [i_5])));
                }
            }
        }
        arr_18 [i_0] = ((/* implicit */signed char) min((((/* implicit */short) (_Bool)1)), ((short)28007)));
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_6 [i_0]) ^ (((/* implicit */long long int) var_3))))) ? (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]))));
        arr_19 [i_0] [i_0] = ((/* implicit */signed char) arr_4 [i_0]);
    }
    /* vectorizable */
    for (signed char i_6 = 3; i_6 < 17; i_6 += 2) 
    {
        var_25 = ((/* implicit */int) arr_11 [i_6] [i_6 + 1] [i_6] [i_6]);
        arr_22 [i_6] = ((/* implicit */unsigned char) arr_0 [i_6 - 2]);
    }
    var_26 = ((/* implicit */short) var_2);
}
