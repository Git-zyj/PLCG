/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123116
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
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_4)) >= (((/* implicit */int) var_7)))) ? (((/* implicit */int) ((short) var_14))) : ((((_Bool)1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)-3))))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6)))) < (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) var_3))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_3 [(signed char)8] = ((/* implicit */signed char) (-(((/* implicit */int) (short)4095))));
        var_19 = ((/* implicit */_Bool) ((short) min(((~(((/* implicit */int) var_6)))), (((/* implicit */int) (!((_Bool)1)))))));
        var_20 = ((/* implicit */signed char) var_5);
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            arr_8 [(short)2] = ((signed char) max(((~(((/* implicit */int) (short)-6381)))), (((((/* implicit */int) arr_2 [i_0] [i_1])) / (((/* implicit */int) (_Bool)1))))));
            /* LoopSeq 3 */
            for (short i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) arr_6 [i_0]))));
                /* LoopSeq 1 */
                for (short i_3 = 2; i_3 < 14; i_3 += 4) 
                {
                    var_22 |= var_8;
                    /* LoopSeq 1 */
                    for (signed char i_4 = 0; i_4 < 16; i_4 += 4) 
                    {
                        var_23 = var_16;
                        arr_17 [i_0] = ((/* implicit */_Bool) min((((min(((_Bool)1), ((_Bool)1))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)32767)))), (((/* implicit */int) (signed char)40))));
                        var_24 = ((/* implicit */_Bool) ((((/* implicit */int) min((var_14), (((signed char) var_9))))) + (((/* implicit */int) arr_12 [i_0] [i_1] [(_Bool)0] [(short)13] [i_4] [i_4]))));
                    }
                    var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) (+(((/* implicit */int) ((short) (short)511))))))));
                    arr_18 [i_0] [i_0] [i_0] [i_0] [(short)12] = ((/* implicit */_Bool) var_9);
                }
            }
            for (short i_5 = 0; i_5 < 16; i_5 += 4) 
            {
                arr_23 [(signed char)12] [(signed char)12] [(signed char)12] = ((/* implicit */_Bool) (~(((/* implicit */int) ((short) var_1)))));
                arr_24 [i_0] [i_1] [(_Bool)1] = ((arr_16 [i_0] [i_1]) && (((_Bool) (signed char)-3)));
            }
            for (short i_6 = 0; i_6 < 16; i_6 += 2) 
            {
                var_26 = ((/* implicit */signed char) ((max((arr_19 [i_6]), (var_6))) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_19 [i_6])))))));
                /* LoopSeq 3 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    arr_29 [i_7] [(signed char)14] [i_1] [(signed char)14] [i_0] = var_10;
                    /* LoopSeq 4 */
                    for (signed char i_8 = 2; i_8 < 15; i_8 += 4) 
                    {
                        var_27 = ((/* implicit */_Bool) (short)-11830);
                        var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) max((((/* implicit */int) max((max((var_10), (var_6))), ((_Bool)1)))), ((~(((/* implicit */int) max((var_9), ((signed char)-66)))))))))));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        arr_36 [(_Bool)1] [(_Bool)1] [i_7] [(_Bool)1] [i_1] [i_0] = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_10 [i_1] [i_6] [i_1] [i_9])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_6))))));
                        arr_37 [i_9] [i_1] [i_0] [i_7] [i_9] = ((/* implicit */signed char) min(((~(((/* implicit */int) var_17)))), (((/* implicit */int) (_Bool)1))));
                        var_29 ^= ((/* implicit */signed char) ((short) max((((/* implicit */short) arr_2 [i_6] [i_0])), (arr_22 [i_0] [i_1]))));
                    }
                    /* vectorizable */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_30 *= ((/* implicit */_Bool) arr_39 [i_0] [i_1] [(_Bool)1] [(short)14] [i_10]);
                        var_31 = ((/* implicit */_Bool) arr_9 [i_6] [(_Bool)1] [i_7]);
                        var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) var_2))));
                    }
                    for (short i_11 = 0; i_11 < 16; i_11 += 3) 
                    {
                        var_33 = ((/* implicit */short) min(((_Bool)1), (arr_2 [i_6] [i_1])));
                        var_34 *= ((/* implicit */short) max((((arr_16 [i_7] [i_7]) ? (((/* implicit */int) (short)-32766)) : (((/* implicit */int) (short)-30920)))), (((/* implicit */int) (short)-32761))));
                    }
                    arr_42 [(_Bool)1] [i_7] [i_6] [i_1] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_20 [(signed char)15] [i_1] [i_7])) | (((((/* implicit */int) var_14)) * (((/* implicit */int) var_13)))))))));
                }
                for (signed char i_12 = 0; i_12 < 16; i_12 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                    {
                        var_35 *= ((/* implicit */_Bool) min((var_1), (((/* implicit */signed char) var_3))));
                        arr_49 [i_6] [i_0] [i_6] = ((/* implicit */_Bool) ((((((/* implicit */int) ((_Bool) var_2))) << (((((/* implicit */int) arr_25 [i_0] [i_1] [i_6] [i_1])) + (7050))))) | (((/* implicit */int) arr_41 [(_Bool)1] [(_Bool)1] [i_6] [i_12] [i_6] [i_0] [i_13]))));
                        arr_50 [i_0] [i_1] [i_6] [i_12] [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) min(((short)4609), (((/* implicit */short) arr_38 [i_0] [(_Bool)1] [(_Bool)1] [i_13 - 1])))))))) ? (((/* implicit */int) arr_46 [i_13 - 1] [(_Bool)1] [i_0] [i_0] [i_0])) : ((-(((((/* implicit */_Bool) arr_44 [i_12] [i_12] [i_12] [i_12])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)125))))))));
                    }
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        var_36 = ((/* implicit */_Bool) ((((/* implicit */int) min(((signed char)80), ((signed char)-119)))) / (((/* implicit */int) arr_15 [i_12] [i_12] [i_12] [(signed char)13] [i_1] [i_14] [i_1]))));
                        var_37 *= ((/* implicit */_Bool) arr_44 [i_6] [i_6] [i_6] [i_6]);
                    }
                    arr_53 [i_12] [i_6] [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) max((arr_34 [i_6] [i_1] [(short)11]), (((/* implicit */short) arr_11 [i_0] [i_0]))))) - (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (short)32758)))))))));
                    arr_54 [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) ((((/* implicit */int) arr_43 [i_0] [i_1] [i_6] [i_12])) >= (((((/* implicit */int) var_6)) | (((/* implicit */int) var_9))))))) : (((((/* implicit */_Bool) arr_27 [i_1] [i_6] [i_12])) ? ((~(((/* implicit */int) var_17)))) : (((((/* implicit */_Bool) arr_43 [(short)0] [(short)0] [(short)0] [(_Bool)1])) ? (((/* implicit */int) arr_52 [i_12] [i_12] [i_0] [i_1] [i_0] [i_0])) : (((/* implicit */int) (_Bool)0))))))));
                    /* LoopSeq 1 */
                    for (signed char i_15 = 0; i_15 < 16; i_15 += 3) 
                    {
                        var_38 = ((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), ((~(((/* implicit */int) var_2))))));
                        arr_57 [i_0] [(_Bool)1] [i_6] [i_12] [i_15] = var_0;
                        var_39 -= ((/* implicit */_Bool) ((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_44 [i_0] [i_1] [i_6] [i_6])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (short)-19467)))))) + ((~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)-2)) : (((/* implicit */int) var_7))))))));
                    }
                    var_40 |= ((/* implicit */_Bool) min(((signed char)-7), (((/* implicit */signed char) ((_Bool) arr_11 [i_12] [i_1])))));
                }
                for (signed char i_16 = 0; i_16 < 16; i_16 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        var_41 = (signed char)17;
                        var_42 = ((/* implicit */short) (+(((/* implicit */int) arr_38 [i_1] [i_6] [i_16] [i_17]))));
                    }
                    arr_64 [i_0] [(_Bool)1] [i_16] [i_16] = ((/* implicit */_Bool) ((signed char) arr_21 [i_0]));
                    var_43 = ((/* implicit */short) ((_Bool) max((((/* implicit */short) var_15)), (arr_56 [i_0]))));
                }
                arr_65 [i_0] [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */int) min((((/* implicit */short) arr_40 [i_0] [i_0] [i_0] [i_1] [i_6])), (var_17)))), (((((/* implicit */int) arr_60 [i_0] [i_1] [i_1] [i_0])) << (((/* implicit */int) arr_60 [(signed char)0] [i_6] [i_6] [i_6]))))));
            }
        }
        /* vectorizable */
        for (signed char i_18 = 0; i_18 < 16; i_18 += 3) /* same iter space */
        {
            var_44 = ((/* implicit */short) ((_Bool) arr_61 [i_18]));
            arr_68 [i_0] [i_0] [(_Bool)1] = arr_46 [i_0] [i_0] [i_0] [i_0] [i_18];
            var_45 = ((/* implicit */short) ((signed char) arr_2 [i_0] [i_18]));
            arr_69 [i_0] [i_0] [(_Bool)1] = ((/* implicit */_Bool) arr_5 [i_0] [(signed char)12]);
        }
        /* vectorizable */
        for (signed char i_19 = 0; i_19 < 16; i_19 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                /* LoopSeq 2 */
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    arr_77 [i_19] [i_0] [i_19] [i_20] [(signed char)0] [i_21] = ((/* implicit */_Bool) ((((/* implicit */int) var_15)) - (((/* implicit */int) arr_5 [i_19] [i_21]))));
                    var_46 *= ((/* implicit */short) (+(((/* implicit */int) ((short) (signed char)54)))));
                    var_47 = ((/* implicit */short) (~(((/* implicit */int) (signed char)104))));
                    arr_78 [i_19] [i_19] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_2 [(_Bool)1] [i_0])) | (((/* implicit */int) arr_2 [i_0] [i_0]))));
                    arr_79 [i_0] [i_19] [i_19] [i_0] [i_20] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)-7))))) ? ((-(((/* implicit */int) (short)-16705)))) : (((/* implicit */int) arr_31 [i_0] [i_19] [i_20] [i_19] [i_20] [i_21]))));
                }
                for (_Bool i_22 = 0; i_22 < 0; i_22 += 1) 
                {
                    var_48 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_39 [i_0] [i_22 + 1] [i_0] [i_22] [i_22])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_39 [i_20] [i_22 + 1] [(_Bool)0] [i_20] [i_20]))));
                    /* LoopSeq 2 */
                    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                    {
                        var_49 = ((((/* implicit */int) (signed char)-1)) >= (((/* implicit */int) (signed char)-119)));
                        var_50 = ((/* implicit */_Bool) max((var_50), (((/* implicit */_Bool) (signed char)-64))));
                        var_51 = ((/* implicit */signed char) min((var_51), ((signed char)19)));
                        arr_88 [i_22 + 1] [i_19] [i_19] [i_0] = ((/* implicit */signed char) ((_Bool) ((_Bool) var_12)));
                    }
                    for (signed char i_24 = 0; i_24 < 16; i_24 += 4) 
                    {
                        var_52 = ((/* implicit */short) arr_52 [i_22 + 1] [i_22 + 1] [i_22 + 1] [i_22 + 1] [i_22 + 1] [i_22 + 1]);
                        var_53 = ((/* implicit */signed char) ((short) (~(((/* implicit */int) (signed char)-80)))));
                        var_54 = ((/* implicit */_Bool) arr_55 [i_24] [i_22] [(signed char)9] [i_20] [i_19] [i_19] [i_0]);
                        arr_91 [i_0] [i_19] [i_22] [i_24] = ((signed char) ((arr_89 [i_19] [i_19]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)-8))));
                    }
                    /* LoopSeq 2 */
                    for (short i_25 = 0; i_25 < 16; i_25 += 2) 
                    {
                        arr_95 [i_19] [i_19] [i_19] [i_0] = ((/* implicit */short) (-(((/* implicit */int) ((short) (short)-27211)))));
                        var_55 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0] [(short)6])))))));
                    }
                    for (short i_26 = 0; i_26 < 16; i_26 += 4) 
                    {
                        var_56 = ((/* implicit */short) var_8);
                        var_57 = ((/* implicit */_Bool) ((((/* implicit */int) (short)-344)) + (((/* implicit */int) var_6))));
                    }
                }
                /* LoopSeq 2 */
                for (signed char i_27 = 0; i_27 < 16; i_27 += 1) 
                {
                    var_58 = ((/* implicit */_Bool) ((((((/* implicit */int) var_9)) - (((/* implicit */int) arr_96 [i_27] [i_20] [i_19] [i_0] [i_0] [i_0] [i_0])))) - (((/* implicit */int) arr_28 [i_0] [i_0] [i_20] [i_27]))));
                    var_59 *= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (short)-30337)) ? (((/* implicit */int) (short)-21963)) : (((/* implicit */int) (short)-1575))))));
                    /* LoopSeq 1 */
                    for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                    {
                        var_60 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_35 [i_0] [i_19] [i_0] [i_27] [i_28] [(short)0] [i_19]))));
                        arr_102 [i_27] [(_Bool)1] [(_Bool)1] [i_0] |= ((/* implicit */short) ((((arr_80 [i_0] [i_19] [i_20] [i_0]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_86 [i_0] [i_19] [(_Bool)1] [i_0] [i_28] [i_27] [i_19])))) << (((((/* implicit */int) var_8)) % (((/* implicit */int) arr_92 [i_0] [i_19] [i_19] [i_20] [(signed char)0] [i_28]))))));
                    }
                }
                for (signed char i_29 = 0; i_29 < 16; i_29 += 1) 
                {
                    var_61 = (signed char)-8;
                    /* LoopSeq 1 */
                    for (signed char i_30 = 1; i_30 < 15; i_30 += 3) 
                    {
                        arr_107 [i_0] [i_0] [(_Bool)1] [i_29] [i_30 - 1] &= ((/* implicit */signed char) (short)-1006);
                        var_62 = var_1;
                        arr_108 [i_19] [i_19] = var_10;
                    }
                    /* LoopSeq 4 */
                    for (_Bool i_31 = 1; i_31 < 1; i_31 += 1) 
                    {
                        var_63 = ((/* implicit */short) ((((/* implicit */_Bool) (short)192)) ? (((/* implicit */int) arr_70 [i_31 - 1] [i_31 - 1])) : (((/* implicit */int) (signed char)58))));
                        var_64 = ((/* implicit */short) ((((/* implicit */int) var_11)) < (((/* implicit */int) var_14))));
                        arr_113 [i_0] [i_31 - 1] [i_20] [i_29] [(short)14] [i_19] [i_29] = ((/* implicit */short) var_14);
                    }
                    for (signed char i_32 = 4; i_32 < 14; i_32 += 1) 
                    {
                        var_65 *= arr_35 [i_0] [i_19] [i_20] [i_20] [i_20] [i_29] [(short)10];
                        var_66 = ((/* implicit */signed char) arr_26 [i_0] [i_0] [i_0]);
                        var_67 ^= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (signed char)-33)) ? (((/* implicit */int) (short)13827)) : (((/* implicit */int) (signed char)(-127 - 1)))))));
                    }
                    for (signed char i_33 = 0; i_33 < 16; i_33 += 3) /* same iter space */
                    {
                        var_68 = ((((/* implicit */int) var_5)) >= (((/* implicit */int) arr_15 [i_0] [i_19] [i_19] [i_20] [i_0] [i_19] [i_33])));
                        arr_120 [i_19] [i_19] [i_20] [(_Bool)1] [i_19] [i_33] = var_8;
                        arr_121 [i_0] [i_0] [i_0] [i_0] [i_19] = ((/* implicit */signed char) (-(((/* implicit */int) var_0))));
                    }
                    for (signed char i_34 = 0; i_34 < 16; i_34 += 3) /* same iter space */
                    {
                        arr_124 [i_20] [(short)8] [(short)8] [i_29] [(_Bool)0] &= ((/* implicit */_Bool) ((((/* implicit */int) (signed char)4)) * (((/* implicit */int) (_Bool)0))));
                        var_69 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_12))));
                        var_70 = ((/* implicit */signed char) ((var_3) ? (((/* implicit */int) ((_Bool) var_0))) : ((~(((/* implicit */int) var_17))))));
                    }
                    arr_125 [i_0] [i_19] [i_0] [i_19] = arr_48 [i_0] [i_0] [i_0] [i_19] [i_20] [i_29] [i_29];
                    var_71 = ((/* implicit */signed char) (~((~(((/* implicit */int) (short)31293))))));
                }
                arr_126 [i_20] [i_20] [i_19] = ((short) arr_123 [i_0] [i_0] [i_0] [i_0] [i_19]);
                arr_127 [i_19] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_20] [i_19] [i_20] [i_0] [i_0] [i_19] [i_20])) ? (((/* implicit */int) arr_89 [i_19] [i_20])) : (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_112 [i_0] [(_Bool)1] [i_20] [i_0])) : (((/* implicit */int) (signed char)-1)))) : (((/* implicit */int) ((signed char) arr_119 [i_19] [i_19] [i_20] [i_20] [i_0] [i_0] [i_20])))));
                /* LoopSeq 2 */
                for (_Bool i_35 = 1; i_35 < 1; i_35 += 1) 
                {
                    /* LoopSeq 2 */
                    for (short i_36 = 0; i_36 < 16; i_36 += 4) 
                    {
                        var_72 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)30)) - (((/* implicit */int) var_3))));
                        arr_134 [i_0] [(signed char)14] [i_19] [(signed char)14] [(_Bool)0] = (_Bool)1;
                        arr_135 [i_19] [i_19] = ((/* implicit */short) var_0);
                    }
                    for (short i_37 = 4; i_37 < 15; i_37 += 2) 
                    {
                        arr_138 [i_0] [i_0] [i_20] [i_19] [i_0] = ((/* implicit */_Bool) var_12);
                        var_73 = ((/* implicit */signed char) var_3);
                    }
                    /* LoopSeq 1 */
                    for (signed char i_38 = 2; i_38 < 14; i_38 += 1) 
                    {
                        var_74 = ((/* implicit */signed char) ((((/* implicit */int) (short)-21678)) >= ((-(((/* implicit */int) (_Bool)1))))));
                        arr_142 [(signed char)5] [i_38] [i_20] [i_35] [i_38] [i_19] [i_19] = ((/* implicit */_Bool) ((((/* implicit */int) (short)17875)) << (((((/* implicit */int) (short)32762)) - (32762)))));
                    }
                    var_75 = ((/* implicit */short) ((_Bool) (short)7309));
                }
                for (signed char i_39 = 2; i_39 < 13; i_39 += 3) 
                {
                    var_76 -= ((/* implicit */signed char) ((((/* implicit */int) (short)3649)) < (((/* implicit */int) (signed char)3))));
                    /* LoopSeq 3 */
                    for (short i_40 = 0; i_40 < 16; i_40 += 1) 
                    {
                        arr_149 [i_40] [i_39] [i_19] [i_19] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) ((short) arr_73 [i_19] [i_19] [i_20] [i_0])))));
                        arr_150 [i_0] [i_0] [i_0] [i_19] = ((/* implicit */signed char) (short)248);
                        arr_151 [(_Bool)1] [(short)15] [i_20] [i_19] [i_20] [i_20] [i_20] = ((/* implicit */_Bool) ((signed char) arr_75 [i_0] [i_0] [i_39 + 3] [i_39]));
                    }
                    for (signed char i_41 = 0; i_41 < 16; i_41 += 2) 
                    {
                        var_77 = ((/* implicit */short) (signed char)-9);
                        var_78 = ((/* implicit */short) max((var_78), (((/* implicit */short) ((((/* implicit */_Bool) (short)-32754)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)1572)))))));
                        var_79 -= ((/* implicit */_Bool) var_17);
                    }
                    for (signed char i_42 = 1; i_42 < 13; i_42 += 1) 
                    {
                        arr_157 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19] [i_19] = ((/* implicit */_Bool) ((((/* implicit */int) arr_152 [i_0] [(_Bool)1] [i_20] [i_20])) - (((/* implicit */int) arr_20 [i_0] [i_19] [i_0]))));
                        var_80 = ((/* implicit */short) (!(((_Bool) arr_89 [i_19] [i_39]))));
                    }
                }
            }
            for (signed char i_43 = 2; i_43 < 15; i_43 += 2) 
            {
                arr_160 [i_0] [i_19] = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) var_15))) >= (((/* implicit */int) arr_9 [i_43] [i_43 - 2] [i_43 + 1]))));
                arr_161 [i_19] [i_19] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-21)) < (((/* implicit */int) arr_100 [i_0] [i_43 - 1] [i_43] [i_43 + 1]))));
                arr_162 [i_19] = ((/* implicit */_Bool) arr_4 [i_0] [i_19] [i_43]);
            }
            var_81 = ((/* implicit */short) arr_19 [i_0]);
            var_82 += ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((_Bool) var_14)))));
            var_83 = ((/* implicit */short) ((((/* implicit */int) arr_156 [i_19] [i_19] [i_19] [i_19] [i_19])) * (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) var_3)))))));
            arr_163 [i_0] [(short)6] |= ((/* implicit */signed char) (((-(((/* implicit */int) (short)-6918)))) != (((((/* implicit */_Bool) arr_132 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)29208))))));
        }
        var_84 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_17))))) ? (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (short)896))))) : (((/* implicit */int) ((((/* implicit */_Bool) min(((signed char)109), (((/* implicit */signed char) (_Bool)1))))) || (((/* implicit */_Bool) var_9)))))));
    }
}
