/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16831
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
    var_12 = ((/* implicit */unsigned int) var_10);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [(unsigned char)8])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (var_0)));
        var_13 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) var_6))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_1 [i_0])))))));
    }
    for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((/* implicit */int) ((unsigned char) (+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_1 [i_1])) : (var_2))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 11; i_2 += 1) 
        {
            for (int i_3 = 0; i_3 < 11; i_3 += 1) 
            {
                {
                    arr_14 [i_3] [i_3] [i_3] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_8)))) ? (((/* implicit */int) arr_2 [i_3])) : (((/* implicit */int) arr_2 [i_3]))));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 2; i_4 < 9; i_4 += 3) 
                    {
                        for (long long int i_5 = 3; i_5 < 9; i_5 += 1) 
                        {
                            {
                                arr_21 [i_1] [i_1] [i_1] [i_1] [i_1] &= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_11 [i_1] [i_1] [i_1]) : (((/* implicit */unsigned int) var_8))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) + (arr_6 [i_2]))))) == (((/* implicit */unsigned long long int) max((min((arr_16 [i_4] [i_4] [i_2] [i_1]), (((/* implicit */unsigned int) var_11)))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2]))) * (arr_4 [1U]))))))));
                                var_14 = ((/* implicit */unsigned short) min((var_4), (((long long int) ((((/* implicit */unsigned long long int) var_4)) - (arr_6 [i_2]))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_1)) ? (arr_18 [i_2] [i_2] [i_3]) : (var_2))), (((/* implicit */int) var_3))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_6 = 0; i_6 < 11; i_6 += 4) 
        {
            for (unsigned char i_7 = 0; i_7 < 11; i_7 += 1) 
            {
                for (unsigned int i_8 = 0; i_8 < 11; i_8 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (long long int i_9 = 0; i_9 < 11; i_9 += 3) 
                        {
                            var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) var_4))));
                            var_17 *= ((/* implicit */unsigned char) (+(var_4)));
                        }
                        for (unsigned long long int i_10 = 3; i_10 < 8; i_10 += 4) 
                        {
                            var_18 = ((/* implicit */int) ((unsigned int) ((unsigned int) ((unsigned long long int) arr_30 [i_1] [i_6] [1] [i_10]))));
                            var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) (-(var_0)))) : ((+(var_7))))), (((/* implicit */long long int) ((int) arr_36 [i_10 + 3] [i_10] [i_10 - 1] [i_10 + 2] [i_10] [i_10 + 1]))))))));
                            arr_37 [i_1] [i_6] [i_7] [i_7] [i_8] [i_8] [i_10] = ((/* implicit */unsigned int) ((arr_26 [i_1]) << (((((/* implicit */int) max((arr_34 [i_1] [i_6] [i_10 - 3] [i_8] [i_10 - 3] [i_10 - 3] [i_6]), (arr_34 [(unsigned char)10] [i_6] [i_10 - 2] [i_8] [i_6] [i_6] [i_8])))) - (147)))));
                            arr_38 [6U] [i_6] [i_7] = ((/* implicit */long long int) (-(((/* implicit */int) var_11))));
                        }
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 11; i_11 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) arr_41 [i_1] [i_1] [i_1] [i_8] [i_11]))));
                            arr_42 [i_11] [i_8] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_31 [i_1])) ? (((/* implicit */int) arr_31 [i_11])) : (((/* implicit */int) var_6))));
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) ((var_2) != (((/* implicit */int) var_6))))) << (((arr_16 [i_1] [i_7] [i_6] [i_1]) - (1004454528U)))));
                        }
                        var_22 = ((/* implicit */int) arr_17 [i_8] [i_7] [i_6] [i_1] [i_1]);
                        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) arr_35 [10ULL] [i_6] [i_6] [i_7] [i_8] [i_8] [i_8])) ? (((/* implicit */int) arr_35 [i_8] [i_8] [i_7] [i_6] [i_6] [i_1] [i_1])) : (((/* implicit */int) arr_35 [i_1] [i_1] [i_1] [i_6] [i_7] [i_8] [i_7])))) : (((/* implicit */int) ((unsigned char) arr_41 [i_1] [i_6] [i_8] [i_7] [i_8])))));
                        arr_43 [i_1] = (~(((((/* implicit */_Bool) arr_8 [i_1] [i_1])) ? (arr_32 [i_1] [i_7] [i_8]) : (((/* implicit */int) var_6)))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_12 = 1; i_12 < 7; i_12 += 1) 
    {
        arr_47 [i_12] [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_12] [i_12] [i_12])) ? ((+(3969968252U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
        /* LoopNest 3 */
        for (unsigned int i_13 = 3; i_13 < 9; i_13 += 1) 
        {
            for (unsigned int i_14 = 3; i_14 < 8; i_14 += 3) 
            {
                for (unsigned int i_15 = 0; i_15 < 10; i_15 += 4) 
                {
                    {
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_34 [6ULL] [i_15] [i_14 - 2] [(unsigned short)0] [i_13] [(unsigned short)0] [i_12])), (min((((/* implicit */long long int) var_1)), (var_10)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_14] [i_13] [i_14] [i_15])) ? (1038043660687642555LL) : (((/* implicit */long long int) var_2))))) ? (((int) var_8)) : ((~(((/* implicit */int) var_6))))))) : ((+(((((/* implicit */unsigned int) var_2)) | (var_0)))))));
                        var_25 = ((/* implicit */unsigned int) min((var_25), (((min((((/* implicit */unsigned int) ((int) (signed char)115))), (941402402U))) * (((var_9) * (var_0)))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (int i_16 = 1; i_16 < 9; i_16 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned char i_17 = 2; i_17 < 9; i_17 += 2) 
            {
                for (int i_18 = 1; i_18 < 9; i_18 += 2) 
                {
                    for (int i_19 = 2; i_19 < 7; i_19 += 4) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_60 [i_12] [i_12 + 2] [i_12 + 2] [i_12] [i_12 + 2])) ? (var_8) : (((/* implicit */int) var_11)))))) : (((unsigned long long int) var_10)))))));
                            var_27 *= ((/* implicit */unsigned short) max((min((arr_41 [i_18] [i_18 - 1] [i_19] [i_18 - 1] [i_18]), (arr_41 [i_18] [i_18 - 1] [i_17] [i_18 + 1] [4]))), (((/* implicit */long long int) ((max((var_5), (((/* implicit */unsigned int) var_3)))) << ((((+(((/* implicit */int) arr_46 [i_12 + 1])))) - (181))))))));
                            arr_64 [i_12 - 1] [i_16 + 1] [i_17] [i_16] [i_18 + 1] [i_19] = max((((((/* implicit */_Bool) arr_48 [i_16] [i_16 - 1] [i_16])) ? (arr_48 [i_16] [i_16 - 1] [i_16]) : (arr_48 [i_16] [i_16 - 1] [i_16]))), (((((/* implicit */_Bool) arr_19 [i_16])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_16]))))));
                        }
                    } 
                } 
            } 
            var_28 ^= ((/* implicit */signed char) max((min((((/* implicit */long long int) arr_22 [i_16 - 1] [4ULL])), (max((((/* implicit */long long int) arr_22 [i_12] [i_16])), (var_7))))), (((/* implicit */long long int) ((unsigned char) var_9)))));
            var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_9 [i_12]) - (arr_9 [i_12])))) ? (var_4) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */int) arr_46 [i_12 + 1])) ^ (((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_6)) : (var_2)))))))))));
        }
        for (int i_20 = 3; i_20 < 8; i_20 += 4) 
        {
            var_30 ^= ((unsigned int) ((((/* implicit */_Bool) arr_17 [i_12 + 1] [i_20 + 1] [i_20] [i_20 + 2] [i_20 - 2])) ? (arr_17 [i_12 + 3] [i_20 + 2] [i_12] [i_12 + 3] [i_20 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
            var_31 ^= ((/* implicit */int) (-(((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)247)), (var_8)))) ? (((((/* implicit */_Bool) var_10)) ? (arr_6 [i_12 + 1]) : (((/* implicit */unsigned long long int) arr_60 [i_12 + 1] [i_20] [i_20] [i_20 + 2] [i_20])))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [2U] [i_12] [i_12] [i_12]))) / (arr_36 [i_12] [i_12] [i_12] [i_12] [i_20] [i_20]))))))));
            /* LoopNest 2 */
            for (unsigned char i_21 = 2; i_21 < 8; i_21 += 1) 
            {
                for (int i_22 = 3; i_22 < 7; i_22 += 2) 
                {
                    {
                        var_32 = ((/* implicit */signed char) ((unsigned int) (!(((/* implicit */_Bool) ((signed char) var_1))))));
                        var_33 &= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_12 - 1] [i_12 + 1] [i_20 + 2] [i_20 - 3] [i_21 - 1] [i_22 - 2] [i_22 + 3]))) : (var_4)))));
                    }
                } 
            } 
            var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) var_0))));
        }
        for (long long int i_23 = 0; i_23 < 10; i_23 += 2) 
        {
            var_35 = ((/* implicit */unsigned char) (~(((((/* implicit */int) ((arr_28 [i_12] [i_12] [i_12 + 1] [i_23]) <= (((/* implicit */unsigned long long int) var_5))))) - (var_8)))));
            /* LoopNest 2 */
            for (unsigned int i_24 = 3; i_24 < 8; i_24 += 1) 
            {
                for (int i_25 = 2; i_25 < 6; i_25 += 2) 
                {
                    {
                        var_36 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) min((var_2), (((/* implicit */int) var_3))))), (min((((/* implicit */unsigned int) var_8)), (2637202078U)))))) ? (((((unsigned long long int) var_11)) % (((/* implicit */unsigned long long int) arr_17 [i_12] [i_24 - 1] [i_12] [i_25] [i_24])))) : (((/* implicit */unsigned long long int) (-(arr_50 [i_23] [i_24 + 2]))))));
                        var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) arr_34 [i_12] [i_12] [i_12 + 3] [i_23] [i_25 - 1] [i_25 + 2] [i_25]))) ? (min((var_2), (((/* implicit */int) arr_34 [i_12] [i_12] [i_12 + 3] [i_24] [i_25 - 1] [i_25 - 2] [i_25])))) : (((/* implicit */int) max((arr_34 [i_12 + 1] [i_12 + 1] [i_12 + 3] [i_12 + 1] [i_25 - 1] [i_25] [i_25 - 1]), (arr_34 [i_12] [(signed char)0] [i_12 + 3] [(signed char)0] [i_25 - 1] [(signed char)0] [i_25 + 4])))))))));
                        var_38 = ((/* implicit */unsigned char) min((var_38), (((/* implicit */unsigned char) var_8))));
                        /* LoopSeq 2 */
                        for (unsigned char i_26 = 0; i_26 < 10; i_26 += 4) 
                        {
                            var_39 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_69 [i_26])))))) | (min((((((/* implicit */_Bool) var_7)) ? (var_10) : (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) max((((/* implicit */unsigned int) var_2)), (arr_4 [i_12 - 1]))))))));
                            var_40 |= ((/* implicit */unsigned int) var_7);
                            var_41 = max((((/* implicit */int) var_3)), (((int) var_0)));
                        }
                        /* vectorizable */
                        for (unsigned char i_27 = 3; i_27 < 8; i_27 += 2) 
                        {
                            var_42 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_12 + 3] [i_27] [i_24])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (((((/* implicit */long long int) arr_61 [i_12] [9LL])) - (var_4)))));
                            arr_84 [i_27] [i_23] [i_24] [i_24] [i_25] [i_27] [i_27 - 1] = ((/* implicit */int) ((unsigned char) (+(((/* implicit */int) var_3)))));
                            var_43 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-115)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_5)))) ? (((arr_68 [i_27] [i_25 + 2] [i_25 + 2]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)115))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_23])))));
                        }
                    }
                } 
            } 
        }
    }
}
