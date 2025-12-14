/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160120
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
    var_12 = ((/* implicit */_Bool) var_0);
    var_13 = ((/* implicit */unsigned char) var_6);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) var_8)), (var_4)))) ? (((/* implicit */int) ((_Bool) var_11))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) var_2)))))));
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */int) arr_2 [i_0] [i_0])) | (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_0] [i_0]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) min((var_4), (((/* implicit */int) arr_2 [(_Bool)1] [i_0]))))) : (((((/* implicit */_Bool) var_4)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 2; i_1 < 8; i_1 += 4) 
    {
        arr_5 [i_1] [(unsigned char)0] = (~(((/* implicit */int) arr_2 [i_1 - 1] [i_1 + 1])));
        var_16 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_2 [i_1] [i_1])))) || (((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1]))));
        /* LoopSeq 2 */
        for (unsigned char i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            /* LoopSeq 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                arr_10 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_8 [i_1] [i_2] [i_3]))));
                /* LoopSeq 1 */
                for (unsigned char i_4 = 2; i_4 < 9; i_4 += 4) 
                {
                    arr_13 [i_4 - 1] [i_3] [i_3] [i_3] [i_2] [i_1] = ((/* implicit */_Bool) ((int) var_6));
                    /* LoopSeq 2 */
                    for (unsigned char i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_10)))))));
                        arr_16 [i_5] [i_3] = ((/* implicit */unsigned short) arr_3 [i_3]);
                        arr_17 [i_1] [i_3] [i_3] [4ULL] [i_5] = var_7;
                    }
                    for (unsigned short i_6 = 2; i_6 < 6; i_6 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((var_5) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_1] [i_1]))))))));
                        arr_21 [i_3] [i_2] [i_3] [i_4 - 1] [i_6] = ((/* implicit */unsigned char) var_10);
                    }
                    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)215)) ? (11836291371286558763ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_6))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9)))))))));
                }
                arr_22 [i_3] [i_2] [i_3] = ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) var_0)))));
                /* LoopSeq 2 */
                for (unsigned long long int i_7 = 1; i_7 < 8; i_7 += 2) 
                {
                    var_20 = ((/* implicit */_Bool) var_5);
                    /* LoopSeq 1 */
                    for (int i_8 = 1; i_8 < 7; i_8 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned short) arr_23 [i_7] [i_7 + 2] [(_Bool)0]);
                        arr_27 [i_1] [i_7 - 1] [(unsigned char)8] [i_2] [i_1] &= ((unsigned char) var_5);
                    }
                }
                for (unsigned long long int i_9 = 1; i_9 < 8; i_9 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_10 = 0; i_10 < 10; i_10 += 2) 
                    {
                        arr_34 [i_1] [i_3] [i_1] [i_1] [i_1] = ((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_1)));
                        arr_35 [(unsigned char)5] [i_2] [i_2] [i_3] [i_3] [i_10] = ((/* implicit */unsigned short) ((((var_4) & (((/* implicit */int) var_7)))) & (((/* implicit */int) arr_18 [i_3] [i_3]))));
                        var_22 += ((/* implicit */unsigned char) var_11);
                    }
                    for (int i_11 = 0; i_11 < 10; i_11 += 4) /* same iter space */
                    {
                        var_23 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_19 [2ULL] [2ULL] [(unsigned char)8] [i_9 + 2] [i_11])))) ? (((((/* implicit */int) var_0)) - (((/* implicit */int) var_8)))) : (arr_20 [i_2] [i_3] [i_9 + 2] [i_11])));
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_11] [i_3] [1ULL] [i_3] [i_1 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 + 1]))) : (arr_12 [i_1 + 2] [i_3] [i_9 + 1] [i_11])));
                        arr_39 [i_3] [i_2] [i_3] [i_9 + 1] [i_2] [i_9] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_12 [i_1] [i_3] [i_3] [i_11])) || (((/* implicit */_Bool) var_3)))) ? (((/* implicit */int) arr_26 [i_11] [i_11] [i_9 - 1] [i_3] [i_2] [i_2] [i_1 + 1])) : ((~(((/* implicit */int) var_3))))));
                        arr_40 [i_11] [i_3] [i_3] [(_Bool)1] = ((/* implicit */unsigned char) (-(((((/* implicit */int) var_2)) & (((/* implicit */int) var_9))))));
                    }
                    for (int i_12 = 0; i_12 < 10; i_12 += 4) /* same iter space */
                    {
                        arr_43 [i_1] [i_3] [i_1] [i_1] [i_1] [i_1 - 1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) != (var_11)));
                        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) == (var_5)));
                        arr_44 [(unsigned char)1] [i_2] [i_3] [i_9] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_24 [i_1 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_32 [i_9 + 1] [i_9] [(unsigned char)4] [i_1 - 1] [i_1 + 2])));
                        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_9])) ? (arr_6 [i_3] [i_9 + 2]) : (((/* implicit */unsigned long long int) var_4))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8)))))));
                        arr_45 [i_2] [i_2] [i_3] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) (-((-(((/* implicit */int) var_3))))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned char i_13 = 3; i_13 < 7; i_13 += 1) 
                    {
                        arr_50 [i_1] [i_1] [i_2] [2ULL] [i_3] [i_9 - 1] [i_13] = ((((var_5) * (((/* implicit */unsigned long long int) var_4)))) <= (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) arr_4 [i_3] [i_13 + 1]))))));
                        arr_51 [i_3] [i_2] [i_3] [i_1] [i_3] [i_3] = ((/* implicit */int) arr_49 [i_1] [i_2] [(_Bool)1] [i_9] [(unsigned char)4]);
                        arr_52 [i_1] [i_3] [i_3] [i_13] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_0))));
                        var_27 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_48 [i_13] [i_13] [i_13 - 2] [i_13 - 1] [i_13 + 1]))));
                        arr_53 [i_13 + 2] [i_3] [i_9] [i_3] [i_2] [i_3] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_48 [i_9] [i_2] [i_3] [i_1] [i_13 - 1])) < (var_11)));
                    }
                    for (unsigned short i_14 = 0; i_14 < 10; i_14 += 2) /* same iter space */
                    {
                        arr_58 [i_1] [i_3] [i_3] [i_9] [i_14] = ((/* implicit */_Bool) (-(((/* implicit */int) var_2))));
                        var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) arr_46 [i_3] [i_14]))));
                        arr_59 [i_2] [i_3] [i_2] [i_9 + 2] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_0))))) : (((((/* implicit */_Bool) arr_31 [i_1] [i_2] [i_3] [i_2] [i_14])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_7))))));
                    }
                    for (unsigned short i_15 = 0; i_15 < 10; i_15 += 2) /* same iter space */
                    {
                        arr_62 [i_3] [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) var_9)) | (var_4)));
                        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_4) / (((/* implicit */int) var_7))))) ? (((/* implicit */int) var_3)) : (((((/* implicit */int) var_8)) & (((/* implicit */int) arr_33 [(unsigned char)5] [i_3] [i_3] [i_3] [i_1 + 2]))))));
                        var_30 = ((/* implicit */int) min((var_30), ((~(((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */int) arr_30 [i_3] [i_9 - 1] [i_15] [i_2] [(_Bool)1] [i_3] [i_9 + 2]))))))));
                        var_31 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_30 [i_15] [i_9 + 2] [i_3] [i_2] [i_2] [i_2] [i_1 - 2]))));
                    }
                }
            }
            for (unsigned short i_16 = 2; i_16 < 9; i_16 += 1) 
            {
                /* LoopSeq 2 */
                for (int i_17 = 0; i_17 < 10; i_17 += 2) 
                {
                    var_32 = ((/* implicit */unsigned char) var_9);
                    arr_67 [i_1 + 1] [i_2] [i_2] [i_16] [i_17] = ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) var_7)) ? (arr_61 [i_1] [i_2] [i_17] [i_17] [i_17]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))));
                    var_33 = ((/* implicit */_Bool) ((unsigned long long int) var_7));
                    var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) var_7)) ? (var_6) : (var_6)))))));
                }
                for (unsigned char i_18 = 0; i_18 < 10; i_18 += 4) 
                {
                    var_35 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
                    arr_70 [i_2] [i_2] [(unsigned char)0] [i_2] [i_2] [i_2] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_9) ? (var_11) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) arr_8 [i_1] [i_1 + 2] [i_1 + 1])) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1))))));
                }
                arr_71 [i_1 - 1] [i_2] [i_1 - 1] = ((/* implicit */unsigned char) ((arr_49 [i_1] [i_2] [i_16] [i_1 - 2] [i_16 - 2]) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_6))))));
                arr_72 [i_16] [i_16] [i_16] &= ((((/* implicit */int) var_7)) << (((((((/* implicit */_Bool) var_1)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) - (6501229613146940246ULL))));
            }
            /* LoopNest 2 */
            for (unsigned short i_19 = 0; i_19 < 10; i_19 += 1) 
            {
                for (unsigned char i_20 = 0; i_20 < 10; i_20 += 4) 
                {
                    {
                        var_36 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_11) - (var_11)))) ? (var_5) : (((((/* implicit */_Bool) -671766709)) ? (12388434674234759173ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)896)))))));
                        arr_81 [i_19] [i_2] [i_19] [i_20] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((unsigned char) arr_14 [i_1] [i_2] [i_2] [i_19] [i_20])))));
                        arr_82 [i_19] [(_Bool)1] [i_1 + 1] [i_20] = ((/* implicit */_Bool) ((((/* implicit */int) var_7)) / (((/* implicit */int) var_3))));
                        arr_83 [i_1] [i_2] [i_19] [i_20] = ((/* implicit */unsigned long long int) ((var_9) ? (((/* implicit */int) arr_18 [i_2] [i_2])) : (((/* implicit */int) arr_18 [i_2] [i_2]))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
            {
                for (unsigned char i_22 = 0; i_22 < 10; i_22 += 2) 
                {
                    for (unsigned char i_23 = 0; i_23 < 10; i_23 += 1) 
                    {
                        {
                            var_37 = ((((/* implicit */_Bool) 6058309399474792458ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)200))) : (14508428848730895232ULL));
                            arr_91 [i_1 - 2] [i_2] [i_21] [i_22] [(unsigned char)5] = ((/* implicit */int) (+(((((/* implicit */_Bool) arr_79 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) var_4)) : (var_5)))));
                            var_38 = var_1;
                        }
                    } 
                } 
            } 
        }
        for (unsigned char i_24 = 0; i_24 < 10; i_24 += 4) 
        {
            arr_96 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) + (((/* implicit */int) var_1))))) ? (((((/* implicit */int) arr_77 [i_1] [i_24] [(_Bool)1] [i_24])) | (((/* implicit */int) var_2)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
            arr_97 [i_1 + 2] [i_1 + 2] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_95 [i_1 - 2]))));
            arr_98 [i_1] = ((/* implicit */int) arr_61 [i_24] [i_24] [i_24] [(unsigned char)6] [i_1]);
        }
        arr_99 [i_1 - 2] |= ((/* implicit */unsigned long long int) (-(((((/* implicit */int) var_9)) / (((/* implicit */int) arr_87 [i_1] [i_1] [i_1] [i_1] [i_1 - 2]))))));
    }
    for (unsigned char i_25 = 0; i_25 < 18; i_25 += 2) 
    {
        arr_102 [i_25] [i_25] = ((/* implicit */unsigned char) ((min((((/* implicit */int) arr_2 [i_25] [i_25])), (((((/* implicit */int) var_3)) ^ (((/* implicit */int) arr_101 [i_25] [i_25])))))) | ((~(((/* implicit */int) arr_0 [(unsigned short)8]))))));
        arr_103 [i_25] = ((/* implicit */unsigned short) arr_0 [i_25]);
        /* LoopNest 2 */
        for (unsigned char i_26 = 0; i_26 < 18; i_26 += 4) 
        {
            for (unsigned char i_27 = 0; i_27 < 18; i_27 += 2) 
            {
                {
                    var_39 *= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_1)), (max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) & (var_4)))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_5)))))));
                    var_40 = max((max((arr_107 [i_25] [i_26] [i_26] [i_27]), (arr_107 [i_25] [i_26] [i_27] [i_25]))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_7))))));
                    arr_109 [i_25] [i_25] [i_25] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_106 [i_27] [i_27])) : (((/* implicit */int) var_2))))));
                }
            } 
        } 
        arr_110 [i_25] = ((/* implicit */_Bool) (-(((((/* implicit */int) var_7)) % (((((/* implicit */int) var_1)) * (((/* implicit */int) arr_104 [i_25] [i_25] [i_25]))))))));
        arr_111 [i_25] = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0)))) - (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) ((arr_101 [i_25] [i_25]) ? (var_11) : (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_11) : (((/* implicit */int) arr_104 [i_25] [i_25] [i_25]))))) : ((+(var_6))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_105 [i_25])) <= (((/* implicit */int) arr_105 [i_25]))))))));
    }
}
