/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166540
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
    var_12 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) 511)) ? (((/* implicit */int) ((((/* implicit */_Bool) -1568633892)) && (((/* implicit */_Bool) var_3))))) : (((/* implicit */int) var_11))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned int) min((max((((/* implicit */unsigned long long int) arr_1 [i_0])), (max((arr_3 [i_0]), (((/* implicit */unsigned long long int) (unsigned char)8)))))), (((/* implicit */unsigned long long int) var_6))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    var_13 *= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) | (arr_1 [10U])));
                    var_14 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 823197304)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [6U]))) : (4294967281U)));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 2; i_3 < 11; i_3 += 2) 
                    {
                        var_15 |= ((/* implicit */unsigned long long int) -655004682);
                        /* LoopSeq 2 */
                        for (long long int i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            var_16 = ((/* implicit */unsigned char) (-(((17524231291478974066ULL) / (12859018815053699761ULL)))));
                            arr_16 [i_0] [i_3] [(unsigned char)6] [(unsigned char)6] [i_0] = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) (unsigned short)3248)) || (((/* implicit */_Bool) 1736795864)))));
                            arr_17 [i_1] [i_0] = ((/* implicit */unsigned short) ((arr_12 [i_3 + 2] [i_3 + 1] [(unsigned char)5] [i_3 + 2] [i_3] [i_3]) < (arr_12 [i_3 + 2] [i_3 + 1] [i_3 + 2] [i_3] [i_3 + 2] [i_3 - 1])));
                            var_17 = ((/* implicit */unsigned short) arr_11 [i_0] [0LL] [i_2] [i_0]);
                        }
                        for (unsigned char i_5 = 0; i_5 < 13; i_5 += 1) 
                        {
                            var_18 = ((/* implicit */long long int) ((arr_13 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3]) < (((/* implicit */long long int) ((/* implicit */int) var_10)))));
                            arr_21 [i_0] [(unsigned short)3] [i_2] [i_0] [3U] [5ULL] [12LL] = arr_11 [i_0] [i_0] [8U] [i_0];
                            var_19 *= ((/* implicit */unsigned short) var_8);
                            var_20 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)252)) ? (-1607706017) : (1111883475)));
                            arr_22 [i_0] [i_3] [0LL] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)108)))))));
                        }
                    }
                    for (int i_6 = 0; i_6 < 13; i_6 += 1) 
                    {
                        arr_25 [i_0] [i_0] = (-((~(var_1))));
                        arr_26 [12U] [i_0] [4LL] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_0))));
                    }
                    for (unsigned char i_7 = 0; i_7 < 13; i_7 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_8 = 0; i_8 < 13; i_8 += 1) 
                        {
                            var_21 ^= ((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_0] [3ULL] [i_0] [i_7]))) : (-2567782548310668701LL))) << (((arr_3 [i_7]) - (15045796043370046904ULL)))));
                            var_22 = ((/* implicit */signed char) (~((~(((/* implicit */int) (signed char)-108))))));
                            arr_31 [i_0] [i_0] [2ULL] [i_0] [(unsigned char)0] = ((/* implicit */unsigned short) var_7);
                        }
                        var_23 = ((/* implicit */unsigned int) ((arr_19 [i_7] [i_2] [i_0]) <= (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)120)) + (var_2))))));
                        var_24 ^= ((/* implicit */unsigned long long int) arr_6 [(unsigned char)8]);
                        var_25 = ((/* implicit */signed char) var_7);
                    }
                }
                /* vectorizable */
                for (unsigned int i_9 = 0; i_9 < 13; i_9 += 1) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_10 = 2; i_10 < 10; i_10 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_11 = 0; i_11 < 13; i_11 += 3) 
                        {
                            arr_40 [i_1] [i_0] [i_10 + 3] = ((/* implicit */int) arr_27 [11] [i_11] [i_10 - 2] [i_9] [i_0] [i_0]);
                            var_26 = (~(arr_39 [i_10 - 1] [(_Bool)1] [i_10 + 2] [i_10] [i_10] [i_0] [i_10 + 3]));
                            var_27 = ((/* implicit */unsigned short) arr_1 [i_0]);
                            arr_41 [(signed char)2] [i_10 + 1] [i_9] [i_1] [i_1] [i_0] [(signed char)2] |= ((/* implicit */unsigned short) ((unsigned long long int) (+(var_6))));
                        }
                        for (int i_12 = 0; i_12 < 13; i_12 += 3) 
                        {
                            var_28 |= ((((/* implicit */_Bool) ((unsigned long long int) var_11))) ? (((/* implicit */unsigned long long int) ((int) (unsigned char)225))) : (5691148514213919419ULL));
                            var_29 = ((((/* implicit */_Bool) arr_11 [i_0] [i_9] [i_10 + 2] [i_0])) ? (12301287798921589664ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [2ULL]))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned char i_13 = 0; i_13 < 13; i_13 += 4) 
                        {
                            var_30 = ((/* implicit */unsigned char) ((int) arr_33 [i_0] [i_1]));
                            arr_49 [12ULL] [12ULL] [i_0] [i_10] [i_13] = ((/* implicit */unsigned int) ((arr_39 [i_0] [i_0] [i_1] [i_10 - 2] [i_13] [i_0] [(unsigned char)5]) != (((/* implicit */long long int) arr_35 [i_10 + 3] [i_10] [i_10 + 3] [i_10]))));
                        }
                        for (unsigned short i_14 = 0; i_14 < 13; i_14 += 3) 
                        {
                            var_31 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned char) arr_18 [(unsigned char)8] [i_9] [i_9] [i_9] [(unsigned short)2])))));
                            arr_52 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((arr_23 [i_10 - 1] [i_0] [(unsigned short)10] [i_10 - 2]) ? (var_7) : (0ULL)));
                            arr_53 [i_0] [i_0] [i_0] [i_0] [(unsigned short)1] [7] [i_14] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1997894466704180137LL))));
                            arr_54 [(_Bool)0] [i_1] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_2))));
                        }
                    }
                    for (unsigned char i_15 = 0; i_15 < 13; i_15 += 4) 
                    {
                        var_32 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_9] [i_0])) ^ (((/* implicit */int) arr_4 [i_0] [i_0]))));
                        var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) ((long long int) arr_7 [i_0])))));
                    }
                    arr_58 [i_0] [i_1] [(unsigned char)3] = (_Bool)1;
                }
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    arr_62 [i_16] [i_0] [i_0] = ((/* implicit */unsigned char) var_6);
                    /* LoopNest 2 */
                    for (unsigned short i_17 = 2; i_17 < 12; i_17 += 3) 
                    {
                        for (unsigned long long int i_18 = 0; i_18 < 13; i_18 += 2) 
                        {
                            {
                                var_34 = ((/* implicit */unsigned char) ((unsigned short) max((arr_32 [i_0]), (arr_32 [i_16]))));
                                arr_67 [3U] [i_1] [i_1] [8ULL] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) var_1))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_48 [i_17] [i_17] [(unsigned short)5] [i_17] [6U] [i_17 - 1])) >> (((((/* implicit */int) arr_48 [0U] [i_1] [i_1] [i_16] [i_17 - 1] [i_17 - 2])) - (102))))))));
                                arr_68 [i_16] [4] [i_0] = ((/* implicit */_Bool) (-(arr_61 [i_18] [i_17] [(_Bool)1] [i_1])));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
