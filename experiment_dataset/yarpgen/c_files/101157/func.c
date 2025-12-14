/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101157
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
    var_10 = ((/* implicit */long long int) var_3);
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            var_11 += ((/* implicit */long long int) (+(1608751430U)));
            /* LoopSeq 2 */
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 3) 
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 3) 
                    {
                        arr_14 [i_0] [i_0 - 2] [i_0] [i_0] [i_0 - 2] = ((/* implicit */unsigned long long int) var_8);
                        var_12 = (-((-(((/* implicit */int) (signed char)-41)))));
                        arr_15 [i_0] [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_0 - 1] = ((/* implicit */unsigned long long int) var_3);
                    }
                    for (unsigned char i_5 = 0; i_5 < 18; i_5 += 3) 
                    {
                        arr_18 [i_0] [i_0] [i_0] [(signed char)1] [i_0 + 1] [i_0 + 1] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_16 [i_5] [i_3] [i_2] [i_1] [i_0 - 2]))));
                        arr_19 [(unsigned char)0] [i_1] = ((/* implicit */long long int) var_8);
                        arr_20 [i_0] [i_0] [4] [1U] [i_5] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 2) 
                    {
                        arr_23 [i_0] [i_0] [i_1] [i_2] [11ULL] [(unsigned char)13] [(unsigned char)13] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_13 [i_0] [i_0 - 3] [i_1] [i_3] [i_6] [i_1]))));
                        var_13 &= ((/* implicit */signed char) var_8);
                    }
                    /* LoopSeq 3 */
                    for (int i_7 = 3; i_7 < 16; i_7 += 4) 
                    {
                        arr_26 [i_0] [12LL] [12LL] [16LL] [i_3] [i_7] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_1] [(unsigned char)12]))));
                        var_14 += ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))));
                    }
                    for (unsigned char i_8 = 2; i_8 < 15; i_8 += 2) 
                    {
                        arr_29 [i_0] [i_0] = ((/* implicit */long long int) (-(var_3)));
                        arr_30 [i_0] [i_1] [i_1] [i_0] [i_8] = ((/* implicit */unsigned char) (-((-(((/* implicit */int) var_4))))));
                    }
                    for (long long int i_9 = 0; i_9 < 18; i_9 += 2) 
                    {
                        var_15 &= ((/* implicit */unsigned char) (~(((/* implicit */int) ((var_2) >= (var_7))))));
                        var_16 = ((/* implicit */short) (~((+(var_1)))));
                        var_17 = ((/* implicit */unsigned int) arr_22 [(signed char)6] [i_1] [i_2] [i_0 - 3] [(unsigned char)0] [i_2]);
                    }
                }
                arr_33 [i_2] [i_2] [i_2] = (+(((/* implicit */int) (unsigned char)193)));
            }
            for (unsigned char i_10 = 0; i_10 < 18; i_10 += 4) 
            {
                arr_36 [i_0] [i_0] [i_1] [i_10] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_6))));
                arr_37 [6ULL] [i_1] = ((/* implicit */long long int) var_8);
            }
            var_18 |= ((/* implicit */unsigned int) (~(arr_21 [i_1] [i_1] [i_1] [i_1])));
            /* LoopSeq 2 */
            for (int i_11 = 0; i_11 < 18; i_11 += 4) 
            {
                arr_42 [i_11] [14ULL] [(signed char)0] [i_0] = ((/* implicit */unsigned long long int) (~(arr_38 [i_0] [i_1])));
                var_19 -= ((/* implicit */long long int) var_2);
            }
            for (unsigned long long int i_12 = 0; i_12 < 18; i_12 += 4) 
            {
                var_20 ^= ((/* implicit */int) var_1);
                /* LoopSeq 4 */
                for (int i_13 = 0; i_13 < 18; i_13 += 2) 
                {
                    arr_47 [i_13] = (+(arr_41 [i_0 - 2] [i_0 - 1] [i_0 - 2] [i_0 - 3]));
                    var_21 ^= (~(arr_0 [i_0 - 2] [i_0 - 2]));
                    arr_48 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)41))) != (((long long int) 2686215865U))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_14 = 1; i_14 < 14; i_14 += 4) 
                    {
                        var_22 ^= ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0]))));
                        var_23 = ((/* implicit */unsigned long long int) var_3);
                        var_24 |= ((/* implicit */long long int) arr_38 [i_0] [i_1]);
                    }
                    for (unsigned long long int i_15 = 0; i_15 < 18; i_15 += 4) 
                    {
                        var_25 = ((/* implicit */unsigned long long int) (~(var_1)));
                        var_26 = ((/* implicit */unsigned char) ((unsigned long long int) var_4));
                        arr_56 [i_0] [i_1] [i_13] [i_13] = ((/* implicit */unsigned long long int) ((2686215865U) != (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
                    }
                }
                for (signed char i_16 = 1; i_16 < 14; i_16 += 3) 
                {
                    var_27 += ((/* implicit */unsigned char) (signed char)-34);
                    var_28 ^= ((/* implicit */signed char) arr_51 [i_12]);
                    var_29 = ((/* implicit */signed char) var_3);
                }
                for (unsigned char i_17 = 3; i_17 < 17; i_17 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_18 = 0; i_18 < 18; i_18 += 2) 
                    {
                        var_30 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)-34))));
                        var_31 = ((/* implicit */int) (-(var_1)));
                        var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) var_7))));
                        var_33 ^= ((signed char) var_8);
                    }
                    for (unsigned char i_19 = 0; i_19 < 18; i_19 += 4) 
                    {
                        var_34 = ((/* implicit */unsigned char) (-(arr_58 [(unsigned char)16] [i_0 - 1] [i_17 - 2] [i_17] [i_17])));
                        var_35 += ((/* implicit */int) var_0);
                        var_36 = (~(arr_13 [i_0 - 1] [i_0 - 2] [i_0 + 1] [i_0 + 1] [i_0 - 3] [i_0 - 2]));
                        var_37 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)41))));
                    }
                    arr_70 [i_0 - 2] [i_1] [i_12] [i_17] [i_1] [i_12] = ((/* implicit */short) ((arr_61 [i_17 + 1] [i_1] [i_12] [i_0 + 1]) - (arr_61 [i_17 - 3] [i_1] [i_1] [i_0 - 3])));
                    var_38 = ((/* implicit */unsigned char) arr_52 [i_0] [i_1] [i_1] [i_17]);
                    var_39 = ((/* implicit */unsigned long long int) max((var_39), (((/* implicit */unsigned long long int) ((var_2) / (((/* implicit */int) arr_11 [i_17 - 3] [(unsigned char)9] [i_17 - 3] [i_17] [i_12] [i_0])))))));
                    var_40 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_3))))));
                }
                for (signed char i_20 = 2; i_20 < 15; i_20 += 4) 
                {
                    arr_75 [i_0] [i_12] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) var_0);
                    /* LoopSeq 3 */
                    for (signed char i_21 = 1; i_21 < 17; i_21 += 2) 
                    {
                        arr_78 [i_0] [i_12] [i_12] [i_20 + 1] [i_21 - 1] = (~((+(var_7))));
                        var_41 += ((/* implicit */unsigned char) ((unsigned int) var_0));
                        var_42 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_12] [i_0 - 2])) && (((/* implicit */_Bool) arr_1 [i_12] [i_20 - 2]))));
                        var_43 = ((/* implicit */long long int) arr_28 [12] [i_21 - 1] [3U] [(short)15] [3U]);
                        var_44 *= ((/* implicit */unsigned char) (-(var_1)));
                    }
                    for (long long int i_22 = 0; i_22 < 18; i_22 += 1) /* same iter space */
                    {
                        arr_83 [i_0] [2LL] [i_12] [i_20 - 1] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_4))));
                        arr_84 [i_0] [i_1] [i_0] [i_1] [i_1] [i_20] [i_22] = ((/* implicit */unsigned char) (-(var_5)));
                    }
                    for (long long int i_23 = 0; i_23 < 18; i_23 += 1) /* same iter space */
                    {
                        arr_87 [i_0] [i_0] [i_0 + 1] [i_0 + 1] = ((/* implicit */signed char) (~(arr_0 [4U] [i_0 - 3])));
                        var_45 = ((/* implicit */int) ((signed char) 0));
                        var_46 = ((/* implicit */unsigned char) ((long long int) arr_50 [i_0] [i_1] [i_12] [i_0] [i_23]));
                    }
                }
            }
        }
        for (unsigned int i_24 = 0; i_24 < 18; i_24 += 4) 
        {
            arr_91 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_67 [i_0 - 1] [i_24])) > ((~(((/* implicit */int) arr_7 [i_0] [i_24]))))));
            /* LoopSeq 4 */
            for (unsigned long long int i_25 = 1; i_25 < 17; i_25 += 4) 
            {
                arr_96 [i_24] [(unsigned char)15] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_74 [i_0 + 1] [i_25 + 1]))));
                var_47 = ((/* implicit */signed char) var_8);
                var_48 = ((/* implicit */unsigned int) var_4);
                /* LoopSeq 1 */
                for (unsigned long long int i_26 = 4; i_26 < 17; i_26 += 2) 
                {
                    var_49 = ((/* implicit */unsigned char) min((var_49), (((/* implicit */unsigned char) (~(arr_0 [i_0 + 1] [i_0 + 1]))))));
                    arr_99 [i_0] [i_24] [i_25 + 1] [i_0] = ((/* implicit */unsigned int) arr_57 [i_25 - 1]);
                    var_50 -= ((unsigned char) (signed char)70);
                    /* LoopSeq 3 */
                    for (unsigned char i_27 = 0; i_27 < 18; i_27 += 4) 
                    {
                        var_51 = (-((-(arr_80 [i_0] [i_0] [i_0] [i_25] [i_25 + 1] [i_26 - 2] [i_0]))));
                        arr_103 [i_0 - 3] [i_24] [i_0 - 3] [i_26 - 4] [i_27] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_9 [i_0] [i_0 - 2] [8] [i_25 + 1] [i_25] [i_26 - 2]))));
                        var_52 |= ((/* implicit */unsigned char) (~(var_1)));
                        arr_104 [4U] [4U] [13LL] [(signed char)2] [(signed char)2] [i_24] [4U] = var_0;
                    }
                    for (unsigned long long int i_28 = 1; i_28 < 15; i_28 += 1) 
                    {
                        arr_109 [i_0] [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned int) (+(var_7)));
                        arr_110 [1LL] [1LL] [i_25] [i_26] [i_28 - 1] &= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 2686215866U)))) || (((/* implicit */_Bool) 0))));
                    }
                    for (unsigned int i_29 = 1; i_29 < 17; i_29 += 2) 
                    {
                        var_53 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_69 [i_29] [i_29 + 1] [i_29 - 1] [i_29 - 1] [i_29 - 1]))));
                        var_54 &= ((/* implicit */unsigned char) (-(arr_53 [i_0 - 2] [i_0 - 2] [i_0] [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_26 + 1])));
                    }
                    var_55 = ((/* implicit */short) ((((/* implicit */long long int) arr_38 [i_0 + 1] [i_24])) != (arr_17 [i_0] [i_0 - 2] [i_0 - 2] [i_0] [i_0] [i_0])));
                }
                var_56 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-34))));
            }
            for (unsigned long long int i_30 = 0; i_30 < 18; i_30 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_31 = 0; i_31 < 18; i_31 += 2) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (long long int i_32 = 2; i_32 < 17; i_32 += 2) /* same iter space */
                    {
                        var_57 = ((/* implicit */unsigned long long int) ((arr_4 [i_0 - 3]) <= ((~(876018851)))));
                        arr_125 [i_0 - 3] [i_30] [i_31] [(unsigned char)16] = ((/* implicit */int) ((unsigned long long int) arr_72 [i_32] [i_32 - 1] [i_32 - 1] [i_32 + 1]));
                    }
                    for (long long int i_33 = 2; i_33 < 17; i_33 += 2) /* same iter space */
                    {
                        arr_130 [i_0] [i_0 + 1] [i_0 - 1] = ((/* implicit */int) (~((~(var_5)))));
                        var_58 = (~(arr_117 [i_0 + 1] [i_33 - 2] [i_33]));
                        var_59 = ((/* implicit */unsigned char) (-(arr_106 [i_0 + 1] [i_24])));
                        var_60 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_101 [i_0 - 3] [i_0 - 3] [i_0 + 1] [i_33 - 2] [i_33]))));
                    }
                    for (long long int i_34 = 1; i_34 < 15; i_34 += 4) 
                    {
                        arr_133 [i_34] [9LL] [i_31] [i_30] [i_30] [i_24] [i_0] |= ((arr_72 [i_0] [i_0] [i_34 - 1] [i_34 + 2]) ^ (var_5));
                        var_61 += ((/* implicit */signed char) var_2);
                        var_62 = ((/* implicit */unsigned char) var_5);
                    }
                    arr_134 [10] = ((/* implicit */int) arr_92 [i_0] [i_0 - 2]);
                    var_63 = ((/* implicit */int) min((var_63), ((~(((/* implicit */int) arr_101 [i_0] [i_24] [i_30] [i_24] [i_31]))))));
                    arr_135 [9U] [i_24] [9U] [i_31] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_4))));
                    var_64 = ((/* implicit */unsigned char) arr_80 [i_0] [i_0] [i_0] [15U] [15U] [i_31] [15U]);
                }
                for (unsigned char i_35 = 0; i_35 < 18; i_35 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (int i_36 = 0; i_36 < 18; i_36 += 4) 
                    {
                        var_65 = ((/* implicit */int) (+(arr_39 [i_0 - 3])));
                        var_66 = ((/* implicit */int) ((long long int) var_5));
                    }
                    /* LoopSeq 1 */
                    for (long long int i_37 = 2; i_37 < 16; i_37 += 2) 
                    {
                        var_67 = ((/* implicit */unsigned int) max((var_67), (((/* implicit */unsigned int) arr_21 [i_0 - 3] [i_24] [i_0 + 1] [i_35]))));
                        var_68 = ((/* implicit */unsigned char) min((var_68), (var_4)));
                        var_69 *= ((/* implicit */int) (!(((/* implicit */_Bool) var_3))));
                    }
                }
                var_70 ^= ((/* implicit */long long int) ((signed char) arr_24 [i_0] [i_0] [i_0] [i_0 - 3] [i_0 + 1]));
                var_71 = ((/* implicit */long long int) (~(var_3)));
                var_72 = ((/* implicit */unsigned char) (-((-(((/* implicit */int) (signed char)52))))));
            }
            for (long long int i_38 = 2; i_38 < 15; i_38 += 2) /* same iter space */
            {
                arr_144 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (signed char)-41);
                var_73 = ((/* implicit */long long int) max((var_73), (((/* implicit */long long int) var_3))));
            }
            for (long long int i_39 = 2; i_39 < 15; i_39 += 2) /* same iter space */
            {
                arr_147 [i_39 + 1] = var_5;
                var_74 = ((/* implicit */unsigned char) max((var_74), (((/* implicit */unsigned char) ((((/* implicit */int) arr_105 [i_0 - 2] [i_0 - 3] [i_0] [i_24])) | (((/* implicit */int) arr_105 [i_0 - 3] [i_39] [i_39] [i_39])))))));
            }
        }
        var_75 = (-(((/* implicit */int) arr_140 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0 + 1])));
        var_76 = ((/* implicit */unsigned char) (-(arr_9 [i_0 + 1] [i_0 - 2] [i_0 - 3] [i_0 - 3] [i_0 - 1] [i_0 - 3])));
        arr_148 [i_0] &= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_55 [i_0] [i_0] [i_0 - 1] [i_0]))));
    }
    for (int i_40 = 0; i_40 < 16; i_40 += 2) 
    {
        var_77 ^= ((/* implicit */unsigned int) ((unsigned long long int) (-(((/* implicit */int) (signed char)45)))));
        var_78 ^= ((/* implicit */short) ((int) (((-(((/* implicit */int) var_0)))) / (max((0), (var_7))))));
        arr_151 [i_40] [i_40] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((arr_35 [i_40] [i_40] [(unsigned char)17] [i_40]) <= (arr_35 [i_40] [i_40] [i_40] [i_40]))))));
        var_79 = arr_105 [i_40] [i_40] [i_40] [i_40];
    }
    /* vectorizable */
    for (unsigned char i_41 = 0; i_41 < 21; i_41 += 4) 
    {
        arr_154 [i_41] = ((/* implicit */unsigned long long int) (~(-757293567)));
        var_80 = ((/* implicit */unsigned char) max((var_80), (((/* implicit */unsigned char) (~(arr_153 [i_41]))))));
        var_81 ^= ((/* implicit */short) (+(((/* implicit */int) var_6))));
    }
    var_82 = (-(min((((/* implicit */int) var_6)), (min((var_7), (((/* implicit */int) var_0)))))));
}
