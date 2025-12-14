/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17405
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
    var_11 = ((/* implicit */short) var_2);
    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? (var_8) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) var_0)) : (var_2)))) ? (((var_8) / (var_8))) : (((/* implicit */long long int) (-(((/* implicit */int) var_9)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            /* LoopSeq 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                arr_9 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */int) (short)-32763)) : (((/* implicit */int) (_Bool)1))));
                arr_10 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_1 - 1])) / (((/* implicit */int) arr_1 [i_1 - 1]))));
                arr_11 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (+(((((/* implicit */int) arr_5 [i_0] [i_1] [i_2])) - (((/* implicit */int) var_9))))));
                arr_12 [i_1] = ((/* implicit */unsigned short) (-(arr_4 [i_1 - 2] [i_1 + 1])));
            }
            for (long long int i_3 = 0; i_3 < 12; i_3 += 2) 
            {
                var_13 = ((/* implicit */short) arr_8 [i_1 - 2]);
                var_14 = ((/* implicit */unsigned short) arr_7 [i_1 - 2] [i_1 - 2] [i_1 - 1]);
                var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((((arr_2 [i_3] [i_1] [i_0]) << (((((/* implicit */int) (short)-1)) + (63))))) & (((/* implicit */unsigned long long int) (~(-5382847707835573592LL)))))))));
            }
            var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) arr_0 [i_0]))));
            arr_15 [i_1 - 2] = ((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1 - 1])) ? ((-(arr_0 [i_0]))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_0]))))));
        }
        /* LoopSeq 2 */
        for (int i_4 = 3; i_4 < 11; i_4 += 4) 
        {
            arr_20 [i_4 + 1] [i_0] = ((/* implicit */signed char) arr_13 [i_0] [i_0] [i_4] [i_4]);
            var_17 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)30))))) ? (var_8) : (-5382847707835573592LL)));
        }
        for (short i_5 = 0; i_5 < 12; i_5 += 1) 
        {
            /* LoopSeq 1 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                /* LoopSeq 1 */
                for (long long int i_7 = 0; i_7 < 12; i_7 += 1) 
                {
                    arr_29 [i_0] [i_5] [i_6] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((4294967295U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)37875)))))) ? ((-(((/* implicit */int) arr_26 [i_6])))) : (((((/* implicit */int) var_1)) ^ (((/* implicit */int) arr_22 [i_0] [i_5]))))));
                    arr_30 [i_5] = ((/* implicit */int) arr_23 [i_6] [i_7] [i_6] [i_7]);
                    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_7] [i_6])) ? (((((/* implicit */_Bool) arr_19 [i_6] [i_6] [i_0])) ? (arr_25 [i_0] [i_0] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)127))))) : (((/* implicit */long long int) arr_13 [i_0] [i_0] [i_0] [i_0])))))));
                }
                arr_31 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_14 [i_0] [i_0] [i_5] [i_6])))) ? (arr_6 [i_0] [i_5] [i_6]) : (((/* implicit */long long int) arr_7 [i_0] [i_5] [i_0]))));
                arr_32 [i_0] [i_0] = ((/* implicit */_Bool) ((long long int) arr_17 [i_0] [i_5] [i_6]));
                arr_33 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -5382847707835573573LL)) ? (((/* implicit */int) (short)-16)) : (((/* implicit */int) (short)-16719))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2681590642252876053ULL)) ? (((/* implicit */int) arr_17 [i_0] [i_5] [i_6])) : (1441478498)))) : (arr_13 [i_0] [i_6] [i_6] [i_0])));
            }
            /* LoopSeq 1 */
            for (long long int i_8 = 0; i_8 < 12; i_8 += 4) 
            {
                arr_38 [i_0] [i_5] [i_0] [i_5] = ((/* implicit */short) ((unsigned long long int) arr_17 [i_8] [i_5] [i_0]));
                arr_39 [i_0] [i_5] [i_8] [i_8] = ((/* implicit */signed char) (-(((/* implicit */int) (short)32748))));
                var_19 = ((/* implicit */short) (((((_Bool)1) ? (arr_14 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_0] [i_0] [i_5] [i_8]))))) >> ((((((_Bool)0) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_0]))))) - (35155LL)))));
                var_20 = ((/* implicit */unsigned char) var_3);
            }
        }
        /* LoopSeq 1 */
        for (unsigned short i_9 = 0; i_9 < 12; i_9 += 4) 
        {
            /* LoopSeq 3 */
            for (long long int i_10 = 0; i_10 < 12; i_10 += 3) 
            {
                arr_44 [i_9] = ((/* implicit */long long int) (~((~(18446744073709551615ULL)))));
                arr_45 [i_0] [i_0] [i_10] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_26 [i_0]))));
            }
            for (short i_11 = 0; i_11 < 12; i_11 += 4) 
            {
                var_21 = ((/* implicit */unsigned int) arr_46 [i_0] [i_9]);
                var_22 = ((_Bool) arr_19 [i_0] [i_0] [i_0]);
            }
            for (short i_12 = 3; i_12 < 11; i_12 += 2) 
            {
                var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)5336)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16383))) : (var_8)));
                /* LoopSeq 1 */
                for (short i_13 = 1; i_13 < 11; i_13 += 1) 
                {
                    arr_56 [i_12 - 2] [i_12] = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
                    /* LoopSeq 2 */
                    for (short i_14 = 0; i_14 < 12; i_14 += 3) 
                    {
                        var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_13] [i_13 + 1] [i_12 - 1] [i_12 - 1]))))))));
                        arr_61 [i_0] [i_9] [i_9] [i_12] [i_13] [i_9] [i_9] = ((/* implicit */long long int) ((unsigned long long int) arr_36 [i_0] [i_9] [i_12 - 3] [i_13 - 1]));
                        arr_62 [i_0] [i_0] [i_0] [i_13 + 1] [i_12] [i_12 - 2] [i_14] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_55 [i_0] [i_14] [i_12] [i_13] [i_12] [i_14])) ? (var_7) : (((/* implicit */long long int) arr_49 [i_0] [i_12 - 1] [i_13 + 1] [i_14]))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_36 [i_0] [i_0] [i_9] [i_9]))))) : (((((/* implicit */_Bool) -730856031)) ? (arr_49 [i_0] [i_0] [i_13] [i_14]) : (505820488U))));
                        arr_63 [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [i_14] [i_12 - 1])) ? (arr_24 [i_0] [i_12 - 2]) : (arr_24 [i_14] [i_12 - 2])));
                    }
                    for (unsigned char i_15 = 0; i_15 < 12; i_15 += 1) 
                    {
                        arr_67 [i_12] = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned char) (short)-6202)))));
                        arr_68 [i_0] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [i_13 - 1] [i_12 + 1] [i_12 + 1])) ? (((/* implicit */int) arr_47 [i_13 + 1] [i_12 - 3] [i_12 - 1])) : (((/* implicit */int) arr_47 [i_13 + 1] [i_13 + 1] [i_12 + 1]))));
                        var_25 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_23 [i_0] [i_12 - 2] [i_13 + 1] [i_13 + 1])) ? (arr_16 [i_9]) : (var_0))) <= (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_59 [i_0] [i_9] [i_12 - 2] [i_12] [i_15]))) : (var_0)))));
                    }
                    var_26 = ((/* implicit */long long int) ((unsigned short) arr_37 [i_9] [i_12 + 1] [i_13 - 1]));
                    arr_69 [i_12] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4398046511103LL)) ? (-2354484858350620100LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-3)))));
                }
                arr_70 [i_0] [i_0] [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_9])) ? ((+(((/* implicit */int) arr_55 [i_0] [i_9] [i_0] [i_12 - 2] [i_12] [i_0])))) : (((/* implicit */int) arr_65 [i_0] [i_0] [i_0] [i_0]))));
                /* LoopSeq 2 */
                for (unsigned int i_16 = 0; i_16 < 12; i_16 += 1) 
                {
                    var_27 = ((/* implicit */unsigned long long int) (-(arr_71 [i_12 - 1] [i_12 - 2] [i_12 - 2] [i_12 - 1] [i_12 - 3])));
                    arr_73 [i_12] = ((/* implicit */short) ((var_3) & (var_3)));
                }
                for (long long int i_17 = 1; i_17 < 11; i_17 += 1) 
                {
                    arr_77 [i_9] [i_17 - 1] [i_17 - 1] [i_17 - 1] [i_17] |= ((/* implicit */unsigned char) arr_57 [i_17 - 1] [i_9] [i_9] [i_9] [i_0]);
                    /* LoopSeq 1 */
                    for (long long int i_18 = 0; i_18 < 12; i_18 += 1) 
                    {
                        var_28 = ((/* implicit */int) ((((/* implicit */_Bool) (short)-32684)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_36 [i_18] [i_9] [i_9] [i_17]))))) : (arr_49 [i_17 - 1] [i_17 - 1] [i_17 - 1] [i_17 - 1])));
                        var_29 = ((/* implicit */unsigned short) arr_48 [i_17] [i_17 + 1] [i_12 + 1]);
                        var_30 = ((/* implicit */long long int) ((short) (-(arr_54 [i_12]))));
                    }
                    var_31 *= ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-20369)) ? (((/* implicit */int) (unsigned short)0)) : ((-2147483647 - 1))));
                    arr_80 [i_0] [i_12] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_27 [i_12] [i_12 + 1] [i_12] [i_12] [i_12 - 1] [i_12 - 3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_12 - 1] [i_12 + 1] [i_12] [i_12 - 1] [i_12 - 1] [i_12 + 1]))) : (arr_41 [i_12] [i_12 + 1] [i_12])));
                }
                /* LoopSeq 1 */
                for (long long int i_19 = 4; i_19 < 11; i_19 += 3) 
                {
                    var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) -2147483646)) != (arr_54 [i_9]))) ? (((/* implicit */int) (unsigned char)251)) : (((/* implicit */int) (_Bool)1)))))));
                    var_33 = ((unsigned int) arr_7 [i_9] [i_12 + 1] [i_19 + 1]);
                    /* LoopSeq 3 */
                    for (unsigned char i_20 = 0; i_20 < 12; i_20 += 1) 
                    {
                        var_34 = (~(((arr_86 [i_20] [i_0] [i_0]) >> (((((/* implicit */int) arr_5 [i_9] [i_19] [i_9])) - (142))))));
                        var_35 |= ((/* implicit */unsigned long long int) arr_4 [i_0] [i_0]);
                        arr_88 [i_0] [i_9] [i_12 + 1] [i_12] [i_20] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -5382847707835573592LL)) ? (-4392884436162152555LL) : (-1LL)))) ? (((/* implicit */long long int) (~(((/* implicit */int) (short)-1))))) : (arr_72 [i_12] [i_12 + 1] [i_0] [i_12])));
                    }
                    for (short i_21 = 0; i_21 < 12; i_21 += 1) 
                    {
                        arr_91 [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_34 [i_12 - 1] [i_19] [i_19 - 3] [i_19 - 1])) ? (((unsigned int) var_0)) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_85 [i_9] [i_21])))))));
                        var_36 = ((/* implicit */short) (-(arr_79 [i_12 - 3] [i_19 - 2])));
                        arr_92 [i_0] [i_9] [i_9] [i_19 - 3] [i_9] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5382847707835573592LL)) ? ((~(16128))) : (((/* implicit */int) arr_22 [i_19 - 3] [i_12 - 1]))));
                        arr_93 [i_0] [i_0] [i_12] [i_19] [i_21] = ((/* implicit */short) ((((/* implicit */int) arr_59 [i_19] [i_19] [i_19 - 3] [i_12] [i_19])) / (((((/* implicit */_Bool) arr_83 [i_0] [i_12] [i_12] [i_0])) ? (((/* implicit */int) arr_55 [i_0] [i_9] [i_9] [i_19] [i_12] [i_12])) : (((/* implicit */int) arr_78 [i_0] [i_0] [i_9] [i_12 - 3] [i_19 - 1] [i_0] [i_9]))))));
                    }
                    for (unsigned short i_22 = 1; i_22 < 10; i_22 += 4) 
                    {
                        arr_96 [i_0] [i_9] [i_12 - 1] [i_19 + 1] [i_12] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_22 + 1] [i_9] [i_12] [i_9])) ? (((/* implicit */int) arr_78 [i_0] [i_0] [i_12 + 1] [i_19 - 3] [i_19 - 3] [i_22 + 2] [i_0])) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) arr_18 [i_22 + 1] [i_12 - 2] [i_9])) : (((/* implicit */int) arr_78 [i_12 - 2] [i_12 - 2] [i_19 - 3] [i_19 - 3] [i_22] [i_22] [i_12 - 2]))));
                        arr_97 [i_0] [i_12] [i_0] [i_0] [i_0] [i_12] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_26 [i_19 - 2])) ? (((/* implicit */int) arr_17 [i_0] [i_19 - 1] [i_0])) : (((/* implicit */int) arr_18 [i_22 - 1] [i_12 + 1] [i_9]))));
                    }
                    var_37 = ((/* implicit */long long int) arr_65 [i_0] [i_9] [i_9] [i_19]);
                }
            }
            /* LoopSeq 1 */
            for (short i_23 = 4; i_23 < 11; i_23 += 2) 
            {
                arr_102 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_27 [i_0] [i_9] [i_9] [i_9] [i_23] [i_0])) & (((/* implicit */int) arr_57 [i_23 - 2] [i_23] [i_23 - 1] [i_9] [i_0]))));
                var_38 *= ((/* implicit */short) ((((arr_84 [i_0] [i_0] [i_9] [i_23] [i_23 + 1]) && (((/* implicit */_Bool) arr_23 [i_23 - 3] [i_23] [i_23 + 1] [i_23])))) ? (arr_16 [i_23 + 1]) : (((unsigned int) arr_60 [i_0] [i_9] [i_23]))));
            }
            /* LoopSeq 2 */
            for (unsigned int i_24 = 1; i_24 < 10; i_24 += 1) 
            {
                arr_105 [i_0] [i_24] [i_24] [i_24] = ((/* implicit */unsigned short) arr_66 [i_9] [i_9] [i_24] [i_9] [i_24 + 2] [i_24 + 2] [i_9]);
                /* LoopSeq 1 */
                for (unsigned short i_25 = 0; i_25 < 12; i_25 += 1) 
                {
                    var_39 = arr_90 [i_0] [i_9];
                    arr_110 [i_24] = ((/* implicit */int) ((long long int) (unsigned short)27658));
                    var_40 = ((/* implicit */int) arr_28 [i_24 - 1]);
                }
            }
            for (short i_26 = 0; i_26 < 12; i_26 += 3) 
            {
                arr_113 [i_0] [i_0] = ((/* implicit */short) (((~(var_2))) << (((((arr_72 [i_0] [i_9] [i_9] [i_9]) + (2543760432215438594LL))) - (41LL)))));
                /* LoopSeq 2 */
                for (unsigned long long int i_27 = 3; i_27 < 10; i_27 += 3) 
                {
                    var_41 = ((/* implicit */unsigned char) arr_117 [i_27 - 3] [i_27] [i_27] [i_27 - 3]);
                    var_42 = ((/* implicit */long long int) ((unsigned int) arr_28 [i_27 + 1]));
                    /* LoopSeq 3 */
                    for (unsigned int i_28 = 0; i_28 < 12; i_28 += 2) 
                    {
                        var_43 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_43 [i_9] [i_27 - 1] [i_27 - 3] [i_27 - 1])) ? (((/* implicit */int) ((short) var_9))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                        var_44 = ((/* implicit */short) max((var_44), (((/* implicit */short) ((unsigned long long int) arr_65 [i_27 - 1] [i_28] [i_28] [i_28])))));
                    }
                    for (unsigned int i_29 = 2; i_29 < 11; i_29 += 3) 
                    {
                        arr_123 [i_27] [i_9] [i_27] [i_27] [i_29] = (((_Bool)1) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) var_3)) : (var_7))) : (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_29 - 1]))));
                        var_45 = ((/* implicit */unsigned int) (+(arr_104 [i_27 - 2] [i_29] [i_29 - 1] [i_29])));
                        var_46 = ((/* implicit */short) (+(((/* implicit */int) (short)-16001))));
                        arr_124 [i_0] [i_0] [i_27] [i_27 + 1] [i_29] [i_0] = ((/* implicit */unsigned int) arr_71 [i_0] [i_26] [i_26] [i_26] [i_0]);
                    }
                    for (short i_30 = 2; i_30 < 11; i_30 += 2) 
                    {
                        arr_127 [i_9] [i_9] |= ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (1143914305352105984LL) : (arr_74 [i_9] [i_30] [i_30 - 2] [i_9]));
                        arr_128 [i_9] [i_27] [i_27] [i_27] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_120 [i_30 - 2] [i_30 - 2] [i_30 - 2] [i_30 - 2] [i_30]))));
                        arr_129 [i_0] [i_9] [i_26] [i_27] [i_27] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (arr_53 [i_27]) : (((/* implicit */long long int) var_4))))) ? (((/* implicit */int) arr_36 [i_0] [i_27 - 1] [i_27 - 1] [i_30 + 1])) : ((+(var_3)))));
                    }
                }
                for (unsigned char i_31 = 0; i_31 < 12; i_31 += 1) 
                {
                    var_47 += ((/* implicit */unsigned long long int) var_7);
                    var_48 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_26] [i_0])) ? (arr_104 [i_31] [i_31] [i_31] [i_31]) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_9] [i_9] [i_9] [i_9])))))));
                }
                arr_132 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_76 [i_9] [i_26])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_76 [i_0] [i_0]))));
                arr_133 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) arr_120 [i_0] [i_9] [i_9] [i_0] [i_9]);
            }
            var_49 = ((/* implicit */_Bool) ((unsigned char) arr_76 [i_9] [i_9]));
        }
        var_50 += ((/* implicit */unsigned short) ((((long long int) arr_107 [i_0] [i_0])) % (((/* implicit */long long int) arr_7 [i_0] [i_0] [i_0]))));
    }
}
