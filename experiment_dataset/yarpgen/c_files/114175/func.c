/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114175
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
    var_17 |= ((/* implicit */_Bool) var_11);
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (signed char i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                /* LoopNest 2 */
                for (signed char i_3 = 0; i_3 < 15; i_3 += 4) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */int) (short)3559);
                            arr_13 [i_0] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)3559))))) : (((/* implicit */int) (short)3559))));
                            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (+(((/* implicit */int) arr_10 [i_0] [i_1] [i_3] [i_3] [i_0] [i_3])))))));
                        }
                    } 
                } 
                arr_14 [(_Bool)1] [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? ((+(((/* implicit */int) (unsigned short)26686)))) : (((/* implicit */int) arr_2 [i_1]))));
            }
            var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0]))));
            arr_15 [i_0] &= ((/* implicit */unsigned char) (+(0U)));
        }
        for (short i_5 = 1; i_5 < 14; i_5 += 4) 
        {
            var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) (+(arr_8 [i_5 + 1] [(signed char)12] [i_5] [i_5 + 1] [i_5] [i_5 - 1]))))));
            /* LoopSeq 2 */
            for (short i_6 = 0; i_6 < 15; i_6 += 1) 
            {
                var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(arr_11 [i_5] [i_5 - 1]))))));
                arr_21 [i_6] [i_5] = (!(((/* implicit */_Bool) arr_11 [i_5] [i_5 + 1])));
                arr_22 [i_0] [i_5] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)83)) ? (((/* implicit */int) arr_9 [i_0] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_6] [i_6])) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
            }
            for (short i_7 = 0; i_7 < 15; i_7 += 2) 
            {
                var_23 &= ((/* implicit */short) 4294967295U);
                var_24 = ((((/* implicit */_Bool) arr_5 [i_0] [i_5 + 1] [i_7])) ? (((/* implicit */int) arr_5 [i_0] [i_5 + 1] [i_5 + 1])) : (((/* implicit */int) (signed char)121)));
            }
        }
        var_25 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))));
        arr_26 [(unsigned char)6] [(unsigned char)6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_20 [(signed char)4] [i_0] [i_0])) ? (((/* implicit */int) arr_20 [i_0] [i_0] [11])) : (((/* implicit */int) arr_17 [i_0]))));
        /* LoopNest 2 */
        for (unsigned char i_8 = 2; i_8 < 14; i_8 += 2) 
        {
            for (short i_9 = 1; i_9 < 13; i_9 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 0; i_10 < 15; i_10 += 4) 
                    {
                        for (int i_11 = 3; i_11 < 12; i_11 += 2) 
                        {
                            {
                                var_26 = ((/* implicit */signed char) (short)(-32767 - 1));
                                arr_38 [i_8] |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_9 + 2] [i_9 + 2] [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9 + 1])) ? (arr_8 [i_0] [i_8 + 1] [i_10] [i_10] [i_10] [11LL]) : (arr_8 [i_0] [i_0] [i_0] [i_0] [0] [i_0])));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_8])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)22))));
                    /* LoopSeq 3 */
                    for (unsigned short i_12 = 0; i_12 < 15; i_12 += 3) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned char i_13 = 4; i_13 < 13; i_13 += 1) 
                        {
                            var_28 |= ((/* implicit */long long int) arr_20 [(unsigned short)8] [(unsigned short)8] [i_9]);
                            arr_45 [i_0] [(short)7] [(unsigned char)10] [i_0] [(short)7] [i_0] [i_12] = ((/* implicit */short) (+((~(0U)))));
                            var_29 = ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-3559))))) ? (((((/* implicit */_Bool) (short)-3560)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_8 - 2]))) : (arr_7 [(signed char)10] [(unsigned short)7] [i_9]))) : (arr_11 [i_8 + 1] [i_8 - 1]));
                            var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_39 [i_0] [i_0] [3ULL] [i_9] [i_9 + 1])) ? (((/* implicit */int) (short)-13223)) : (arr_30 [i_8 - 2] [i_8]))))));
                        }
                        for (unsigned long long int i_14 = 0; i_14 < 15; i_14 += 3) 
                        {
                            var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_32 [i_9 + 2] [i_8 + 1] [i_8 - 1] [i_8 + 1])) ? (((/* implicit */int) arr_31 [i_9] [i_9 - 1] [i_9 + 1])) : (((/* implicit */int) arr_41 [i_0] [i_8] [i_0] [i_12] [i_14])))))));
                            var_32 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)3559)) ? (((/* implicit */int) arr_27 [i_0] [i_8 - 1] [i_9])) : (((/* implicit */int) arr_37 [i_0]))));
                            var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_8 - 1] [i_9 + 1])) ? (17397607926362218141ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_8 - 2] [i_9 + 2]))))))));
                            var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_47 [i_0] [i_9 + 2] [i_9 - 1] [10U] [i_14] [i_14] [8U])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (_Bool)1))));
                        }
                        for (int i_15 = 0; i_15 < 15; i_15 += 4) /* same iter space */
                        {
                            var_35 &= ((/* implicit */unsigned short) (+((+(arr_6 [5U] [(signed char)6] [(unsigned short)13] [(signed char)6])))));
                            arr_51 [i_12] [13ULL] [i_15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_12] [i_9 + 1] [(unsigned char)7])) ? (0ULL) : (arr_32 [i_0] [i_8 - 2] [i_9] [i_9 + 1])));
                            arr_52 [i_0] [i_0] [i_0] [i_12] [i_0] = ((/* implicit */unsigned char) (((_Bool)1) ? (((((/* implicit */_Bool) arr_35 [i_15] [i_12] [i_9] [i_8] [i_0])) ? (arr_11 [i_8] [i_8]) : (((/* implicit */unsigned long long int) 0U)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 801612584)) ? (((/* implicit */int) (short)24903)) : (((/* implicit */int) arr_44 [i_0])))))));
                        }
                        for (int i_16 = 0; i_16 < 15; i_16 += 4) /* same iter space */
                        {
                            arr_55 [(signed char)8] [i_12] [(signed char)8] = (+(((/* implicit */int) arr_33 [i_9 + 1] [i_8 - 2] [3ULL] [i_12])));
                            var_36 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(-38730310)))) ? (((/* implicit */int) arr_31 [i_8 - 2] [i_8 - 2] [i_9 + 1])) : (((/* implicit */int) arr_28 [i_9 - 1] [i_8 - 1] [(short)7]))));
                        }
                        arr_56 [i_0] [i_0] [i_12] [i_0] [i_0] = ((/* implicit */_Bool) arr_32 [i_0] [i_9 - 1] [i_8 - 2] [i_0]);
                        arr_57 [i_12] [i_12] [i_9 + 2] [i_9 + 2] = arr_27 [i_8] [i_8] [i_12];
                        var_37 = ((/* implicit */unsigned short) max((var_37), (((/* implicit */unsigned short) (+(arr_32 [i_9 + 1] [i_8 - 1] [i_8] [i_8]))))));
                    }
                    for (short i_17 = 1; i_17 < 14; i_17 += 4) 
                    {
                        arr_61 [10] [10] [i_17 + 1] [i_17 + 1] = ((/* implicit */short) (~(arr_11 [i_9 - 1] [i_17 + 1])));
                        /* LoopSeq 1 */
                        for (long long int i_18 = 0; i_18 < 15; i_18 += 3) 
                        {
                            var_38 = ((/* implicit */unsigned char) 15286452898572437456ULL);
                            var_39 = ((/* implicit */int) min((var_39), (((/* implicit */int) (short)-3560))));
                            arr_65 [i_0] [i_0] [i_8] [i_9] [i_8] [i_17] [i_18] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(unsigned short)7])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_18] [i_8] [(_Bool)1]))))))));
                            arr_66 [i_0] [i_0] [i_18] [i_0] [i_0] = ((/* implicit */unsigned char) (short)3559);
                            var_40 = ((/* implicit */int) max((var_40), (((/* implicit */int) arr_24 [i_8 + 1] [i_17 + 1]))));
                        }
                        var_41 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_23 [i_8 - 1] [i_8 - 1] [i_17 + 1]))));
                        var_42 = ((/* implicit */unsigned char) (~(arr_50 [i_9] [i_9 + 2] [i_9 + 2] [i_9] [i_9 + 1] [i_9] [i_9 + 1])));
                    }
                    for (unsigned int i_19 = 0; i_19 < 15; i_19 += 4) 
                    {
                        var_43 = arr_40 [i_9 + 2] [i_8 - 2] [i_8 - 2] [i_19] [i_0];
                        /* LoopSeq 3 */
                        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                        {
                            arr_74 [i_9] [i_9] [i_9] [i_9 + 2] [i_9] [i_9] [i_9] = ((/* implicit */unsigned long long int) arr_18 [i_8 - 2]);
                            arr_75 [i_0] [i_8] [i_8] [i_19] [i_20] [0LL] [i_20] = ((/* implicit */_Bool) (~(arr_4 [i_8 + 1])));
                            var_44 = ((/* implicit */unsigned long long int) 4294967295U);
                            var_45 = ((/* implicit */long long int) arr_25 [i_9] [i_20]);
                        }
                        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                        {
                            var_46 = ((/* implicit */unsigned short) arr_63 [i_8] [i_8] [i_8] [i_19] [i_21] [i_19]);
                            var_47 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_50 [i_9 + 1] [9ULL] [i_9] [i_9] [i_9 + 2] [i_8] [i_8])) ? (arr_6 [i_0] [i_0] [i_0] [i_8 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                            arr_79 [i_21] [i_19] [i_9] [i_0] = ((/* implicit */unsigned char) (short)1);
                        }
                        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                        {
                            arr_84 [i_0] [i_8] [i_9 + 1] [i_19] [i_9 + 1] [i_8 - 1] [i_9] = ((/* implicit */short) (+(arr_40 [i_8 - 2] [(_Bool)1] [i_8 + 1] [i_8] [i_9 + 1])));
                            var_48 = ((/* implicit */int) min((var_48), (((/* implicit */int) (+(arr_71 [i_0] [i_8] [i_9 - 1] [i_19] [i_22]))))));
                        }
                        var_49 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_9 + 2] [i_9] [i_9])) ? (arr_7 [i_9 + 2] [i_9] [i_9]) : (arr_7 [i_9 + 2] [i_9 + 1] [5])));
                    }
                }
            } 
        } 
        arr_85 [i_0] |= ((/* implicit */_Bool) (+(arr_76 [i_0] [5ULL] [i_0] [i_0] [i_0])));
    }
    var_50 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-((+(var_7)))))) ? (var_7) : ((+(((/* implicit */int) var_9))))));
    var_51 = ((/* implicit */int) var_0);
    var_52 |= ((/* implicit */short) var_15);
}
