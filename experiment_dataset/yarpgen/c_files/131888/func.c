/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131888
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 4; i_2 < 8; i_2 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        var_20 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_3] [5LL] [i_1] [i_0])) ? (min((arr_2 [i_0] [i_1]), (((/* implicit */long long int) arr_5 [i_0] [i_1] [i_2] [i_3])))) : (((((/* implicit */_Bool) arr_6 [i_2] [(_Bool)1] [(unsigned char)7])) ? (((/* implicit */long long int) var_3)) : (arr_4 [i_0] [i_2 + 2] [i_3])))))) != ((+(var_13)))));
                        var_21 = ((/* implicit */_Bool) arr_0 [i_0] [i_0]);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            var_22 = ((/* implicit */long long int) ((int) arr_5 [i_2 - 3] [i_2 - 2] [9ULL] [8LL]));
                            var_23 = ((/* implicit */_Bool) arr_3 [i_2 - 4]);
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2 + 1] [i_2] [i_2] [i_2]))) : (((arr_2 [i_0] [i_1]) | (var_19)))));
                        }
                        for (unsigned char i_5 = 0; i_5 < 11; i_5 += 3) 
                        {
                            var_25 *= ((/* implicit */unsigned char) min((((/* implicit */long long int) ((unsigned char) (~(((/* implicit */int) (short)18699)))))), (var_19)));
                            var_26 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((var_7), (((/* implicit */long long int) arr_7 [i_3] [i_3] [i_3] [i_3]))))) ? (max((((/* implicit */unsigned long long int) arr_12 [i_0] [i_1] [i_2] [i_3] [i_5])), (11407082393740791570ULL))) : (((((/* implicit */_Bool) (short)-10485)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-18704))) : (14ULL))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_8 [(unsigned char)6] [i_1] [i_1] [i_1] [(short)10]) < (((/* implicit */int) arr_5 [(_Bool)0] [9ULL] [i_2] [i_2]))))))));
                            var_27 = ((/* implicit */unsigned char) arr_7 [i_0] [i_0] [i_0] [i_0]);
                            var_28 ^= ((/* implicit */_Bool) (~(9203135910260068083ULL)));
                            arr_14 [i_2] [i_2] = arr_12 [i_5] [i_5] [7ULL] [i_5] [7ULL];
                        }
                    }
                    for (int i_6 = 0; i_6 < 11; i_6 += 3) 
                    {
                        var_29 = ((/* implicit */unsigned char) var_15);
                        arr_17 [3ULL] [i_1] [i_2] [i_6] [i_1] [i_0] = ((min((3873304864097194570LL), (((/* implicit */long long int) (unsigned char)242)))) / (((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_1] [i_2 + 2] [i_6])) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) var_15))))));
                        var_30 = (-(max(((-(-3873304864097194565LL))), (((/* implicit */long long int) (+(arr_8 [8LL] [i_1] [i_2] [i_2] [i_0])))))));
                        var_31 = ((/* implicit */int) arr_0 [i_0] [i_1]);
                        /* LoopSeq 1 */
                        for (unsigned char i_7 = 0; i_7 < 11; i_7 += 4) 
                        {
                            var_32 = ((/* implicit */unsigned long long int) arr_5 [i_0] [(unsigned char)10] [7LL] [i_6]);
                            arr_20 [i_2] = min((((/* implicit */long long int) max((arr_8 [i_2] [i_2] [i_2 + 2] [i_2] [i_2 - 4]), (arr_8 [6LL] [i_2] [i_2] [(unsigned char)0] [i_2 + 3])))), (((((/* implicit */_Bool) arr_5 [9ULL] [9ULL] [i_2 + 1] [(short)5])) ? (min((arr_6 [i_2] [i_2] [i_6]), (((/* implicit */long long int) arr_5 [i_0] [i_0] [i_6] [i_7])))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2 + 3] [i_6] [i_6] [3LL]))))));
                            var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((arr_10 [i_2] [9ULL]) != (var_1)))), (arr_15 [i_2 + 3] [i_2] [i_2 - 4] [i_2 - 1])))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [i_2 - 3] [i_2] [(unsigned char)4] [i_0]))))) : (max((min((((/* implicit */unsigned long long int) var_19)), (var_11))), (arr_15 [(short)9] [i_2] [i_2] [0LL])))));
                        }
                    }
                    var_34 += ((/* implicit */short) ((unsigned char) min((((((/* implicit */_Bool) -1415500048428746687LL)) ? (9203135910260068091ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-18699))))), (((/* implicit */unsigned long long int) (-(arr_6 [i_0] [i_1] [i_0])))))));
                }
                /* LoopSeq 1 */
                for (unsigned char i_8 = 0; i_8 < 11; i_8 += 4) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_9 = 4; i_9 < 10; i_9 += 1) 
                    {
                        var_35 ^= ((/* implicit */_Bool) ((unsigned long long int) arr_7 [i_0] [i_9 - 2] [i_0] [i_1]));
                        var_36 = ((/* implicit */_Bool) ((long long int) ((_Bool) arr_12 [i_0] [i_0] [(_Bool)1] [i_8] [9])));
                    }
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 3) 
                    {
                        var_37 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_13 [i_0] [i_1] [i_8] [i_10] [i_8])) + (2147483647))) >> (((((/* implicit */int) arr_13 [i_0] [2ULL] [i_1] [i_8] [i_8])) + (15461)))));
                        /* LoopSeq 2 */
                        for (long long int i_11 = 0; i_11 < 11; i_11 += 3) 
                        {
                            var_38 = ((/* implicit */long long int) arr_26 [i_11] [i_10] [i_10] [i_8] [i_0] [i_0]);
                            var_39 = var_1;
                        }
                        for (unsigned char i_12 = 0; i_12 < 11; i_12 += 1) 
                        {
                            var_40 *= ((/* implicit */unsigned char) arr_13 [i_0] [i_1] [i_0] [i_10] [i_0]);
                            var_41 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_11)))) | (arr_33 [i_0] [i_1] [i_8] [i_0] [i_12] [i_8] [i_0])));
                        }
                        /* LoopSeq 1 */
                        for (unsigned char i_13 = 0; i_13 < 11; i_13 += 3) 
                        {
                            var_42 *= ((/* implicit */unsigned long long int) ((1724005035) < (2147483647)));
                            var_43 = ((/* implicit */unsigned long long int) max((var_43), (var_8)));
                        }
                    }
                    /* vectorizable */
                    for (int i_14 = 2; i_14 < 10; i_14 += 2) 
                    {
                        var_44 = ((/* implicit */long long int) var_18);
                        var_45 = ((/* implicit */long long int) arr_23 [i_8] [i_1]);
                        var_46 = ((/* implicit */long long int) ((int) ((_Bool) arr_23 [i_0] [i_14])));
                        /* LoopSeq 2 */
                        for (unsigned char i_15 = 0; i_15 < 11; i_15 += 1) 
                        {
                            var_47 = ((/* implicit */int) (~(((arr_30 [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_0] [i_0] [i_8] [i_14]))) : (var_17)))));
                            var_48 = ((/* implicit */long long int) var_2);
                            var_49 ^= ((_Bool) arr_33 [i_15] [i_15] [i_15] [i_14] [i_14] [i_14 - 1] [i_14 - 1]);
                        }
                        for (short i_16 = 2; i_16 < 9; i_16 += 3) 
                        {
                            var_50 = ((/* implicit */unsigned long long int) max((var_50), (((unsigned long long int) (_Bool)1))));
                            var_51 = ((/* implicit */long long int) arr_46 [(unsigned char)3] [i_1] [i_1] [i_1] [i_1]);
                        }
                    }
                    for (short i_17 = 1; i_17 < 7; i_17 += 3) 
                    {
                        arr_50 [i_8] [i_1] [i_0] = arr_40 [i_17 + 2] [6LL] [1ULL] [i_1] [i_0];
                        var_52 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) arr_47 [i_17 + 3] [i_17] [i_17] [i_17] [i_17])) < (var_8))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_18 = 0; i_18 < 11; i_18 += 3) /* same iter space */
                        {
                            var_53 = ((/* implicit */long long int) max((var_53), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_17 + 2] [i_18])) ? (((/* implicit */int) arr_32 [i_0] [i_1] [(short)2] [i_17] [i_8])) : (((/* implicit */int) (short)18699)))))));
                            var_54 ^= arr_52 [i_18] [i_18] [i_18] [i_17 + 2] [i_8] [i_1];
                        }
                        for (long long int i_19 = 0; i_19 < 11; i_19 += 3) /* same iter space */
                        {
                            var_55 = ((/* implicit */int) arr_54 [i_17] [(short)5] [8ULL] [i_17 + 3] [i_17] [i_17 + 2]);
                            var_56 = ((/* implicit */unsigned long long int) max((var_56), (((/* implicit */unsigned long long int) arr_9 [i_17] [i_17] [i_17] [i_17 + 1] [5ULL]))));
                            var_57 = ((/* implicit */long long int) arr_24 [i_0] [i_1] [i_8] [10LL]);
                        }
                        var_58 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)8822)) ? (10901390239329276435ULL) : (((/* implicit */unsigned long long int) 1724005012))));
                    }
                    for (unsigned char i_20 = 0; i_20 < 11; i_20 += 4) 
                    {
                        var_59 ^= ((/* implicit */unsigned long long int) max((1802535773940693698LL), (-1719333256674301327LL)));
                        arr_58 [i_8] = ((/* implicit */int) min(((-(max((var_9), (((/* implicit */unsigned long long int) arr_18 [i_1] [(short)10] [(short)3] [i_1] [i_0] [i_8] [i_20])))))), (((((/* implicit */_Bool) arr_48 [i_20] [i_0] [i_1] [i_0])) ? (min((((/* implicit */unsigned long long int) var_19)), (var_17))) : (max((((/* implicit */unsigned long long int) var_4)), (arr_27 [i_20] [i_8] [i_8] [i_1] [i_0])))))));
                        var_60 = ((/* implicit */long long int) arr_5 [i_0] [i_1] [i_8] [i_20]);
                        var_61 = ((/* implicit */unsigned long long int) max((var_61), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (~(((/* implicit */int) arr_12 [i_0] [i_0] [i_1] [i_8] [i_0]))))), (var_19))))));
                    }
                }
            }
        } 
    } 
    var_62 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(min((var_6), (((/* implicit */unsigned long long int) (unsigned char)0))))))) ? (((((/* implicit */_Bool) (~(var_19)))) ? (((((/* implicit */_Bool) var_17)) ? (var_16) : (var_16))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_18)), (var_5)))) ? (max((-2294132468492250826LL), (var_7))) : (max((((/* implicit */long long int) var_14)), (var_7)))))));
}
