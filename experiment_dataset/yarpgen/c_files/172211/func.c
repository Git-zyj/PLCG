/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172211
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 1; i_3 < 9; i_3 += 4) 
                    {
                        arr_10 [i_2] [i_1] [i_2] [i_2] [i_3 + 1] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_8))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)151))) * (arr_9 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_3 + 1])))));
                        arr_11 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)151)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) (!(var_10))))))) || (((/* implicit */_Bool) max(((unsigned char)137), (var_5))))));
                        /* LoopSeq 3 */
                        for (unsigned short i_4 = 1; i_4 < 6; i_4 += 4) 
                        {
                            arr_15 [i_0] [i_2] [i_1] [i_1] [i_3] [i_4] = ((/* implicit */long long int) ((var_11) ? (((/* implicit */int) ((((((/* implicit */_Bool) 1749719793U)) ? (arr_12 [i_1] [i_2 - 1] [i_2] [i_3] [i_4 + 1]) : (((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_2] [i_4])))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)0))))))))) : (((/* implicit */int) (unsigned short)64686))));
                            var_16 *= ((/* implicit */unsigned int) (~(((/* implicit */int) max(((signed char)124), (((/* implicit */signed char) ((((/* implicit */_Bool) (short)14311)) && (((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1] [i_1]))))))))));
                            var_17 = (!(((/* implicit */_Bool) 19U)));
                            var_18 = ((/* implicit */_Bool) (+(max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14815808458591530412ULL)) ? (arr_2 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2])))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) | (3630935615118021204ULL)))))));
                        }
                        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                        {
                            arr_19 [i_0] [i_0] [i_1] [i_2] [i_1] [i_0] [i_2] = ((/* implicit */int) (unsigned char)105);
                            var_19 = arr_8 [i_0] [i_1] [i_1] [i_5];
                        }
                        for (unsigned char i_6 = 2; i_6 < 9; i_6 += 4) 
                        {
                            arr_22 [i_3] [i_3 - 1] [i_2] [i_3] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((unsigned int) (!(((((/* implicit */_Bool) arr_21 [i_0] [i_3])) || (((/* implicit */_Bool) (unsigned short)65515)))))));
                            var_20 = ((/* implicit */unsigned short) min((var_20), (((unsigned short) var_15))));
                        }
                    }
                    var_21 = max(((+(arr_7 [i_0] [i_0] [i_0] [i_0]))), (((/* implicit */unsigned int) var_3)));
                }
                for (long long int i_7 = 2; i_7 < 9; i_7 += 3) 
                {
                    var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (3423427902U))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_8 = 4; i_8 < 9; i_8 += 4) 
                    {
                        var_23 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((min((2485542594U), (((/* implicit */unsigned int) var_10)))) | (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])))))))))));
                        arr_29 [i_0] [i_1] = ((/* implicit */unsigned short) arr_21 [i_1] [i_7]);
                        arr_30 [(_Bool)1] [i_1] [(_Bool)1] [i_1] = ((/* implicit */unsigned short) arr_24 [i_1] [i_7 - 2] [i_8 - 4]);
                    }
                    for (unsigned int i_9 = 0; i_9 < 10; i_9 += 4) 
                    {
                        var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) 1066949134U))));
                        var_25 = ((/* implicit */_Bool) arr_24 [i_0] [i_1] [i_7]);
                        var_26 = ((/* implicit */short) max((2897432325U), (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_12))))), (max((((/* implicit */unsigned int) arr_0 [i_9])), (2485542594U)))))));
                    }
                    arr_34 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((short) (-(((/* implicit */int) var_11))))))));
                }
                arr_35 [i_0] [i_1] = ((/* implicit */unsigned int) (unsigned short)0);
                /* LoopSeq 2 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    arr_39 [i_0] [i_10] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_0] [i_1] [i_1] [i_10])) ? (max((((/* implicit */unsigned long long int) (short)-8681)), (14815808458591530427ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_36 [4U] [i_1] [i_10] [i_10])) ? (arr_36 [i_0] [i_1] [i_1] [i_10]) : (((/* implicit */int) (unsigned char)151)))))));
                    var_27 = min((((unsigned int) var_11)), (((/* implicit */unsigned int) ((arr_28 [i_0] [i_1] [i_10] [i_10]) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_28 [i_0] [i_1] [i_10] [i_10]))))));
                }
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    arr_42 [i_1] |= ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (min((1022139851), ((+(((/* implicit */int) var_8))))))));
                    var_28 = ((/* implicit */unsigned int) ((unsigned short) (!(((/* implicit */_Bool) arr_3 [8ULL] [i_1] [i_11])))));
                    arr_43 [i_0] [i_11] = ((/* implicit */unsigned int) arr_26 [i_11] [i_11] [i_11]);
                    /* LoopNest 2 */
                    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                    {
                        for (unsigned short i_13 = 1; i_13 < 8; i_13 += 4) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned int) (_Bool)1);
                                arr_49 [i_0] [i_0] [i_1] [i_11] [i_11] [i_12 - 1] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 0ULL)))))) != (max((((/* implicit */unsigned int) arr_38 [(signed char)1] [i_12] [i_11])), (var_13)))))) & (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((-4066723648353967862LL) >= (((/* implicit */long long int) arr_36 [i_0] [i_1] [i_11] [i_13])))))) <= (min((((/* implicit */unsigned int) var_5)), (4294967295U))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_14 = 2; i_14 < 6; i_14 += 3) 
                    {
                        for (unsigned short i_15 = 0; i_15 < 10; i_15 += 4) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) ((unsigned int) ((min((((/* implicit */long long int) (unsigned short)21)), (4066723648353967848LL))) != (((long long int) 12U))))))));
                                arr_56 [i_11] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_0)), (3630935615118021197ULL))))));
                                var_31 = ((/* implicit */signed char) var_3);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_32 = ((/* implicit */_Bool) var_6);
}
