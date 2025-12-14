/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166095
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
    var_12 = ((/* implicit */unsigned int) (((-(max((var_10), (((/* implicit */int) var_11)))))) ^ (((var_4) ? ((+(((/* implicit */int) var_0)))) : (((/* implicit */int) var_0))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            /* LoopSeq 2 */
            for (long long int i_2 = 1; i_2 < 8; i_2 += 3) 
            {
                arr_7 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_5 [i_0]) : (arr_3 [i_0] [i_1])));
                /* LoopSeq 2 */
                for (long long int i_3 = 1; i_3 < 9; i_3 += 3) /* same iter space */
                {
                    arr_10 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_3 [i_1] [i_1]) ^ (var_8)))) ? (((/* implicit */int) (short)-7954)) : ((~(((/* implicit */int) arr_8 [i_1] [i_0] [i_1] [i_0] [(signed char)2] [i_3]))))));
                    arr_11 [i_1] = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)0)) * (var_5)))) <= (3214186206U)));
                }
                for (long long int i_4 = 1; i_4 < 9; i_4 += 3) /* same iter space */
                {
                    var_13 ^= var_1;
                    arr_15 [i_0] [i_1] [i_2] [i_1] = arr_2 [i_1] [i_1];
                    /* LoopSeq 4 */
                    for (signed char i_5 = 0; i_5 < 10; i_5 += 3) /* same iter space */
                    {
                        var_14 &= ((/* implicit */int) arr_6 [(_Bool)1] [i_1 - 1] [(signed char)4] [i_4]);
                        var_15 = ((/* implicit */unsigned short) ((unsigned char) var_9));
                    }
                    for (signed char i_6 = 0; i_6 < 10; i_6 += 3) /* same iter space */
                    {
                        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)2009))))) ? (((((/* implicit */_Bool) var_11)) ? (var_5) : (var_5))) : ((-(var_5)))));
                        arr_20 [i_0] [i_1] [i_0] [i_1] [i_6] = ((/* implicit */signed char) (~(var_8)));
                        var_17 += ((/* implicit */unsigned short) ((unsigned char) arr_4 [(_Bool)1] [i_1] [(_Bool)1] [i_6]));
                        var_18 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_11))) / (((var_7) & (var_1)))));
                    }
                    for (unsigned short i_7 = 0; i_7 < 10; i_7 += 3) /* same iter space */
                    {
                        arr_24 [i_1] [i_4] [i_1] [i_1] [(short)5] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_0))));
                        arr_25 [i_1] [i_1] [i_2 + 2] [i_4] [4ULL] = arr_16 [i_1] [i_1 + 1] [i_1 + 1] [i_4 - 1] [i_4 - 1];
                        arr_26 [(_Bool)1] [(_Bool)1] [i_2] [(signed char)2] [(unsigned short)8] [i_7] |= ((/* implicit */short) ((long long int) arr_5 [i_1]));
                    }
                    for (unsigned short i_8 = 0; i_8 < 10; i_8 += 3) /* same iter space */
                    {
                        arr_29 [i_2] [i_2 - 1] [i_1] [i_2] = ((/* implicit */int) arr_3 [i_1 + 2] [i_1]);
                        arr_30 [i_1] [i_1] [i_4 + 1] [i_2] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_1] [i_1])) ? (((var_10) - (-1))) : (((/* implicit */int) (!(arr_16 [i_1] [i_1] [i_1] [i_1] [i_8]))))));
                    }
                }
            }
            for (unsigned int i_9 = 0; i_9 < 10; i_9 += 2) 
            {
                var_19 = ((long long int) var_0);
                /* LoopNest 2 */
                for (unsigned char i_10 = 3; i_10 < 7; i_10 += 2) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            arr_39 [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_11))) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                            var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_38 [i_1] [i_10 + 2] [i_9] [i_1] [i_1])) ? (arr_38 [(short)4] [(short)0] [(short)0] [i_9] [i_1]) : (arr_38 [i_0 - 2] [i_1] [i_9] [i_10] [i_1])));
                        }
                    } 
                } 
            }
            /* LoopNest 2 */
            for (unsigned int i_12 = 0; i_12 < 10; i_12 += 2) 
            {
                for (unsigned char i_13 = 0; i_13 < 10; i_13 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (int i_14 = 0; i_14 < 10; i_14 += 2) 
                        {
                            var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned int) var_5)) % (((unsigned int) arr_45 [i_13] [i_1] [i_0 + 2] [i_13] [i_13] [i_1 + 1]))));
                            arr_49 [i_0 - 2] [i_0 - 2] [i_12] [i_13] [i_13] &= ((/* implicit */int) var_0);
                            var_22 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_12] [i_12] [i_12] [6] [i_0])))))));
                        }
                        for (signed char i_15 = 2; i_15 < 9; i_15 += 2) 
                        {
                            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) var_5))) ? (((var_3) >> (((var_7) + (1590132166684512687LL))))) : (((((/* implicit */_Bool) arr_13 [i_13] [i_0] [i_1] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11))))));
                            arr_52 [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_11))));
                            var_24 = ((/* implicit */unsigned short) arr_50 [i_0] [i_1] [i_1] [6] [i_15]);
                            arr_53 [i_0] [i_1] [i_1] [i_13] [i_15] = ((/* implicit */_Bool) ((((/* implicit */int) arr_47 [i_15] [i_1 + 1] [3] [i_1 + 1] [i_15 + 1])) | (((/* implicit */int) arr_31 [i_12] [i_1]))));
                        }
                        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [7U] [i_13]))) > (var_7)))) | (((((/* implicit */int) arr_4 [i_12] [i_1] [i_12] [8])) * (((/* implicit */int) var_0)))))))));
                        arr_54 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */short) var_9);
                    }
                } 
            } 
            var_26 = ((/* implicit */long long int) arr_19 [i_1] [(_Bool)1] [i_0] [1] [i_0] [i_0] [i_1]);
        }
        var_27 = ((((/* implicit */_Bool) arr_40 [i_0 - 2] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (short)7953))) : (var_8));
        arr_55 [i_0] = ((/* implicit */long long int) (!(arr_31 [i_0 - 2] [(unsigned short)8])));
        /* LoopSeq 3 */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_17 = 0; i_17 < 10; i_17 += 4) 
            {
                var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_16] [i_16] [i_16] [i_16])) ? (((((/* implicit */long long int) ((/* implicit */int) arr_34 [(signed char)0] [i_16] [i_0] [i_0]))) + (var_1))) : (((/* implicit */long long int) (-(((/* implicit */int) var_4)))))));
                /* LoopSeq 1 */
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    arr_63 [i_16] [i_16] [i_16] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_40 [i_0 - 2] [i_16] [i_0 - 2]))) > (562949953421311LL)));
                    var_29 = ((/* implicit */signed char) ((unsigned short) arr_33 [i_0 - 1] [i_16] [i_17] [i_18]));
                    /* LoopSeq 1 */
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        var_30 = ((/* implicit */int) ((signed char) arr_27 [i_18] [i_16] [i_0 - 2] [(_Bool)1] [7LL]));
                        arr_67 [(_Bool)0] [i_16] [i_17] [i_16] [(unsigned char)6] = ((/* implicit */signed char) var_0);
                        arr_68 [i_17] [i_17] [i_16] [i_17] [i_17] [i_17] = ((/* implicit */signed char) ((int) var_8));
                        var_31 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)3235))))) * (((unsigned int) var_10))));
                        arr_69 [i_16] [i_16] [i_17] [i_18] [i_19] = ((/* implicit */signed char) arr_3 [i_16] [i_16]);
                    }
                }
                arr_70 [i_0] [i_0] [i_17] |= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_4 [i_17] [i_0 - 2] [i_0 - 1] [i_0 + 2]))));
            }
            var_32 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_16] [(unsigned char)6] [i_0 + 2] [(signed char)2] [(unsigned char)6] [i_0 - 2])) && (((/* implicit */_Bool) arr_17 [i_16] [6LL] [i_0] [(unsigned char)0] [6LL] [i_0 + 2]))));
            var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) (~((-(((/* implicit */int) (_Bool)1)))))))));
            /* LoopSeq 2 */
            for (unsigned char i_20 = 3; i_20 < 7; i_20 += 4) 
            {
                arr_74 [i_0] [i_16] [i_0 - 2] = ((/* implicit */unsigned char) var_2);
                var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) (+(var_1))))));
            }
            for (unsigned int i_21 = 1; i_21 < 6; i_21 += 2) 
            {
                var_35 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_40 [i_21] [i_21] [i_21 + 4])) | (((/* implicit */int) arr_40 [i_21] [4] [i_21 + 2]))));
                /* LoopSeq 4 */
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                {
                    var_36 = ((/* implicit */unsigned char) 6485016035645717043LL);
                    var_37 ^= ((/* implicit */int) ((var_8) / (arr_18 [(unsigned char)8] [(_Bool)1] [8])));
                }
                for (signed char i_23 = 3; i_23 < 8; i_23 += 1) 
                {
                    var_38 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) | (((/* implicit */int) ((_Bool) var_8)))));
                    var_39 = ((/* implicit */unsigned long long int) arr_65 [i_0] [i_21] [i_21] [i_16] [i_16]);
                    var_40 -= ((/* implicit */signed char) var_0);
                }
                for (unsigned char i_24 = 0; i_24 < 10; i_24 += 2) 
                {
                    arr_86 [i_24] [i_16] [i_21] [i_24] |= ((unsigned long long int) (~(arr_73 [i_24])));
                    var_41 = ((/* implicit */_Bool) ((((unsigned int) (unsigned short)58675)) + ((+(arr_46 [i_0] [i_16] [i_0] [i_16])))));
                    var_42 = ((/* implicit */_Bool) var_1);
                }
                for (long long int i_25 = 0; i_25 < 10; i_25 += 3) 
                {
                    var_43 = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_8 [i_16] [i_16] [i_16] [i_25] [i_16] [i_16])) ? (((/* implicit */int) arr_65 [i_25] [i_16] [i_21] [i_16] [i_0])) : (((/* implicit */int) arr_32 [i_16]))))));
                    var_44 ^= ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2)));
                    arr_89 [i_0] [i_16] [i_16] [i_0] = ((/* implicit */signed char) (+(((((/* implicit */long long int) ((/* implicit */int) arr_65 [i_25] [i_16] [i_16] [i_16] [i_0]))) | (var_1)))));
                    var_45 = ((/* implicit */int) arr_0 [i_25] [i_16]);
                }
            }
            /* LoopNest 2 */
            for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
            {
                for (short i_27 = 1; i_27 < 9; i_27 += 4) 
                {
                    {
                        var_46 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((((/* implicit */int) var_4)) * (((/* implicit */int) var_4))))) : (((((/* implicit */long long int) ((/* implicit */int) var_9))) | (arr_93 [i_16] [i_16])))));
                        /* LoopSeq 2 */
                        for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                        {
                            var_47 = ((/* implicit */unsigned char) ((562949953421335LL) + (arr_5 [i_0 + 2])));
                            var_48 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_64 [i_16] [i_27] [i_27] [i_27 + 1] [i_27])) ? (arr_64 [i_16] [i_0 + 1] [i_0 + 1] [i_27 + 1] [i_28]) : (arr_64 [i_16] [i_26] [i_26] [i_27 + 1] [i_26])));
                            var_49 += var_11;
                            arr_98 [(unsigned short)2] [i_16] [1U] [i_26] [i_26] [i_16] = ((/* implicit */_Bool) -2122381082);
                            var_50 = ((/* implicit */long long int) max((var_50), (((/* implicit */long long int) var_2))));
                        }
                        for (long long int i_29 = 0; i_29 < 10; i_29 += 3) 
                        {
                            var_51 = ((/* implicit */long long int) ((var_8) <= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_35 [i_29] [i_29] [i_16] [i_16] [i_16] [i_0 - 1]))))))));
                            arr_101 [i_29] [i_29] [i_29] [i_29] [i_16] [i_29] = var_1;
                            var_52 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_0 [i_0 + 2] [i_27 - 1])) : (((/* implicit */int) arr_37 [i_0 - 2] [i_0 + 2] [i_16] [i_27 - 1] [i_29]))));
                        }
                    }
                } 
            } 
        }
        for (unsigned int i_30 = 2; i_30 < 9; i_30 += 2) 
        {
            var_53 = ((/* implicit */_Bool) arr_51 [i_0] [i_30] [i_30] [6U] [i_0]);
            var_54 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((short) var_10)))));
            var_55 -= ((/* implicit */unsigned char) (+(((/* implicit */int) var_9))));
        }
        for (signed char i_31 = 0; i_31 < 10; i_31 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned char i_32 = 3; i_32 < 7; i_32 += 2) 
            {
                for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) 
                {
                    {
                        var_56 = ((/* implicit */unsigned char) var_3);
                        /* LoopSeq 2 */
                        for (unsigned char i_34 = 0; i_34 < 10; i_34 += 4) 
                        {
                            arr_114 [i_32] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_32 - 3] [i_32 - 3] [i_32 - 1] [i_32 - 3] [i_32])) ? (((/* implicit */int) arr_9 [i_32 - 3] [(signed char)3] [i_32 - 1] [i_32 - 3] [8LL])) : (((/* implicit */int) var_2))));
                            var_57 = ((/* implicit */unsigned int) var_0);
                            arr_115 [i_32] [i_33] [i_33] = ((/* implicit */int) ((short) var_10));
                            arr_116 [(_Bool)0] [i_31] [(_Bool)1] [i_32] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_109 [i_0] [i_32] [i_32] [i_0 - 2])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_35 [i_0] [i_0] [i_31] [i_32] [1LL] [i_0])) || (((/* implicit */_Bool) 2122381081))))) : (((/* implicit */int) arr_22 [i_32 + 1] [i_32]))));
                            arr_117 [i_0 - 1] [i_33] [i_32] [i_33] [i_32] = ((/* implicit */unsigned char) (-((+(((/* implicit */int) arr_0 [i_0] [i_0]))))));
                        }
                        for (short i_35 = 0; i_35 < 10; i_35 += 2) 
                        {
                            arr_121 [i_0 - 1] [i_32] = ((/* implicit */int) var_4);
                            arr_122 [i_32] = ((/* implicit */short) ((((/* implicit */int) arr_47 [i_0] [i_31] [i_0] [i_33] [i_35])) <= (((/* implicit */int) var_4))));
                            var_58 -= ((/* implicit */long long int) var_2);
                            arr_123 [i_31] [i_32] = ((/* implicit */unsigned int) var_11);
                            arr_124 [i_0] [i_0] [i_32] [i_31] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_81 [i_0] [7] [i_32 + 1] [(signed char)6] [i_35] [i_32]))))) ? (((/* implicit */long long int) arr_94 [i_0] [i_32] [i_0 + 1] [i_32 - 3] [i_32 - 3] [i_32 - 3])) : (var_8)));
                        }
                    }
                } 
            } 
            var_59 = ((/* implicit */short) min((var_59), (((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */int) (signed char)0)) + (((/* implicit */int) arr_96 [i_0 + 1] [i_0] [(unsigned short)0] [(unsigned short)0] [i_0] [i_31] [i_31])))) : (((/* implicit */int) ((((/* implicit */long long int) 288112032U)) < (var_7)))))))));
            arr_125 [0U] = ((/* implicit */signed char) (~(((/* implicit */int) var_2))));
            var_60 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)17546))));
        }
        var_61 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_36 [i_0 + 1] [(unsigned char)8]))));
    }
    for (_Bool i_36 = 0; i_36 < 1; i_36 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_37 = 0; i_37 < 1; i_37 += 1) 
        {
            /* LoopSeq 2 */
            for (long long int i_38 = 3; i_38 < 20; i_38 += 3) 
            {
                var_62 = ((/* implicit */signed char) min((((/* implicit */long long int) var_4)), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((((/* implicit */int) var_9)) + (((/* implicit */int) var_2))))) : (arr_133 [i_36] [i_37] [i_36])))));
                arr_136 [i_36] [i_37] [i_38] = ((((((/* implicit */int) arr_135 [i_38 - 1] [i_36] [i_38])) & (((/* implicit */int) arr_134 [i_38] [i_36] [i_38 - 1])))) < (((int) ((((/* implicit */int) (unsigned char)111)) <= (var_10)))));
                /* LoopNest 2 */
                for (long long int i_39 = 0; i_39 < 23; i_39 += 4) 
                {
                    for (short i_40 = 0; i_40 < 23; i_40 += 2) 
                    {
                        {
                            var_63 &= ((/* implicit */_Bool) var_9);
                            var_64 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_134 [i_38] [i_36] [(unsigned short)10])) >> (((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((signed char) var_2))) : (((/* implicit */int) (short)-5180)))) - (72)))));
                            var_65 = ((/* implicit */unsigned short) (+((-(arr_139 [i_38] [i_38 - 1] [i_38 + 3] [(unsigned short)11] [i_36] [i_38])))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_41 = 0; i_41 < 23; i_41 += 2) 
                {
                    for (short i_42 = 1; i_42 < 21; i_42 += 3) 
                    {
                        {
                            var_66 |= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_142 [i_41] [i_37] [22U] [i_41])))) % (max((((/* implicit */unsigned int) var_3)), (arr_143 [i_36] [i_38] [i_41])))))) + (max((((((/* implicit */_Bool) var_3)) ? (var_8) : (((/* implicit */long long int) var_5)))), (((/* implicit */long long int) arr_129 [i_38 - 2] [i_38 + 2] [i_41]))))));
                            var_67 |= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_2))) + ((+(arr_138 [i_42 + 2] [i_41] [2U] [i_38 - 3] [i_38])))));
                            arr_146 [i_36] [i_36] = ((/* implicit */unsigned short) ((_Bool) var_0));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (int i_43 = 0; i_43 < 23; i_43 += 3) 
            {
                var_68 = (!(((/* implicit */_Bool) arr_128 [i_36] [i_36])));
                var_69 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((arr_145 [i_36] [i_36] [i_37] [i_43] [i_37]) + (((/* implicit */int) var_9)))))));
                arr_149 [i_36] = ((/* implicit */unsigned int) ((((long long int) var_10)) & (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (5419757712201835795LL)))));
            }
            arr_150 [i_36] = ((/* implicit */unsigned long long int) max((((((/* implicit */long long int) (+(1441321823)))) / (arr_130 [i_36] [i_37]))), (((/* implicit */long long int) ((((/* implicit */int) var_9)) <= (((/* implicit */int) arr_126 [i_36] [i_36])))))));
        }
        var_70 ^= ((/* implicit */short) ((((/* implicit */int) ((unsigned short) min((var_1), (((/* implicit */long long int) arr_139 [16U] [16U] [16U] [(unsigned char)2] [(_Bool)0] [i_36])))))) | (((/* implicit */int) ((signed char) arr_138 [i_36] [(unsigned char)22] [i_36] [i_36] [i_36])))));
        arr_151 [i_36] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((arr_129 [i_36] [8U] [i_36]), (((/* implicit */unsigned int) var_2))))) ? (arr_130 [i_36] [i_36]) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_144 [i_36] [i_36] [i_36] [i_36] [(signed char)0])) : (((/* implicit */int) var_4))))))) << (max((min((var_1), (((/* implicit */long long int) var_4)))), (((/* implicit */long long int) (~(((/* implicit */int) arr_135 [i_36] [i_36] [i_36])))))))));
    }
    for (signed char i_44 = 0; i_44 < 15; i_44 += 2) 
    {
        var_71 = ((/* implicit */int) max((var_0), (var_0)));
        var_72 += ((/* implicit */short) arr_130 [10U] [10U]);
    }
    var_73 = min((((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (var_10) : (((/* implicit */int) var_6))))) % (var_7))), (((/* implicit */long long int) var_3)));
    var_74 = ((/* implicit */long long int) var_6);
}
