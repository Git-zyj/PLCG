/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149714
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                /* LoopNest 2 */
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    for (unsigned int i_4 = 0; i_4 < 18; i_4 += 4) 
                    {
                        {
                            arr_11 [2LL] [3LL] [i_3 - 1] [i_3] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1))));
                            arr_12 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)59)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0))));
                        }
                    } 
                } 
                /* LoopSeq 4 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                {
                    arr_17 [i_5] [i_1] [i_2] [i_5] = ((/* implicit */unsigned char) ((long long int) arr_16 [i_1 + 1] [i_1 + 1] [i_5]));
                    arr_18 [i_0] [i_0] [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    arr_19 [i_5] [i_2] [i_1] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -3811963142344392005LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)20))));
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                {
                    arr_22 [i_0] [i_2] [i_2] [i_6] = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)12576))) : (arr_8 [i_0] [(short)16] [i_2] [i_1 + 1] [(unsigned short)6])));
                    arr_23 [i_2] [i_1] [12LL] = ((/* implicit */unsigned char) (((_Bool)1) ? (var_12) : (((/* implicit */long long int) arr_1 [i_1 - 1] [i_1 - 1]))));
                    arr_24 [i_1] [i_6] [i_2] = ((/* implicit */short) ((long long int) (_Bool)0));
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                {
                    arr_28 [i_0] [i_0] [i_0] [i_7] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_1 + 1] [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_7])) ? (((/* implicit */long long int) -506032090)) : (arr_27 [i_1 + 1] [i_1] [i_1 - 1] [i_1 - 1] [i_1] [i_7])));
                    arr_29 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)248))) : (arr_27 [(unsigned short)12] [i_1] [i_2] [(_Bool)1] [(unsigned short)12] [i_7])))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2] [i_2] [i_1])))));
                    arr_30 [i_7] [i_1] [i_2] = ((/* implicit */unsigned short) ((signed char) var_6));
                }
                for (short i_8 = 1; i_8 < 16; i_8 += 2) 
                {
                    arr_34 [(signed char)13] [(signed char)13] [i_2] [(signed char)13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_8] [i_8 - 1] [i_8] [i_8 - 1] [i_8 - 1] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (4982196617482827559LL)));
                    arr_35 [i_0] [i_0] [i_2] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (12413024585689362111ULL) : (((/* implicit */unsigned long long int) arr_1 [i_0] [i_1]))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)53909))));
                    arr_36 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1 - 1] [i_8 + 1] [i_8 + 1])) ? (arr_8 [i_0] [i_1] [i_1 - 1] [i_8 - 1] [i_8 + 2]) : (((/* implicit */long long int) var_7))));
                    arr_37 [i_0] [i_1] [i_2] [i_2] [i_2] = ((unsigned short) -5985559489040025833LL);
                }
                arr_38 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */signed char) ((long long int) 16LL));
                /* LoopNest 2 */
                for (long long int i_9 = 3; i_9 < 14; i_9 += 4) 
                {
                    for (unsigned short i_10 = 0; i_10 < 18; i_10 += 4) 
                    {
                        {
                            arr_47 [i_0] [i_1 + 1] [i_2] [i_2] [(signed char)2] [(unsigned short)12] [i_10] = ((/* implicit */unsigned short) ((short) var_8));
                            arr_48 [i_0] [i_1] [i_2] [i_0] [i_2] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 8U)) ? (((((/* implicit */_Bool) 3700951375980879683LL)) ? (5985559489040025826LL) : (2599662366286721382LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18151)))));
                        }
                    } 
                } 
            }
            arr_49 [i_1 + 1] [i_0] [i_0] = ((/* implicit */short) ((signed char) var_12));
            arr_50 [(short)8] [i_1] = ((/* implicit */_Bool) ((unsigned short) arr_5 [i_1 + 1] [i_1 - 1] [i_1 - 1]));
            arr_51 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [(unsigned char)8] [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 + 1])) ? (arr_8 [i_1] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))));
            arr_52 [(short)9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) arr_25 [i_0] [i_1] [i_1] [i_0] [i_0]))) ? (((/* implicit */int) (signed char)-57)) : (((((/* implicit */_Bool) arr_13 [i_0] [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_40 [i_0] [i_1] [i_0] [i_1] [i_1] [i_1]))))));
        }
        for (unsigned int i_11 = 3; i_11 < 15; i_11 += 2) 
        {
            arr_57 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_11] [i_11 + 3] [i_11])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_2 [i_0] [i_11 + 1] [i_11]))));
            arr_58 [i_0] [i_11] [i_11 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_46 [i_11 + 2] [13U]))));
            arr_59 [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_16 [i_11] [i_11 + 3] [i_0])) ? (((/* implicit */int) arr_16 [i_11] [i_11] [i_0])) : (((/* implicit */int) var_13))));
        }
        arr_60 [i_0] [(unsigned char)0] = ((/* implicit */short) ((((/* implicit */_Bool) -722297477303443865LL)) ? ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0] [(unsigned short)12] [i_0]))) : (var_10))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
    }
    /* LoopNest 2 */
    for (short i_12 = 1; i_12 < 12; i_12 += 1) 
    {
        for (signed char i_13 = 0; i_13 < 15; i_13 += 2) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
                {
                    for (int i_15 = 2; i_15 < 11; i_15 += 3) 
                    {
                        for (unsigned short i_16 = 1; i_16 < 14; i_16 += 4) 
                        {
                            {
                                arr_74 [i_16] [i_12] [i_14] [i_14] [i_12] [i_12] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_0)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_0))))));
                                arr_75 [i_12] [i_12 + 3] [7LL] [i_12] [7LL] = ((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)0)), ((unsigned short)23911)));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_17 = 3; i_17 < 13; i_17 += 1) 
                {
                    for (long long int i_18 = 1; i_18 < 14; i_18 += 4) 
                    {
                        {
                            arr_80 [i_12] [i_13] [i_17] [i_17] |= ((/* implicit */unsigned short) ((unsigned int) min((((/* implicit */unsigned int) arr_14 [i_17] [9] [i_17 + 1] [i_17 - 1])), (var_7))));
                            /* LoopSeq 2 */
                            for (signed char i_19 = 4; i_19 < 14; i_19 += 2) 
                            {
                                arr_83 [i_12] [(unsigned short)10] [i_18] [i_19] = ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) arr_44 [i_17] [i_17] [i_17 - 3] [i_17] [i_17])), (min((((/* implicit */unsigned long long int) (short)-10)), (var_6))))), (((/* implicit */unsigned long long int) ((unsigned short) (unsigned short)62244)))));
                                arr_84 [(short)9] [i_18] [(unsigned char)6] [(unsigned char)6] [(unsigned short)8] = ((/* implicit */unsigned char) ((long long int) min((var_6), (((/* implicit */unsigned long long int) arr_72 [i_19] [i_19] [(_Bool)1] [9LL] [i_19] [(unsigned short)3] [i_17 + 2])))));
                            }
                            /* vectorizable */
                            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                            {
                                arr_87 [i_12 + 1] [i_20] [(short)13] [i_18] [(short)13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_12 + 3] [i_20])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)3291)))));
                                arr_88 [i_12] [i_13] [(unsigned short)10] [i_13] [i_17] [i_20] [i_20] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_72 [i_12] [i_12 + 3] [4U] [i_12 + 3] [i_12] [i_12 - 1] [i_12])) ? (((/* implicit */int) arr_72 [i_12] [i_12 + 3] [(unsigned short)1] [i_12 + 3] [i_12 + 3] [i_12] [i_12])) : (((/* implicit */int) var_11))));
                                arr_89 [i_20] [i_20] [i_17] [i_20] [(_Bool)1] = ((/* implicit */unsigned short) ((signed char) (_Bool)0));
                                arr_90 [i_13] [i_13] [i_13] [(_Bool)1] [i_20] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-16)) ? (2U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1))))));
                            }
                        }
                    } 
                } 
                arr_91 [i_12 - 1] = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_8) : (-11LL)))) ? (((/* implicit */unsigned long long int) 577948642875523974LL)) : (((((/* implicit */_Bool) -13LL)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))), (((/* implicit */unsigned long long int) min((arr_53 [i_12 - 1] [i_12 - 1] [i_12 - 1]), (var_3))))));
            }
        } 
    } 
    var_14 = min(((_Bool)1), ((_Bool)0));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_21 = 0; i_21 < 14; i_21 += 3) 
    {
        arr_94 [i_21] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_67 [i_21] [i_21])) ? (((/* implicit */int) arr_67 [i_21] [i_21])) : (((/* implicit */int) var_13))));
        /* LoopSeq 2 */
        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
        {
            arr_98 [i_22] = ((signed char) 3581568403U);
            arr_99 [i_22] = ((/* implicit */short) (((_Bool)1) ? (var_10) : (4538776185411322857LL)));
            /* LoopNest 2 */
            for (long long int i_23 = 1; i_23 < 13; i_23 += 4) 
            {
                for (short i_24 = 1; i_24 < 10; i_24 += 4) 
                {
                    {
                        arr_105 [i_24] [i_22] [i_23] [i_21] [i_22] [i_21] = ((/* implicit */unsigned char) ((_Bool) arr_7 [i_23 + 1] [i_23] [i_24] [i_24] [i_24 + 3]));
                        arr_106 [i_22] = ((/* implicit */long long int) ((((/* implicit */_Bool) 288959839)) ? (arr_95 [i_22] [i_23] [i_22]) : (var_7)));
                        arr_107 [i_24] [i_24] [2U] [12LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)8))) : (3370819168002356400ULL)));
                    }
                } 
            } 
            arr_108 [(unsigned short)0] = ((/* implicit */unsigned char) ((_Bool) var_12));
        }
        for (signed char i_25 = 2; i_25 < 13; i_25 += 3) 
        {
            arr_111 [i_25] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_82 [i_21] [i_25 + 1] [i_21])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4))));
            /* LoopNest 3 */
            for (long long int i_26 = 1; i_26 < 11; i_26 += 4) 
            {
                for (unsigned char i_27 = 4; i_27 < 10; i_27 += 2) 
                {
                    for (signed char i_28 = 1; i_28 < 12; i_28 += 2) 
                    {
                        {
                            arr_118 [i_21] [i_21] [i_21] [i_25] [i_27] [i_28] [i_25] = ((/* implicit */unsigned short) ((_Bool) (signed char)123));
                            arr_119 [i_25] = ((/* implicit */_Bool) ((long long int) (_Bool)0));
                        }
                    } 
                } 
            } 
            arr_120 [i_25] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_85 [i_25 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) arr_77 [i_21])) ? (((/* implicit */long long int) ((/* implicit */int) arr_78 [i_21] [(signed char)11] [(unsigned short)1]))) : (var_8)))));
            arr_121 [i_25] [i_25] = ((/* implicit */_Bool) ((int) arr_61 [i_25 + 1]));
        }
        /* LoopNest 2 */
        for (unsigned short i_29 = 2; i_29 < 12; i_29 += 2) 
        {
            for (unsigned short i_30 = 0; i_30 < 14; i_30 += 4) 
            {
                {
                    arr_126 [i_30] [i_29] [0LL] [0LL] = ((/* implicit */signed char) (((_Bool)1) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_93 [i_29 + 1] [i_29 - 2])))));
                    /* LoopNest 2 */
                    for (short i_31 = 1; i_31 < 12; i_31 += 2) 
                    {
                        for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
                        {
                            {
                                arr_134 [i_21] [i_29] [i_29] [i_21] [i_21] [i_29] [i_21] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)40))) : (var_12)));
                                arr_135 [i_31] [(unsigned short)8] [i_30] [i_32] = ((/* implicit */short) ((((/* implicit */_Bool) 3857419908947655460LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (0U)));
                                arr_136 [i_21] [i_29] [i_31] [i_31] [i_29] = ((arr_93 [i_29 - 2] [i_31 + 2]) ? (4815159808170205545LL) : (((((/* implicit */_Bool) (unsigned char)248)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)21443))) : (arr_114 [i_29]))));
                            }
                        } 
                    } 
                    arr_137 [i_30] [(signed char)4] [(signed char)4] = ((/* implicit */short) ((((/* implicit */_Bool) 3445605176548414525LL)) ? (14LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                }
            } 
        } 
    }
}
