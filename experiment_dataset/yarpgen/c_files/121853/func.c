/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121853
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
    var_18 = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_11)), (var_7))))) / (((long long int) var_10)))) / (((/* implicit */long long int) 4294967282U))));
    var_19 = ((/* implicit */int) ((((/* implicit */unsigned long long int) var_17)) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) var_6)) : (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_9))))))));
    var_20 = var_2;
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 2; i_2 < 15; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned short) (~(((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)1))))) + (arr_5 [i_0] [i_1] [i_2])))));
                            arr_11 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */_Bool) arr_7 [i_0] [(short)8] [i_2] [i_3]);
                            /* LoopSeq 2 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                arr_14 [i_0] [i_1] [i_1] [i_3] [i_4] [i_4] |= ((/* implicit */unsigned short) arr_9 [i_0] [i_0] [i_3] [i_1]);
                                var_22 ^= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL)))))) != (var_17)));
                            }
                            /* vectorizable */
                            for (long long int i_5 = 0; i_5 < 17; i_5 += 4) 
                            {
                                arr_18 [15U] [i_0] [i_1] [i_2 - 1] [i_3] [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_2 + 1] [i_2 - 1] [i_2] [i_2 - 2] [i_2 + 2]))) != (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) 4294967295U)) : (var_15)))));
                                var_23 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_2 - 1] [i_2 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [i_2 - 2] [i_2 + 2]))));
                                arr_19 [i_0] [i_1] [i_2] [i_3] [i_5] [i_5] [i_3] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_16 [i_0] [i_1] [i_2] [i_3] [i_3] [i_5])) / (var_17)))) > (arr_10 [i_0] [i_0] [i_3])));
                                arr_20 [i_0] [i_0] [i_0] [i_3] [i_0] = ((/* implicit */unsigned char) var_14);
                            }
                            var_24 = ((/* implicit */short) var_14);
                            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) (!(((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_1 [i_2 + 1])))) != (arr_9 [i_1] [i_2 - 1] [i_1] [i_1]))))))));
                        }
                    } 
                } 
                var_26 -= ((long long int) ((((/* implicit */int) arr_4 [i_0] [(short)3])) | (((/* implicit */int) arr_13 [i_1] [7LL] [i_1] [i_0] [i_0] [i_0]))));
                var_27 = ((/* implicit */signed char) 5ULL);
                var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) var_1))));
            }
        } 
    } 
}
