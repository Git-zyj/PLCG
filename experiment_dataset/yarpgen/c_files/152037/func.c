/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152037
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
    for (long long int i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 9; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */int) max((var_15), (var_6)));
                    arr_8 [i_0] [i_1] = max((((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_1] [i_2]))) : (arr_6 [i_0]))) + (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2]))))), (((/* implicit */long long int) (unsigned char)217)));
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        arr_12 [i_1] [i_1] [i_2] [i_3] = arr_6 [i_3];
                        var_16 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_11 [i_0] [(unsigned short)5] [(unsigned short)5] [i_3] [i_0 - 3])), (arr_6 [i_0])))) && ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */int) var_13)))))))));
                        var_17 = (+(((/* implicit */int) ((var_4) < (arr_7 [i_0 - 1] [i_1] [i_2 + 2])))));
                        var_18 = ((/* implicit */_Bool) max((((/* implicit */int) var_12)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_2 [i_1] [i_1 - 1] [i_1])) : (((/* implicit */int) var_12))))) ? (-1) : (var_6)))));
                    }
                    /* vectorizable */
                    for (unsigned char i_4 = 1; i_4 < 11; i_4 += 2) 
                    {
                        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) var_5))));
                        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) arr_6 [5]))));
                    }
                    for (long long int i_5 = 2; i_5 < 10; i_5 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_6 = 0; i_6 < 12; i_6 += 2) 
                        {
                            arr_20 [i_1] [i_1] = ((/* implicit */int) arr_13 [i_0] [(_Bool)1] [i_0 - 2] [i_0] [i_0]);
                            var_21 *= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) arr_17 [(unsigned char)5] [i_1] [i_1 - 1] [i_2] [i_2] [i_5] [i_2])) + (max((arr_11 [i_0] [i_0] [i_0 + 1] [i_0] [i_0 - 1]), (((/* implicit */int) var_1))))))) & (min((max((var_0), (((/* implicit */long long int) var_1)))), (((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_6] [i_5])) * (((/* implicit */int) arr_4 [i_0])))))))));
                        }
                        /* LoopSeq 4 */
                        for (unsigned short i_7 = 0; i_7 < 12; i_7 += 4) 
                        {
                            var_22 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_2 [i_0] [i_1] [i_7])), ((~(arr_6 [i_0])))))) ? ((+(((/* implicit */int) ((((/* implicit */int) arr_15 [i_0] [i_1 - 1] [i_2 - 2] [i_5])) >= (1)))))) : (((/* implicit */int) min((arr_2 [i_7] [i_0 + 1] [i_7]), ((unsigned char)191))))));
                            var_23 = ((/* implicit */long long int) arr_3 [i_0]);
                        }
                        for (unsigned short i_8 = 0; i_8 < 12; i_8 += 3) /* same iter space */
                        {
                            var_24 = ((/* implicit */_Bool) var_4);
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) var_2)) : (var_0))), (((/* implicit */long long int) arr_1 [i_2]))))) || (((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [i_5] [i_8]))));
                            var_26 *= ((((((/* implicit */_Bool) 2341000752920944099LL)) ? (((/* implicit */int) arr_4 [i_0])) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_9 [0] [0])) : (((/* implicit */int) var_10)))))) == (arr_11 [i_0 - 2] [11] [i_2] [i_5] [11]));
                            arr_27 [i_1] [i_1] = ((/* implicit */_Bool) arr_21 [i_0] [i_1] [i_2 - 2] [i_1] [i_1]);
                        }
                        for (unsigned short i_9 = 0; i_9 < 12; i_9 += 3) /* same iter space */
                        {
                            arr_31 [i_1] [i_9] = ((/* implicit */long long int) min((0), (((var_9) - (min((((/* implicit */int) var_8)), (arr_7 [i_0] [i_1] [i_5 - 2])))))));
                            arr_32 [i_1] [i_1] [i_2] [i_1] [i_0] = (!(((/* implicit */_Bool) max((((arr_6 [i_1 - 1]) / (((/* implicit */long long int) ((/* implicit */int) var_13))))), (((/* implicit */long long int) var_3))))));
                        }
                        for (unsigned char i_10 = 1; i_10 < 9; i_10 += 2) 
                        {
                            arr_36 [i_1] [i_1] [(unsigned short)6] [(unsigned char)0] [i_5] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) max((min((var_14), (((/* implicit */unsigned short) (unsigned char)84)))), (var_10))))) > (max((((/* implicit */long long int) min((var_11), (var_1)))), (arr_34 [i_0] [(unsigned char)4] [i_10 + 2])))));
                            arr_37 [i_0] [i_1] [6] [i_5] [i_1] = ((/* implicit */long long int) max((((/* implicit */int) (unsigned short)52060)), (max(((-(var_6))), (var_4)))));
                        }
                        arr_38 [i_0] [(unsigned char)0] [i_1] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) ((((/* implicit */int) arr_22 [(unsigned char)4] [(unsigned char)7])) <= (((/* implicit */int) arr_4 [i_5]))))) : (((((/* implicit */_Bool) var_9)) ? (1) : (-2)))))) && (((/* implicit */_Bool) max((var_4), (((arr_1 [i_0]) & (((/* implicit */int) arr_35 [i_0 + 1] [i_2 - 1] [i_5])))))))));
                    }
                }
            } 
        } 
        var_27 = ((/* implicit */int) arr_29 [i_0 - 3] [i_0] [(unsigned char)4]);
        var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) arr_3 [(unsigned char)0]))));
        var_29 *= ((/* implicit */_Bool) arr_30 [i_0 - 3] [i_0] [2] [i_0 + 1] [2]);
    }
    /* vectorizable */
    for (unsigned char i_11 = 0; i_11 < 10; i_11 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_12 = 3; i_12 < 6; i_12 += 4) 
        {
            /* LoopSeq 1 */
            for (long long int i_13 = 1; i_13 < 7; i_13 += 1) 
            {
                var_30 = ((/* implicit */unsigned char) var_11);
                arr_45 [i_13] = ((/* implicit */_Bool) var_5);
            }
            var_31 = (~(((/* implicit */int) arr_24 [9LL] [i_11] [i_12] [i_12] [i_11] [i_12])));
        }
        for (unsigned char i_14 = 0; i_14 < 10; i_14 += 2) 
        {
            var_32 *= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_42 [i_11] [i_14])) || (((/* implicit */_Bool) arr_10 [i_11] [i_11] [i_11]))));
            arr_48 [i_11] [i_14] [i_14] = ((/* implicit */long long int) var_14);
            var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)64))))) ? (((((/* implicit */_Bool) arr_30 [i_11] [i_11] [i_14] [i_11] [(unsigned char)2])) ? (((/* implicit */int) arr_17 [1ULL] [1ULL] [i_11] [i_11] [i_14] [i_14] [i_14])) : (((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) arr_28 [i_11] [i_11] [0] [i_11] [9LL])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_12))))));
            var_34 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_11] [i_11] [i_11] [i_11] [i_11]))));
        }
        var_35 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65535)) | (((((/* implicit */int) arr_16 [5ULL] [i_11] [5ULL] [i_11] [(unsigned short)8] [5ULL])) | (-1)))));
        /* LoopSeq 2 */
        for (unsigned char i_15 = 0; i_15 < 10; i_15 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned char i_16 = 1; i_16 < 9; i_16 += 2) 
            {
                for (unsigned char i_17 = 0; i_17 < 10; i_17 += 3) 
                {
                    for (unsigned char i_18 = 4; i_18 < 6; i_18 += 4) 
                    {
                        {
                            var_36 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_43 [i_11] [i_15] [i_15] [i_18 - 3])) - (((/* implicit */int) arr_30 [i_11] [i_15] [i_17] [i_17] [i_17])))) - (((arr_22 [i_16] [i_17]) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_5))))));
                            var_37 = ((((/* implicit */long long int) ((var_3) - (((/* implicit */int) var_14))))) - (arr_19 [i_16 + 1] [i_18 - 4] [i_18] [i_18 - 2] [i_18]));
                        }
                    } 
                } 
            } 
            arr_60 [i_15] [i_11] = ((/* implicit */long long int) arr_24 [i_11] [i_11] [i_11] [i_11] [i_15] [(_Bool)1]);
            /* LoopSeq 3 */
            for (int i_19 = 0; i_19 < 10; i_19 += 1) 
            {
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 10; i_20 += 4) 
                {
                    for (long long int i_21 = 0; i_21 < 10; i_21 += 4) 
                    {
                        {
                            var_38 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_23 [(unsigned char)8] [i_19] [i_19] [i_15] [i_11]))));
                            var_39 ^= ((/* implicit */unsigned short) ((((/* implicit */int) arr_35 [i_11] [i_15] [(unsigned short)1])) + (((/* implicit */int) var_12))));
                            var_40 = ((/* implicit */int) max((var_40), (((/* implicit */int) arr_59 [i_19] [i_11]))));
                        }
                    } 
                } 
                arr_68 [(unsigned char)9] [i_15] [i_19] [i_19] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) > (var_6))))) : (((9223372036854775807LL) & (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
                var_41 = ((/* implicit */_Bool) var_12);
                arr_69 [i_11] [i_15] [i_19] = ((/* implicit */long long int) var_6);
                var_42 ^= ((/* implicit */unsigned long long int) arr_65 [i_11] [5LL] [(unsigned short)6] [(_Bool)1] [i_15] [i_11]);
            }
            for (unsigned short i_22 = 0; i_22 < 10; i_22 += 2) 
            {
                var_43 = ((/* implicit */long long int) (unsigned char)248);
                arr_72 [i_15] [i_11] = ((/* implicit */unsigned char) arr_9 [i_22] [i_22]);
            }
            for (unsigned char i_23 = 1; i_23 < 7; i_23 += 2) 
            {
                /* LoopNest 2 */
                for (long long int i_24 = 1; i_24 < 6; i_24 += 3) 
                {
                    for (long long int i_25 = 0; i_25 < 10; i_25 += 2) 
                    {
                        {
                            var_44 -= ((/* implicit */_Bool) (-(arr_44 [i_23] [(unsigned char)0] [i_23 + 1])));
                            arr_80 [i_11] [i_23] [i_23] [i_24] [i_25] = ((/* implicit */int) (!(((/* implicit */_Bool) var_9))));
                            arr_81 [i_11] [i_15] [i_15] [i_23] [i_23] [i_24] [i_23] = ((/* implicit */int) ((((/* implicit */int) arr_57 [i_11] [i_15] [i_15] [i_15] [i_24 + 3])) == (((((/* implicit */int) (unsigned char)12)) / (((/* implicit */int) arr_10 [i_11] [i_23] [i_23]))))));
                            arr_82 [i_23] [i_23] [i_15] [i_23] = ((/* implicit */unsigned char) arr_78 [i_11] [i_23] [i_23] [i_24 + 3] [(_Bool)1] [i_23] [i_25]);
                            var_45 = ((/* implicit */unsigned short) ((arr_78 [i_25] [i_23] [(_Bool)1] [i_23 - 1] [i_15] [i_23] [i_11]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_23 - 1] [i_23] [i_23] [i_15])))));
                        }
                    } 
                } 
                var_46 = ((/* implicit */unsigned long long int) arr_25 [i_11] [i_15] [i_15] [i_23 + 3] [i_23]);
            }
        }
        for (long long int i_26 = 0; i_26 < 10; i_26 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_27 = 1; i_27 < 9; i_27 += 2) 
            {
                var_47 = ((/* implicit */int) arr_44 [i_11] [i_11] [i_11]);
                arr_87 [i_27] [(unsigned short)1] [i_26] [i_27] = ((/* implicit */long long int) var_13);
                var_48 &= ((/* implicit */_Bool) var_12);
                var_49 ^= ((/* implicit */int) arr_17 [i_11] [i_26] [i_11] [i_26] [(unsigned char)6] [i_26] [(unsigned char)6]);
            }
            for (unsigned long long int i_28 = 0; i_28 < 10; i_28 += 2) 
            {
                arr_90 [(_Bool)1] [i_26] = ((((var_8) ? (-2) : (arr_71 [5] [i_26] [i_26] [5]))) % (((/* implicit */int) arr_35 [i_11] [i_26] [i_28])));
                arr_91 [i_11] [2ULL] [i_11] [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) var_12)) ? (arr_59 [i_11] [i_28]) : (arr_19 [i_11] [7LL] [i_28] [i_28] [i_11])));
            }
            var_50 ^= ((/* implicit */long long int) ((((/* implicit */int) var_11)) != (((/* implicit */int) arr_4 [(_Bool)1]))));
        }
    }
    var_51 *= ((/* implicit */unsigned long long int) var_3);
}
