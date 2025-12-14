/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102249
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
    var_13 = ((/* implicit */int) (short)-22124);
    var_14 ^= ((/* implicit */long long int) var_7);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        var_15 = var_7;
        var_16 |= ((/* implicit */unsigned long long int) (short)22123);
        /* LoopNest 3 */
        for (unsigned int i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                for (int i_3 = 0; i_3 < 13; i_3 += 2) 
                {
                    {
                        var_17 = ((/* implicit */signed char) (+(arr_2 [i_1 - 2] [i_1 - 2])));
                        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (-(arr_1 [i_1] [i_2]))))));
                        arr_9 [i_0] [i_0] [i_1 - 1] [i_2] [i_2] [i_3] = ((/* implicit */short) (-(arr_8 [i_0] [i_1 - 2] [i_2] [i_1 - 2])));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (signed char i_4 = 0; i_4 < 13; i_4 += 3) 
        {
            var_19 &= ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) arr_8 [7] [i_0 + 1] [i_4] [i_4])) : (((((/* implicit */_Bool) arr_3 [i_0] [4])) ? (-2761585344361301993LL) : (((/* implicit */long long int) ((/* implicit */int) (short)22139)))))));
            arr_12 [i_0] [i_4] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)11015))) != (((((/* implicit */long long int) var_10)) ^ (2761585344361301992LL)))));
            arr_13 [i_0 - 2] [i_4] |= ((/* implicit */signed char) ((((/* implicit */int) (short)22123)) <= (2147483647)));
            var_20 = ((/* implicit */int) (signed char)127);
        }
        var_21 = 1881342751;
    }
    /* vectorizable */
    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 2) 
    {
        /* LoopSeq 2 */
        for (long long int i_6 = 0; i_6 < 18; i_6 += 4) 
        {
            arr_19 [i_5] = ((/* implicit */short) 0U);
            /* LoopNest 3 */
            for (int i_7 = 1; i_7 < 15; i_7 += 4) 
            {
                for (unsigned int i_8 = 2; i_8 < 14; i_8 += 3) 
                {
                    for (signed char i_9 = 0; i_9 < 18; i_9 += 1) 
                    {
                        {
                            arr_29 [i_5] [i_6] [i_5] [i_7] [i_8] [i_8] [i_7] = (+(3884976974U));
                            var_22 = ((((/* implicit */_Bool) 2859240482U)) ? (arr_27 [i_7 + 3] [14] [i_8] [i_8 + 1] [i_8 + 4]) : (((((/* implicit */_Bool) (short)-22124)) ? (arr_25 [i_5] [i_7] [i_8] [i_9]) : (((/* implicit */int) var_12)))));
                            var_23 = ((/* implicit */unsigned int) ((arr_23 [i_6] [i_6] [i_8 + 1] [i_8 - 2]) - (((/* implicit */unsigned long long int) arr_25 [i_7 + 3] [i_7 + 3] [i_7 + 2] [i_8 + 1]))));
                            var_24 = (signed char)101;
                            var_25 = (+(4691972538634377650LL));
                        }
                    } 
                } 
            } 
            /* LoopSeq 3 */
            for (signed char i_10 = 0; i_10 < 18; i_10 += 1) 
            {
                var_26 = ((/* implicit */short) arr_21 [i_5] [i_6] [i_10] [i_10]);
                var_27 = ((/* implicit */unsigned int) max((var_27), (((3429359238U) & (arr_22 [i_5] [i_5] [i_10])))));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 18; i_11 += 2) 
                {
                    for (short i_12 = 0; i_12 < 18; i_12 += 3) 
                    {
                        {
                            arr_38 [i_10] = ((/* implicit */unsigned int) var_7);
                            var_28 |= ((/* implicit */int) ((409856981U) << (((arr_35 [i_5] [i_10] [1ULL] [i_12]) + (4832231924700044719LL)))));
                            var_29 = ((/* implicit */int) min((var_29), (((((/* implicit */int) (signed char)-115)) + (2147483647)))));
                            var_30 = ((/* implicit */signed char) max((var_30), (arr_21 [i_5] [i_5] [i_11] [i_12])));
                        }
                    } 
                } 
            }
            for (short i_13 = 4; i_13 < 17; i_13 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned char i_14 = 2; i_14 < 14; i_14 += 1) 
                {
                    for (unsigned long long int i_15 = 1; i_15 < 16; i_15 += 2) 
                    {
                        {
                            var_31 = ((/* implicit */long long int) 1653806452U);
                            arr_46 [i_5] [i_5] [i_13] [i_14] [i_15] = ((/* implicit */int) (signed char)10);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (int i_16 = 1; i_16 < 15; i_16 += 2) 
                {
                    var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) (+(var_1))))));
                    var_33 &= ((/* implicit */int) ((arr_23 [i_5] [i_6] [14] [i_16]) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (3429359238U) : (((/* implicit */unsigned int) 1881342751)))))));
                    /* LoopSeq 1 */
                    for (signed char i_17 = 1; i_17 < 14; i_17 += 3) 
                    {
                        var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)73)) ? (-882947055) : (var_7)));
                        var_35 = ((((/* implicit */_Bool) arr_27 [i_13 - 4] [i_16 + 2] [i_16 + 2] [i_17 + 1] [(short)14])) ? (arr_28 [i_13] [i_13 - 4] [14U] [i_13 - 1] [i_16 + 1] [i_17]) : (((((/* implicit */_Bool) -356536390)) ? (((/* implicit */int) (unsigned char)3)) : (-139323371))));
                    }
                }
                /* LoopSeq 3 */
                for (int i_18 = 0; i_18 < 18; i_18 += 3) 
                {
                    var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_26 [i_5] [i_5] [i_13] [i_13 - 4] [i_5] [i_13 - 2])) ? (((/* implicit */long long int) arr_26 [i_6] [i_6] [i_13] [(short)17] [i_13 - 2] [i_13 + 1])) : (arr_16 [i_13 - 4])));
                    var_37 = ((/* implicit */short) arr_28 [i_5] [i_6] [i_13] [i_13] [i_18] [i_18]);
                    var_38 &= ((/* implicit */unsigned int) ((((/* implicit */int) ((var_6) <= (((/* implicit */unsigned int) var_5))))) + (((/* implicit */int) (unsigned char)0))));
                    var_39 *= arr_54 [i_5] [4];
                }
                for (signed char i_19 = 1; i_19 < 15; i_19 += 2) 
                {
                    var_40 = ((/* implicit */int) ((((/* implicit */_Bool) arr_51 [i_13 + 1] [i_19 + 2])) ? (arr_54 [i_6] [i_19]) : (0U)));
                    /* LoopSeq 1 */
                    for (unsigned int i_20 = 0; i_20 < 18; i_20 += 1) 
                    {
                        var_41 = ((/* implicit */signed char) ((((/* implicit */unsigned int) arr_25 [i_13 - 2] [i_19 + 3] [i_19 + 1] [i_19 + 1])) + (((((/* implicit */_Bool) arr_54 [i_5] [(short)2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-66))) : (arr_32 [i_6] [i_6] [i_6] [i_20])))));
                        var_42 = ((((/* implicit */_Bool) (+(3640239837U)))) ? (arr_28 [i_13 - 3] [i_13 - 3] [i_19] [i_19 + 1] [11] [i_20]) : (arr_28 [i_5] [i_6] [i_5] [i_13] [i_19 + 1] [(signed char)5]));
                    }
                    var_43 = ((/* implicit */int) (!((!(((/* implicit */_Bool) var_0))))));
                }
                for (unsigned char i_21 = 0; i_21 < 18; i_21 += 2) 
                {
                    var_44 = ((/* implicit */long long int) max((var_44), (((/* implicit */long long int) arr_48 [i_5] [i_13 - 3]))));
                    var_45 = ((/* implicit */signed char) max((var_45), (((/* implicit */signed char) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((((/* implicit */_Bool) 847787969)) ? (var_4) : (-801262197))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)32767))) == (3479563793915695529LL)))))))));
                    var_46 = ((/* implicit */unsigned int) min((var_46), (((2506630902U) + (((/* implicit */unsigned int) (-2147483647 - 1)))))));
                }
            }
            for (short i_22 = 2; i_22 < 16; i_22 += 4) 
            {
                arr_66 [i_5] [i_6] [i_22] = (+(((((/* implicit */int) arr_17 [i_5] [i_6] [i_6])) / (arr_18 [i_5] [i_5] [(short)15]))));
                /* LoopSeq 4 */
                for (unsigned int i_23 = 4; i_23 < 17; i_23 += 1) 
                {
                    var_47 = ((/* implicit */unsigned char) max((var_47), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_3)))))));
                    /* LoopSeq 3 */
                    for (unsigned int i_24 = 1; i_24 < 16; i_24 += 1) /* same iter space */
                    {
                        arr_71 [i_5] [i_6] [i_22] [i_23 - 4] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_10) << (((arr_52 [i_5] [i_6] [i_5] [i_5] [i_24] [i_24] [i_24]) + (1085994238)))))) || (((/* implicit */_Bool) arr_23 [i_5] [i_6] [i_22 - 1] [i_23]))));
                        var_48 = ((/* implicit */unsigned int) max((var_48), (409856990U)));
                        var_49 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_64 [i_6] [i_22 - 2] [i_23 + 1])) ? (2ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_70 [i_5] [i_6] [i_5] [i_5] [i_23] [i_23] [i_24])) ? (((/* implicit */long long int) var_4)) : (-2761585344361301993LL))))));
                        var_50 += ((/* implicit */short) ((((/* implicit */_Bool) arr_47 [i_22 + 1] [8U] [i_23] [i_23])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_64 [i_22 - 2] [i_22] [i_22 - 2]))) : (var_1)));
                        arr_72 [i_5] [i_5] [i_22] [i_23] [i_24 + 2] = arr_67 [i_22 - 2] [i_22 + 2] [i_23 - 1];
                    }
                    for (unsigned int i_25 = 1; i_25 < 16; i_25 += 1) /* same iter space */
                    {
                        var_51 = ((/* implicit */int) (((!(((/* implicit */_Bool) 0)))) ? (arr_65 [i_6] [i_25 + 2]) : (409856982U)));
                        var_52 ^= ((/* implicit */unsigned int) -1LL);
                        var_53 = ((/* implicit */unsigned int) ((((var_0) + (2147483647))) << (((arr_23 [i_22 - 2] [i_23 - 3] [i_25 + 1] [i_25 - 1]) - (11716674712808575698ULL)))));
                    }
                    for (unsigned int i_26 = 1; i_26 < 16; i_26 += 1) /* same iter space */
                    {
                        var_54 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_5] [i_23 + 1])) ? (var_10) : (((/* implicit */unsigned int) 777495837)))))));
                        var_55 = ((/* implicit */int) min((var_55), (((/* implicit */int) 3575790859U))));
                    }
                }
                for (short i_27 = 3; i_27 < 17; i_27 += 3) 
                {
                    var_56 = ((/* implicit */signed char) 10324672502963728518ULL);
                    var_57 &= ((/* implicit */unsigned int) (+(arr_28 [i_27 - 2] [i_27] [i_27] [i_27] [i_27 + 1] [i_27])));
                    arr_79 [i_5] [i_5] [i_5] [i_27] [i_27] = ((((((/* implicit */int) (short)-24017)) + (2147483647))) << (((arr_54 [i_5] [i_6]) - (2051439665U))));
                }
                for (int i_28 = 0; i_28 < 18; i_28 += 2) 
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_29 = 3; i_29 < 14; i_29 += 1) 
                    {
                        arr_86 [i_5] [i_6] [i_22] [i_6] [i_29 + 3] = ((/* implicit */unsigned long long int) (unsigned char)0);
                        var_58 = ((/* implicit */unsigned char) max((var_58), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_17 [i_22 - 2] [(signed char)9] [i_29 + 2])))))));
                        arr_87 [i_6] [i_6] = ((/* implicit */int) ((3575790859U) == (((/* implicit */unsigned int) 134217728))));
                        var_59 += ((/* implicit */unsigned char) (+(((/* implicit */int) arr_64 [i_6] [i_6] [i_28]))));
                        var_60 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_84 [i_22 - 1] [i_22 + 1] [i_22 + 2] [i_22 + 2] [i_29 + 4] [i_29 - 1] [i_29 - 3])) || (((/* implicit */_Bool) arr_84 [i_22 - 1] [i_22 + 1] [i_22 - 1] [i_22 + 1] [i_29 - 1] [i_29 - 3] [i_29 + 1]))));
                    }
                    for (int i_30 = 0; i_30 < 18; i_30 += 3) 
                    {
                        var_61 = ((/* implicit */signed char) min((var_61), (((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)66)) && (((/* implicit */_Bool) var_12)))) && (((/* implicit */_Bool) arr_90 [i_22 - 1] [i_22] [i_22] [i_22 - 1] [(short)7] [i_22])))))));
                        arr_91 [i_5] [i_6] [i_6] [i_22] [i_28] [i_28] [i_30] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((arr_24 [i_6] [i_22] [i_28] [i_30]) + (var_6))))));
                    }
                    for (unsigned int i_31 = 0; i_31 < 18; i_31 += 2) 
                    {
                        var_62 = ((/* implicit */signed char) max((var_62), (((/* implicit */signed char) var_1))));
                        var_63 *= ((/* implicit */signed char) ((((/* implicit */int) var_11)) & (((/* implicit */int) arr_58 [i_22] [i_22 + 2] [i_22] [i_22 + 1] [i_28]))));
                    }
                    var_64 ^= (((-(2147483647))) - (((/* implicit */int) arr_51 [i_22] [i_28])));
                }
                for (unsigned int i_32 = 0; i_32 < 18; i_32 += 1) 
                {
                    /* LoopSeq 4 */
                    for (int i_33 = 2; i_33 < 17; i_33 += 3) 
                    {
                        var_65 = ((/* implicit */unsigned int) max((var_65), (((/* implicit */unsigned int) (signed char)120))));
                        var_66 = ((/* implicit */short) max((var_66), (((/* implicit */short) arr_23 [i_6] [i_6] [i_32] [i_33]))));
                        var_67 = ((/* implicit */long long int) arr_14 [i_22 - 2]);
                        var_68 = ((/* implicit */int) min((var_68), (((((/* implicit */int) arr_51 [i_22] [i_22])) + (506884764)))));
                        var_69 = arr_73 [i_32] [i_32] [i_32] [i_33 - 2] [i_33 + 1] [i_33] [i_32];
                    }
                    for (signed char i_34 = 0; i_34 < 18; i_34 += 2) /* same iter space */
                    {
                        var_70 = ((/* implicit */signed char) max((var_70), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_85 [i_6] [i_22 - 1] [i_22 + 2] [i_22] [i_22 + 1] [i_22] [i_22 + 2])))))));
                        var_71 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((2130706432U) & (((/* implicit */unsigned int) 273796955)))))));
                    }
                    for (signed char i_35 = 0; i_35 < 18; i_35 += 2) /* same iter space */
                    {
                        var_72 ^= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-60))) > (arr_37 [i_5] [i_5] [i_6] [i_6] [i_22] [i_32] [i_35])));
                        arr_105 [i_5] [i_6] [i_32] = ((/* implicit */unsigned long long int) (-2147483647 - 1));
                        var_73 *= ((/* implicit */short) arr_93 [i_22 - 2] [i_22 - 1] [i_22 - 2] [i_22 + 2] [i_22 - 2]);
                    }
                    for (signed char i_36 = 0; i_36 < 18; i_36 += 2) /* same iter space */
                    {
                        var_74 += (+(((/* implicit */int) arr_51 [i_22 - 1] [i_22 + 1])));
                        var_75 ^= ((/* implicit */unsigned int) var_11);
                        var_76 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)67)) || (((/* implicit */_Bool) 2100290273)))))) & (arr_53 [i_5] [i_6] [i_5] [i_22] [i_32] [i_36])));
                    }
                    var_77 = ((/* implicit */int) (+(arr_35 [i_22 - 1] [i_22] [i_22 - 1] [i_22 - 2])));
                    /* LoopSeq 2 */
                    for (signed char i_37 = 2; i_37 < 15; i_37 += 3) /* same iter space */
                    {
                        var_78 = ((/* implicit */short) max((var_78), (((/* implicit */short) (+(arr_109 [i_6] [i_22 - 2] [i_22] [i_22] [i_32] [i_37 + 2]))))));
                        arr_111 [i_22 + 2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)-117)) ^ (((/* implicit */int) (unsigned char)129)))))));
                    }
                    for (signed char i_38 = 2; i_38 < 15; i_38 += 3) /* same iter space */
                    {
                        var_79 = ((/* implicit */unsigned int) -2085103088);
                        var_80 = ((/* implicit */int) ((((-2761585344361301993LL) + (9223372036854775807LL))) >> (((arr_60 [i_22 - 2] [i_38 + 2] [i_38] [i_38] [i_38]) + (713907168048764306LL)))));
                        var_81 = ((/* implicit */int) max((var_81), (((1150230827) % ((+(var_7)))))));
                        var_82 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) (~(131071)))) : (arr_99 [i_5])));
                        var_83 = ((/* implicit */int) ((1319794755) != (-1360546007)));
                    }
                }
                var_84 -= ((/* implicit */long long int) arr_68 [i_22 - 1] [i_22 - 1] [i_22 - 1] [i_22 + 2] [i_22]);
                var_85 |= ((/* implicit */int) (!(((((/* implicit */int) var_11)) != (((/* implicit */int) arr_74 [i_5] [i_6] [i_6] [i_6] [i_22]))))));
                arr_115 [i_5] [i_6] [i_22 + 1] = ((/* implicit */short) (-(((/* implicit */int) var_11))));
            }
            arr_116 [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) 5163430783255360582ULL);
        }
        for (unsigned long long int i_39 = 0; i_39 < 18; i_39 += 3) 
        {
            var_86 = ((/* implicit */signed char) max((var_86), (((/* implicit */signed char) (+(2085103064))))));
            var_87 = ((/* implicit */unsigned int) max((var_87), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-63))) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_83 [i_5] [i_5] [i_39] [i_39])))))));
        }
        arr_121 [i_5] = ((/* implicit */unsigned long long int) arr_54 [i_5] [i_5]);
    }
    var_88 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)86)) & (((/* implicit */int) (signed char)1))));
    var_89 = ((/* implicit */long long int) var_3);
}
