/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181536
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    var_10 = ((/* implicit */int) (!(((/* implicit */_Bool) ((int) var_7)))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_11 -= ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) >= (((/* implicit */int) var_0))));
                        var_12 = (~(arr_6 [8]));
                        var_13 += ((/* implicit */unsigned long long int) arr_5 [i_0] [8U] [8U] [i_3]);
                    }
                    /* LoopSeq 3 */
                    for (long long int i_4 = 1; i_4 < 18; i_4 += 1) 
                    {
                        var_14 = ((/* implicit */unsigned long long int) var_4);
                        arr_12 [i_4 + 1] [i_2] [i_2] [i_0] = ((((/* implicit */_Bool) var_3)) ? (arr_1 [i_0]) : (var_9));
                    }
                    for (unsigned short i_5 = 0; i_5 < 20; i_5 += 2) 
                    {
                        var_15 += ((/* implicit */long long int) ((unsigned long long int) (unsigned short)8));
                        /* LoopSeq 1 */
                        for (short i_6 = 0; i_6 < 20; i_6 += 4) 
                        {
                            arr_17 [i_0] [5LL] [i_2] [i_1] [i_6] [i_1] = ((/* implicit */unsigned char) (((-9223372036854775807LL - 1LL)) >= (((/* implicit */long long int) arr_11 [i_5] [i_5] [i_5] [i_5]))));
                            var_16 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_5] [i_6]))));
                            var_17 = ((/* implicit */long long int) (~(-1121727174)));
                        }
                        /* LoopSeq 2 */
                        for (long long int i_7 = 0; i_7 < 20; i_7 += 1) 
                        {
                            var_18 = ((/* implicit */long long int) ((short) arr_14 [(_Bool)1] [i_5] [i_2] [i_1] [i_0]));
                            arr_21 [i_7] [i_0] [i_2] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_2])) != (((/* implicit */int) arr_16 [i_2]))));
                        }
                        for (short i_8 = 2; i_8 < 18; i_8 += 1) 
                        {
                            arr_25 [i_0] [i_1] [i_0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) (+(var_9)));
                            arr_26 [i_0] [i_2] [i_2] [i_5] [i_5] [i_8] = ((/* implicit */unsigned long long int) arr_19 [i_8] [i_5] [i_2] [i_0] [i_0]);
                            var_19 = ((/* implicit */int) arr_15 [7U] [i_0] [i_1] [i_2] [i_5] [i_5] [i_8]);
                            arr_27 [i_0] [i_2] [i_0] = ((/* implicit */unsigned int) (signed char)0);
                            var_20 = ((/* implicit */unsigned long long int) ((arr_8 [i_8 - 2] [i_8 - 2] [i_8 + 2]) > (((/* implicit */int) var_0))));
                        }
                        var_21 = ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) var_4))) * ((~(((/* implicit */int) arr_19 [i_0] [i_1] [i_1] [i_2] [i_5]))))));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 2) 
                        {
                            var_22 ^= (+(var_8));
                            var_23 = ((/* implicit */unsigned int) arr_6 [i_2]);
                        }
                        for (int i_10 = 0; i_10 < 20; i_10 += 1) 
                        {
                            var_24 += ((/* implicit */short) (((~(((/* implicit */int) (_Bool)1)))) != (((/* implicit */int) arr_0 [i_5] [i_5]))));
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_5] [14LL] [i_0]))))) * (arr_6 [i_2])));
                            var_26 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)28))));
                            var_27 *= ((/* implicit */unsigned short) var_8);
                        }
                        for (signed char i_11 = 0; i_11 < 20; i_11 += 4) 
                        {
                            var_28 = ((/* implicit */_Bool) ((int) arr_22 [(_Bool)1] [i_1] [(_Bool)1]));
                            var_29 ^= ((/* implicit */short) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) ((((/* implicit */int) var_5)) >> (((209752408) - (209752378))))))));
                        }
                        for (long long int i_12 = 0; i_12 < 20; i_12 += 4) 
                        {
                            var_30 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_0] [i_2] [0LL] [16])) ? (((/* implicit */int) arr_4 [i_12])) : (arr_1 [i_2])))));
                            var_31 = ((/* implicit */long long int) (~(((/* implicit */int) arr_23 [i_0] [i_1] [i_2] [i_5] [i_12]))));
                            arr_37 [i_12] [i_2] [i_2] [13] [i_2] [i_0] = ((((/* implicit */int) (unsigned short)17670)) * (((/* implicit */int) (unsigned short)31)));
                            var_32 += ((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_5])) != (((/* implicit */int) arr_34 [i_0] [i_0] [i_0] [i_5] [i_12] [i_12]))));
                        }
                    }
                    for (int i_13 = 0; i_13 < 20; i_13 += 1) 
                    {
                        var_33 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)36)) || (((/* implicit */_Bool) (signed char)28))));
                        /* LoopSeq 4 */
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) ((((/* implicit */_Bool) arr_40 [i_1] [(short)14] [18] [i_1] [i_1])) ? (((1047613664U) * (((/* implicit */unsigned int) var_9)))) : (((/* implicit */unsigned int) arr_1 [i_0])))))));
                            var_35 = ((/* implicit */int) max((var_35), ((((~(((/* implicit */int) (unsigned short)4884)))) & (((/* implicit */int) (unsigned char)0))))));
                            var_36 = ((/* implicit */int) min((var_36), (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [2])))))));
                        }
                        for (long long int i_15 = 1; i_15 < 17; i_15 += 1) 
                        {
                            arr_45 [i_15 + 1] [i_13] [i_2] [i_2] [17] [i_0] = ((/* implicit */unsigned char) var_4);
                            arr_46 [i_15] [i_2] [i_2] [i_2] [i_2] [i_0] = var_4;
                            arr_47 [i_15] [i_2] [2LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-23)) ? (((/* implicit */int) (signed char)-41)) : (((/* implicit */int) (unsigned short)65504))));
                        }
                        for (unsigned int i_16 = 0; i_16 < 20; i_16 += 1) 
                        {
                            var_37 = ((/* implicit */unsigned int) arr_14 [i_0] [i_1] [i_0] [i_13] [i_16]);
                            arr_50 [i_16] [i_13] [i_2] [i_0] [i_0] = ((/* implicit */long long int) (~(var_2)));
                            var_38 = ((/* implicit */long long int) (~(var_4)));
                            var_39 += ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_22 [i_0] [i_2] [i_13])) : (((/* implicit */int) arr_7 [i_16] [i_1] [i_16])));
                        }
                        for (unsigned int i_17 = 0; i_17 < 20; i_17 += 3) 
                        {
                            arr_53 [i_0] [i_1] [i_1] [6] [i_2] [i_13] [i_2] = ((/* implicit */short) (~(arr_6 [i_2])));
                            var_40 = ((/* implicit */int) (-((+(var_8)))));
                            var_41 += ((/* implicit */signed char) arr_7 [i_0] [i_1] [i_2]);
                            var_42 = ((/* implicit */short) (!(((var_9) > (var_2)))));
                        }
                        arr_54 [i_2] [i_2] [i_2] = ((/* implicit */long long int) (~(((var_3) / (((/* implicit */int) arr_19 [i_1] [i_1] [i_1] [i_13] [i_2]))))));
                    }
                    var_43 = ((/* implicit */long long int) (+(arr_13 [i_0] [i_0] [18])));
                }
                var_44 = ((/* implicit */short) (((((~(((/* implicit */int) (unsigned short)14364)))) & (((/* implicit */int) (unsigned short)65507)))) << (((/* implicit */int) arr_7 [8U] [i_0] [i_0]))));
                /* LoopSeq 3 */
                for (unsigned short i_18 = 0; i_18 < 20; i_18 += 3) 
                {
                    var_45 = ((/* implicit */unsigned long long int) max((var_3), (((/* implicit */int) ((short) (+(arr_56 [15ULL] [(short)17] [15ULL] [i_18])))))));
                    /* LoopNest 2 */
                    for (long long int i_19 = 0; i_19 < 20; i_19 += 4) 
                    {
                        for (unsigned short i_20 = 0; i_20 < 20; i_20 += 3) 
                        {
                            {
                                arr_63 [i_0] [i_1] [i_18] [i_19] [i_20] = (!(((/* implicit */_Bool) ((long long int) arr_40 [i_20] [i_19] [i_0] [i_19] [i_0]))));
                                arr_64 [i_0] = (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_18] [i_0] [i_0]))))));
                                var_46 -= ((/* implicit */unsigned char) (_Bool)1);
                                arr_65 [i_20] [i_19] [i_18] [11] [i_0] = ((/* implicit */long long int) var_6);
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned char i_21 = 0; i_21 < 20; i_21 += 3) 
                {
                    var_47 = ((/* implicit */unsigned long long int) ((arr_14 [i_0] [i_0] [i_1] [i_0] [i_0]) ^ (((/* implicit */long long int) var_7))));
                    var_48 *= ((/* implicit */_Bool) (-(arr_33 [i_0] [i_0] [i_1] [i_1] [i_21])));
                    var_49 = ((/* implicit */unsigned short) ((((var_7) | (arr_13 [i_0] [i_0] [i_0]))) >= ((-(var_7)))));
                }
                /* vectorizable */
                for (long long int i_22 = 3; i_22 < 18; i_22 += 1) 
                {
                    arr_72 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) var_1)) * (((/* implicit */int) arr_34 [i_0] [i_0] [i_0] [i_1] [i_1] [i_22 - 3]))));
                    /* LoopSeq 1 */
                    for (unsigned short i_23 = 0; i_23 < 20; i_23 += 4) 
                    {
                        var_50 += ((/* implicit */unsigned char) (~((-(var_2)))));
                        /* LoopSeq 2 */
                        for (signed char i_24 = 0; i_24 < 20; i_24 += 2) 
                        {
                            var_51 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_52 [i_23] [i_22] [i_22 - 2] [i_22 - 3] [i_1] [i_1] [i_0]))));
                            var_52 = ((unsigned int) ((int) var_5));
                            arr_79 [i_0] [(_Bool)1] = ((/* implicit */signed char) arr_36 [i_0] [i_1] [i_1] [i_23] [i_24] [i_24]);
                        }
                        for (short i_25 = 1; i_25 < 18; i_25 += 1) 
                        {
                            arr_82 [i_0] [i_1] [i_22] [i_23] [i_25 + 2] = ((/* implicit */long long int) var_5);
                            var_53 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_77 [i_0] [5]))));
                            arr_83 [i_25] [i_23] [i_22 + 2] [i_22] [(_Bool)1] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0]))));
                            var_54 = ((/* implicit */_Bool) min((var_54), (((/* implicit */_Bool) (+(((((/* implicit */int) var_6)) * (((/* implicit */int) (signed char)-41)))))))));
                        }
                        arr_84 [i_0] [(signed char)3] [i_22] [i_23] = ((/* implicit */int) (-(8170534204485640245LL)));
                    }
                    var_55 ^= ((/* implicit */int) (!(((_Bool) arr_61 [i_0] [i_0] [i_0] [i_1] [i_1] [i_0] [i_0]))));
                    var_56 = ((/* implicit */unsigned long long int) (~(arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                }
            }
        } 
    } 
    var_57 = (~(((int) (+(((/* implicit */int) var_5))))));
}
