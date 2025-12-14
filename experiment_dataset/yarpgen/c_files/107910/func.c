/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107910
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
    var_15 = ((/* implicit */unsigned long long int) var_2);
    var_16 = ((/* implicit */unsigned short) var_9);
    var_17 = ((/* implicit */long long int) var_3);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_2 [7ULL] [i_0] = ((/* implicit */short) 274877906943ULL);
        /* LoopSeq 4 */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) /* same iter space */
        {
            arr_6 [i_1] = ((/* implicit */short) arr_0 [i_1]);
            arr_7 [i_1] [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1]))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    {
                        arr_12 [i_1] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_1])) + (((/* implicit */int) arr_0 [i_3]))));
                        arr_13 [i_1] = ((/* implicit */short) (unsigned short)15);
                        arr_14 [i_2] [i_2] [i_2] [i_2] [i_1] [i_2] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned short)16)) ? (var_3) : (((/* implicit */int) arr_8 [(unsigned short)8] [i_2]))))));
                        arr_15 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_4 [i_1]))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (long long int i_4 = 0; i_4 < 10; i_4 += 4) 
            {
                for (short i_5 = 2; i_5 < 7; i_5 += 4) 
                {
                    {
                        arr_21 [i_1] [i_1] [(short)1] [i_0] = ((/* implicit */unsigned long long int) var_8);
                        arr_22 [i_1] [i_1] [i_0] [i_0] = (short)-1;
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (int i_6 = 0; i_6 < 10; i_6 += 4) 
            {
                arr_25 [i_0] [i_1] [i_1] [i_6] = ((/* implicit */short) (+(var_12)));
                arr_26 [i_0] [i_1] [(short)4] [i_1] = ((/* implicit */_Bool) (unsigned short)29278);
                /* LoopSeq 4 */
                for (unsigned short i_7 = 0; i_7 < 10; i_7 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 3) 
                    {
                        arr_32 [5LL] [i_1] [5LL] [(short)7] [(_Bool)1] [i_7] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_28 [i_0] [i_7] [i_6] [i_8] [i_7] [i_8])) ? (((/* implicit */int) arr_28 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])) : (((/* implicit */int) arr_28 [(short)1] [i_6] [i_1] [i_0] [i_7] [i_6]))));
                        arr_33 [i_6] [i_0] = ((/* implicit */_Bool) var_12);
                        arr_34 [i_1] [i_6] [i_6] [(unsigned short)3] [i_1] = var_12;
                    }
                    arr_35 [i_7] [i_6] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_9 [8ULL] [2] [9ULL] [i_1]);
                }
                for (unsigned short i_9 = 0; i_9 < 10; i_9 += 4) /* same iter space */
                {
                    arr_39 [(unsigned short)2] [i_1] [i_1] = ((/* implicit */signed char) ((short) (unsigned short)13));
                    arr_40 [(unsigned short)7] [i_6] [i_1] [2LL] = ((/* implicit */unsigned short) ((short) (unsigned short)46203));
                }
                for (int i_10 = 0; i_10 < 10; i_10 += 3) /* same iter space */
                {
                    arr_43 [i_10] [i_0] [i_0] = ((/* implicit */short) var_0);
                    arr_44 [i_1] [i_10] [i_6] [i_6] [i_1] [i_1] = ((/* implicit */long long int) ((short) (signed char)-108));
                    arr_45 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (unsigned short)65522))));
                    arr_46 [i_0] [(_Bool)0] [i_6] [(short)6] = ((int) 1879048192);
                }
                for (int i_11 = 0; i_11 < 10; i_11 += 3) /* same iter space */
                {
                    arr_49 [i_0] = ((/* implicit */short) var_12);
                    arr_50 [i_1] [i_0] [(signed char)8] [i_1] [i_6] [i_11] = ((/* implicit */int) arr_17 [i_0] [i_1] [i_6]);
                }
            }
            for (int i_12 = 0; i_12 < 10; i_12 += 3) 
            {
                /* LoopSeq 2 */
                for (int i_13 = 0; i_13 < 10; i_13 += 2) 
                {
                    arr_58 [i_1] [i_0] [0ULL] [i_12] [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_1])) || (((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_12] [i_1]))));
                    /* LoopSeq 2 */
                    for (int i_14 = 0; i_14 < 10; i_14 += 4) 
                    {
                        arr_62 [(signed char)6] [(signed char)7] [(signed char)7] [(signed char)7] [i_12] [i_1] = ((/* implicit */short) var_12);
                        arr_63 [i_0] [(signed char)0] [i_12] [i_0] [i_14] [i_14] = ((/* implicit */signed char) arr_0 [(signed char)2]);
                    }
                    for (long long int i_15 = 4; i_15 < 8; i_15 += 2) 
                    {
                        arr_68 [i_15] = ((/* implicit */unsigned short) arr_52 [i_0] [i_1] [i_12] [i_15 + 1]);
                        arr_69 [(short)2] [i_1] [2ULL] [i_13] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) 1879048202)) ? (((/* implicit */int) (unsigned short)65527)) : (((/* implicit */int) (short)-32762))));
                    }
                }
                for (unsigned short i_16 = 0; i_16 < 10; i_16 += 4) 
                {
                    /* LoopSeq 2 */
                    for (short i_17 = 0; i_17 < 10; i_17 += 4) 
                    {
                        arr_75 [i_16] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)3)) ? (((((/* implicit */_Bool) 2305843008676823040LL)) ? (((/* implicit */int) (unsigned short)29284)) : (33554430))) : ((+(((/* implicit */int) var_2))))));
                        arr_76 [i_1] [i_16] [i_16] [i_12] [i_1] [i_1] = ((/* implicit */short) arr_60 [i_0] [i_1] [i_0] [i_1] [i_17]);
                        arr_77 [(signed char)6] [i_1] [i_12] [i_1] [(signed char)6] = ((/* implicit */int) ((((/* implicit */_Bool) ((-33554438) * (((/* implicit */int) (short)-15))))) ? (arr_36 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
                    }
                    for (signed char i_18 = 0; i_18 < 10; i_18 += 4) 
                    {
                        arr_80 [i_0] = ((/* implicit */long long int) arr_11 [i_18] [i_1] [i_1] [i_1] [i_1] [i_0]);
                        arr_81 [i_18] [i_0] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_41 [i_18] [5ULL] [i_12] [i_0])) + (((/* implicit */int) arr_71 [i_0] [i_1] [i_1] [i_16]))));
                        arr_82 [i_0] [i_0] [i_0] [i_0] [i_16] [i_18] |= ((/* implicit */short) var_8);
                    }
                    arr_83 [3ULL] [i_0] [(short)9] [(unsigned short)6] [i_1] [i_16] = ((/* implicit */_Bool) ((var_0) + (((/* implicit */long long int) ((/* implicit */int) (short)63)))));
                }
                arr_84 [i_1] = ((/* implicit */short) 2251765453946880ULL);
                arr_85 [(short)0] [i_1] [i_12] [i_12] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)127)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (short)32763)))))));
                /* LoopSeq 1 */
                for (short i_19 = 0; i_19 < 10; i_19 += 3) 
                {
                    arr_88 [i_1] [i_1] = ((/* implicit */short) (+(((/* implicit */int) arr_9 [i_0] [i_1] [i_12] [i_1]))));
                    arr_89 [i_19] [i_19] [6ULL] [i_1] [i_19] = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)1296)) & (((/* implicit */int) (_Bool)1))))) / (var_0)));
                    arr_90 [i_19] [i_0] [i_19] [i_19] = ((/* implicit */long long int) (short)-1);
                    arr_91 [i_0] [i_1] [i_1] [(short)8] [i_19] [i_1] = ((/* implicit */unsigned long long int) (!(arr_65 [i_1] [i_0] [i_1] [i_19] [i_1] [i_12])));
                    arr_92 [i_1] = ((/* implicit */unsigned long long int) ((var_0) & (((/* implicit */long long int) var_9))));
                }
                /* LoopSeq 1 */
                for (short i_20 = 0; i_20 < 10; i_20 += 4) 
                {
                    arr_95 [i_1] [i_20] [i_20] [i_20] [i_20] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_61 [i_1] [i_1] [i_12] [1ULL] [i_20]))));
                    arr_96 [i_20] [i_0] [i_0] [i_0] = ((/* implicit */short) ((unsigned short) -3053195471513990501LL));
                    arr_97 [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [i_1])) + (((/* implicit */int) arr_9 [i_0] [i_20] [i_1] [i_1]))));
                }
            }
        }
        for (unsigned short i_21 = 0; i_21 < 10; i_21 += 1) /* same iter space */
        {
            arr_100 [i_0] = ((/* implicit */short) ((unsigned short) (unsigned short)56433));
            arr_101 [(_Bool)1] = ((/* implicit */short) arr_78 [i_21] [i_0] [i_0] [i_0]);
            arr_102 [i_0] [i_21] = ((/* implicit */unsigned long long int) (unsigned short)111);
            arr_103 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) (signed char)-8))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)55248))));
        }
        for (unsigned short i_22 = 0; i_22 < 10; i_22 += 1) /* same iter space */
        {
            arr_107 [i_22] [i_0] [(_Bool)1] = ((/* implicit */short) var_13);
            arr_108 [i_22] [i_0] [i_22] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)57790)) + (((/* implicit */int) arr_16 [i_0] [i_0] [i_22]))));
        }
        for (short i_23 = 0; i_23 < 10; i_23 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_24 = 1; i_24 < 8; i_24 += 2) 
            {
                arr_115 [i_24] [(unsigned short)8] [i_0] [(unsigned short)8] = ((/* implicit */signed char) arr_71 [i_24] [i_24 - 1] [i_23] [i_24]);
                /* LoopSeq 2 */
                for (unsigned short i_25 = 0; i_25 < 10; i_25 += 3) 
                {
                    arr_118 [i_0] [i_23] [i_23] [i_23] [9] [i_24] = ((/* implicit */short) (+(((/* implicit */int) arr_38 [i_0] [i_0] [i_23] [i_24] [i_24] [i_25]))));
                    arr_119 [i_24] [i_24] [i_24 + 2] [(short)3] [(_Bool)1] = ((/* implicit */unsigned short) ((((((/* implicit */int) var_8)) | (((/* implicit */int) var_5)))) | (((/* implicit */int) arr_71 [(short)8] [(short)8] [i_0] [8ULL]))));
                    /* LoopSeq 2 */
                    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                    {
                        arr_123 [i_25] [i_25] [i_25] [i_25] [(signed char)4] = ((/* implicit */short) ((8521115420388180445ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)3)))));
                        arr_124 [i_0] [i_24] [(short)5] [(signed char)2] [i_25] = ((/* implicit */unsigned short) var_0);
                    }
                    for (int i_27 = 0; i_27 < 10; i_27 += 3) 
                    {
                        arr_127 [i_0] [i_23] [i_23] [i_24 + 1] [i_25] [i_27] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_104 [i_23] [i_25] [i_27])) - (((/* implicit */int) arr_51 [i_23] [i_23] [i_23])))) - (((/* implicit */int) arr_20 [i_23] [i_24 + 2] [i_25] [i_0] [(short)4]))));
                        arr_128 [i_27] [(unsigned short)4] = ((/* implicit */unsigned short) (+(((var_3) | (((/* implicit */int) arr_31 [i_25]))))));
                    }
                }
                for (short i_28 = 2; i_28 < 9; i_28 += 1) 
                {
                    arr_132 [i_28] [i_23] [i_24 + 2] [i_23] [i_23] [i_28] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 33554449)) && (((/* implicit */_Bool) (short)28672))));
                    arr_133 [i_0] [i_23] [i_28] |= ((/* implicit */_Bool) 536870910);
                    arr_134 [(unsigned short)6] [i_0] = ((/* implicit */short) 2831132845608341101LL);
                }
                arr_135 [(unsigned short)3] [i_24] [(signed char)8] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_70 [i_24 + 2])) ? (((/* implicit */int) arr_1 [i_24 + 2])) : (((/* implicit */int) arr_54 [i_0] [i_0] [i_0]))));
                /* LoopNest 2 */
                for (short i_29 = 0; i_29 < 10; i_29 += 2) 
                {
                    for (short i_30 = 0; i_30 < 10; i_30 += 2) 
                    {
                        {
                            arr_140 [i_23] [i_24 - 1] [i_30] = ((/* implicit */long long int) ((((/* implicit */int) arr_110 [i_23] [i_29])) & (((/* implicit */int) arr_99 [i_24 - 1] [i_24 - 1] [i_24]))));
                            arr_141 [i_0] [i_0] [4ULL] [(unsigned short)9] [i_0] [(short)3] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_0])) ? (((/* implicit */int) arr_23 [i_23])) : (((/* implicit */int) arr_23 [i_0]))));
                            arr_142 [i_23] [i_23] [3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)12)) ? (((/* implicit */int) (unsigned short)10287)) : (536870913)));
                            arr_143 [i_30] [i_24] [i_30] [i_23] [i_24] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) 1121501860331520LL)) && (((/* implicit */_Bool) (unsigned short)32768))))) >= ((+(((/* implicit */int) (short)32760))))));
                        }
                    } 
                } 
            }
            arr_144 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_125 [i_23] [i_23] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_138 [i_0] [i_0] [i_23] [i_0] [i_23] [i_23])));
            arr_145 [4] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (18446744073709551604ULL)));
            arr_146 [i_23] [i_0] = ((/* implicit */unsigned long long int) var_6);
        }
        arr_147 [i_0] = arr_61 [i_0] [i_0] [i_0] [i_0] [i_0];
    }
}
