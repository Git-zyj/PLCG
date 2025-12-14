/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134500
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
    var_20 = ((/* implicit */unsigned char) (_Bool)1);
    var_21 = var_19;
    var_22 = ((/* implicit */unsigned int) (_Bool)1);
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */long long int) (unsigned char)8);
        var_23 = ((((/* implicit */_Bool) (short)5608)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)173))) : (arr_0 [i_0]));
        /* LoopNest 3 */
        for (long long int i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                for (short i_3 = 0; i_3 < 16; i_3 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 1; i_4 < 12; i_4 += 2) 
                        {
                            var_24 *= ((/* implicit */unsigned long long int) -4227131190767221314LL);
                            arr_15 [i_4] [i_3] [i_0] [i_1 + 1] [i_0 + 1] = ((/* implicit */int) 2870678955517248693LL);
                        }
                        arr_16 [i_0] [i_1 + 1] [i_1 + 1] = -1471051082;
                        var_25 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)3390))));
                    }
                } 
            } 
        } 
    }
    for (int i_5 = 1; i_5 < 14; i_5 += 3) /* same iter space */
    {
        var_26 = ((/* implicit */short) (signed char)60);
        arr_20 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4014864872U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-51))) : (-1LL)));
        /* LoopSeq 3 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
        {
            var_27 = ((/* implicit */_Bool) (+(4227131190767221314LL)));
            var_28 = ((/* implicit */long long int) 4294967279U);
            /* LoopNest 2 */
            for (unsigned int i_7 = 0; i_7 < 17; i_7 += 1) 
            {
                for (unsigned short i_8 = 0; i_8 < 17; i_8 += 2) 
                {
                    {
                        var_29 = ((/* implicit */unsigned short) max((((/* implicit */int) arr_26 [i_7])), (arr_21 [i_5] [i_7])));
                        /* LoopSeq 3 */
                        for (long long int i_9 = 0; i_9 < 17; i_9 += 3) 
                        {
                            var_30 = ((/* implicit */long long int) (_Bool)0);
                            var_31 = ((/* implicit */short) min((max((((arr_27 [i_5] [i_6] [i_7] [i_9]) ? (((/* implicit */int) (unsigned short)11654)) : (((/* implicit */int) (_Bool)1)))), (arr_32 [i_5 - 1] [i_5 - 1] [i_5] [i_5] [i_5 + 3] [i_5 + 3] [i_5]))), (((/* implicit */int) (_Bool)1))));
                            var_32 = ((/* implicit */int) arr_27 [i_8] [i_8] [i_8] [i_8]);
                        }
                        for (long long int i_10 = 1; i_10 < 14; i_10 += 3) 
                        {
                            arr_36 [i_7] [i_6] [i_7] [i_6] [i_10] = ((/* implicit */int) (short)-5603);
                            var_33 -= max((max((((/* implicit */long long int) (signed char)121)), (max((((/* implicit */long long int) (_Bool)0)), (-4139021612819310346LL))))), (((/* implicit */long long int) arr_30 [i_5 + 1] [i_6])));
                            arr_37 [i_10 + 1] [i_8] [i_7] [i_6] [i_5] = ((/* implicit */int) 1955772396733522510LL);
                        }
                        /* vectorizable */
                        for (signed char i_11 = 0; i_11 < 17; i_11 += 3) 
                        {
                            arr_40 [i_5] [i_11] [i_7] [i_8] [i_6] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_17 [i_5 - 1]))));
                            arr_41 [i_5 + 1] [i_11] = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)149))));
                            var_34 = ((((/* implicit */_Bool) -1955772396733522500LL)) ? (((/* implicit */int) (signed char)16)) : (((/* implicit */int) arr_35 [i_5] [i_5 + 1] [i_6] [i_11])));
                            arr_42 [i_5] [i_11] [i_7] [i_7] [i_8] [i_11] = 7947955649158747250LL;
                        }
                    }
                } 
            } 
            arr_43 [i_5] [i_6] = ((/* implicit */_Bool) (signed char)30);
        }
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_13 = 0; i_13 < 17; i_13 += 3) 
            {
                var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) 1374611688))));
                var_36 -= (_Bool)1;
                /* LoopSeq 2 */
                for (long long int i_14 = 0; i_14 < 17; i_14 += 1) 
                {
                    arr_54 [i_14] [i_12] [8LL] [i_12] |= ((/* implicit */long long int) -1165153976);
                    var_37 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (short)-903)), (((((/* implicit */_Bool) arr_34 [i_5] [i_12] [i_12] [i_5 + 1] [i_13])) ? (arr_29 [i_5] [i_5] [i_5 + 2]) : (((/* implicit */unsigned long long int) arr_30 [i_5 - 1] [i_5 + 2]))))));
                }
                for (long long int i_15 = 0; i_15 < 17; i_15 += 3) 
                {
                    var_38 = ((/* implicit */int) (signed char)-31);
                    var_39 = ((/* implicit */int) (signed char)31);
                    var_40 = ((/* implicit */_Bool) (signed char)-35);
                    var_41 ^= ((/* implicit */int) arr_44 [i_12] [i_15]);
                }
                var_42 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)1)), (6895296634067495449ULL))))));
                var_43 += ((/* implicit */unsigned char) (~((+(3133253638U)))));
            }
            /* LoopSeq 3 */
            for (int i_16 = 3; i_16 < 16; i_16 += 4) 
            {
                arr_60 [i_16] [i_12] [i_16] = ((/* implicit */long long int) 14352599165088934232ULL);
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_17 = 4; i_17 < 16; i_17 += 4) 
                {
                    /* LoopSeq 4 */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        var_44 = ((/* implicit */short) arr_65 [i_5] [i_12] [i_16] [i_17] [i_18]);
                        var_45 |= ((/* implicit */long long int) (_Bool)1);
                        var_46 = ((/* implicit */short) (_Bool)1);
                        arr_66 [i_5 - 1] [i_17] [i_5] [i_5 + 3] [i_5 + 2] |= ((/* implicit */unsigned char) -7593171755069721902LL);
                    }
                    for (short i_19 = 2; i_19 < 16; i_19 += 3) 
                    {
                        var_47 = (_Bool)1;
                        var_48 = ((/* implicit */short) 2013265920);
                        var_49 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_29 [i_5 + 1] [i_19] [i_19 - 1])) ? (((/* implicit */int) (signed char)-22)) : (((/* implicit */int) (_Bool)1))));
                        var_50 = ((/* implicit */unsigned short) (((_Bool)1) ? (((((/* implicit */_Bool) 8147682184915616555ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_57 [i_5] [i_16 + 1] [i_17] [i_19 + 1])))) : (-1390369165)));
                    }
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        arr_73 [i_5] [i_12] [i_16] [i_17 - 4] [i_20] [i_16] [i_5] = ((/* implicit */unsigned short) 18446744073709551599ULL);
                        arr_74 [i_5] [i_5 - 1] [i_12] [i_12] [i_16] [i_16] [i_20] = ((((/* implicit */_Bool) arr_22 [i_5 - 1] [i_16 - 3] [i_17 - 2])) ? (-7222483286443756440LL) : (arr_22 [i_5 + 2] [i_16 - 3] [i_17 - 2]));
                    }
                    for (unsigned short i_21 = 1; i_21 < 15; i_21 += 4) 
                    {
                        arr_77 [i_5] [i_12] [i_16] [i_17] [i_17] [i_21 - 1] = ((/* implicit */unsigned char) arr_32 [i_21] [i_17] [i_17 - 1] [i_16] [i_12] [i_5] [i_5]);
                        var_51 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)48146))));
                    }
                    var_52 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 3133253642U))));
                }
                /* LoopNest 2 */
                for (long long int i_22 = 0; i_22 < 17; i_22 += 2) 
                {
                    for (signed char i_23 = 0; i_23 < 17; i_23 += 3) 
                    {
                        {
                            var_53 = ((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)3)));
                            var_54 = ((/* implicit */int) (-(min((((/* implicit */long long int) (_Bool)1)), (-2870678955517248694LL)))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (long long int i_24 = 0; i_24 < 17; i_24 += 2) 
            {
                /* LoopSeq 3 */
                for (long long int i_25 = 0; i_25 < 17; i_25 += 2) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                    {
                        arr_91 [i_5] [i_5] [i_5] [i_5 + 2] [i_5] [i_26] = ((/* implicit */unsigned short) (_Bool)1);
                        arr_92 [i_26] = (_Bool)1;
                        arr_93 [i_26] [i_26] [i_26] [i_26] [i_26] [i_26] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1686385943905039090LL)) ? (((/* implicit */unsigned long long int) -2870678955517248703LL)) : ((+(1073740800ULL)))));
                    }
                    for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                    {
                        arr_96 [i_5 + 1] [i_5 + 1] [i_24] [i_24] [i_25] [i_27] = ((/* implicit */int) (~(725035070U)));
                        var_55 = ((/* implicit */unsigned short) arr_45 [i_5]);
                        arr_97 [i_24] [i_24] [i_24] [i_24] [i_24] = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)65505))));
                    }
                    var_56 += ((/* implicit */unsigned char) -9028420095444272224LL);
                }
                for (unsigned char i_28 = 4; i_28 < 15; i_28 += 1) 
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_29 = 0; i_29 < 17; i_29 += 2) 
                    {
                        var_57 = -75852574;
                        arr_103 [i_5] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */long long int) arr_32 [i_5] [i_12] [i_5 + 3] [i_28 - 3] [i_29] [i_29] [i_5])) : (-2870678955517248688LL)));
                        arr_104 [i_5 + 2] [i_5] [i_5] [i_5 - 1] [i_5 + 3] [i_5] [i_5] = ((/* implicit */long long int) (_Bool)1);
                        arr_105 [i_5] [i_12] [i_12] [i_24] [i_28] [i_29] = ((/* implicit */short) (_Bool)1);
                    }
                    for (short i_30 = 0; i_30 < 17; i_30 += 1) 
                    {
                        var_58 = arr_80 [i_28] [i_28];
                        arr_108 [i_5 + 2] [i_12] [i_24] [i_30] [i_30] = ((/* implicit */int) (((_Bool)0) ? (arr_58 [i_5 + 1] [i_30] [i_24] [i_5 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-3)))));
                        var_59 = ((/* implicit */long long int) (_Bool)1);
                        var_60 = ((/* implicit */int) arr_88 [i_5 + 3] [i_30] [i_24] [i_28] [i_30] [i_12]);
                    }
                    for (long long int i_31 = 1; i_31 < 16; i_31 += 3) 
                    {
                        arr_111 [i_28] [i_24] [i_28] [i_28] &= ((/* implicit */signed char) arr_38 [i_5 + 1] [i_12] [i_24] [i_12] [i_31]);
                        var_61 = arr_55 [i_5] [i_5] [i_5] [i_31] [i_5 - 1] [i_5];
                    }
                    for (long long int i_32 = 2; i_32 < 15; i_32 += 2) 
                    {
                        var_62 = (+(((/* implicit */int) (_Bool)1)));
                        var_63 += ((/* implicit */_Bool) (short)0);
                        var_64 = ((/* implicit */int) max((var_64), ((~(((/* implicit */int) arr_38 [i_28] [i_28] [i_28] [i_28] [i_28 - 1]))))));
                        var_65 = ((/* implicit */unsigned int) 1845380369330921059LL);
                    }
                    var_66 = ((/* implicit */long long int) ((((/* implicit */_Bool) -1657830428)) ? (((/* implicit */int) (_Bool)1)) : (967916970)));
                }
                for (short i_33 = 1; i_33 < 14; i_33 += 4) 
                {
                    arr_118 [i_24] [i_24] [i_24] [i_5 + 1] [i_33] = ((/* implicit */int) (unsigned short)65480);
                    var_67 *= ((/* implicit */_Bool) (signed char)-63);
                    /* LoopSeq 1 */
                    for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) 
                    {
                        var_68 = ((/* implicit */_Bool) (unsigned short)65535);
                        arr_122 [i_5 + 2] [i_5 + 2] [i_24] [i_33] [i_33] = ((/* implicit */unsigned short) arr_51 [i_34] [i_33] [i_33] [i_5]);
                    }
                    var_69 = ((/* implicit */_Bool) 1845380369330921059LL);
                    var_70 |= ((/* implicit */unsigned int) 2870678955517248698LL);
                }
                /* LoopNest 2 */
                for (short i_35 = 4; i_35 < 15; i_35 += 1) 
                {
                    for (int i_36 = 2; i_36 < 16; i_36 += 4) 
                    {
                        {
                            arr_127 [i_5] [i_12] [i_35] [i_35] [i_35] [i_36 - 1] = ((((/* implicit */_Bool) (short)-29478)) ? (2147483645) : (((/* implicit */int) (unsigned short)65521)));
                            arr_128 [i_5 + 1] [i_5] [i_5] [i_5] [i_35] [i_5] = ((/* implicit */signed char) arr_79 [i_5] [i_12] [i_35] [i_24]);
                            var_71 = -2870678955517248682LL;
                            var_72 = ((/* implicit */unsigned int) -8528647665520014820LL);
                            var_73 = ((/* implicit */unsigned long long int) -1845380369330921045LL);
                        }
                    } 
                } 
            }
            for (unsigned long long int i_37 = 0; i_37 < 17; i_37 += 3) 
            {
                var_74 = ((/* implicit */long long int) arr_61 [i_5] [i_5 - 1] [i_12] [i_37]);
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_38 = 0; i_38 < 17; i_38 += 4) 
                {
                    arr_136 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 + 2] = ((/* implicit */unsigned char) (_Bool)0);
                    var_75 = ((/* implicit */short) (-2147483647 - 1));
                    arr_137 [i_5 + 3] [i_5 + 1] [i_5] [i_5] = ((/* implicit */long long int) (~(((/* implicit */int) arr_120 [i_38]))));
                }
                /* vectorizable */
                for (short i_39 = 2; i_39 < 14; i_39 += 1) 
                {
                    arr_141 [i_12] [i_12] = ((/* implicit */unsigned int) (_Bool)1);
                    var_76 += ((/* implicit */long long int) 375703591);
                    arr_142 [i_5] [i_5] [i_5] [i_5] [i_5] [i_37] |= ((/* implicit */signed char) 2428846306700848654ULL);
                    var_77 ^= (_Bool)1;
                }
                arr_143 [i_12] = ((/* implicit */long long int) 2824181600U);
                arr_144 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) max((-1729635866), (((((/* implicit */_Bool) arr_132 [i_12] [i_5 + 2] [i_5 + 1] [i_5 + 3] [i_5 + 1])) ? (495959710) : (((/* implicit */int) (short)-31962))))));
            }
        }
        /* vectorizable */
        for (_Bool i_40 = 0; i_40 < 1; i_40 += 1) /* same iter space */
        {
            arr_148 [i_40] [i_5 - 1] = ((/* implicit */long long int) 7374238417137869490ULL);
            arr_149 [i_5 - 1] [i_40] = ((/* implicit */int) (_Bool)1);
        }
    }
    /* vectorizable */
    for (int i_41 = 1; i_41 < 14; i_41 += 3) /* same iter space */
    {
        arr_152 [i_41] |= ((/* implicit */int) 2870678955517248698LL);
        /* LoopNest 2 */
        for (int i_42 = 2; i_42 < 15; i_42 += 2) 
        {
            for (unsigned short i_43 = 4; i_43 < 16; i_43 += 4) 
            {
                {
                    arr_158 [i_41] [i_42] [i_43] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)44329)) ? (arr_33 [i_41] [i_41 + 3] [i_41] [i_41 + 1] [i_41 - 1] [i_42 + 2] [i_43 + 1]) : (arr_33 [i_41] [i_41] [i_41] [i_41 + 1] [i_41 + 1] [i_42 - 1] [i_43 + 1])));
                    arr_159 [i_42] = ((/* implicit */short) arr_48 [i_42 - 2] [i_43 + 1]);
                    var_78 ^= ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
                    /* LoopSeq 3 */
                    for (short i_44 = 0; i_44 < 17; i_44 += 3) 
                    {
                        var_79 = ((/* implicit */int) arr_51 [i_41] [i_42 + 1] [i_44] [i_44]);
                        /* LoopSeq 4 */
                        for (_Bool i_45 = 0; i_45 < 1; i_45 += 1) 
                        {
                            var_80 = ((/* implicit */int) arr_65 [i_41 - 1] [i_41 + 1] [i_41 + 1] [i_41 + 1] [i_41]);
                            var_81 -= ((/* implicit */_Bool) 2824181600U);
                        }
                        for (unsigned long long int i_46 = 0; i_46 < 17; i_46 += 3) 
                        {
                            var_82 = ((/* implicit */short) min((var_82), (((/* implicit */short) (unsigned short)1))));
                            var_83 += ((/* implicit */long long int) arr_23 [i_41 + 3] [i_41]);
                        }
                        for (unsigned int i_47 = 0; i_47 < 17; i_47 += 2) /* same iter space */
                        {
                            var_84 = ((/* implicit */_Bool) 1889205434);
                            var_85 = (((_Bool)1) ? (arr_18 [i_44]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)1)))))));
                            var_86 = ((/* implicit */short) ((((/* implicit */_Bool) arr_150 [i_41])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_41] [i_41] [i_41] [i_41 + 3]))) : (2428846306700848674ULL)));
                            var_87 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 11072505656571682126ULL)) ? (3957159635U) : (((/* implicit */unsigned int) -1679004885))))) ? (((/* implicit */int) (unsigned short)65534)) : (((/* implicit */int) (_Bool)1))));
                            arr_169 [i_41] [i_47] [i_47] |= ((/* implicit */unsigned long long int) (signed char)118);
                        }
                        for (unsigned int i_48 = 0; i_48 < 17; i_48 += 2) /* same iter space */
                        {
                            var_88 = ((/* implicit */long long int) max((var_88), (((/* implicit */long long int) 28U))));
                            arr_173 [i_44] [i_42 + 2] [i_42] [i_42] [i_42 + 1] = ((/* implicit */short) arr_70 [i_41 + 2] [i_41 + 1] [i_41 + 1] [i_41 + 3] [i_43 - 2]);
                            arr_174 [i_41 + 1] [i_44] [i_48] = ((/* implicit */short) 2842603382329603152LL);
                        }
                        var_89 ^= ((/* implicit */int) 1573484722323127927ULL);
                    }
                    for (unsigned char i_49 = 3; i_49 < 16; i_49 += 1) 
                    {
                        var_90 = ((/* implicit */unsigned long long int) arr_21 [i_49 - 2] [i_43 - 4]);
                        /* LoopSeq 2 */
                        for (_Bool i_50 = 1; i_50 < 1; i_50 += 1) 
                        {
                            var_91 &= ((/* implicit */_Bool) arr_59 [i_42] [i_41 - 1]);
                            var_92 = ((/* implicit */int) arr_176 [i_41] [i_41] [i_41] [i_41 + 1]);
                            var_93 = ((/* implicit */long long int) 1212235127);
                            var_94 *= ((((/* implicit */_Bool) 254607374)) ? (((/* implicit */int) arr_85 [i_41 + 2] [i_42 - 2] [i_41 + 2] [i_43 - 3] [i_43 - 2])) : (1212235134));
                        }
                        for (int i_51 = 0; i_51 < 17; i_51 += 2) 
                        {
                            arr_184 [i_49] = ((/* implicit */unsigned long long int) (short)-5639);
                            var_95 = (+(((/* implicit */int) arr_82 [i_41 + 2])));
                        }
                    }
                    for (unsigned char i_52 = 0; i_52 < 17; i_52 += 3) 
                    {
                        var_96 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_35 [i_41] [i_41 + 1] [i_41 + 1] [i_41 + 3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_35 [i_41] [i_41 + 3] [i_41 + 1] [i_41 + 1]))));
                        arr_187 [i_52] [i_42] [i_43 - 4] &= ((/* implicit */unsigned long long int) (signed char)105);
                    }
                }
            } 
        } 
    }
    var_97 *= ((/* implicit */_Bool) (signed char)-23);
}
