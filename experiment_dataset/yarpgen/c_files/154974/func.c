/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154974
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
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_18 = ((/* implicit */signed char) ((((/* implicit */int) var_12)) == (((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) max((((/* implicit */int) var_3)), (var_16)))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [1])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) : (arr_2 [i_0])));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */short) (-(((((/* implicit */int) (unsigned short)34352)) + (((/* implicit */int) (_Bool)1))))));
        var_19 = ((/* implicit */_Bool) (unsigned char)21);
        /* LoopSeq 4 */
        for (short i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            arr_9 [i_2] = ((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_4 [i_2])));
            arr_10 [i_1] [i_1] = (!(((/* implicit */_Bool) 3940649673949184LL)));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_20 &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_3])) ? (arr_8 [(unsigned char)17] [i_3]) : (var_0)));
            /* LoopSeq 3 */
            for (short i_4 = 0; i_4 < 24; i_4 += 3) 
            {
                var_21 = ((/* implicit */_Bool) (short)-31726);
                /* LoopNest 2 */
                for (unsigned short i_5 = 1; i_5 < 20; i_5 += 4) 
                {
                    for (int i_6 = 4; i_6 < 23; i_6 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_2)) ? (4981992291231779982ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
                            var_23 -= ((/* implicit */unsigned char) ((unsigned short) (_Bool)1));
                            arr_24 [i_1] [i_1] [14LL] [i_4] [i_5] [i_4] [i_6 + 1] = ((/* implicit */long long int) arr_18 [i_4] [i_5 - 1] [i_4] [i_4]);
                            arr_25 [i_4] = arr_16 [i_4] [i_4] [i_4] [i_4];
                        }
                    } 
                } 
                arr_26 [i_4] = (short)(-32767 - 1);
                var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_16 [i_4] [i_4] [i_4] [i_4])) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_20 [(unsigned char)5] [i_3] [i_3] [15LL] [i_1] [(_Bool)1])) : (2043635396))) : (((/* implicit */int) arr_20 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))));
            }
            for (unsigned short i_7 = 1; i_7 < 23; i_7 += 2) /* same iter space */
            {
                var_25 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_4 [i_7 + 1]))));
                arr_30 [i_1] [i_1] [i_1] [i_7 - 1] = ((/* implicit */unsigned long long int) arr_22 [i_1] [i_3] [i_7 - 1] [i_3] [i_1] [i_3] [(unsigned short)1]);
                var_26 |= ((/* implicit */long long int) ((((/* implicit */int) arr_13 [i_7 + 1] [i_7 + 1])) << (((/* implicit */int) (unsigned char)0))));
            }
            for (unsigned short i_8 = 1; i_8 < 23; i_8 += 2) /* same iter space */
            {
                arr_35 [i_8] [i_8 + 1] [i_8 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [(short)4] [i_8 + 1] [i_8 - 1] [i_8 - 1] [i_8])) ? (((/* implicit */int) arr_15 [i_8] [i_8] [i_8 - 1])) : (((/* implicit */int) (signed char)56))));
                arr_36 [i_8] [i_8] [i_8] [i_1] = ((/* implicit */short) (unsigned char)248);
            }
            /* LoopSeq 1 */
            for (short i_9 = 0; i_9 < 24; i_9 += 4) 
            {
                /* LoopNest 2 */
                for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                {
                    for (unsigned long long int i_11 = 0; i_11 < 24; i_11 += 3) 
                    {
                        {
                            var_27 ^= ((/* implicit */short) ((13362843170643359780ULL) != (((/* implicit */unsigned long long int) var_4))));
                            arr_44 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_10 + 1])) << (((((/* implicit */int) arr_4 [i_10 + 1])) - (2827)))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                {
                    arr_47 [i_1] [i_12] = ((/* implicit */unsigned char) ((arr_19 [i_12 + 1] [i_12 + 1] [i_9] [i_12]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3915)))));
                    var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((((var_1) + (9223372036854775807LL))) << (((((arr_38 [i_12] [i_12 + 1] [i_12 + 1] [i_12]) + (1605286344))) - (48))))))));
                }
                /* LoopNest 2 */
                for (unsigned char i_13 = 0; i_13 < 24; i_13 += 4) 
                {
                    for (unsigned short i_14 = 0; i_14 < 24; i_14 += 4) 
                    {
                        {
                            arr_53 [21LL] [i_13] [i_9] [i_9] [i_3] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_16 [i_9] [i_3] [i_9] [i_9])) & (((/* implicit */int) arr_13 [i_1] [i_1]))));
                            arr_54 [i_1] [i_3] [i_9] [i_9] [(short)7] [i_14] = ((/* implicit */_Bool) (unsigned char)254);
                            arr_55 [i_1] [i_3] [i_1] [(unsigned short)20] [i_14] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)250))));
                            var_29 = ((/* implicit */unsigned int) arr_29 [i_9]);
                        }
                    } 
                } 
                var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)22093)) ? (var_16) : (((/* implicit */int) (unsigned char)237))));
            }
            var_31 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_46 [i_1] [i_3])))) - (-5601113332536241735LL)));
        }
        for (unsigned long long int i_15 = 4; i_15 < 23; i_15 += 3) /* same iter space */
        {
            arr_60 [i_1] [i_15] = ((/* implicit */long long int) -9);
            arr_61 [i_15] = ((/* implicit */int) (unsigned short)65535);
            /* LoopNest 3 */
            for (long long int i_16 = 3; i_16 < 21; i_16 += 3) 
            {
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    for (int i_18 = 0; i_18 < 24; i_18 += 4) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned short) arr_56 [22] [22] [22]);
                            arr_69 [i_1] [i_1] [i_1] [i_1] [i_1] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) (short)-23930))) << (((((/* implicit */int) (unsigned short)3968)) - (3960)))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_19 = 4; i_19 < 23; i_19 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned char i_20 = 4; i_20 < 22; i_20 += 4) 
            {
                for (long long int i_21 = 0; i_21 < 24; i_21 += 3) 
                {
                    for (int i_22 = 3; i_22 < 22; i_22 += 4) 
                    {
                        {
                            arr_80 [16LL] [i_20 - 4] [i_20] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned short) (!(arr_43 [i_1] [8ULL] [8ULL] [i_21] [i_20] [i_22])));
                            var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)13)) ? (((/* implicit */int) arr_43 [i_1] [i_20] [i_20] [i_19 - 2] [i_20] [i_1])) : (((/* implicit */int) arr_64 [i_1] [i_20] [i_1] [i_22]))));
                            var_34 = ((((/* implicit */_Bool) (unsigned short)63655)) && (((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned char)238))))));
                            arr_81 [i_1] [i_1] [i_19] [i_20 - 1] [i_21] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_39 [i_22 - 2] [i_22] [i_22 - 2] [20U] [i_22 + 1] [i_22])) ? (((/* implicit */int) arr_39 [i_22] [i_22] [(short)4] [i_22] [i_22 + 1] [i_22 + 1])) : (((/* implicit */int) arr_39 [i_22] [i_22] [i_22 - 3] [i_22] [i_22 - 1] [i_22]))));
                        }
                    } 
                } 
            } 
            var_35 = ((/* implicit */unsigned char) ((arr_15 [i_1] [i_1] [i_19 - 1]) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_9))));
        }
        /* LoopSeq 1 */
        for (unsigned char i_23 = 0; i_23 < 24; i_23 += 4) 
        {
            /* LoopSeq 4 */
            for (short i_24 = 0; i_24 < 24; i_24 += 4) /* same iter space */
            {
                var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_62 [i_1] [i_23] [i_24])) ? (((((/* implicit */_Bool) (unsigned short)61564)) ? (((/* implicit */int) arr_79 [i_1] [i_1] [i_23] [i_23])) : (((/* implicit */int) (unsigned char)11)))) : (arr_76 [i_1] [i_23] [i_24] [i_24] [i_1])));
                arr_88 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)34520)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)48071))));
            }
            for (short i_25 = 0; i_25 < 24; i_25 += 4) /* same iter space */
            {
                arr_93 [(unsigned short)8] [i_23] [i_25] = ((/* implicit */short) ((unsigned short) (~(((/* implicit */int) (_Bool)1)))));
                /* LoopNest 2 */
                for (unsigned long long int i_26 = 1; i_26 < 22; i_26 += 3) 
                {
                    for (unsigned long long int i_27 = 0; i_27 < 24; i_27 += 4) 
                    {
                        {
                            var_37 = ((/* implicit */_Bool) (unsigned char)1);
                            var_38 = ((/* implicit */long long int) ((((/* implicit */int) arr_94 [i_1] [i_26] [i_1] [i_1] [i_1] [i_1])) << (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (arr_45 [i_1]))))));
                            arr_98 [i_1] [i_23] [i_26] [8ULL] [i_27] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)100)) ? (9223372036854775807ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_91 [i_26 + 1])))));
                        }
                    } 
                } 
                arr_99 [i_1] [i_23] [i_1] = ((/* implicit */unsigned int) (+(arr_8 [i_25] [i_1])));
                var_39 = (_Bool)1;
            }
            for (unsigned short i_28 = 4; i_28 < 22; i_28 += 4) /* same iter space */
            {
                var_40 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) (short)30648))) ? (((/* implicit */int) arr_41 [i_1] [i_23])) : (((/* implicit */int) ((unsigned short) var_13)))));
                arr_104 [9LL] [(_Bool)1] [(unsigned short)12] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) (unsigned short)31289)))) ? (((/* implicit */int) ((arr_76 [i_1] [i_1] [i_1] [i_23] [i_28 - 1]) >= (((/* implicit */int) arr_29 [i_1]))))) : (var_13)));
            }
            for (unsigned short i_29 = 4; i_29 < 22; i_29 += 4) /* same iter space */
            {
                arr_108 [i_29 - 3] [i_23] [12U] |= ((/* implicit */short) ((((((/* implicit */int) (unsigned short)65190)) + (((/* implicit */int) var_14)))) * (((/* implicit */int) arr_20 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))));
                /* LoopNest 2 */
                for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                {
                    for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
                    {
                        {
                            arr_114 [i_1] [18ULL] [0LL] [i_30] [i_30] [18ULL] = ((/* implicit */_Bool) var_4);
                            arr_115 [i_1] [i_30] [i_1] = ((/* implicit */short) ((((/* implicit */int) var_12)) >= (((/* implicit */int) arr_79 [i_23] [i_29 + 1] [i_30] [i_31]))));
                        }
                    } 
                } 
                arr_116 [i_1] [i_29 - 4] = var_15;
                arr_117 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) 15866081329413154900ULL);
            }
            arr_118 [0] [0] [i_23] = ((/* implicit */unsigned short) var_16);
            arr_119 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) arr_15 [i_1] [i_23] [i_23])) - (((/* implicit */int) arr_15 [i_1] [i_1] [(unsigned short)14]))));
        }
        /* LoopNest 2 */
        for (unsigned int i_32 = 0; i_32 < 24; i_32 += 3) 
        {
            for (unsigned char i_33 = 1; i_33 < 22; i_33 += 3) 
            {
                {
                    var_41 = ((/* implicit */long long int) ((((/* implicit */int) arr_83 [i_1])) - (((/* implicit */int) arr_17 [i_1] [i_33 - 1] [i_33 + 2] [i_33 + 2]))));
                    /* LoopNest 2 */
                    for (short i_34 = 0; i_34 < 24; i_34 += 4) 
                    {
                        for (_Bool i_35 = 0; i_35 < 1; i_35 += 1) 
                        {
                            {
                                var_42 = ((/* implicit */unsigned short) min((var_42), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_4 [i_35])) : (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (unsigned short)34520))))))))));
                                arr_130 [i_33] [i_32] [i_35] [i_34] [20ULL] &= ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-34)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)5))) : (arr_75 [i_1] [(_Bool)1] [i_1] [i_1])));
                            }
                        } 
                    } 
                    var_43 *= var_5;
                    /* LoopSeq 1 */
                    for (unsigned long long int i_36 = 3; i_36 < 23; i_36 += 4) 
                    {
                        var_44 = ((/* implicit */unsigned char) var_6);
                        var_45 = ((/* implicit */unsigned short) ((((/* implicit */int) var_17)) >= (((/* implicit */int) arr_13 [i_33 + 1] [i_36 + 1]))));
                    }
                }
            } 
        } 
    }
    for (unsigned char i_37 = 0; i_37 < 24; i_37 += 3) /* same iter space */
    {
        arr_135 [i_37] [i_37] = ((/* implicit */unsigned short) arr_101 [i_37] [i_37] [i_37] [i_37]);
        arr_136 [i_37] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned int) max((((/* implicit */int) arr_91 [i_37])), (arr_38 [i_37] [i_37] [i_37] [i_37])))))));
        /* LoopNest 2 */
        for (_Bool i_38 = 0; i_38 < 1; i_38 += 1) 
        {
            for (unsigned short i_39 = 4; i_39 < 22; i_39 += 4) 
            {
                {
                    var_46 = ((/* implicit */long long int) (-((-(((/* implicit */int) arr_63 [i_39] [i_39] [i_39 - 3] [i_39]))))));
                    var_47 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)-34)), (((((/* implicit */int) arr_111 [i_37] [i_37] [i_39])) + (((/* implicit */int) arr_84 [i_37] [7LL] [7LL]))))))), (((((/* implicit */unsigned long long int) 7600477009506817064LL)) - (arr_95 [i_39] [12U] [i_39 - 2] [(short)16])))));
                }
            } 
        } 
    }
    for (int i_40 = 4; i_40 < 10; i_40 += 4) 
    {
        var_48 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_142 [i_40 - 3])) ? (var_0) : (((/* implicit */unsigned long long int) arr_142 [i_40 - 1])))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_91 [i_40 - 1])), (arr_142 [i_40 - 3]))))));
        arr_147 [i_40] |= ((/* implicit */short) ((((((/* implicit */int) (unsigned short)29053)) << (((/* implicit */int) arr_64 [i_40 - 1] [i_40] [i_40] [i_40 - 4])))) * (((/* implicit */int) ((arr_71 [i_40 - 1] [i_40 - 1]) && (arr_64 [i_40 - 3] [i_40] [i_40 - 1] [i_40 - 2]))))));
        var_49 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 5770500219635208031ULL))));
        var_50 = ((/* implicit */_Bool) min((var_50), (((/* implicit */_Bool) max((arr_31 [i_40 - 2] [i_40 - 2] [i_40 - 3] [i_40 - 4]), (min((((/* implicit */short) var_7)), (arr_31 [i_40] [i_40 - 2] [i_40 + 1] [i_40 - 3]))))))));
    }
    var_51 = ((/* implicit */short) var_11);
    var_52 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65535))))) ? (((((/* implicit */int) (unsigned short)28357)) ^ (((/* implicit */int) (unsigned char)15)))) : (((((/* implicit */int) var_15)) << (((/* implicit */int) var_15))))))), (var_1)));
    var_53 = ((/* implicit */long long int) var_0);
}
