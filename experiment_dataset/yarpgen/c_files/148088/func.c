/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148088
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] |= ((/* implicit */unsigned char) ((arr_1 [i_0]) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) ((unsigned char) var_4)))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        var_13 -= ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)8191)) - (((/* implicit */int) (unsigned short)22663))));
                        var_14 = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_5 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0]))))) ^ (((4224426494U) - (734902832U))));
                    }
                    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0])) ? (arr_7 [i_0] [i_0] [i_1] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (unsigned short)65517)))))))));
                    var_16 ^= ((/* implicit */_Bool) ((arr_7 [i_0] [i_0] [i_0] [i_0]) % (((734902832U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))));
                    /* LoopSeq 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65532)) && (((/* implicit */_Bool) var_10)))))));
                        /* LoopSeq 1 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_18 [i_4] [i_4] [i_4] [i_4] [i_4] [i_5] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_14 [i_4]))));
                            var_18 -= ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) - ((~(arr_0 [i_1] [i_1]))));
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((unsigned short) var_7))) : (((/* implicit */int) var_8))));
                        }
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)0)) ? (2919189662U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_12 [i_4] [i_2] [i_1] [i_1] [i_1] [i_0])) == (((/* implicit */int) (_Bool)1))))))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 10; i_6 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned short) ((arr_9 [i_0] [i_0] [i_2] [i_6]) ? (((arr_0 [i_0] [i_1]) ^ (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (_Bool)1))))));
                        var_22 += ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) var_2))))));
                        var_23 = ((/* implicit */unsigned short) ((arr_16 [i_0] [i_2] [i_2] [i_6] [(unsigned short)0]) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_16 [(unsigned short)6] [(unsigned short)6] [(unsigned short)6] [i_1] [(unsigned short)6]))));
                        var_24 = ((/* implicit */unsigned int) var_8);
                    }
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_7 = 2; i_7 < 10; i_7 += 3) 
    {
        /* LoopSeq 4 */
        for (unsigned char i_8 = 0; i_8 < 11; i_8 += 3) 
        {
            var_25 = ((/* implicit */unsigned short) var_4);
            /* LoopSeq 1 */
            for (unsigned short i_9 = 0; i_9 < 11; i_9 += 2) 
            {
                var_26 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_25 [i_9]))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_21 [i_9]))))) : (((4294967277U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_7] [i_8] [i_7])))))));
                var_27 = ((arr_23 [i_7 - 1] [i_8] [i_9]) ? (arr_22 [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_7 - 1]))));
                var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 734902832U)))))));
            }
            var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) ((((/* implicit */_Bool) 3541222386U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_7 - 2]))) : (arr_22 [i_8]))))));
        }
        for (unsigned int i_10 = 0; i_10 < 11; i_10 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_11 = 0; i_11 < 11; i_11 += 1) 
            {
                for (unsigned char i_12 = 1; i_12 < 8; i_12 += 1) 
                {
                    {
                        var_30 -= ((/* implicit */_Bool) ((((unsigned int) var_2)) * (((arr_27 [i_7]) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_13 = 2; i_13 < 8; i_13 += 2) 
                        {
                            arr_39 [i_13] [i_13] [i_11] [i_13 - 2] [i_13] [(unsigned char)4] [i_7] = ((((/* implicit */int) arr_21 [i_12 - 1])) >= (((/* implicit */int) arr_21 [i_12 + 2])));
                            arr_40 [(_Bool)1] [i_10] [i_10] [i_10] [i_7] = (unsigned short)3;
                        }
                    }
                } 
            } 
            arr_41 [i_7] = ((((((/* implicit */int) arr_29 [i_7] [3U] [(unsigned short)0])) - (((/* implicit */int) arr_27 [i_7])))) > (((/* implicit */int) arr_21 [i_7 + 1])));
            var_31 *= ((/* implicit */unsigned short) ((unsigned char) (-(((/* implicit */int) arr_28 [i_7])))));
            arr_42 [(unsigned char)3] [(unsigned char)3] [i_10] = ((/* implicit */_Bool) ((var_4) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3)))));
        }
        for (unsigned int i_14 = 0; i_14 < 11; i_14 += 2) /* same iter space */
        {
            var_32 = ((/* implicit */_Bool) var_5);
            var_33 &= ((((((/* implicit */_Bool) (unsigned char)0)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_7]))))) & ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_44 [i_7] [i_7 - 1] [i_7 - 1]))));
        }
        for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
        {
            var_34 &= (~(((((/* implicit */_Bool) (unsigned short)51323)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3))))));
            arr_48 [i_7] [i_7] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_7 - 1] [i_15] [i_7 - 1] [i_15 - 1]))) * (arr_36 [i_7] [i_7] [i_7] [i_15])));
        }
        var_35 += ((((/* implicit */_Bool) var_4)) ? (var_4) : (arr_31 [i_7 + 1]));
    }
    var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)53134)) ? (((/* implicit */int) (unsigned char)2)) : (((/* implicit */int) (unsigned short)15))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (268435456U)))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_16 = 0; i_16 < 22; i_16 += 3) 
    {
        /* LoopSeq 2 */
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            var_37 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_49 [3U]))) : (var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_53 [i_16] [18U]) != (arr_53 [(unsigned char)16] [(unsigned char)16])))))));
            var_38 = ((/* implicit */_Bool) ((unsigned int) arr_52 [i_16] [i_17]));
            var_39 *= ((((((/* implicit */int) var_3)) << (((var_10) - (3296535168U))))) < (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) (unsigned short)32768))))));
            var_40 = ((/* implicit */_Bool) var_10);
        }
        for (unsigned char i_18 = 0; i_18 < 22; i_18 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned short i_19 = 0; i_19 < 22; i_19 += 3) 
            {
                for (unsigned int i_20 = 0; i_20 < 22; i_20 += 1) 
                {
                    for (unsigned int i_21 = 0; i_21 < 22; i_21 += 2) 
                    {
                        {
                            arr_64 [i_16] [i_18] [i_18] [i_18] [i_18] = ((/* implicit */_Bool) 3280348097U);
                            arr_65 [i_16] [i_20] [i_20] [i_20] [i_16] [i_16] [i_16] = ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_52 [i_16] [i_21]))) : (arr_54 [i_20]))));
                        }
                    } 
                } 
            } 
            var_41 = ((/* implicit */unsigned int) max((var_41), (((/* implicit */unsigned int) var_12))));
            var_42 ^= ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)32768)) ? (var_10) : (var_1))) - (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65513))) | (arr_59 [i_16] [(unsigned short)11] [(_Bool)1] [(unsigned short)11])))));
            var_43 = ((unsigned char) arr_52 [i_16] [i_18]);
            /* LoopSeq 4 */
            for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned short i_23 = 2; i_23 < 20; i_23 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_24 = 0; i_24 < 22; i_24 += 3) 
                    {
                        var_44 = arr_68 [i_23] [i_23];
                        arr_73 [i_22] [i_23 + 2] [i_22] [i_16] [i_16] [i_22] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_67 [i_22] [i_18] [i_22 - 1])) ? (((/* implicit */int) arr_67 [i_22] [i_22] [i_23])) : (((/* implicit */int) arr_67 [i_22] [i_22] [i_22]))));
                        arr_74 [i_16] [i_18] [i_22] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_53 [i_18] [i_22])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? (2823037917U) : (924286530U)));
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_25 = 1; i_25 < 1; i_25 += 1) /* same iter space */
                    {
                        arr_77 [i_22] [i_18] [i_22] [i_22] [i_18] [i_23] = ((/* implicit */_Bool) arr_69 [i_16] [i_22] [i_16] [i_16]);
                        var_45 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_71 [i_22] [i_22 - 1] [i_22])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_55 [(_Bool)1])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 3960794993U))))) : (((/* implicit */int) arr_70 [i_22] [i_18] [i_22] [(unsigned char)10]))));
                        arr_78 [i_22] [i_22] [i_22] = ((/* implicit */unsigned short) (+(arr_54 [i_25 - 1])));
                    }
                    for (_Bool i_26 = 1; i_26 < 1; i_26 += 1) /* same iter space */
                    {
                        var_46 = ((((/* implicit */_Bool) ((unsigned short) arr_63 [i_16] [i_16] [i_16] [i_18] [i_16]))) ? (((((/* implicit */_Bool) arr_54 [i_18])) ? (arr_56 [i_16]) : (arr_61 [i_26] [i_22 - 1] [i_22 - 1] [i_18]))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32071))) & (var_7))));
                        var_47 ^= ((/* implicit */unsigned short) (+(var_2)));
                    }
                }
                arr_82 [i_22] [i_18] [i_22] = ((/* implicit */_Bool) arr_58 [i_22] [i_22 - 1] [i_22 - 1]);
                var_48 = ((/* implicit */unsigned int) min((var_48), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (unsigned short)0))))) && (((/* implicit */_Bool) arr_58 [i_22 - 1] [i_22 - 1] [i_22 - 1])))))));
            }
            for (_Bool i_27 = 1; i_27 < 1; i_27 += 1) /* same iter space */
            {
                arr_86 [i_16] [i_16] [i_18] [i_27 - 1] = ((/* implicit */unsigned short) ((((var_0) == (arr_54 [i_16]))) ? (((/* implicit */int) (unsigned short)33262)) : (((/* implicit */int) arr_69 [i_27 - 1] [i_18] [i_18] [i_27 - 1]))));
                var_49 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) 615654285U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)15))));
            }
            for (unsigned int i_28 = 1; i_28 < 20; i_28 += 1) 
            {
                var_50 = ((/* implicit */unsigned short) min((var_50), (((/* implicit */unsigned short) arr_62 [17U] [i_18]))));
                var_51 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_62 [i_16] [i_18])) : (((/* implicit */int) var_9))));
                arr_89 [i_28] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_87 [i_16] [i_28 + 2] [i_28] [i_28 + 1])) << (((((/* implicit */int) arr_71 [i_28 + 2] [i_28 + 2] [i_18])) - (6679)))));
            }
            for (unsigned int i_29 = 2; i_29 < 20; i_29 += 1) 
            {
                arr_92 [i_16] [i_16] [i_16] [i_29] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_0)))) && (((/* implicit */_Bool) arr_71 [i_18] [i_16] [i_18]))));
                var_52 = ((/* implicit */_Bool) var_2);
                var_53 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_1))));
            }
        }
        var_54 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_80 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16] [i_16])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_80 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16] [i_16]))));
    }
    for (unsigned int i_30 = 0; i_30 < 22; i_30 += 4) /* same iter space */
    {
        var_55 += max((((/* implicit */unsigned int) (unsigned char)0)), (456366513U));
        var_56 += ((arr_57 [14U] [14U] [14U] [14U]) ? (((((/* implicit */_Bool) arr_94 [i_30])) ? (((unsigned int) arr_81 [i_30] [i_30] [i_30] [i_30] [i_30])) : (arr_68 [(_Bool)1] [i_30]))) : ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)23))) : (4294932711U))));
        /* LoopNest 3 */
        for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
        {
            for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
            {
                for (unsigned char i_33 = 3; i_33 < 19; i_33 += 1) 
                {
                    {
                        arr_103 [i_32] [i_32] [i_32] [i_32] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_94 [i_33 + 2])) ^ (((/* implicit */int) arr_50 [i_33 - 1] [i_33 + 3])))) * ((~(((/* implicit */int) arr_50 [i_33 + 3] [i_33 + 2]))))));
                        arr_104 [i_30] [i_31] [i_31] [i_33] [(unsigned short)4] = (((+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_83 [i_31] [i_31] [i_31])) : (((/* implicit */int) arr_81 [i_30] [i_32] [i_32] [i_30] [i_30])))))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_80 [i_30] [i_30] [i_30] [i_30] [i_32] [i_32] [i_33])) ? (1504585503U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_57 [i_30] [i_31] [i_32] [i_33])))))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)15)))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_34 = 0; i_34 < 22; i_34 += 4) /* same iter space */
    {
        var_57 |= ((/* implicit */unsigned char) var_1);
        var_58 = max(((-(min((3402822186U), (((/* implicit */unsigned int) var_8)))))), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)4))))));
        var_59 = ((/* implicit */unsigned short) max((var_59), ((unsigned short)5)));
        arr_107 [i_34] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_51 [i_34] [i_34])) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12402))) : (0U))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_94 [i_34])))))))));
    }
    var_60 ^= ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (var_0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) ((unsigned char) var_6))))))) : (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)247)) && ((_Bool)0)))), ((-(var_1))))));
}
