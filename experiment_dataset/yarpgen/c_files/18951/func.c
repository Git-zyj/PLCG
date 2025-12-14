/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18951
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            var_15 = ((/* implicit */_Bool) var_4);
            arr_6 [i_0] [i_0] [4U] = ((/* implicit */_Bool) (signed char)-1);
            var_16 = ((/* implicit */short) max((((/* implicit */unsigned int) ((arr_3 [i_1] [i_0] [i_0]) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_8))))))), (min(((-(var_2))), (min((var_0), (var_2)))))));
        }
        for (unsigned int i_2 = 3; i_2 < 9; i_2 += 4) 
        {
            var_17 = ((/* implicit */signed char) arr_1 [i_0] [i_0]);
            var_18 = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_2]))) / (max((arr_3 [i_2 + 2] [i_2] [i_2 - 1]), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_4)) : (18446744073709551615ULL))))));
        }
        for (unsigned int i_3 = 0; i_3 < 11; i_3 += 1) 
        {
            arr_13 [i_3] = ((/* implicit */unsigned long long int) (-(((unsigned int) 4294967295U))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (short i_4 = 0; i_4 < 11; i_4 += 1) /* same iter space */
            {
                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_0])) ? (var_9) : (((/* implicit */unsigned long long int) 1722242644U)))))));
                var_20 += ((/* implicit */_Bool) (+(var_0)));
                arr_16 [(_Bool)1] [i_0] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_0] [i_3] [i_0])) || (((/* implicit */_Bool) arr_8 [i_0] [i_3] [i_0]))));
            }
            /* vectorizable */
            for (short i_5 = 0; i_5 < 11; i_5 += 1) /* same iter space */
            {
                var_21 = ((/* implicit */long long int) (signed char)77);
                /* LoopSeq 2 */
                for (long long int i_6 = 0; i_6 < 11; i_6 += 1) 
                {
                    /* LoopSeq 4 */
                    for (long long int i_7 = 0; i_7 < 11; i_7 += 3) /* same iter space */
                    {
                        arr_24 [i_3] [i_6] [i_6] [i_5] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) 26U)) ? (((/* implicit */int) (short)-28212)) : (((((/* implicit */_Bool) (short)28212)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (short)-28212))))));
                        var_22 = ((/* implicit */signed char) max((var_22), (((signed char) var_8))));
                        var_23 += ((/* implicit */_Bool) (-(arr_19 [i_0] [(short)1] [i_5] [i_6])));
                    }
                    for (long long int i_8 = 0; i_8 < 11; i_8 += 3) /* same iter space */
                    {
                        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) (-(1U))))));
                        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((unsigned int) var_13)))));
                        var_26 = ((/* implicit */unsigned int) (short)-28212);
                    }
                    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                    {
                        var_27 -= ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)41650))));
                        arr_30 [i_3] [i_9] = ((/* implicit */short) (-(((unsigned long long int) 21U))));
                        arr_31 [i_0] [(short)0] [i_5] [i_3] [i_9 + 1] = ((/* implicit */long long int) ((signed char) (short)21216));
                        arr_32 [i_3] = ((/* implicit */signed char) (-(arr_27 [i_9 + 1] [i_9 + 1] [i_3] [i_0] [0LL])));
                    }
                    for (unsigned short i_10 = 0; i_10 < 11; i_10 += 1) 
                    {
                        var_28 = (i_3 % 2 == zero) ? (((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) << (((arr_9 [i_3]) + (8961312543754185755LL)))))) : (((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) << (((((arr_9 [i_3]) - (8961312543754185755LL))) + (8166142861052965805LL))))));
                        var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) 4294967295U))));
                        var_30 += ((/* implicit */unsigned int) ((signed char) (short)-1));
                        var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-6)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32767))))))));
                    }
                    /* LoopSeq 4 */
                    for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                    {
                        arr_38 [i_3] [i_3] [i_5] [i_11] [i_11] = ((/* implicit */short) ((signed char) 31U));
                        var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_9) / (((/* implicit */unsigned long long int) var_3))))) ? (((/* implicit */int) ((var_3) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_0] [i_3] [i_3] [i_6] [i_3])))))) : ((-(((/* implicit */int) (unsigned short)41656))))));
                        var_33 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_0)) % (var_5)));
                    }
                    for (unsigned int i_12 = 0; i_12 < 11; i_12 += 3) 
                    {
                        var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) arr_20 [i_0] [6U] [i_5] [i_12]))));
                        arr_41 [i_0] [4ULL] [i_6] &= (signed char)-28;
                    }
                    for (unsigned int i_13 = 0; i_13 < 11; i_13 += 3) /* same iter space */
                    {
                        var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) ((arr_28 [i_3] [i_3] [i_5] [i_0] [i_6] [i_3] [i_0]) ? (((/* implicit */int) ((signed char) var_8))) : (((/* implicit */int) (!(arr_37 [i_0] [i_0] [i_5] [i_13])))))))));
                        arr_44 [i_3] [i_3] [i_5] [i_6] [i_5] = ((/* implicit */_Bool) var_7);
                    }
                    for (unsigned int i_14 = 0; i_14 < 11; i_14 += 3) /* same iter space */
                    {
                        var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_21 [8U] [i_3] [i_3] [i_3] [i_3])) : (((/* implicit */int) arr_21 [i_0] [i_0] [i_5] [i_6] [i_14])))))));
                        var_37 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_40 [i_0] [i_0] [i_0] [i_6] [i_14])) : (((/* implicit */int) arr_40 [i_0] [i_0] [i_5] [i_6] [i_14]))));
                    }
                }
                for (signed char i_15 = 3; i_15 < 8; i_15 += 2) 
                {
                    arr_49 [i_3] [i_15] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0]))) == (3767101126U)));
                    var_38 = ((/* implicit */unsigned long long int) min((var_38), (((/* implicit */unsigned long long int) ((signed char) var_4)))));
                    var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_4)));
                    var_40 = ((/* implicit */unsigned int) min((var_40), (((/* implicit */unsigned int) var_5))));
                }
            }
        }
        var_41 = var_11;
        var_42 += var_13;
    }
    /* vectorizable */
    for (unsigned long long int i_16 = 0; i_16 < 22; i_16 += 4) 
    {
        /* LoopNest 2 */
        for (short i_17 = 1; i_17 < 20; i_17 += 1) 
        {
            for (unsigned long long int i_18 = 0; i_18 < 22; i_18 += 1) 
            {
                {
                    var_43 = ((/* implicit */signed char) max((var_43), (((/* implicit */signed char) ((((/* implicit */_Bool) 18446744073709551615ULL)) || (var_14))))));
                    /* LoopNest 2 */
                    for (unsigned int i_19 = 2; i_19 < 21; i_19 += 4) 
                    {
                        for (unsigned long long int i_20 = 1; i_20 < 18; i_20 += 4) 
                        {
                            {
                                arr_61 [i_20] [i_20] [i_18] [i_18] [i_17 + 2] [i_16] = ((/* implicit */short) var_4);
                                var_44 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_59 [i_16] [i_16] [i_17 - 1] [i_19 - 1] [i_18] [i_19])) ? (arr_60 [i_16] [i_17 + 2] [i_19 + 1] [(signed char)1] [i_20 + 1] [i_20 + 4]) : ((-(var_3)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_45 = ((/* implicit */unsigned int) var_8);
        /* LoopSeq 3 */
        for (signed char i_21 = 0; i_21 < 22; i_21 += 4) 
        {
            var_46 *= ((/* implicit */unsigned short) var_14);
            var_47 *= arr_55 [i_16] [i_21] [i_21];
            arr_64 [i_16] [16LL] [i_16] = ((((/* implicit */_Bool) var_4)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))));
            var_48 = ((/* implicit */_Bool) arr_55 [i_21] [i_21] [(signed char)3]);
        }
        for (signed char i_22 = 3; i_22 < 21; i_22 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_23 = 0; i_23 < 22; i_23 += 1) 
            {
                arr_69 [i_22] [i_22] [i_22] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)7)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) var_4))))) ? (((/* implicit */unsigned long long int) 5U)) : (36028797018963967ULL)));
                var_49 = ((/* implicit */_Bool) ((long long int) (signed char)-28));
            }
            arr_70 [i_16] [i_22 - 2] [i_22] = ((/* implicit */short) ((unsigned long long int) arr_51 [i_22 - 2] [i_22 - 3]));
        }
        for (unsigned int i_24 = 0; i_24 < 22; i_24 += 3) 
        {
            arr_74 [i_16] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_60 [i_16] [i_16] [i_24] [i_24] [i_16] [i_24])) ? (var_9) : (36028797018963967ULL)));
            arr_75 [i_16] = ((/* implicit */unsigned long long int) ((_Bool) arr_71 [i_16] [i_24] [i_24]));
            /* LoopSeq 1 */
            for (signed char i_25 = 0; i_25 < 22; i_25 += 4) 
            {
                arr_78 [i_16] [i_24] [i_25] [i_24] = ((/* implicit */signed char) 3438208509U);
                var_50 = ((/* implicit */long long int) min((var_50), (((/* implicit */long long int) ((signed char) ((signed char) 31U))))));
                /* LoopNest 2 */
                for (unsigned long long int i_26 = 0; i_26 < 22; i_26 += 1) 
                {
                    for (short i_27 = 0; i_27 < 22; i_27 += 1) 
                    {
                        {
                            var_51 = ((/* implicit */unsigned long long int) (_Bool)1);
                            var_52 &= ((((/* implicit */_Bool) 4161097897804150953ULL)) ? (1475814608U) : (4294967295U));
                        }
                    } 
                } 
            }
        }
    }
    var_53 = ((/* implicit */unsigned int) (((-(((/* implicit */int) max((((/* implicit */short) var_1)), (var_13)))))) <= (((/* implicit */int) ((min((((/* implicit */unsigned long long int) var_7)), (var_5))) <= (((/* implicit */unsigned long long int) -5504114672634475752LL)))))));
}
