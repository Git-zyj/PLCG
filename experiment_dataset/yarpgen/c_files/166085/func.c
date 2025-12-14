/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166085
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
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 3; i_2 < 18; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */long long int) arr_11 [i_3] [i_0] [i_0] [i_0] [i_0] [i_0]);
                            var_17 = ((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_0] [i_0] [i_0] [i_3]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 20; i_4 += 3) 
                {
                    for (short i_5 = 4; i_5 < 19; i_5 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) arr_10 [i_0] [i_5] [i_0] [i_0] [i_0]))));
                            arr_16 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((_Bool) max((((/* implicit */unsigned int) (_Bool)0)), (0U)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(4694110148045003671ULL)))))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_0 [i_5])), (4294967276U)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1]))) : (var_13)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_6 = 0; i_6 < 20; i_6 += 1) 
                {
                    for (long long int i_7 = 0; i_7 < 20; i_7 += 4) 
                    {
                        {
                            arr_24 [i_0] [i_0] [i_6] [i_7] [i_7] [i_1] = ((/* implicit */unsigned long long int) 4294967267U);
                            var_19 += ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 20U)), (((((/* implicit */_Bool) 9500745252575898131ULL)) ? (max((((/* implicit */unsigned long long int) (unsigned short)12427)), (arr_20 [i_7] [i_7] [i_0] [i_0] [i_1] [i_0]))) : (((/* implicit */unsigned long long int) ((long long int) arr_2 [i_0] [i_0])))))));
                            var_20 = ((/* implicit */unsigned short) 4294967279U);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_8 = 1; i_8 < 17; i_8 += 3) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0] [i_1]);
                            arr_31 [i_1] [i_1] = ((/* implicit */int) var_7);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_10 = 0; i_10 < 10; i_10 += 4) 
    {
        for (unsigned int i_11 = 2; i_11 < 9; i_11 += 1) 
        {
            for (unsigned long long int i_12 = 1; i_12 < 8; i_12 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                    {
                        for (long long int i_14 = 3; i_14 < 7; i_14 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned long long int) var_5);
                                var_23 = ((/* implicit */_Bool) min(((+(arr_30 [i_12 + 1] [i_13]))), (min((arr_30 [i_12 + 1] [i_13]), (((/* implicit */unsigned long long int) var_3))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_15 = 0; i_15 < 10; i_15 += 4) 
                    {
                        for (short i_16 = 0; i_16 < 10; i_16 += 2) 
                        {
                            {
                                var_24 -= ((/* implicit */int) (((~(((576460752303423487LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)68))))))) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_32 [i_10] [i_10])) || ((!(((/* implicit */_Bool) (unsigned short)0))))))))));
                                arr_48 [i_10] [i_15] [i_12 + 1] [i_10] [i_10] = ((/* implicit */unsigned int) 634918950);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_17 = 0; i_17 < 10; i_17 += 1) 
                    {
                        for (short i_18 = 0; i_18 < 10; i_18 += 2) 
                        {
                            {
                                arr_55 [i_10] [i_10] [i_17] [i_17] [i_10] = ((/* implicit */unsigned long long int) var_7);
                                var_25 = ((((((/* implicit */_Bool) (unsigned short)5)) ? (min((1525147594746396684ULL), (arr_49 [i_17]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_5) == (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))))))))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)88))) : (((0U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_10] [i_17] [i_10] [i_17] [i_17] [i_17])))))))));
                                arr_56 [i_18] &= var_7;
                                arr_57 [i_10] [i_17] [i_10] [i_17] [i_18] [i_18] = ((/* implicit */short) 0U);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_19 = 0; i_19 < 10; i_19 += 4) 
                    {
                        for (unsigned int i_20 = 1; i_20 < 8; i_20 += 3) 
                        {
                            {
                                var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_9 [i_10] [i_10] [i_12 - 1] [i_19])) >= (18446744073709551615ULL))))));
                                var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)2064)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)238))) : (8U))))));
                                arr_63 [i_10] [i_10] [i_12 - 1] [i_10] [i_10] [i_10] = ((/* implicit */unsigned int) 576460752303423480LL);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_21 = 0; i_21 < 10; i_21 += 1) 
                    {
                        for (long long int i_22 = 3; i_22 < 9; i_22 += 2) 
                        {
                            {
                                var_28 = 9151460882748194419ULL;
                                arr_68 [i_10] [i_10] [i_10] [i_22] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) max((((/* implicit */short) (unsigned char)37)), (var_12)))) + (((/* implicit */int) arr_10 [i_22 + 1] [i_10] [i_22 + 1] [i_10] [i_11]))))) < (arr_61 [i_10] [i_10] [i_10] [i_21] [i_22] [i_22])));
                                arr_69 [i_22] [i_21] [i_12 - 1] [i_11 - 2] [i_10] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14768306294597489921ULL)) ? (arr_15 [i_10]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))) / (((arr_32 [i_11] [i_22 - 1]) - (((/* implicit */unsigned long long int) 19U)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_23 = 2; i_23 < 13; i_23 += 4) 
    {
        for (unsigned short i_24 = 3; i_24 < 14; i_24 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_25 = 0; i_25 < 15; i_25 += 2) 
                {
                    for (short i_26 = 0; i_26 < 15; i_26 += 3) 
                    {
                        {
                            arr_81 [i_23] [i_23] [i_23] [i_24 - 3] [i_24] [i_26] = ((/* implicit */unsigned long long int) ((unsigned short) var_15));
                            var_29 = ((/* implicit */_Bool) max(((unsigned short)31), (((/* implicit */unsigned short) (short)12114))));
                            var_30 = ((/* implicit */signed char) (~(var_4)));
                            arr_82 [i_24] [i_26] [i_25] [i_24 + 1] [i_24] = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) 3678437779112061700ULL))) << (((/* implicit */int) (_Bool)0))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_27 = 1; i_27 < 14; i_27 += 3) 
                {
                    for (unsigned long long int i_28 = 4; i_28 < 14; i_28 += 3) 
                    {
                        for (int i_29 = 0; i_29 < 15; i_29 += 1) 
                        {
                            {
                                arr_92 [i_24] [i_24] [i_23 - 1] = ((/* implicit */_Bool) (unsigned short)42801);
                                var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) 634918956))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                {
                    for (unsigned short i_31 = 0; i_31 < 15; i_31 += 3) 
                    {
                        {
                            arr_98 [i_23] [i_24] [i_30] [i_23] [i_24] = (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_24])) ? (((/* implicit */unsigned long long int) 576460752303423487LL)) : (arr_30 [i_24] [i_24])))))) && (((/* implicit */_Bool) 176249016)));
                            arr_99 [i_23] [i_24 + 1] [i_24] [i_24] [i_24] [i_31] = ((/* implicit */unsigned short) var_15);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_32 = 4; i_32 < 14; i_32 += 3) 
                {
                    for (_Bool i_33 = 0; i_33 < 0; i_33 += 1) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned short) ((arr_15 [i_24]) | (var_13)));
                            arr_105 [i_23] [i_23] [i_23] [i_23] [i_23] [i_23] &= ((((/* implicit */_Bool) (+(var_13)))) ? (14246067797669118295ULL) : (arr_72 [i_33]));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_34 = 0; i_34 < 15; i_34 += 1) 
                {
                    for (short i_35 = 0; i_35 < 15; i_35 += 3) 
                    {
                        {
                            var_33 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1)))));
                            var_34 = ((/* implicit */int) ((unsigned char) ((unsigned short) var_5)));
                            var_35 -= ((/* implicit */short) (+(arr_14 [i_23])));
                            arr_111 [i_23] &= ((/* implicit */unsigned short) max((((var_13) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_86 [i_24] [i_24] [i_24])) != (arr_101 [i_24] [i_23] [i_34]))))))), (((/* implicit */long long int) var_9))));
                            arr_112 [i_24] = ((/* implicit */int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_7 [i_23] [i_23]))), (((/* implicit */long long int) (unsigned short)45507)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_36 = 0; i_36 < 25; i_36 += 3) 
    {
        for (unsigned short i_37 = 0; i_37 < 25; i_37 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_38 = 0; i_38 < 25; i_38 += 3) 
                {
                    for (long long int i_39 = 0; i_39 < 25; i_39 += 2) 
                    {
                        {
                            var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)31)) ? (3092677793U) : (4294967274U)))), (((((/* implicit */_Bool) 34359738367ULL)) ? (14246067797669118295ULL) : (((/* implicit */unsigned long long int) var_5))))))) && (((/* implicit */_Bool) max((arr_113 [i_36]), (((/* implicit */int) arr_114 [i_36])))))));
                            arr_122 [i_36] [i_37] = ((/* implicit */long long int) (unsigned short)20026);
                            var_37 = ((/* implicit */int) 9151460882748194434ULL);
                            arr_123 [i_39] [i_36] [i_39] [i_39] = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_119 [i_36] [i_36] [i_38] [i_39])) ? (((/* implicit */unsigned long long int) 4294967268U)) : (18446744073709551615ULL)))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) (_Bool)1)), (3092677792U)))) : (((long long int) (unsigned short)18562))))), (((unsigned long long int) ((((/* implicit */_Bool) arr_117 [i_36])) || (arr_115 [i_36] [i_37])))));
                            arr_124 [i_36] [i_38] [i_37] [i_37] [i_37] [i_36] = ((/* implicit */unsigned long long int) ((long long int) 216638507650318983LL));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_40 = 1; i_40 < 23; i_40 += 1) 
                {
                    for (short i_41 = 1; i_41 < 22; i_41 += 1) 
                    {
                        for (short i_42 = 0; i_42 < 25; i_42 += 4) 
                        {
                            {
                                var_38 = ((/* implicit */short) max((3678437779112061701ULL), (((/* implicit */unsigned long long int) (short)7811))));
                                arr_133 [i_36] [i_37] [i_36] = ((/* implicit */int) 9123740048528734217LL);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
