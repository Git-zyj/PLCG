/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176876
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
    var_12 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) < (max((-5035885294419631464LL), (var_11)))))), ((+(min((var_11), (((/* implicit */long long int) (_Bool)1))))))));
    var_13 = var_8;
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (short i_2 = 0; i_2 < 11; i_2 += 3) /* same iter space */
                {
                    arr_8 [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) arr_7 [i_0]);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 3; i_3 < 9; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_14 = arr_4 [i_0] [i_1] [i_3 - 1];
                                var_15 = ((((/* implicit */_Bool) (unsigned char)249)) ? (-5035885294419631454LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-17821))));
                                arr_13 [i_0] [(short)7] = ((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) arr_10 [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1] [i_1] [i_1 + 1]))))) == (((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [i_3] [i_0] [i_1 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) : (max((var_9), (-5035885294419631464LL)))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned char) arr_10 [i_0] [(_Bool)1] [i_1 + 1] [i_1 + 1] [i_1] [i_2]);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11; i_5 += 3) 
                    {
                        for (long long int i_6 = 1; i_6 < 10; i_6 += 2) 
                        {
                            {
                                arr_19 [2LL] [i_0] = ((/* implicit */int) arr_17 [i_0] [i_1 - 1] [i_2] [i_2] [i_1 - 1] [i_6]);
                                arr_20 [i_0] [6U] [i_1 + 1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_1 - 2] [i_1 - 2] [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 + 1])) ? (((/* implicit */int) arr_17 [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1 - 1] [i_1 - 2] [i_1 - 2])) : (((/* implicit */int) arr_17 [i_1 - 2] [i_1 + 1] [i_1 - 2] [i_1 - 1] [i_1 - 2] [i_1 - 2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_9 [i_0] [i_1 - 1] [i_2] [i_2])))) : (((max((var_5), (var_6))) ? (((((/* implicit */_Bool) 5035885294419631481LL)) ? (1692990093U) : (2601977202U))) : (1692990086U)))));
                                var_17 = ((/* implicit */_Bool) min((((/* implicit */int) max((arr_10 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 - 1] [i_6 + 1]), (arr_10 [i_6 - 1] [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 - 1] [i_6 + 1])))), (((((/* implicit */int) arr_12 [(_Bool)1] [(_Bool)1] [i_1] [i_6 + 1] [(_Bool)1])) >> (((/* implicit */int) arr_12 [i_6] [i_6 - 1] [i_6] [i_6 - 1] [i_6 + 1]))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (short i_7 = 0; i_7 < 11; i_7 += 3) /* same iter space */
                {
                    arr_25 [i_0] [i_1 - 2] [i_7] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_21 [i_1 + 1] [i_0] [i_1 - 2]))));
                    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (short)-27057))));
                    arr_26 [i_0] [i_0] [i_7] [i_7] = ((/* implicit */_Bool) -1766264820);
                    arr_27 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */int) ((((_Bool) var_3)) ? (((((/* implicit */_Bool) (unsigned short)0)) ? (-5035885294419631452LL) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) : ((-(5035885294419631478LL)))));
                    var_19 = ((/* implicit */unsigned short) -811819145);
                }
                for (int i_8 = 1; i_8 < 10; i_8 += 3) 
                {
                    arr_30 [i_0] [i_0] [i_8] [i_8 - 1] = ((/* implicit */long long int) var_5);
                    /* LoopSeq 1 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_20 = ((/* implicit */long long int) ((((/* implicit */int) ((var_1) && (((/* implicit */_Bool) var_7))))) < ((~(((/* implicit */int) arr_4 [i_0] [(_Bool)1] [i_0]))))));
                        /* LoopSeq 1 */
                        for (int i_10 = 0; i_10 < 11; i_10 += 2) 
                        {
                            var_21 = ((/* implicit */short) ((811819144) - (((/* implicit */int) ((_Bool) (_Bool)1)))));
                            var_22 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])) ^ (((/* implicit */int) arr_22 [i_0] [i_1 - 2] [i_9] [i_1 - 2]))))) ? (min((((/* implicit */long long int) arr_23 [i_0] [i_10])), (var_9))) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_8 + 1] [i_10] [i_8 + 1])))))));
                            arr_37 [i_0] [i_0] [i_0] [i_0] [(unsigned char)5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_0])) ? (max((((18446744073709551615ULL) * (((/* implicit */unsigned long long int) 1692990086U)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5035885294419631452LL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_1 + 1] [i_1] [i_1 - 2])))));
                            arr_38 [i_0] [i_1 + 1] [i_1] [i_0] [i_0] [i_10] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (7ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)200)))))) && (((/* implicit */_Bool) min((((((/* implicit */int) arr_11 [i_0] [i_1] [i_8] [i_9] [i_0] [i_10])) & (arr_34 [i_9] [i_9] [i_9]))), (((/* implicit */int) ((arr_33 [i_9] [i_9]) != (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_0] [i_0]))))))))));
                        }
                        var_23 -= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_1 - 1] [i_1 + 1] [i_8 + 1] [i_8] [i_1] [i_8 + 1])) ? (((/* implicit */int) arr_11 [i_1 - 2] [i_1 + 1] [i_8 + 1] [i_8] [i_1] [i_8 + 1])) : (((/* implicit */int) arr_5 [i_1 + 1] [i_1 - 2] [i_1 - 1] [i_8 - 1]))))) ? (((long long int) arr_11 [i_1 - 1] [i_1 + 1] [i_8 - 1] [i_8 + 1] [i_1] [i_8 + 1])) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)160)) / (((/* implicit */int) (short)-31445)))))));
                    }
                    var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((((/* implicit */int) var_3)) * (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) < (((((((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_1 - 1] [i_1] [i_8])) + (0))) - (((/* implicit */int) arr_17 [i_0] [10LL] [i_1 - 2] [i_1 - 2] [i_8] [i_8 - 1])))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                    {
                        arr_42 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((1353456256) / (134086656)));
                        var_25 &= ((/* implicit */long long int) ((short) arr_36 [i_8] [i_8 + 1] [i_8 + 1] [(_Bool)1] [i_0]));
                    }
                    for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 2) 
                    {
                        arr_45 [i_0] [i_1] [(short)2] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((var_8) ? (-9) : (((/* implicit */int) var_1))))) ^ (((var_0) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned long long int) var_4)))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_33 [i_0] [i_0]) : (((/* implicit */long long int) (-2147483647 - 1)))))))))));
                        arr_46 [i_0] [i_0] [i_0] [i_8] [6LL] = ((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned char) (_Bool)1)), (arr_5 [i_8] [i_8 + 1] [i_8 - 1] [i_8]))));
                    }
                }
                arr_47 [9] [i_0] = ((/* implicit */_Bool) min((arr_16 [i_0] [i_0] [i_0] [i_0] [i_0]), ((((-(((/* implicit */int) (_Bool)1)))) * (((((/* implicit */int) arr_36 [i_1] [i_0] [i_0] [i_0] [i_0])) % (((/* implicit */int) (short)-26853))))))));
            }
        } 
    } 
    var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */int) (unsigned char)255)) * (((/* implicit */int) var_7)))) : (((/* implicit */int) var_3))))) ? (max((((var_1) ? (((/* implicit */int) (short)-25518)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))));
}
