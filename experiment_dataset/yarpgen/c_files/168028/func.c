/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168028
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
    var_15 = ((/* implicit */unsigned short) var_6);
    var_16 = ((/* implicit */unsigned long long int) var_12);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) max((arr_3 [i_0] [i_0] [i_0]), (min((((/* implicit */unsigned char) arr_1 [i_1] [i_0])), (arr_3 [i_0] [i_1] [(unsigned char)8]))))))));
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_7 [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) 4016258889U)), (0ULL)));
                    arr_8 [i_2] [i_2] [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_2] [i_1]);
                }
                /* vectorizable */
                for (unsigned int i_3 = 0; i_3 < 19; i_3 += 4) 
                {
                    var_17 = ((/* implicit */unsigned int) ((_Bool) arr_10 [i_0] [i_1]));
                    arr_11 [i_3] &= ((((/* implicit */_Bool) 422212465065984ULL)) && (((/* implicit */_Bool) arr_3 [i_3] [i_1] [i_1])));
                    /* LoopSeq 2 */
                    for (unsigned short i_4 = 2; i_4 < 16; i_4 += 3) 
                    {
                        arr_14 [i_3] |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_1 [i_4 + 3] [i_4 + 1])) : (((/* implicit */int) arr_1 [i_4 + 1] [i_4 + 3]))));
                        arr_15 [(_Bool)1] [i_0] [3U] [i_3] [3U] [i_0] = ((/* implicit */int) (-(((arr_2 [i_0]) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))))));
                        arr_16 [i_0] [i_4] [(unsigned char)11] = ((/* implicit */int) var_1);
                    }
                    for (short i_5 = 2; i_5 < 16; i_5 += 4) 
                    {
                        arr_21 [i_0] [i_0] [i_0] [(short)3] [i_0] [i_5] = ((/* implicit */long long int) (-(arr_17 [i_0] [i_1] [i_5 + 3] [i_5] [i_0])));
                        arr_22 [i_0] [i_0] [i_3] [i_5] = ((/* implicit */unsigned short) arr_18 [i_0]);
                    }
                    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) 16281947009270412618ULL))));
                }
                var_19 = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_9)), (((unsigned long long int) var_1))));
            }
        } 
    } 
    var_20 ^= min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3))))), (min((422212465065984ULL), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) 1724259385)), (288230376151678976LL)))))));
}
