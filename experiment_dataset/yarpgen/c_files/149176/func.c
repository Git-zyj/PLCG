/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149176
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
    var_20 = ((/* implicit */long long int) var_10);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((int) arr_3 [i_0]))) <= (var_6)))) : (((arr_3 [i_0]) ^ (((/* implicit */int) var_14))))));
        /* LoopSeq 2 */
        for (int i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_1] [i_0]))) : (var_6)));
            arr_6 [i_0] [i_1 - 2] [i_1] = ((/* implicit */signed char) var_9);
        }
        for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            var_23 = ((/* implicit */signed char) var_3);
            /* LoopSeq 1 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_24 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((int) arr_4 [18ULL] [(signed char)10] [i_3])) : (((/* implicit */int) ((signed char) var_11)))))) ? (((((((/* implicit */_Bool) arr_7 [(signed char)12] [(signed char)12] [i_3])) || (((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) ((unsigned char) arr_11 [i_3] [i_2] [(unsigned char)8] [i_0]))) : (((/* implicit */int) ((_Bool) var_4))))) : (((((_Bool) arr_3 [i_3])) ? (((int) arr_5 [i_0])) : (((/* implicit */int) ((((/* implicit */_Bool) var_18)) || (arr_11 [(unsigned char)3] [14] [i_3] [i_3]))))))));
                /* LoopSeq 3 */
                for (unsigned int i_4 = 0; i_4 < 20; i_4 += 2) 
                {
                    var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8))))) ^ (var_6)))))));
                    /* LoopSeq 3 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        arr_16 [i_0] [12] [i_3] [i_4] [(unsigned short)5] [i_5] [i_4] &= ((/* implicit */unsigned char) ((((((/* implicit */int) (_Bool)0)) >> (((/* implicit */int) (_Bool)1)))) % (((int) (_Bool)1))));
                        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) (~(((/* implicit */int) arr_5 [i_3])))))) ^ (((((/* implicit */int) (short)2719)) >> (((((/* implicit */int) (short)-16094)) + (16103))))))))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        var_27 = arr_12 [i_2];
                        arr_20 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */signed char) max((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) arr_0 [i_0] [i_6])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                        arr_21 [i_0] [2LL] [(short)0] [(signed char)14] [i_4] [i_6] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [(unsigned short)18] [i_2])) >> (((arr_10 [i_3] [i_2] [i_0]) + (1066393884)))))) ? (((/* implicit */int) ((_Bool) var_17))) : (((((arr_10 [(unsigned short)15] [i_2] [(unsigned short)16]) + (2147483647))) >> (((((/* implicit */int) var_3)) - (19964)))))));
                        arr_22 [i_6] [i_2] [i_6] [(short)16] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_3)) : (((((/* implicit */int) arr_0 [i_0] [i_0])) % (((/* implicit */int) arr_17 [i_6] [17U] [i_2] [i_6]))))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_25 [i_7] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((unsigned long long int) var_11))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_2] [i_4])) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_7 [i_7] [i_2] [i_0]))))) : (arr_13 [i_0] [i_0] [i_3] [i_4] [i_7] [i_0])));
                        var_28 -= ((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned int) arr_8 [i_3] [i_2]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_4] [i_4] [(_Bool)1] [(_Bool)1]))) : (arr_13 [(signed char)1] [i_4] [i_4] [i_4] [i_4] [(signed char)1]));
                        var_29 = ((/* implicit */unsigned short) ((short) (!(((/* implicit */_Bool) 1U)))));
                        arr_26 [i_0] [i_0] [(unsigned char)7] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_9);
                    }
                    /* LoopSeq 4 */
                    for (unsigned long long int i_8 = 3; i_8 < 19; i_8 += 3) 
                    {
                        var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) ((signed char) min((arr_19 [i_8 - 1] [i_8 - 3] [i_8 - 1] [i_8 - 1] [i_8 - 2] [i_8 - 3] [i_8 - 2]), (arr_19 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 3] [i_8 - 1] [i_8 + 1] [i_8 - 2])))))));
                        arr_31 [i_0] [i_8] [i_4] [i_8 - 2] = ((/* implicit */long long int) var_8);
                        var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((min((((/* implicit */long long int) var_10)), (var_7))) ^ (((/* implicit */long long int) ((/* implicit */int) var_4)))))))))));
                    }
                    for (signed char i_9 = 0; i_9 < 20; i_9 += 4) 
                    {
                        var_32 = ((/* implicit */unsigned short) arr_13 [i_0] [i_2] [i_3] [i_0] [i_2] [i_9]);
                        arr_34 [6] = ((/* implicit */int) ((_Bool) (~(((/* implicit */int) ((arr_3 [(_Bool)1]) <= (arr_8 [i_0] [i_2])))))));
                        arr_35 [(_Bool)1] [(_Bool)1] [13] [i_4] [i_9] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) var_9)) > (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0]))))), (((long long int) ((((/* implicit */int) var_17)) << (((var_2) - (610785772U))))))));
                        var_33 -= ((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned int) arr_10 [i_0] [i_3] [i_9])), (((var_13) >> (((((/* implicit */int) var_4)) + (88))))))));
                    }
                    /* vectorizable */
                    for (short i_10 = 0; i_10 < 20; i_10 += 1) 
                    {
                        arr_40 [i_10] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */short) arr_11 [(unsigned char)2] [i_2] [i_3] [i_4]);
                        var_34 ^= ((((/* implicit */_Bool) arr_18 [i_0] [i_2] [i_3] [i_4] [i_4])) ? (((/* implicit */int) arr_0 [i_0] [11U])) : (((((/* implicit */int) var_4)) % (((/* implicit */int) arr_18 [(unsigned char)8] [i_2] [(signed char)10] [12] [i_4])))));
                        arr_41 [2U] [i_2] [i_3] [2U] [18ULL] = ((/* implicit */unsigned char) (+(977078717U)));
                    }
                    for (signed char i_11 = 0; i_11 < 20; i_11 += 2) 
                    {
                        arr_46 [(unsigned char)15] [i_2] [i_3] [i_2] [(_Bool)1] [i_4] [(_Bool)1] |= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) <= (arr_14 [i_0])))) % (((/* implicit */int) min((((/* implicit */unsigned char) var_4)), (arr_1 [i_0] [i_0]))))));
                        arr_47 [i_0] [(signed char)16] [i_0] [i_0] [(_Bool)1] [i_0] [2LL] = ((/* implicit */_Bool) ((0ULL) >> (((1572864ULL) - (1572826ULL)))));
                    }
                }
                for (int i_12 = 1; i_12 < 18; i_12 += 3) 
                {
                    arr_50 [i_0] [i_2] [(_Bool)1] [(unsigned short)17] [(_Bool)1] [i_12] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_13)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) >> (((((/* implicit */int) ((signed char) arr_45 [i_12 + 1] [i_12 + 2] [i_12] [i_12 + 2] [i_12 + 1]))) - (109)))));
                    var_35 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) ((var_9) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (max((((/* implicit */unsigned int) var_16)), (var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [(signed char)16] [(signed char)16]))))));
                    var_36 ^= ((/* implicit */unsigned int) max((arr_9 [i_0] [i_0] [i_0]), (((/* implicit */int) var_12))));
                    arr_51 [i_0] [i_2] [i_3] [i_12] = ((/* implicit */short) var_15);
                }
                for (long long int i_13 = 1; i_13 < 19; i_13 += 2) 
                {
                    arr_55 [i_0] [i_0] [i_0] [(unsigned char)4] [i_13] [i_13 + 1] = ((/* implicit */unsigned int) arr_1 [(short)14] [6LL]);
                    arr_56 [(unsigned short)7] [(_Bool)0] [(_Bool)0] [i_2] [(signed char)1] = ((/* implicit */unsigned long long int) var_8);
                    var_37 *= ((/* implicit */signed char) ((unsigned char) arr_0 [i_2] [(signed char)7]));
                }
                arr_57 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) (!(((/* implicit */_Bool) arr_0 [i_2] [i_0])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 956346267818499180LL))))) : (((/* implicit */int) min((arr_29 [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned char) arr_36 [i_0] [i_2] [i_3] [i_3] [(unsigned char)19] [i_3] [i_3])))))));
            }
            var_38 = ((/* implicit */long long int) min((var_38), (((/* implicit */long long int) ((short) ((((/* implicit */_Bool) arr_43 [i_0] [i_0] [i_2])) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_48 [i_0] [i_2] [i_0] [i_0]))))))));
        }
        /* LoopNest 2 */
        for (long long int i_14 = 1; i_14 < 16; i_14 += 1) 
        {
            for (unsigned short i_15 = 0; i_15 < 20; i_15 += 4) 
            {
                {
                    arr_64 [i_15] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((unsigned int) var_17)) >> (((((/* implicit */int) arr_17 [i_14 + 2] [i_14 + 3] [i_14] [i_15])) - (14315)))))) ? (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_48 [i_15] [(unsigned char)15] [(_Bool)0] [13U]))) : (var_0)))), (((long long int) var_9)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_38 [i_14] [i_14] [i_14 + 1] [i_14 + 1] [i_14] [i_15])) ? (((/* implicit */int) arr_38 [i_14] [i_14] [i_14 + 2] [i_14 + 3] [i_14] [i_14])) : (((/* implicit */int) arr_38 [i_0] [i_0] [i_14 + 3] [i_14 - 1] [i_14] [i_14])))))));
                    /* LoopSeq 1 */
                    for (int i_16 = 0; i_16 < 20; i_16 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_17 = 0; i_17 < 20; i_17 += 4) 
                        {
                            var_39 += ((/* implicit */signed char) ((1674880828) ^ (((/* implicit */int) (_Bool)0))));
                            var_40 &= ((/* implicit */unsigned short) min((((int) var_18)), (((arr_15 [i_0] [i_14 + 2] [i_15] [i_16] [i_17]) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_1 [i_15] [i_16]))))));
                            arr_71 [i_14] [i_14] [i_15] [i_16] [i_17] = ((/* implicit */_Bool) var_14);
                        }
                        arr_72 [(_Bool)1] [i_14 + 2] [i_15] [i_16] [i_14] = ((/* implicit */signed char) arr_70 [(_Bool)1] [(_Bool)1] [i_14] [i_15] [(_Bool)1]);
                        var_41 = ((/* implicit */signed char) max((((unsigned char) var_5)), (((/* implicit */unsigned char) arr_33 [i_0]))));
                    }
                }
            } 
        } 
    }
    /* LoopSeq 3 */
    for (signed char i_18 = 0; i_18 < 13; i_18 += 3) 
    {
        var_42 = ((/* implicit */unsigned char) ((long long int) ((_Bool) max((((/* implicit */long long int) arr_74 [i_18] [5U])), (var_7)))));
        arr_77 [i_18] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) var_17))) <= (var_6))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (_Bool)0)))) : (var_1)))) ? (((((/* implicit */_Bool) ((var_12) ? (((/* implicit */int) arr_58 [(_Bool)1] [8ULL])) : (((/* implicit */int) var_5))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_18] [i_18] [7LL]))) : (((((/* implicit */_Bool) arr_12 [(short)5])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_54 [8] [i_18] [8]))))) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
        arr_78 [i_18] = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_54 [i_18] [i_18] [i_18])) ? (arr_54 [i_18] [i_18] [(_Bool)1]) : (arr_54 [i_18] [i_18] [i_18]))));
    }
    for (signed char i_19 = 0; i_19 < 19; i_19 += 4) 
    {
        /* LoopNest 3 */
        for (short i_20 = 1; i_20 < 18; i_20 += 1) 
        {
            for (unsigned int i_21 = 0; i_21 < 19; i_21 += 1) 
            {
                for (unsigned long long int i_22 = 1; i_22 < 15; i_22 += 1) 
                {
                    {
                        var_43 |= ((/* implicit */long long int) arr_85 [i_22] [i_21] [i_20 + 1]);
                        var_44 = ((/* implicit */_Bool) min((var_44), (((((/* implicit */int) ((((((/* implicit */_Bool) arr_9 [i_19] [i_20 - 1] [i_20])) ? (((/* implicit */int) arr_59 [i_21] [i_22 + 4])) : (((/* implicit */int) var_18)))) <= (((/* implicit */int) max((((/* implicit */unsigned short) var_12)), (var_5))))))) > (((((/* implicit */_Bool) arr_69 [i_19] [i_19] [i_20] [i_20] [i_20 - 1] [(signed char)6] [(unsigned short)13])) ? (((/* implicit */int) arr_69 [i_19] [i_19] [(unsigned char)15] [i_19] [i_20 + 1] [i_20 + 1] [i_20])) : (((/* implicit */int) arr_69 [i_19] [i_19] [i_20] [i_20] [i_20 - 1] [i_22] [(_Bool)1]))))))));
                    }
                } 
            } 
        } 
        var_45 &= ((/* implicit */unsigned char) var_5);
        /* LoopNest 3 */
        for (int i_23 = 0; i_23 < 19; i_23 += 1) 
        {
            for (unsigned int i_24 = 1; i_24 < 18; i_24 += 2) 
            {
                for (short i_25 = 0; i_25 < 19; i_25 += 2) 
                {
                    {
                        var_46 ^= ((/* implicit */signed char) arr_30 [i_19] [i_24 + 1] [i_24 + 1] [i_24 - 1] [i_24 + 1] [i_24 + 1]);
                        arr_98 [i_19] [i_19] [i_24] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) (+(((/* implicit */int) var_10)))))) ? (((1U) >> (((var_7) - (7408619354779856535LL))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))));
                        arr_99 [(_Bool)1] [(_Bool)1] [i_24] [i_25] = ((/* implicit */unsigned short) ((short) var_10));
                        var_47 = ((/* implicit */long long int) min((var_47), (((/* implicit */long long int) var_14))));
                        var_48 = ((/* implicit */signed char) arr_79 [8U]);
                    }
                } 
            } 
        } 
        arr_100 [i_19] [i_19] = ((/* implicit */long long int) ((int) var_17));
    }
    /* vectorizable */
    for (long long int i_26 = 0; i_26 < 25; i_26 += 1) 
    {
        arr_103 [i_26] &= ((/* implicit */signed char) var_11);
        var_49 = ((/* implicit */unsigned int) arr_102 [23U]);
        arr_104 [i_26] = var_13;
    }
    /* LoopSeq 4 */
    for (unsigned short i_27 = 0; i_27 < 13; i_27 += 3) 
    {
        var_50 = ((/* implicit */long long int) min((var_50), (((/* implicit */long long int) arr_14 [(unsigned char)14]))));
        arr_109 [i_27] [i_27] = ((/* implicit */unsigned int) arr_42 [i_27] [i_27] [2LL] [i_27] [i_27] [i_27]);
    }
    /* vectorizable */
    for (signed char i_28 = 0; i_28 < 15; i_28 += 3) 
    {
        arr_114 [14ULL] = ((/* implicit */long long int) arr_11 [i_28] [0ULL] [i_28] [(unsigned char)0]);
        var_51 = ((/* implicit */unsigned long long int) min((var_51), (((/* implicit */unsigned long long int) arr_12 [i_28]))));
    }
    for (signed char i_29 = 1; i_29 < 10; i_29 += 4) 
    {
        var_52 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((short) arr_13 [i_29] [i_29] [i_29] [13LL] [(unsigned short)14] [i_29]))), (((arr_94 [i_29] [i_29] [i_29]) + (((/* implicit */unsigned long long int) var_13))))))) ? (((((/* implicit */int) arr_18 [i_29] [i_29 + 3] [i_29 + 3] [i_29 + 3] [(unsigned char)2])) - (((/* implicit */int) var_19)))) : (((((/* implicit */_Bool) arr_87 [i_29] [i_29 + 3] [i_29 + 3] [i_29] [i_29])) ? (((/* implicit */int) arr_93 [i_29] [i_29 + 2])) : (((/* implicit */int) arr_93 [i_29] [i_29]))))));
        arr_118 [i_29 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_81 [i_29])) ? (((((/* implicit */_Bool) ((var_9) ? (arr_101 [i_29] [i_29]) : (arr_97 [(signed char)11] [(signed char)11] [i_29] [i_29] [i_29] [i_29])))) ? (((long long int) (unsigned short)2)) : (((/* implicit */long long int) ((((/* implicit */unsigned int) var_16)) % (var_6)))))) : (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_29] [i_29] [i_29] [i_29] [i_29] [i_29 - 1] [i_29])))));
    }
    /* vectorizable */
    for (signed char i_30 = 1; i_30 < 10; i_30 += 2) 
    {
        var_53 |= ((/* implicit */int) ((signed char) arr_66 [i_30 + 1] [i_30 + 1]));
        arr_122 [i_30 - 1] [i_30] = ((/* implicit */signed char) ((int) var_0));
        var_54 = ((/* implicit */unsigned long long int) max((var_54), (((/* implicit */unsigned long long int) arr_42 [i_30 + 1] [i_30 - 1] [i_30 - 1] [i_30 - 1] [i_30 - 1] [i_30 + 1]))));
    }
}
