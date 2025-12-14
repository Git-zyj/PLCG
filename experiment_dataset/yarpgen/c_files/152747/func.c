/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152747
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
    var_10 = min((max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)24811))) : (18446744073709551615ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0))))))), ((-(1ULL))));
    var_11 = ((/* implicit */short) var_5);
    var_12 = ((/* implicit */unsigned char) (+(max((0ULL), (((/* implicit */unsigned long long int) 0))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_13 ^= ((/* implicit */signed char) var_4);
                /* LoopSeq 3 */
                for (unsigned int i_2 = 1; i_2 < 21; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 4; i_3 < 24; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) arr_9 [i_0] [i_0] [i_2]))));
                                arr_14 [i_0] [i_2] [i_3 + 1] = 18446744073709551615ULL;
                                var_15 = ((/* implicit */unsigned int) var_2);
                                arr_15 [i_0] [i_0] [i_2 + 4] [i_4] [i_4] &= 18446744073709551612ULL;
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_5 = 0; i_5 < 25; i_5 += 2) 
                    {
                        var_16 = (!(((27ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
                        var_17 ^= arr_8 [i_0] [i_0 + 2];
                        arr_18 [i_0] [(unsigned char)5] [i_2] [i_5] [i_1] [i_0] = var_6;
                        arr_19 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) (-(var_2)));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 1) /* same iter space */
                        {
                            arr_22 [i_0] [i_0] = ((/* implicit */short) var_0);
                            var_18 = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 + 3] [i_2 + 2])) ? (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_0])) : (18446744073709551610ULL))) : (((3ULL) * (18446744073709551613ULL)))));
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(18446744073709551615ULL)))) ? (((0ULL) >> (((arr_17 [i_0 + 3] [i_0 + 3]) - (1183028790))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_1] [i_1] [i_0 + 3] [i_0 + 1])))));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 1) /* same iter space */
                        {
                            arr_27 [(unsigned short)15] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) (-(2147483647)))) : ((-(17495591893963932ULL)))));
                            arr_28 [i_0 + 4] [i_1] [(signed char)0] [(unsigned short)13] [i_7] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_7 [i_0 - 1] [i_2] [i_2 - 1]))));
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 1) /* same iter space */
                        {
                            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_0 - 1] [i_0 + 1] [i_0 + 3])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                            arr_31 [i_0] [i_1] [21U] [i_5] [i_5] [i_8] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 18446744073709551608ULL)) ? (((/* implicit */unsigned long long int) arr_7 [i_2] [i_2 + 4] [1LL])) : (21ULL)));
                            arr_32 [23U] [i_0] [i_5] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) (short)11360);
                        }
                        for (signed char i_9 = 0; i_9 < 25; i_9 += 2) 
                        {
                            var_21 = ((/* implicit */unsigned char) var_8);
                            arr_36 [(signed char)7] [i_1] = ((/* implicit */unsigned long long int) ((unsigned short) 516096U));
                        }
                    }
                }
                for (int i_10 = 0; i_10 < 25; i_10 += 2) 
                {
                    arr_40 [i_0] [i_1] [i_10] = ((/* implicit */short) arr_3 [i_1]);
                    /* LoopSeq 2 */
                    for (short i_11 = 2; i_11 < 24; i_11 += 3) /* same iter space */
                    {
                        arr_43 [i_0] [i_11] = ((/* implicit */unsigned long long int) (~(max((arr_1 [i_0]), (((/* implicit */int) arr_8 [i_0] [i_0]))))));
                        arr_44 [(short)1] [i_0 - 1] [i_1] [i_10] [i_10] [i_11] = ((/* implicit */unsigned long long int) var_6);
                        var_22 = max((((((/* implicit */_Bool) (-(18446744073709551615ULL)))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) (short)3)), (((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) (short)17016)) : (((/* implicit */int) var_4))))))));
                        arr_45 [i_11] [i_11 + 1] [i_11] = ((/* implicit */_Bool) 4U);
                    }
                    for (short i_12 = 2; i_12 < 24; i_12 += 3) /* same iter space */
                    {
                        arr_48 [i_12] [i_12] = ((/* implicit */int) arr_11 [i_12] [i_0] [i_0]);
                        arr_49 [i_12] [i_1] [i_10] [i_12] = arr_1 [11ULL];
                        arr_50 [i_12] [15U] [15U] [i_12] = ((/* implicit */int) max((arr_2 [(short)15]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_6), (var_4)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551612ULL))))) : (((/* implicit */int) arr_34 [i_12] [i_10] [i_1] [i_1] [i_0 - 1] [i_0])))))));
                        var_23 += ((/* implicit */unsigned short) ((unsigned int) (~(((18446744073709551597ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_10] [i_10] [i_0 + 3]))))))));
                    }
                }
                for (unsigned long long int i_13 = 3; i_13 < 22; i_13 += 3) 
                {
                    arr_53 [i_0] [i_1] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) var_1))));
                    arr_54 [i_1] [i_1] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((arr_51 [i_0] [i_1] [i_13 + 3]) != (((/* implicit */unsigned int) ((/* implicit */int) (short)-3605)))))), (((((((/* implicit */unsigned long long int) 2048116048)) > (arr_16 [i_0] [7ULL] [i_0] [i_0] [i_0] [i_0]))) ? (min((var_9), (18446744073709551615ULL))) : (var_9)))));
                    arr_55 [i_0] [i_1] [i_0] = ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_10 [(signed char)14] [i_1] [i_1] [i_13 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [17] [11LL] [(signed char)4]))) : (23ULL))))) ? (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-49))) : (max((0ULL), (0ULL))))) : (((/* implicit */unsigned long long int) (((-(arr_7 [i_0] [i_1] [i_13]))) + (((/* implicit */unsigned int) ((((/* implicit */int) var_0)) >> (((18446744073709551601ULL) - (18446744073709551585ULL))))))))));
                }
                /* LoopSeq 1 */
                for (unsigned int i_14 = 0; i_14 < 25; i_14 += 1) 
                {
                    var_24 = max((arr_58 [i_0] [(signed char)12] [i_14] [(signed char)12]), ((-(arr_58 [i_0] [i_0 + 3] [i_0 + 3] [i_0 - 1]))));
                    arr_59 [i_14] &= ((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)171)) ^ (arr_26 [i_14] [(unsigned char)7] [i_1] [i_1] [i_1] [i_0] [i_0])))) ? (((unsigned long long int) arr_10 [i_14] [3ULL] [i_0] [i_0])) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_21 [i_14]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551602ULL)) ? (((/* implicit */unsigned long long int) 1016U)) : (arr_42 [i_1] [i_1] [i_1] [16ULL] [i_1])))) ? (((/* implicit */unsigned int) arr_41 [i_0] [i_0] [i_0 + 3] [17] [i_1])) : (min((arr_0 [i_0] [8ULL]), (((/* implicit */unsigned int) var_0)))))))));
                    arr_60 [i_0] [i_14] [i_14] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) 2905675913U)) > (18446744073709551612ULL)));
                }
                /* LoopNest 3 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    for (unsigned long long int i_16 = 0; i_16 < 25; i_16 += 2) 
                    {
                        for (signed char i_17 = 0; i_17 < 25; i_17 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) var_0))));
                                arr_72 [i_0 + 4] [i_0 + 4] [i_0] [i_0] [i_15] [(short)7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) var_4)), (18446744073709551610ULL))), (((/* implicit */unsigned long long int) (signed char)-45))))) ? (((((/* implicit */_Bool) arr_70 [i_0 + 3] [i_0 + 4])) ? (arr_58 [i_0 + 4] [i_1] [i_1] [(unsigned char)10]) : (max((((/* implicit */unsigned long long int) var_6)), (var_9))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)89), ((unsigned char)89)))))));
                                arr_73 [i_15] [i_16] [i_15] [11U] [(_Bool)1] [i_1] [i_15] = max((((((/* implicit */_Bool) ((((/* implicit */int) var_1)) * (((/* implicit */int) var_1))))) ? ((~(var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)88))))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_29 [i_0 + 2] [i_0 + 2] [i_15] [i_16] [i_17]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned long long int) max((max(((-(((/* implicit */int) var_4)))), (((/* implicit */int) (!(((/* implicit */_Bool) 4294966292U))))))), (((/* implicit */int) (short)-3605))));
}
