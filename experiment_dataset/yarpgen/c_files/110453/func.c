/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110453
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
    var_12 = ((var_4) ? (min((var_1), (((/* implicit */unsigned long long int) var_7)))) : (((min((var_3), (var_3))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_0)) < (((/* implicit */int) var_4)))))) : (var_2))));
    var_13 = ((/* implicit */long long int) var_5);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            /* LoopSeq 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 2) 
                    {
                        {
                            arr_14 [i_3] [i_0] = ((/* implicit */unsigned short) ((((((arr_7 [i_2] [i_0]) == (((/* implicit */int) arr_12 [i_0] [i_1] [i_0] [i_3] [i_0] [i_3] [i_0])))) ? (((((/* implicit */unsigned long long int) -1LL)) + (var_10))) : (((/* implicit */unsigned long long int) arr_3 [i_0])))) < (((/* implicit */unsigned long long int) (~(916137636))))));
                            var_14 += ((/* implicit */unsigned long long int) var_9);
                        }
                    } 
                } 
                var_15 -= ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */int) var_0)) < (((/* implicit */int) ((-1563014647293014166LL) == (-7LL))))))), (max((arr_7 [i_1 + 1] [(short)0]), (((/* implicit */int) arr_12 [i_1] [(unsigned char)4] [(_Bool)1] [i_1 + 1] [i_1 + 1] [i_1] [i_1]))))));
                arr_15 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_11 [i_1 + 1] [(_Bool)1] [(_Bool)1] [i_1 + 1] [i_1 + 1])))) ? ((+(arr_11 [i_1 + 1] [i_1] [i_1] [i_1] [i_1]))) : (((arr_11 [i_1 + 1] [i_1] [i_1 + 1] [i_1] [i_1]) + (arr_11 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1])))));
            }
            for (long long int i_5 = 2; i_5 < 8; i_5 += 2) 
            {
                var_16 += ((/* implicit */_Bool) ((long long int) 0LL));
                var_17 += ((/* implicit */signed char) ((min((max((((/* implicit */unsigned long long int) 0LL)), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-27LL)))))) == (max((var_2), (((/* implicit */unsigned long long int) arr_7 [i_1 + 1] [i_5]))))));
                arr_20 [i_0] [(_Bool)1] [i_1] [i_0] = ((/* implicit */short) max(((-(((/* implicit */int) arr_18 [i_0] [i_1] [i_5 - 1] [i_1 + 1])))), (((/* implicit */int) arr_18 [i_0] [i_1 + 1] [i_5 + 1] [i_5 + 2]))));
                arr_21 [i_5 + 1] [i_5] [i_5] [i_0] |= var_10;
            }
            for (signed char i_6 = 4; i_6 < 8; i_6 += 2) 
            {
                arr_24 [i_0] [i_0] = var_7;
                var_18 = ((/* implicit */signed char) ((_Bool) arr_4 [i_1] [i_1 + 1] [i_1 + 1]));
            }
            arr_25 [i_0] [0LL] [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [(_Bool)0] [i_1 + 1] [i_1 + 1] [i_1 + 1])) ? (((((/* implicit */_Bool) 2075280321268161605LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_16 [(unsigned char)2] [i_1 + 1] [i_1 + 1] [i_1 + 1]) < (arr_16 [(unsigned short)0] [i_1 + 1] [i_1 + 1] [i_1 + 1])))))));
            arr_26 [6LL] [i_1 + 1] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [2ULL])) ? (var_6) : (max((-1018583203008875535LL), (((/* implicit */long long int) -1606763426))))))) ? (((((/* implicit */_Bool) arr_10 [i_1 + 1] [0] [i_1 + 1] [i_1 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_1 + 1] [i_1] [i_1 + 1] [i_1]))) : (arr_10 [i_1 + 1] [(short)0] [i_1] [i_1 + 1]))) : (((/* implicit */long long int) ((/* implicit */int) ((((var_0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [6ULL]))) : (arr_9 [i_0] [(_Bool)1] [(_Bool)1] [(unsigned char)2]))) < (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (18446744073709551609ULL)))))))));
            /* LoopSeq 1 */
            for (short i_7 = 0; i_7 < 10; i_7 += 2) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                {
                    arr_33 [i_0] = (-((~(((/* implicit */int) arr_2 [i_0])))));
                    var_19 = ((/* implicit */long long int) var_8);
                    arr_34 [i_0] [i_7] [i_7] [i_0] [i_1 + 1] [(short)0] |= ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_29 [i_0] [i_7] [i_7] [i_8 - 1]))) == (1018583203008875505LL))))));
                    arr_35 [i_8] [i_8] [i_7] [i_8] [i_8 - 1] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) ((arr_27 [i_8] [i_7] [i_1]) < (var_1))))));
                }
                for (long long int i_9 = 3; i_9 < 9; i_9 += 1) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_10 = 3; i_10 < 9; i_10 += 1) 
                    {
                        var_20 -= ((/* implicit */unsigned char) ((((((/* implicit */int) var_5)) == (arr_36 [i_7] [i_7]))) ? (((/* implicit */int) ((arr_27 [i_0] [i_1] [i_1]) == (((/* implicit */unsigned long long int) var_6))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)46)))))));
                        var_21 += ((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_10 - 1] [i_10 - 2] [i_7] [i_10] [i_7] [i_10] [i_9 - 1]))));
                        arr_40 [i_10] [i_0] [i_7] [i_7] [i_10 - 3] [i_1] [i_9] = ((/* implicit */int) (((~(((/* implicit */int) var_7)))) < (((/* implicit */int) arr_2 [i_0]))));
                    }
                    for (long long int i_11 = 0; i_11 < 10; i_11 += 2) 
                    {
                        var_22 = ((/* implicit */long long int) var_9);
                        arr_43 [i_0] [i_0] [i_7] [5LL] [i_9] = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(arr_19 [i_0] [i_0] [i_0] [i_0]))))));
                        arr_44 [i_1] [i_0] [7ULL] = ((/* implicit */unsigned short) min((((_Bool) ((((/* implicit */_Bool) arr_42 [i_0] [i_0])) ? (var_11) : (var_6)))), (max((arr_12 [i_1 + 1] [i_7] [i_0] [i_9 + 1] [i_9] [i_11] [2ULL]), (((var_4) || (((/* implicit */_Bool) arr_28 [i_0] [i_1 + 1] [i_7]))))))));
                        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) < (max((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (2617416833633865531ULL)))), (max((((/* implicit */int) (_Bool)1)), (arr_3 [i_0])))))));
                    }
                    var_24 &= ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_11 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_9 - 1] [i_9 - 1])) ? (arr_11 [i_0] [i_1 + 1] [i_1 + 1] [i_9 - 3] [i_9]) : (arr_11 [i_0] [i_0] [i_1 + 1] [i_9 + 1] [i_1 + 1]))) < (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) var_7)), (arr_29 [i_0] [i_7] [i_9 - 2] [i_9 - 1])))))));
                    var_25 &= ((/* implicit */unsigned char) max(((+(2382688067586413121ULL))), (((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_0] [i_0] [i_0] [i_1] [i_7] [4LL] [i_9]))) * (arr_22 [i_0] [i_7] [i_7] [i_9])))))));
                }
                arr_45 [i_0] [i_7] [i_7] = ((/* implicit */long long int) (~(min((17368092880999882728ULL), (((/* implicit */unsigned long long int) (_Bool)0))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_12 = 0; i_12 < 10; i_12 += 1) 
                {
                    arr_49 [i_0] [i_1] [i_0] [i_1 + 1] [i_1] [i_1] = arr_28 [i_0] [i_7] [i_0];
                    var_26 = ((/* implicit */int) ((((/* implicit */_Bool) arr_42 [i_7] [i_0])) ? (arr_22 [i_12] [i_0] [i_0] [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                }
                for (unsigned int i_13 = 1; i_13 < 6; i_13 += 2) 
                {
                    var_27 = ((/* implicit */_Bool) (((((+(var_11))) - (((/* implicit */long long int) ((/* implicit */int) var_4))))) - (((long long int) arr_17 [i_0] [i_0]))));
                    var_28 = ((/* implicit */_Bool) ((((max((var_10), (((/* implicit */unsigned long long int) arr_19 [i_0] [i_1 + 1] [i_7] [i_13 + 3])))) == (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)0))))))) ? (((/* implicit */unsigned long long int) var_6)) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_3)), (var_1)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0]))))) : (var_1)))));
                    arr_52 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] &= ((/* implicit */_Bool) var_10);
                    arr_53 [i_0] [i_1] [i_0] [i_7] [i_13] = (-(((long long int) arr_42 [i_1 + 1] [i_0])));
                }
            }
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_14 = 0; i_14 < 10; i_14 += 1) 
        {
            arr_56 [i_0] [i_14] [i_0] = ((/* implicit */unsigned long long int) (!(arr_5 [i_0] [i_14] [i_14])));
            var_29 = ((/* implicit */unsigned long long int) var_4);
            var_30 += (!(((/* implicit */_Bool) arr_32 [(_Bool)0] [i_14] [i_0] [(_Bool)0])));
        }
        var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((-3872395109072524997LL) < (((/* implicit */long long int) -1693034176))))) : (((int) arr_29 [i_0] [i_0] [i_0] [i_0]))));
    }
    /* LoopNest 2 */
    for (signed char i_15 = 1; i_15 < 18; i_15 += 1) 
    {
        for (long long int i_16 = 1; i_16 < 21; i_16 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_17 = 0; i_17 < 22; i_17 += 3) 
                {
                    var_32 ^= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_58 [i_15 - 1])) || (((/* implicit */_Bool) arr_60 [i_15 - 1]))))), (min((((/* implicit */unsigned long long int) var_9)), (arr_59 [i_15 + 4] [i_15 + 3])))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_18 = 0; i_18 < 22; i_18 += 1) 
                    {
                        for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
                        {
                            {
                                var_33 -= (+(((/* implicit */int) min((((/* implicit */unsigned short) var_5)), (var_8)))));
                                arr_70 [i_15] [i_16 - 1] [i_17] [i_18] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_68 [20ULL] [i_19 - 1] [i_19 - 1] [i_19 - 1] [i_19 - 1] [i_19 - 1] [i_19 - 1])) ? (((((/* implicit */_Bool) arr_64 [i_15] [i_16])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_69 [i_15 - 1] [i_15 - 1] [i_17]))) : (var_2))) : (max((((/* implicit */unsigned long long int) var_8)), (arr_68 [i_15] [i_15] [i_15] [i_15 + 3] [i_15] [i_15 + 3] [i_15 - 1])))))));
                                arr_71 [i_15] [i_16] [i_16 + 1] [i_16] [i_17] [i_16 + 1] [i_19] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_63 [10ULL] [i_16]))) < (18111823231937413013ULL)))) == (((/* implicit */int) max((((/* implicit */signed char) arr_69 [17] [i_16 + 1] [i_17])), (arr_63 [i_15] [i_15 + 3]))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
                {
                    arr_74 [i_15] [(unsigned char)12] = ((/* implicit */unsigned int) var_10);
                    /* LoopSeq 1 */
                    for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
                    {
                        var_34 ^= ((/* implicit */signed char) var_4);
                        arr_77 [i_15 - 1] [i_16 + 1] [i_20] [i_16 - 1] [i_21 - 1] = ((((/* implicit */_Bool) arr_59 [i_20 - 1] [i_16 - 1])) ? (var_2) : (arr_66 [i_20 - 1] [i_16 - 1]));
                        var_35 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 923313786016232739ULL)))) || ((!(((/* implicit */_Bool) var_8))))));
                        var_36 ^= ((/* implicit */int) (!(var_0)));
                    }
                    var_37 -= ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) == (((((/* implicit */_Bool) arr_64 [i_20] [i_20])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_60 [i_20]))) : (arr_65 [i_15] [i_15] [i_16] [i_20 - 1]))));
                    /* LoopNest 2 */
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        for (int i_23 = 0; i_23 < 22; i_23 += 3) 
                        {
                            {
                                var_38 = ((/* implicit */long long int) var_2);
                                arr_84 [i_15] [i_16] [i_20] [8LL] [i_23] [i_23] [i_23] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_65 [i_15 + 2] [i_16 - 1] [i_20 - 1] [i_15 + 1]))));
                            }
                        } 
                    } 
                    arr_85 [i_15] [i_16] [i_20] = (!(arr_57 [i_15 + 3]));
                }
                var_39 = ((/* implicit */short) arr_61 [i_15 + 2] [17LL] [17LL]);
                var_40 = ((/* implicit */unsigned int) var_8);
            }
        } 
    } 
}
