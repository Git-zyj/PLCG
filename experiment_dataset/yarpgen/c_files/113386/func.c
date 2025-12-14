/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113386
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
    var_10 = ((/* implicit */int) var_3);
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) arr_0 [i_0]);
        /* LoopSeq 1 */
        for (long long int i_1 = 4; i_1 < 8; i_1 += 2) 
        {
            /* LoopSeq 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
            {
                /* LoopSeq 4 */
                for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 2) 
                {
                    arr_11 [i_0] [i_0] [(signed char)11] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_6 [i_1] [i_1 + 1] [i_1 + 3]))));
                    arr_12 [10U] [i_1 + 4] = ((/* implicit */long long int) (~(((/* implicit */int) arr_10 [i_1 + 4] [i_1] [i_1 + 2] [i_1 - 3] [i_1] [i_1 + 2]))));
                    arr_13 [7LL] [7LL] [7LL] [7LL] = ((/* implicit */unsigned short) (-(2122091409)));
                    arr_14 [i_1] [i_3] = ((/* implicit */short) ((unsigned short) (+(var_8))));
                    arr_15 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 5873880328581758362ULL)) ? (((/* implicit */int) arr_7 [i_1 - 3])) : (((/* implicit */int) arr_7 [i_1 + 2]))));
                }
                for (int i_4 = 0; i_4 < 12; i_4 += 1) 
                {
                    arr_19 [i_1 - 2] [i_2] = ((/* implicit */unsigned short) (-(-2122091410)));
                    arr_20 [i_0] [i_1] [i_2] [i_4] = ((/* implicit */short) var_9);
                }
                for (int i_5 = 0; i_5 < 12; i_5 += 4) /* same iter space */
                {
                    arr_24 [i_0] [i_0] [(short)3] [(short)3] = ((/* implicit */int) ((arr_1 [i_0]) < (-2122091409)));
                    arr_25 [i_0] [i_1] [i_0] [i_5] [i_5] [i_0] = ((/* implicit */long long int) arr_16 [i_0] [i_1] [i_2] [i_2] [i_5]);
                }
                for (int i_6 = 0; i_6 < 12; i_6 += 4) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_31 [i_0] [i_0] [i_1] [i_0] [i_7] [i_7] = ((/* implicit */long long int) var_5);
                        arr_32 [i_0] [i_0] [i_2] [i_6] [i_0] [i_7] = ((/* implicit */signed char) (+((-(((/* implicit */int) arr_18 [i_0] [i_1] [(unsigned short)10] [(unsigned short)10]))))));
                        arr_33 [i_7] [i_7] [(unsigned char)7] [i_7] [0ULL] = ((/* implicit */short) (!(((/* implicit */_Bool) ((int) 10471754744796802012ULL)))));
                    }
                    for (long long int i_8 = 0; i_8 < 12; i_8 += 4) 
                    {
                        arr_38 [i_8] [i_6] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (((((~(2122091409))) + (2147483647))) << (((((((/* implicit */int) arr_4 [i_1] [i_1 + 2])) + (32))) - (9)))));
                        arr_39 [i_0] [i_1] [i_2] [i_0] [i_8] = ((/* implicit */int) 5873880328581758375ULL);
                        arr_40 [i_0] [i_1] [i_2] [i_0] [i_0] = ((/* implicit */int) var_3);
                        arr_41 [i_0] [i_0] [i_2] [i_6] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) arr_4 [i_1 - 1] [i_6]))));
                    }
                    arr_42 [i_0] [i_0] [i_2] [i_6] [i_2] [i_6] = ((/* implicit */signed char) arr_7 [i_1 - 4]);
                }
                /* LoopNest 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (short i_10 = 0; i_10 < 12; i_10 += 1) 
                    {
                        {
                            arr_50 [i_9] [i_9] [i_2] [i_9] [i_2] = ((/* implicit */int) 15427110013504634578ULL);
                            arr_51 [(_Bool)1] [i_1 - 2] [i_9] [i_1 + 3] [i_1] [i_9] = ((/* implicit */_Bool) (-(10471754744796802012ULL)));
                        }
                    } 
                } 
                arr_52 [i_0] [i_1 + 4] [i_2] [i_2] = ((/* implicit */int) ((_Bool) 7974989328912749596ULL));
                arr_53 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)49)) | (((/* implicit */int) ((short) 1513989998U)))));
            }
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
            {
                arr_56 [i_0] [i_0] [i_11] [i_0] = arr_17 [i_0] [i_0] [i_11] [i_0] [i_0];
                arr_57 [i_0] = (unsigned short)13;
                arr_58 [i_0] [1LL] [1LL] = ((/* implicit */long long int) (+(arr_5 [i_1 + 2])));
                arr_59 [i_0] [i_1] [i_11] = ((/* implicit */unsigned char) (~(arr_34 [i_1] [i_1 - 2] [i_1 - 4] [i_1] [i_1])));
            }
            /* LoopSeq 2 */
            for (signed char i_12 = 0; i_12 < 12; i_12 += 4) 
            {
                arr_63 [i_0] [6] [(short)0] = ((/* implicit */int) (-(9223372036854775803LL)));
                /* LoopSeq 1 */
                for (unsigned short i_13 = 0; i_13 < 12; i_13 += 1) 
                {
                    arr_68 [i_0] [i_1] [i_12] [i_13] = ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) + ((-(-9223372036854775803LL))));
                    arr_69 [i_0] = ((/* implicit */int) (!((!(((/* implicit */_Bool) 5873880328581758375ULL))))));
                    arr_70 [i_0] [i_1 + 4] [i_0] [i_13] [i_12] [i_12] = ((/* implicit */int) (short)30139);
                    /* LoopSeq 2 */
                    for (long long int i_14 = 0; i_14 < 12; i_14 += 1) 
                    {
                        arr_75 [i_0] [i_1] [i_12] [i_13] = ((/* implicit */unsigned short) (-(var_2)));
                        arr_76 [i_0] [i_0] = ((/* implicit */unsigned short) (-((+(((/* implicit */int) (_Bool)0))))));
                    }
                    for (int i_15 = 0; i_15 < 12; i_15 += 1) 
                    {
                        arr_79 [i_15] = ((/* implicit */int) arr_9 [i_1 - 1] [i_1 - 1] [i_1 + 4] [i_1 + 4] [i_13]);
                        arr_80 [i_15] [i_15] [i_15] = ((/* implicit */signed char) arr_23 [i_0] [i_0] [i_12] [i_13] [i_0]);
                        arr_81 [i_0] [i_1 + 1] [i_12] [i_15] [11U] = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) 967418816)))))));
                    }
                    arr_82 [i_13] [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_1);
                }
                arr_83 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (((((_Bool)1) ? (arr_60 [i_0] [i_1] [i_12] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_49 [i_1] [i_1] [i_1] [i_12] [i_1]))))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 140737488355312ULL))))))));
            }
            for (long long int i_16 = 1; i_16 < 9; i_16 += 2) 
            {
                arr_86 [i_0] [i_1 - 3] [i_16 + 1] [i_16] = ((/* implicit */long long int) (!((_Bool)1)));
                arr_87 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((15427110013504634578ULL) << (((598404353) - (598404339)))));
                /* LoopSeq 2 */
                for (unsigned char i_17 = 0; i_17 < 12; i_17 += 4) 
                {
                    arr_90 [7LL] [10ULL] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) var_3)) ? (5873880328581758362ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))));
                    arr_91 [i_0] [i_1] [i_0] [i_17] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_3))) & (var_8)))) ? (((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_9))));
                    arr_92 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((var_2) == (arr_16 [i_0] [i_1] [i_16 + 2] [i_1 + 2] [i_0])));
                    arr_93 [i_0] [i_1] [i_16] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */int) var_3)) / (((/* implicit */int) arr_22 [i_1 + 2] [i_1 + 2] [i_1] [i_1 + 2]))));
                    /* LoopSeq 1 */
                    for (int i_18 = 0; i_18 < 12; i_18 += 1) 
                    {
                        arr_97 [i_0] [i_1] [i_16 - 1] [i_17] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) 2122091410)) <= (((var_4) >> (((953109272) - (953109242)))))));
                        arr_98 [i_1] [i_16 + 3] [i_17] [i_17] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 17506599011594790548ULL)))) ? (((/* implicit */long long int) ((unsigned int) 2122091409))) : (-5548915417381501788LL)));
                        arr_99 [(short)3] [i_1] = ((/* implicit */short) ((((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0])) % (((/* implicit */int) var_9))));
                        arr_100 [i_0] [i_1] [i_16 - 1] [i_17] [i_18] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_94 [i_1 + 2] [i_1 - 4]))));
                    }
                }
                for (unsigned short i_19 = 0; i_19 < 12; i_19 += 3) 
                {
                    arr_103 [i_19] [i_19] [i_19] = ((/* implicit */unsigned short) (signed char)26);
                    arr_104 [i_19] [i_19] [i_16] [i_19] = ((/* implicit */_Bool) ((unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32692))) : (arr_88 [i_0] [i_0] [i_0] [i_19] [i_1 + 3] [i_0]))));
                }
                arr_105 [i_0] [i_1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_0] [i_1 - 3] [i_16 + 2] [(short)6]))));
            }
            /* LoopSeq 3 */
            for (unsigned long long int i_20 = 0; i_20 < 12; i_20 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned short i_21 = 1; i_21 < 8; i_21 += 4) 
                {
                    for (unsigned short i_22 = 0; i_22 < 12; i_22 += 1) 
                    {
                        {
                            arr_114 [i_20] [i_21] = ((/* implicit */short) ((((/* implicit */_Bool) arr_77 [i_0] [i_1] [i_20] [i_1 + 4] [i_21 + 2])) ? (12572863745127793241ULL) : (((/* implicit */unsigned long long int) arr_77 [i_0] [i_1] [i_20] [i_1 - 3] [i_21 + 4]))));
                            arr_115 [i_0] [i_0] [i_0] [i_20] = ((/* implicit */_Bool) -2122091417);
                            arr_116 [i_0] [i_0] [i_0] [i_20] [i_0] = ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((((/* implicit */_Bool) (unsigned short)45253)) ? (((/* implicit */long long int) 2122091398)) : (5548915417381501789LL))) : (((/* implicit */long long int) (-(((/* implicit */int) (short)2508))))));
                            arr_117 [i_0] [i_0] [i_0] [i_21] [i_21] [i_20] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_55 [i_0] [i_0] [i_21]))));
                        }
                    } 
                } 
                arr_118 [i_0] [i_0] [i_20] = ((/* implicit */unsigned int) ((-5548915417381501788LL) < (((/* implicit */long long int) ((/* implicit */int) (short)17531)))));
            }
            for (unsigned long long int i_23 = 0; i_23 < 12; i_23 += 3) /* same iter space */
            {
                arr_122 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_110 [i_0] [i_1 + 1] [i_1] [i_1 - 3])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32196)) ? (940145062114761048ULL) : (((/* implicit */unsigned long long int) var_8)))))));
                arr_123 [i_0] [i_1 - 3] [i_23] = ((/* implicit */unsigned short) (~(13036781893465911719ULL)));
            }
            for (unsigned char i_24 = 2; i_24 < 10; i_24 += 3) 
            {
                arr_127 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_28 [i_1 - 3])) : (((/* implicit */int) (unsigned char)152))))) ? ((+(var_0))) : (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_24 + 1] [i_24] [i_24] [i_24 + 1] [i_24 - 1] [i_24])))));
                arr_128 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_74 [(_Bool)1] [i_1 - 1] [i_1] [i_1 + 2] [i_24])) / (((/* implicit */int) ((((/* implicit */int) arr_28 [i_0])) < (((/* implicit */int) (unsigned short)3840)))))));
            }
            /* LoopSeq 1 */
            for (unsigned short i_25 = 0; i_25 < 12; i_25 += 2) 
            {
                arr_133 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33598))) < (5873880328581758375ULL))))));
                arr_134 [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)45253))));
                arr_135 [i_0] [i_0] [i_25] = ((/* implicit */unsigned char) arr_65 [i_0] [i_0]);
            }
        }
    }
    for (unsigned short i_26 = 0; i_26 < 16; i_26 += 1) 
    {
        arr_138 [i_26] = ((/* implicit */unsigned char) arr_137 [i_26]);
        arr_139 [i_26] = ((/* implicit */unsigned long long int) ((signed char) (((+(((/* implicit */int) (unsigned char)252)))) + (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)24121))))))));
    }
    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)16)) || (((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_0)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_8))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-2508)))))))))));
}
