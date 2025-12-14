/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155120
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 2; i_3 < 19; i_3 += 3) 
                    {
                        arr_10 [i_1] [i_1] [i_3] = ((/* implicit */signed char) max((5510816198822915933ULL), (((/* implicit */unsigned long long int) 7266810429164913717LL))));
                        /* LoopSeq 2 */
                        for (signed char i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            arr_13 [i_0] [i_1] [i_3] [(unsigned short)1] = ((/* implicit */unsigned int) 7847478796209041450ULL);
                            arr_14 [i_4] [i_1] [i_3] [i_3] [i_0] [i_4] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_7), (arr_1 [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [12U] [i_0]))) > (8388096U))))) : (arr_8 [i_4] [i_3] [i_3] [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (((((/* implicit */_Bool) arr_7 [i_3] [i_2] [i_0])) ? (-7266810429164913718LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0] [i_4])) & (((/* implicit */int) var_11)))))))) : (var_7)));
                            var_16 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_9 [i_1 - 1] [i_3] [i_1 - 2] [i_3 + 1])) ? (arr_9 [i_1 + 1] [i_3] [i_1 - 2] [i_3 + 1]) : (((/* implicit */unsigned long long int) var_5)))), (((((((/* implicit */_Bool) 8769130761329902941ULL)) && (((/* implicit */_Bool) arr_1 [i_4])))) ? (((0ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                            arr_15 [i_0] [i_0] [i_3] = ((/* implicit */short) arr_3 [i_0] [19]);
                            arr_16 [i_3] [18ULL] [i_2] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -7266810429164913726LL)) ? (((/* implicit */int) arr_4 [i_1 + 1] [i_3 - 2] [i_3 + 1] [(short)2])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)18)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (arr_11 [i_3] [i_1] [i_3] [i_1] [i_1] [9])))))))) : (((((/* implicit */_Bool) arr_7 [i_1 + 1] [13ULL] [i_1])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)4095))))) : ((-(8769130761329902936ULL)))))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65524)) ? (var_7) : (arr_9 [i_0] [i_3] [i_2] [i_3 - 2]))))));
                            arr_20 [i_5] [i_3] [i_3 - 2] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */int) arr_7 [i_3 - 1] [i_1 - 1] [i_1])) * (((/* implicit */int) arr_7 [i_3 + 1] [i_1 - 2] [i_0])))), (((((/* implicit */int) arr_7 [i_3 - 1] [i_1 + 1] [i_0])) | (((/* implicit */int) arr_7 [i_3 + 1] [i_1 - 2] [i_0]))))));
                        }
                        var_18 = ((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-13325)) ? (((/* implicit */int) (unsigned short)38325)) : (((/* implicit */int) (_Bool)1))))) / ((((_Bool)1) ? (9677613312379648674ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))))));
                        /* LoopSeq 4 */
                        for (int i_6 = 0; i_6 < 20; i_6 += 3) 
                        {
                            arr_23 [i_3] [(signed char)0] [i_3] [(signed char)10] [18U] [18U] [i_3] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_0 [i_3 + 1] [i_3])) && (((/* implicit */_Bool) arr_0 [i_3 + 1] [i_3 + 1])))) || (((/* implicit */_Bool) (+(var_12))))));
                            arr_24 [i_0] [i_1] [i_2] [i_2] [i_3] [i_3] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_3] [(_Bool)1])) ? (((/* implicit */long long int) var_5)) : (0LL))), (((/* implicit */long long int) ((unsigned short) 17070487895553512746ULL)))))) ? (((/* implicit */int) ((signed char) 482460928))) : (((((/* implicit */int) arr_22 [(signed char)2] [i_3 - 1] [i_3])) - (((/* implicit */int) min(((short)-11292), (((/* implicit */short) arr_6 [i_0] [i_0] [i_0] [15])))))))));
                            var_19 = ((/* implicit */signed char) ((unsigned char) 18446744073709551610ULL));
                            arr_25 [i_0] [i_1] [i_1] [(_Bool)1] [i_3] = (+(min((((((/* implicit */_Bool) var_4)) ? (arr_17 [14ULL] [i_3] [i_3] [i_3] [i_3] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_0] [i_1] [i_3]))))), (((/* implicit */unsigned long long int) ((short) var_12))))));
                            arr_26 [(unsigned char)13] [i_3] [i_1] [(_Bool)1] [(_Bool)1] [i_6] [i_6] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (short)8124)) ? (18112040417575087780ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                        }
                        for (signed char i_7 = 2; i_7 < 17; i_7 += 3) 
                        {
                            arr_31 [i_3] [i_3] [i_3] [i_1] [i_0] = ((/* implicit */long long int) ((unsigned int) 0U));
                            arr_32 [4U] [(signed char)4] [i_2] [i_2] [i_1] [i_0] [4U] |= ((/* implicit */unsigned short) arr_11 [(_Bool)1] [(_Bool)1] [i_2] [i_2] [i_7] [i_2]);
                            arr_33 [i_3] = ((/* implicit */long long int) var_5);
                        }
                        for (long long int i_8 = 0; i_8 < 20; i_8 += 3) 
                        {
                            var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((arr_9 [i_1] [i_3] [i_3] [i_8]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))), (((/* implicit */unsigned long long int) min((((/* implicit */signed char) (_Bool)1)), (var_10))))))) ? (((((((/* implicit */_Bool) 2026390848490274461LL)) || (((/* implicit */_Bool) arr_27 [i_3] [i_3] [i_2] [i_3] [i_2])))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)7899)))) : (((((_Bool) arr_12 [i_0] [i_1] [i_2] [i_3] [i_8] [(unsigned char)7] [i_3])) ? (((/* implicit */int) max((((/* implicit */short) arr_22 [i_1] [i_2] [i_3])), ((short)3233)))) : (((/* implicit */int) arr_35 [i_3 - 2] [i_3] [i_3] [i_0]))))));
                            arr_36 [i_1] [i_1] [i_3] [i_3] [i_1] [i_1] = var_10;
                            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_8))))))))));
                        }
                        /* vectorizable */
                        for (signed char i_9 = 1; i_9 < 19; i_9 += 3) 
                        {
                            arr_40 [i_3] [i_1] [i_2] [i_1] [i_3] = ((/* implicit */int) arr_7 [i_1] [i_1] [i_1]);
                            var_22 = ((/* implicit */signed char) (+(((/* implicit */int) arr_0 [i_3 - 1] [i_0]))));
                            arr_41 [i_3] [i_3] [10U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)57636)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 877343099U)) ? (((/* implicit */int) arr_7 [i_2] [i_3] [i_9])) : (((/* implicit */int) arr_12 [8ULL] [8ULL] [8ULL] [8ULL] [8ULL] [i_9] [14LL]))))) : (((((/* implicit */_Bool) 7954361345878204447ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (4209951841U)))));
                        }
                    }
                    arr_42 [i_0] [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) arr_22 [4LL] [i_1 - 1] [4LL])) : (((/* implicit */int) arr_22 [4LL] [i_1 - 2] [4LL]))))), (((((/* implicit */_Bool) arr_8 [6U] [i_1] [(unsigned short)8] [(unsigned char)4])) ? (max((((/* implicit */unsigned long long int) var_2)), (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 7LL))))))));
                    var_23 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_7)))) ? (((/* implicit */int) min(((signed char)5), (((/* implicit */signed char) (_Bool)1))))) : (((/* implicit */int) (signed char)53))))), (max((((unsigned long long int) arr_34 [i_0] [i_1] [(short)7])), (((/* implicit */unsigned long long int) var_2))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_10 = 0; i_10 < 21; i_10 += 3) 
    {
        for (unsigned short i_11 = 2; i_11 < 18; i_11 += 3) 
        {
            {
                var_24 ^= ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_44 [i_11 - 2] [i_11 - 2]))))) & (((/* implicit */int) ((((/* implicit */_Bool) arr_44 [i_11 + 3] [i_11 + 1])) || (((/* implicit */_Bool) arr_43 [i_11 - 2])))))));
                arr_48 [i_10] [i_11] [i_11 - 2] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (-(var_12)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) : ((-(((/* implicit */int) var_0)))))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-26298)) || ((_Bool)1))))) > (((((/* implicit */_Bool) 1570253616)) ? (arr_47 [i_11]) : (((/* implicit */long long int) arr_43 [i_10])))))))));
                arr_49 [i_10] [i_10] = (-(arr_43 [i_11 - 1]));
            }
        } 
    } 
}
