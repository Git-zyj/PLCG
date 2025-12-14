/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183174
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
    var_13 = ((/* implicit */unsigned short) 483323929U);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */int) arr_2 [i_1 + 2] [i_1 + 1]);
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        arr_13 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_10 [i_1] [i_2] [i_1] [i_1] [i_0])))) ? (((/* implicit */unsigned long long int) (~(483323906U)))) : (arr_12 [i_3] [i_1 + 2] [i_0]))))));
                        var_14 = ((/* implicit */signed char) ((((unsigned long long int) 3811643364U)) & (max((((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_1 [i_1]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-25919)))))))));
                        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 483323922U)) ? (483323939U) : (3811643349U)))) ? (((/* implicit */unsigned long long int) ((int) max((arr_4 [i_3]), (((/* implicit */unsigned long long int) 3811643351U)))))) : (16902963061243625293ULL)));
                        arr_14 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */signed char) (unsigned char)113);
                        arr_15 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_10 [i_1 + 1] [i_1] [i_1 + 2] [i_1] [i_1 - 1]), (arr_10 [i_1 - 1] [i_1] [i_1 + 1] [i_1] [i_1 - 1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_1 + 2] [i_1] [i_1 + 1])) ? (483323946U) : (((/* implicit */unsigned int) arr_11 [i_1 + 1] [i_1] [i_1 + 2]))))) : (arr_10 [i_1 + 1] [i_1] [i_1 - 1] [i_1] [i_1 + 2])));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (int i_5 = 0; i_5 < 20; i_5 += 2) 
                        {
                            var_16 = ((/* implicit */unsigned long long int) min((3811643366U), (((/* implicit */unsigned int) (signed char)-126))));
                            arr_22 [i_2] [i_5] = ((/* implicit */unsigned long long int) max((((unsigned short) ((((/* implicit */_Bool) arr_18 [i_0] [i_1] [i_2] [i_5])) ? (arr_19 [i_0] [i_0] [i_2] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))), (((/* implicit */unsigned short) min(((signed char)-19), (arr_0 [i_1 - 1]))))));
                            arr_23 [i_0] = ((/* implicit */signed char) min((((arr_12 [i_0] [i_0] [i_1 + 1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1048575)))))));
                        }
                        /* LoopSeq 4 */
                        for (unsigned int i_6 = 4; i_6 < 16; i_6 += 1) 
                        {
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11))))) >= (arr_12 [i_0] [i_1] [i_2]))))) * (((unsigned long long int) ((((/* implicit */_Bool) 3811643357U)) || (((/* implicit */_Bool) arr_19 [i_1] [i_2] [i_4] [i_6])))))));
                            var_18 = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) arr_5 [i_1 + 2] [i_4] [i_4]))))));
                            arr_26 [i_4] [i_4] [i_1] [i_1] [i_0] &= ((signed char) -645297793);
                        }
                        for (int i_7 = 0; i_7 < 20; i_7 += 2) 
                        {
                            arr_29 [i_7] [i_7] [i_7] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3927359402U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (8742158256599771788ULL)))))));
                            arr_30 [i_0] = max((((((/* implicit */_Bool) arr_1 [i_0])) ? (14423780267336182607ULL) : (((arr_19 [i_4] [i_2] [i_1] [i_0]) | (((/* implicit */unsigned long long int) var_4)))))), (((((((/* implicit */_Bool) -1555370177)) && (((/* implicit */_Bool) arr_8 [i_2])))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)126))))) : (var_3))));
                            arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_19 [i_1] [i_1] [i_1 - 1] [i_1 + 1]), (((/* implicit */unsigned long long int) ((int) 488591391U)))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_2] [i_4]))))) ? (4022963806373369002ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-113)))))))) : (max((((/* implicit */unsigned long long int) arr_16 [i_0] [i_1 + 1])), (arr_19 [i_1] [i_1 + 2] [i_1] [i_2])))));
                        }
                        /* vectorizable */
                        for (short i_8 = 1; i_8 < 16; i_8 += 4) 
                        {
                            arr_36 [i_8] [i_4] [i_4] [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((short) arr_32 [i_8] [i_8 + 1] [i_8] [i_8 + 1]));
                            var_19 = ((/* implicit */unsigned short) ((483323951U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_8 + 4] [i_1] [i_2] [i_4] [i_2] [i_8] [i_2])))));
                        }
                        for (unsigned int i_9 = 0; i_9 < 20; i_9 += 3) 
                        {
                            var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_0] [i_1 - 1]))))) ? (max((arr_19 [i_0] [i_1] [i_2] [i_4]), (((/* implicit */unsigned long long int) (signed char)-115)))) : (((arr_32 [i_0] [i_1] [i_1 - 1] [i_4]) * (arr_32 [i_0] [i_0] [i_1 + 2] [i_4])))));
                            var_21 = ((/* implicit */unsigned short) ((unsigned long long int) min((arr_11 [i_1] [i_1] [i_1]), (arr_11 [i_1] [i_1] [i_1]))));
                        }
                        arr_39 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)72)), (5025172888486812577ULL)))) ? (((arr_27 [i_0] [i_1 + 1] [i_1 + 1] [i_4]) % (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_0] [i_1 + 2] [i_0] [i_2] [i_4]))))) : (((((/* implicit */_Bool) 8469513560487336992ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24576))) : (arr_27 [i_0] [i_0] [i_0] [i_0]))));
                        arr_40 [i_0] [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */signed char) max((max((2596920724780817688ULL), (var_7))), (((/* implicit */unsigned long long int) max(((~(-852865672))), (((/* implicit */int) ((short) 2560447745U))))))));
                        var_22 = ((/* implicit */unsigned long long int) 3811643323U);
                    }
                    var_23 = ((/* implicit */unsigned int) (+((-(((/* implicit */int) (signed char)-126))))));
                }
                var_24 = ((/* implicit */unsigned long long int) (unsigned char)64);
                arr_41 [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) arr_16 [i_0] [i_0]))));
            }
        } 
    } 
    var_25 = ((/* implicit */int) var_11);
}
