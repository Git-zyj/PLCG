/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114349
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
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_11))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)92))) : (var_7))) : (max((((/* implicit */unsigned long long int) (signed char)100)), (10750080113657093036ULL)))))) ? (((long long int) (~(var_8)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) -8712990082971683493LL)) ? (var_17) : (((/* implicit */int) var_14)))) : ((+(var_0))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 1; i_1 < 7; i_1 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (long long int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                arr_6 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) ((long long int) var_11));
                arr_7 [i_0] [2LL] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)38))) - (-5710497164794233879LL))) - (((long long int) arr_5 [i_0] [i_0] [i_2]))));
                arr_8 [i_0] [(_Bool)0] [(short)4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 1459674935098167742ULL))));
            }
            for (signed char i_3 = 1; i_3 < 9; i_3 += 4) 
            {
                arr_11 [i_0] = ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (signed char)-38))))) ? (884319149157781374LL) : (((/* implicit */long long int) (+(var_17)))));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 3; i_4 < 8; i_4 += 1) 
                {
                    for (int i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        {
                            arr_18 [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)82)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)82))));
                            arr_19 [i_0] [i_4] [(unsigned char)6] [(unsigned char)5] [i_0] = ((/* implicit */_Bool) ((unsigned char) (~(((/* implicit */int) var_1)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 10; i_6 += 3) 
                {
                    for (signed char i_7 = 0; i_7 < 10; i_7 += 3) 
                    {
                        {
                            arr_24 [i_6] [(_Bool)1] = ((((/* implicit */_Bool) arr_14 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_3 + 1] [i_3 + 1])) ? ((~(var_11))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_6] [(_Bool)1] [2ULL] [i_6])))))));
                            arr_25 [i_7] [i_7] [i_7] [(_Bool)1] [(_Bool)1] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_3 - 1] [3ULL] [i_3 - 1] [i_1 + 1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_23 [i_3 + 1] [i_1] [i_1 + 3] [i_1 + 3]))));
                            arr_26 [i_0] [i_0] [i_3 + 1] [i_0] [i_3 + 1] = (i_0 % 2 == zero) ? (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((511U) << (((arr_4 [i_1] [i_0] [i_1]) + (148477621)))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_7]))))) : (((arr_12 [(_Bool)1] [i_1 - 1] [i_3 + 1] [i_6] [i_6] [i_7]) ? (((/* implicit */long long int) arr_4 [i_0] [i_0] [i_6])) : (var_11)))))) : (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((511U) << (((((arr_4 [i_1] [i_0] [i_1]) + (148477621))) + (34124135)))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_7]))))) : (((arr_12 [(_Bool)1] [i_1 - 1] [i_3 + 1] [i_6] [i_6] [i_7]) ? (((/* implicit */long long int) arr_4 [i_0] [i_0] [i_6])) : (var_11))))));
                            arr_27 [i_0] [i_0] [i_0] [i_0] [(unsigned char)6] = ((/* implicit */short) var_15);
                            arr_28 [i_0] = ((/* implicit */short) (~(var_0)));
                        }
                    } 
                } 
                /* LoopSeq 4 */
                for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 4) 
                {
                    arr_32 [i_8] [i_1 + 1] [i_3] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-115)) ? (2370284977910209005ULL) : (((/* implicit */unsigned long long int) arr_31 [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_3 + 1]))));
                    arr_33 [(unsigned char)0] [i_0] [i_3] [i_8] = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))));
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                {
                    arr_36 [i_0] [i_1] [i_0] [i_9] = ((/* implicit */_Bool) arr_1 [i_0]);
                    arr_37 [i_0] [i_0] [i_0] [i_1] [i_1] [(unsigned char)2] &= ((/* implicit */unsigned long long int) arr_22 [i_0]);
                    arr_38 [i_0] [i_0] [i_3] [i_0] = (-(9223372036854775805LL));
                }
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                {
                    arr_42 [i_0] [i_1] [i_3 - 1] [i_0] [i_10] [(signed char)6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? ((~(((/* implicit */int) (unsigned char)229)))) : (((/* implicit */int) arr_16 [i_1 + 1] [i_3 - 1] [i_3 - 1] [i_3 + 1]))));
                    arr_43 [i_0] [i_0] [i_0] [i_0] [(signed char)8] = ((/* implicit */unsigned short) ((arr_40 [i_10] [0LL] [0LL] [0LL] [i_0]) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_39 [i_0] [i_1] [i_3 - 1] [i_10])) ? (((/* implicit */int) arr_16 [i_0] [i_0] [i_3 - 1] [i_0])) : (((/* implicit */int) var_12)))))));
                }
                for (unsigned char i_11 = 0; i_11 < 10; i_11 += 4) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_12 = 2; i_12 < 7; i_12 += 4) 
                    {
                        arr_51 [7LL] [i_0] [i_3] [(signed char)3] [i_12 - 1] [i_0] [i_0] = (_Bool)1;
                        arr_52 [i_12] [i_12 - 1] [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_0] [i_12] = ((/* implicit */long long int) var_3);
                        arr_53 [4LL] [(signed char)2] [i_1] [i_1 - 1] [i_12] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) 7U)) ? (-6590292494101832036LL) : (((/* implicit */long long int) 1579438133U)))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_9 [i_0] [i_0] [i_0] [(short)3]))))));
                        arr_54 [i_0] [(_Bool)1] [i_12] [i_11] [i_12] = ((/* implicit */short) var_0);
                    }
                    arr_55 [i_0] [i_3] [i_1] [i_0] = (i_0 % 2 == zero) ? (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_49 [i_11] [i_3] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_0] [i_1]))) : (8712990082971683493LL))) << (((((/* implicit */int) arr_44 [i_0])) + (1969)))))) : (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_49 [i_11] [i_3] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_0] [i_1]))) : (8712990082971683493LL))) << (((((((/* implicit */int) arr_44 [i_0])) + (1969))) - (12886))))));
                }
            }
            arr_56 [i_0] [i_1] = ((/* implicit */signed char) ((((var_9) + (9223372036854775807LL))) << (((((/* implicit */int) (short)4096)) & (((/* implicit */int) (_Bool)1))))));
            /* LoopSeq 1 */
            for (int i_13 = 0; i_13 < 10; i_13 += 2) 
            {
                arr_60 [i_0] [i_0] = ((/* implicit */long long int) (~(arr_1 [i_0])));
                /* LoopSeq 2 */
                for (unsigned char i_14 = 0; i_14 < 10; i_14 += 3) 
                {
                    arr_63 [i_0] [i_0] [i_0] [i_14] [i_14] [i_0] = ((/* implicit */unsigned long long int) arr_4 [i_1 + 1] [i_0] [i_1 + 3]);
                    /* LoopSeq 2 */
                    for (long long int i_15 = 3; i_15 < 7; i_15 += 4) /* same iter space */
                    {
                        arr_66 [i_0] [i_1] [i_0] [i_14] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (7696663960052458566ULL) : (((/* implicit */unsigned long long int) arr_31 [i_1 - 1] [i_1 - 1] [i_15 - 3] [i_14]))));
                        arr_67 [i_0] [i_0] [(unsigned char)4] [i_14] [(unsigned char)3] = ((/* implicit */_Bool) 17LL);
                        arr_68 [i_0] [i_1] [i_1] [i_14] [i_13] = ((/* implicit */unsigned char) ((signed char) arr_61 [i_15 - 2] [i_15] [i_15] [i_15] [i_15]));
                        arr_69 [i_13] |= ((/* implicit */long long int) (unsigned char)255);
                        arr_70 [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1 + 3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_0] [i_1 + 1] [i_0] [i_1] [i_1 - 1] [i_1 - 1]))) : (var_9)));
                    }
                    for (long long int i_16 = 3; i_16 < 7; i_16 += 4) /* same iter space */
                    {
                        arr_74 [i_1 + 2] [i_1] [i_0] [i_1 + 2] = ((/* implicit */unsigned long long int) arr_0 [i_16]);
                        arr_75 [i_1] [i_1] [i_13] [i_1] [i_1] [i_13] [i_1] |= ((/* implicit */short) ((((/* implicit */int) var_10)) != (((/* implicit */int) arr_12 [i_16 + 1] [i_16 + 3] [i_16] [i_16 + 1] [i_16] [i_16]))));
                        arr_76 [i_0] [i_0] [i_0] [i_0] [i_0] [i_14] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)80)) ? (((/* implicit */int) arr_29 [i_13] [(signed char)8])) : (((/* implicit */int) arr_29 [i_0] [i_0]))));
                        arr_77 [i_0] [i_1] [i_13] [i_0] [i_16] [i_16] = ((/* implicit */signed char) ((var_16) ? (arr_73 [i_0] [(signed char)9] [i_0] [(unsigned char)8] [i_1 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -1891119229))))))));
                    }
                    arr_78 [i_0] [i_1] [i_13] [i_14] [i_14] = ((/* implicit */signed char) arr_50 [i_0] [i_0] [i_0]);
                    arr_79 [(_Bool)1] [6ULL] [(_Bool)1] [(_Bool)1] [i_0] = ((/* implicit */short) (unsigned char)113);
                }
                for (unsigned long long int i_17 = 0; i_17 < 10; i_17 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_18 = 4; i_18 < 9; i_18 += 4) /* same iter space */
                    {
                        arr_85 [i_0] [i_18] [i_17] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (_Bool)1);
                        arr_86 [i_0] [(unsigned char)8] [i_13] [i_18] [i_18] [(unsigned char)8] = ((/* implicit */_Bool) ((((/* implicit */int) var_4)) << (((((/* implicit */int) arr_49 [i_18] [i_18] [i_18] [i_18] [i_18 - 4] [i_18])) + (2367)))));
                        arr_87 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_0] [i_1 + 3] [i_0] [i_17] [i_0])) ? ((+(((/* implicit */int) (short)-21175)))) : (((/* implicit */int) ((unsigned char) arr_1 [i_0])))));
                        arr_88 [i_0] [i_13] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((int) var_10))) ? (1891119229) : (((/* implicit */int) var_13))));
                    }
                    for (unsigned short i_19 = 4; i_19 < 9; i_19 += 4) /* same iter space */
                    {
                        arr_92 [i_0] = ((/* implicit */unsigned long long int) arr_72 [i_1 + 2] [i_1 - 1]);
                        arr_93 [i_0] [i_17] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_65 [(short)5] [i_13] [i_0]);
                        arr_94 [i_0] [i_0] [i_1 + 2] [i_0] [(short)7] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)-126))));
                    }
                    arr_95 [i_0] [i_1] [i_13] [i_17] = ((/* implicit */long long int) (~(10750080113657093038ULL)));
                    arr_96 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (+((+(((/* implicit */int) var_2))))));
                    arr_97 [i_0] [i_17] = ((/* implicit */signed char) ((_Bool) (_Bool)1));
                    /* LoopSeq 2 */
                    for (int i_20 = 3; i_20 < 8; i_20 += 3) /* same iter space */
                    {
                        arr_102 [i_0] [i_0] [i_13] [i_0] = ((arr_3 [i_20 + 2]) ? (arr_10 [i_1 + 1] [(_Bool)1] [i_13] [i_1 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_14))));
                        arr_103 [i_1] [i_0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (((~(9223372036854775805LL))) * (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_5))))));
                        arr_104 [i_0] [i_1] [i_0] [i_17] [i_20] = ((/* implicit */int) arr_35 [i_20] [i_20 - 1] [i_17] [i_17] [i_1 + 1]);
                        arr_105 [i_0] [i_0] [i_0] [i_0] [i_13] [i_0] [i_0] = ((/* implicit */int) (unsigned short)34626);
                    }
                    for (int i_21 = 3; i_21 < 8; i_21 += 3) /* same iter space */
                    {
                        arr_108 [i_0] [i_17] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_99 [i_21 - 2] [i_21 + 1]))));
                        arr_109 [i_0] [i_17] [i_13] [i_1] [i_0] = ((/* implicit */_Bool) (signed char)126);
                    }
                }
            }
            arr_110 [6] [6] [(_Bool)1] |= ((/* implicit */short) (unsigned char)225);
        }
        for (unsigned char i_22 = 1; i_22 < 7; i_22 += 4) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned int i_23 = 0; i_23 < 10; i_23 += 1) 
            {
                for (unsigned char i_24 = 3; i_24 < 9; i_24 += 1) 
                {
                    for (unsigned char i_25 = 2; i_25 < 9; i_25 += 2) 
                    {
                        {
                            arr_121 [i_0] [i_0] [i_23] [i_0] [i_25] = ((/* implicit */short) ((int) arr_0 [i_23]));
                            arr_122 [i_0] [i_22 + 1] [i_23] [i_0] [i_25] = ((/* implicit */signed char) 18446744073709551615ULL);
                            arr_123 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)215)) / (var_0)));
                            arr_124 [i_25] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_48 [i_24 - 2] [i_25 - 1] [i_22 + 3])) + (((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
            } 
            arr_125 [(_Bool)1] = ((((((/* implicit */int) (unsigned char)215)) != (((/* implicit */int) arr_101 [i_0] [(signed char)6] [i_0] [i_0] [i_0])))) ? (((((/* implicit */_Bool) arr_46 [i_0] [i_22] [i_0] [i_0] [i_0] [i_0])) ? (arr_22 [i_22]) : (((/* implicit */long long int) ((/* implicit */int) arr_57 [(signed char)0] [8ULL] [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_22 + 2] [i_22]))));
            arr_126 [i_0] = ((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0] [i_22 - 1])) ? (var_9) : (((/* implicit */long long int) var_17)));
        }
        arr_127 [i_0] [i_0] = ((/* implicit */short) arr_41 [i_0] [i_0] [i_0] [i_0]);
    }
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)31))) : (14ULL)));
}
