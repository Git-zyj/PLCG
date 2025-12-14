/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128441
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
    var_20 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) ((var_6) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_2)), (var_17)))))));
    var_21 *= ((/* implicit */unsigned short) var_12);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_22 = arr_3 [i_0];
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                            {
                                var_23 = ((/* implicit */unsigned char) ((((((/* implicit */int) var_8)) + (2147483647))) >> (((((/* implicit */int) arr_7 [i_1] [i_2] [i_4])) - (93)))));
                                arr_13 [i_1] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */int) ((unsigned char) (short)-5674));
                                var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) var_15))));
                            }
                            for (unsigned long long int i_5 = 4; i_5 < 17; i_5 += 4) 
                            {
                                var_25 = ((/* implicit */int) (short)-5673);
                                var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((arr_14 [i_0] [i_0] [i_2] [i_3] [i_5]) - (((unsigned long long int) var_4)))))));
                            }
                            var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((((/* implicit */int) ((short) ((((/* implicit */int) var_13)) + (((/* implicit */int) arr_1 [i_0] [i_0])))))) << (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))) > (var_17)))))))));
                            /* LoopSeq 1 */
                            for (unsigned int i_6 = 3; i_6 < 15; i_6 += 2) 
                            {
                                var_28 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((-1523998590) | (((/* implicit */int) (_Bool)1))))) < (((unsigned int) arr_16 [i_6 + 1] [i_6 + 2] [i_6 + 1] [i_6] [i_6]))));
                                var_29 *= ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_0] [i_0] [i_1] [i_2] [i_3 + 1] [i_6] [i_6])) ^ (var_14)))), (var_15)));
                                var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) ((min((((/* implicit */long long int) ((((/* implicit */int) var_13)) + (((/* implicit */int) var_16))))), (((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_0] [i_3] [i_0])) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))) == (((/* implicit */long long int) ((/* implicit */int) (short)-29805))))))));
                                var_31 = ((/* implicit */unsigned char) var_9);
                            }
                            var_32 = ((/* implicit */short) ((((/* implicit */_Bool) ((max((arr_4 [i_1]), (((/* implicit */unsigned int) var_13)))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))))) ? (var_7) : (((/* implicit */int) ((min((3194125894220477831ULL), (((/* implicit */unsigned long long int) -1523998590)))) == (((/* implicit */unsigned long long int) ((int) var_19))))))));
                            arr_20 [i_1] = (~(var_9));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_7 = 1; i_7 < 11; i_7 += 1) 
    {
        var_33 = ((/* implicit */short) ((signed char) arr_4 [i_7]));
        arr_24 [i_7] [i_7 + 1] = ((unsigned char) ((2750152525420289247LL) ^ (((/* implicit */long long int) ((/* implicit */int) (short)-1)))));
        /* LoopSeq 2 */
        for (short i_8 = 3; i_8 < 11; i_8 += 2) 
        {
            /* LoopNest 2 */
            for (int i_9 = 4; i_9 < 11; i_9 += 2) 
            {
                for (unsigned short i_10 = 0; i_10 < 12; i_10 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_11 = 0; i_11 < 12; i_11 += 3) 
                        {
                            var_34 = arr_19 [i_9 - 1] [i_8] [i_9 - 1] [i_9 - 1] [i_11] [i_7 - 1] [i_10];
                            var_35 = ((/* implicit */unsigned short) arr_25 [i_7 - 1] [i_7 + 1]);
                        }
                        /* LoopSeq 3 */
                        for (unsigned char i_12 = 0; i_12 < 12; i_12 += 1) 
                        {
                            arr_37 [i_7] [i_8] [i_8] [i_9 - 1] [i_10] [i_12] [i_12] = ((arr_15 [i_7]) << (((((((/* implicit */int) arr_11 [i_7] [i_7 - 1] [i_7] [i_7] [i_7] [i_8 - 3] [i_9 - 1])) + (124))) - (27))));
                            arr_38 [i_7] = ((262143LL) >= (((/* implicit */long long int) ((/* implicit */int) (short)-5674))));
                        }
                        for (unsigned int i_13 = 3; i_13 < 10; i_13 += 2) 
                        {
                            arr_41 [i_9] [i_8 - 1] [i_9] [i_10] [i_13 - 3] &= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_31 [i_7] [i_8] [i_10] [i_13 + 2])) * (((/* implicit */int) var_5))))) < (((((/* implicit */_Bool) var_12)) ? (15252618179489073785ULL) : (((/* implicit */unsigned long long int) -1512362204))))));
                            arr_42 [i_7] [i_7] [i_9] [i_10] [i_7] [i_13 + 1] = ((/* implicit */unsigned short) ((((unsigned int) var_19)) < (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
                            var_36 = ((/* implicit */short) var_12);
                        }
                        for (signed char i_14 = 1; i_14 < 11; i_14 += 2) 
                        {
                            var_37 = ((/* implicit */unsigned int) (~(var_6)));
                            var_38 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((-685883837) + (((/* implicit */int) arr_7 [i_7] [i_7] [i_14]))))) ? (((/* implicit */unsigned long long int) (-(var_7)))) : (arr_14 [i_7 - 1] [i_8 - 1] [i_9 - 1] [i_9 - 2] [i_14 + 1])));
                            arr_46 [i_7] [i_8] [i_9] [i_10] [i_10] [i_14] [i_7] = ((/* implicit */unsigned long long int) (~(1694233294U)));
                        }
                        var_39 &= ((/* implicit */_Bool) var_6);
                        /* LoopSeq 3 */
                        for (unsigned int i_15 = 0; i_15 < 12; i_15 += 4) 
                        {
                            var_40 = ((_Bool) arr_5 [i_8 + 1] [i_7 + 1]);
                            arr_49 [i_7] [i_8 + 1] [i_9] [i_10] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_8 + 1] [i_7 - 1] [i_7 + 1])) ? (((/* implicit */int) arr_7 [i_8 - 2] [i_7 + 1] [i_7 + 1])) : (((/* implicit */int) arr_7 [i_8 - 1] [i_7 + 1] [i_7 - 1]))));
                            var_41 = (i_7 % 2 == 0) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_7])) << (((arr_23 [i_7]) - (6870584752353927670ULL)))))) ^ (((arr_39 [i_7] [i_7] [i_9] [i_7] [i_15] [i_7] [i_15]) | (((/* implicit */long long int) ((/* implicit */int) var_11)))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_7])) << (((((arr_23 [i_7]) - (6870584752353927670ULL))) - (15371979879752249801ULL)))))) ^ (((arr_39 [i_7] [i_7] [i_9] [i_7] [i_15] [i_7] [i_15]) | (((/* implicit */long long int) ((/* implicit */int) var_11))))))));
                            arr_50 [i_7] [i_8] [i_7] [i_9] [i_9] [i_10] [i_15] = ((/* implicit */short) (+(arr_19 [i_9 + 1] [i_15] [i_15] [i_15] [i_15] [i_15] [i_15])));
                        }
                        for (long long int i_16 = 0; i_16 < 12; i_16 += 4) 
                        {
                            var_42 = ((/* implicit */long long int) ((unsigned short) var_16));
                            var_43 = ((/* implicit */short) var_16);
                            var_44 ^= ((/* implicit */unsigned short) ((18446744073709551615ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                            arr_54 [i_7 - 1] [i_8] [i_9 - 2] [i_9 - 3] [i_9] [i_7] [i_16] = ((/* implicit */long long int) arr_3 [i_9 - 1]);
                            arr_55 [i_10] [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_30 [i_9 - 2] [i_10] [i_16])) ? (arr_27 [i_9 + 1] [i_16] [i_16]) : (((/* implicit */unsigned int) arr_30 [i_9 - 1] [i_9 - 1] [i_10]))));
                        }
                        for (long long int i_17 = 1; i_17 < 10; i_17 += 2) 
                        {
                            var_45 = ((/* implicit */short) arr_23 [i_7]);
                            var_46 = ((/* implicit */unsigned short) var_13);
                        }
                        arr_60 [i_7] [i_8] [i_8] = ((/* implicit */int) ((arr_17 [i_7 - 1] [i_8 - 1] [i_8 - 1] [i_9] [i_10]) < (arr_17 [i_7 - 1] [i_7 + 1] [i_8 + 1] [i_9 - 3] [i_10])));
                    }
                } 
            } 
            var_47 = ((/* implicit */short) arr_36 [i_7] [i_7] [i_7] [i_8] [i_8]);
            arr_61 [i_7] = ((/* implicit */unsigned long long int) ((unsigned int) arr_28 [i_7 + 1] [i_8 - 1]));
            var_48 = ((/* implicit */short) min((var_48), (((/* implicit */short) (!(((/* implicit */_Bool) var_6)))))));
            var_49 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_7 + 1]))) & (arr_8 [i_8] [i_7] [i_7] [i_8 - 3] [i_7] [i_7])));
        }
        for (long long int i_18 = 0; i_18 < 12; i_18 += 3) 
        {
            arr_66 [i_7] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((1231891875) != (((/* implicit */int) (short)-1)))))) >= (((3305285882775826507LL) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
            /* LoopSeq 4 */
            for (short i_19 = 0; i_19 < 12; i_19 += 1) 
            {
                var_50 *= ((/* implicit */unsigned short) var_3);
                arr_69 [i_7] [i_7] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_26 [i_7] [i_18] [i_19]))));
                /* LoopSeq 3 */
                for (int i_20 = 4; i_20 < 11; i_20 += 2) 
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_21 = 2; i_21 < 10; i_21 += 3) 
                    {
                        var_51 = var_15;
                        arr_74 [i_7] [i_7] [i_19] [i_20 - 1] [i_21] = ((/* implicit */short) arr_25 [i_21] [i_7]);
                        arr_75 [i_7 - 1] [i_7 - 1] [i_7] [i_20 - 2] [i_20] [i_21 - 2] [i_21] = ((/* implicit */unsigned int) (_Bool)0);
                    }
                    for (unsigned int i_22 = 2; i_22 < 11; i_22 += 2) 
                    {
                        var_52 = ((/* implicit */unsigned short) var_12);
                        arr_79 [i_7] [i_7] [i_18] [i_7] [i_19] [i_7] [i_22 - 2] = ((/* implicit */_Bool) var_6);
                        arr_80 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_58 [i_18] [i_22 - 1] [i_22] [i_18] [i_22] [i_22 + 1])) ? (arr_0 [i_7 - 1] [i_7 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7 + 1] [i_7])))));
                        var_53 = ((/* implicit */short) max((var_53), (((/* implicit */short) ((arr_76 [i_22] [i_22 + 1] [i_20 - 1] [i_20 - 1] [i_20 - 1]) - (((/* implicit */unsigned int) arr_71 [i_19] [i_20] [i_20] [i_20 - 2] [i_22 - 2] [i_22])))))));
                    }
                    for (int i_23 = 1; i_23 < 10; i_23 += 4) 
                    {
                        arr_84 [i_7] [i_7] [i_18] [i_7] [i_20] [i_23 - 1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_7 - 1] [i_18] [i_19] [i_23 - 1] [i_7] [i_20]))) >= (var_6)));
                        var_54 = ((/* implicit */_Bool) min((var_54), (((/* implicit */_Bool) ((((-1LL) & (((/* implicit */long long int) ((/* implicit */int) arr_63 [i_7] [i_18] [i_19]))))) * (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_7] [i_18] [i_19] [i_23 - 1]))))))));
                        var_55 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) > (3194125894220477817ULL)));
                        arr_85 [i_7] [i_18] [i_19] [i_19] [i_20] [i_20] [i_20] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [i_23 + 2] [i_7] [i_20 - 3] [i_20] [i_7] [i_20 - 4])) && (((/* implicit */_Bool) arr_39 [i_23 + 2] [i_7] [i_23] [i_20 + 1] [i_20] [i_7] [i_7]))));
                        var_56 = ((/* implicit */unsigned char) var_15);
                    }
                    var_57 ^= var_3;
                    var_58 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_7 - 1] [i_7 - 1] [i_18] [i_18] [i_18] [i_19] [i_20])) ? (((arr_15 [i_7]) & (arr_81 [i_7]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_76 [i_7] [i_18] [i_19] [i_20 - 1] [i_20 - 3])) != (arr_43 [i_7] [i_18] [i_19] [i_19] [i_19])))))));
                }
                for (short i_24 = 0; i_24 < 12; i_24 += 2) 
                {
                    var_59 = ((/* implicit */short) max((var_59), (((/* implicit */short) (+(arr_83 [i_7 + 1] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 + 1]))))));
                    arr_88 [i_7] [i_7] [i_18] = (((_Bool)1) ? (((/* implicit */int) arr_73 [i_7] [i_18] [i_18] [i_24] [i_7] [i_24])) : (-1014697199));
                    var_60 = (~(((/* implicit */int) arr_45 [i_7] [i_7 + 1] [i_7] [i_7 - 1] [i_24])));
                }
                for (unsigned char i_25 = 0; i_25 < 12; i_25 += 2) 
                {
                    arr_91 [i_7] [i_19] = ((/* implicit */unsigned int) ((unsigned char) arr_43 [i_7] [i_18] [i_7] [i_25] [i_25]));
                    var_61 = ((/* implicit */_Bool) arr_4 [i_7]);
                    arr_92 [i_7] [i_19] = ((/* implicit */unsigned short) ((((unsigned long long int) arr_56 [i_7 + 1] [i_18] [i_19] [i_25] [i_19])) * (((/* implicit */unsigned long long int) arr_76 [i_7] [i_18] [i_18] [i_18] [i_18]))));
                }
            }
            for (long long int i_26 = 3; i_26 < 10; i_26 += 1) 
            {
                /* LoopSeq 2 */
                for (int i_27 = 0; i_27 < 12; i_27 += 2) 
                {
                    var_62 = ((/* implicit */long long int) ((signed char) arr_11 [i_7 + 1] [i_7] [i_7 + 1] [i_18] [i_26 - 1] [i_26] [i_27]));
                    var_63 = ((/* implicit */short) var_7);
                }
                for (unsigned char i_28 = 0; i_28 < 12; i_28 += 4) 
                {
                    var_64 = ((/* implicit */unsigned short) arr_71 [i_7] [i_7] [i_7 - 1] [i_7] [i_7] [i_7 + 1]);
                    arr_99 [i_7] [i_18] [i_7] [i_7] = ((/* implicit */_Bool) arr_86 [i_7] [i_28]);
                    /* LoopSeq 1 */
                    for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                    {
                        var_65 ^= ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_16))))) == (((/* implicit */int) ((unsigned short) (short)3192)))));
                        arr_103 [i_7] [i_7] [i_26] [i_28] [i_29] = ((/* implicit */unsigned long long int) ((arr_56 [i_26 + 1] [i_7 - 1] [i_7 + 1] [i_7 + 1] [i_7 + 1]) | (var_7)));
                        var_66 -= ((/* implicit */unsigned short) ((var_17) + (((/* implicit */unsigned long long int) var_7))));
                        var_67 = ((/* implicit */unsigned short) var_8);
                    }
                }
                var_68 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_67 [i_7] [8] [i_7 - 1])) ? (arr_8 [i_7] [i_7] [i_7 + 1] [i_26] [4U] [i_26 + 1]) : (((/* implicit */unsigned int) var_7))));
            }
            for (long long int i_30 = 0; i_30 < 12; i_30 += 1) 
            {
                arr_108 [i_7 + 1] [i_18] [i_7] = ((((/* implicit */int) arr_73 [i_7 + 1] [i_7] [i_7 + 1] [i_7 + 1] [i_18] [i_18])) != (((/* implicit */int) arr_73 [i_7 + 1] [i_7 + 1] [i_7] [i_18] [i_30] [i_30])));
                var_69 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) 6894658472233607806ULL)) ? (var_12) : (((/* implicit */long long int) (+(((/* implicit */int) arr_40 [i_30])))))));
            }
            for (unsigned int i_31 = 4; i_31 < 9; i_31 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_32 = 2; i_32 < 11; i_32 += 1) 
                {
                    for (long long int i_33 = 2; i_33 < 8; i_33 += 3) 
                    {
                        {
                            var_70 = ((/* implicit */int) ((signed char) arr_44 [i_7 + 1] [i_31 - 1] [i_31 + 3] [i_32 - 1] [i_32 - 2] [i_33 - 1] [i_33 - 1]));
                            arr_118 [i_7] [i_18] [i_31] [i_32 + 1] [i_33 - 1] = ((/* implicit */unsigned int) ((unsigned char) arr_11 [i_7 + 1] [i_18] [i_32] [i_7 + 1] [i_33 - 1] [i_33 - 1] [i_33]));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_34 = 1; i_34 < 1; i_34 += 1) 
                {
                    for (unsigned short i_35 = 1; i_35 < 11; i_35 += 3) 
                    {
                        {
                            arr_125 [i_7 + 1] [i_7 + 1] [i_7] [i_7 + 1] [i_35 - 1] = ((/* implicit */short) var_17);
                            var_71 = ((/* implicit */_Bool) arr_21 [i_7]);
                            arr_126 [i_7] [i_18] [i_31] [i_7] [i_35] = ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_6)))) + (var_15));
                        }
                    } 
                } 
            }
            var_72 = arr_123 [i_7 + 1];
        }
        arr_127 [i_7] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_16))) + (((((/* implicit */_Bool) var_17)) ? (arr_34 [i_7] [i_7] [i_7] [i_7] [i_7 - 1] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) arr_70 [i_7 - 1] [i_7] [i_7 - 1] [i_7 - 1])))))));
    }
    /* vectorizable */
    for (unsigned char i_36 = 2; i_36 < 24; i_36 += 1) 
    {
        var_73 = var_10;
        arr_130 [i_36] [i_36] = ((/* implicit */short) arr_129 [i_36 + 1] [i_36 - 2]);
    }
    var_74 = ((/* implicit */int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_2)))) : (var_10)));
}
