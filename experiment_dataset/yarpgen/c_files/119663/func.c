/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119663
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned short) arr_1 [i_0]);
        var_15 = arr_1 [i_0];
        /* LoopSeq 3 */
        for (unsigned char i_1 = 3; i_1 < 10; i_1 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 1; i_2 < 12; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    {
                        arr_10 [(unsigned char)13] [i_2] [i_1] [i_0] = var_2;
                        var_16 = arr_2 [i_0] [i_0];
                    }
                } 
            } 
            var_17 = ((/* implicit */signed char) (((!(arr_6 [i_0]))) ? (((/* implicit */unsigned long long int) ((arr_0 [i_0] [8U]) << (((/* implicit */int) var_11))))) : (min((min((arr_4 [i_0] [i_1]), (((/* implicit */unsigned long long int) 0U)))), (((/* implicit */unsigned long long int) min((arr_8 [i_0]), (var_4))))))));
        }
        /* vectorizable */
        for (unsigned char i_4 = 3; i_4 < 10; i_4 += 4) /* same iter space */
        {
            var_18 = ((/* implicit */short) (+(((/* implicit */int) (signed char)23))));
            /* LoopNest 2 */
            for (signed char i_5 = 0; i_5 < 14; i_5 += 1) 
            {
                for (unsigned int i_6 = 0; i_6 < 14; i_6 += 4) 
                {
                    {
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) | (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [2]))) : (arr_0 [i_0] [i_5])))));
                        /* LoopSeq 1 */
                        for (short i_7 = 0; i_7 < 14; i_7 += 1) 
                        {
                            var_20 ^= ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_12 [i_0] [i_4 + 1] [4U])) : (((/* implicit */int) var_3)))));
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)6284)) >> (((9223372036854775807LL) - (9223372036854775776LL)))));
                            arr_19 [i_4] [i_4] = ((/* implicit */unsigned short) ((((int) 2490833286U)) / ((~(((/* implicit */int) arr_18 [i_0] [i_4] [i_5] [i_6]))))));
                            arr_20 [i_0] [i_4] [i_5] [(_Bool)1] [i_6] [i_4] [i_7] = ((var_4) ? (((/* implicit */int) arr_8 [i_0])) : (((/* implicit */int) arr_1 [i_4 + 2])));
                        }
                        var_22 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_9 [i_0] [(signed char)11] [(signed char)11] [i_4 - 2] [i_4]))));
                        arr_21 [i_4] [i_4] [i_5] [i_6] = ((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_4 - 2]))));
                    }
                } 
            } 
            var_23 = (-(((/* implicit */int) arr_6 [i_4 - 1])));
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 10; i_8 += 1) 
            {
                for (long long int i_9 = 0; i_9 < 14; i_9 += 1) 
                {
                    {
                        /* LoopSeq 4 */
                        for (int i_10 = 4; i_10 < 10; i_10 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned int) arr_25 [i_4] [11LL] [(_Bool)1] [i_9] [i_9]);
                            var_25 = ((arr_6 [i_9]) ? (((((/* implicit */_Bool) arr_28 [i_9] [i_4] [i_8] [i_9] [i_10 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_8]))) : (arr_2 [i_0] [0U]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59251))));
                            arr_29 [i_0] [i_4] [i_4] [i_9] [i_10] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_26 [i_4] [i_4] [i_4 + 4] [i_8 - 1] [i_8 + 3]))));
                            var_26 = ((/* implicit */signed char) 911272455164481777LL);
                        }
                        for (unsigned int i_11 = 0; i_11 < 14; i_11 += 4) 
                        {
                            var_27 = ((/* implicit */unsigned short) ((unsigned int) arr_0 [i_4 + 1] [i_8 - 1]));
                            var_28 = ((/* implicit */short) 3170121458716292281LL);
                            var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_15 [i_4 + 1] [i_4 + 4] [i_4 + 2] [i_4 + 2])) : (((/* implicit */int) (unsigned short)59271))));
                            arr_32 [(_Bool)1] [i_4 + 3] [i_8] [i_4] [i_4] [i_9] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_24 [i_4] [i_4] [i_4] [i_9] [i_9] [i_11]))));
                            var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)59275))))) ? (((/* implicit */unsigned int) -1900213633)) : (arr_0 [i_0] [i_4]))))));
                        }
                        for (signed char i_12 = 1; i_12 < 10; i_12 += 4) 
                        {
                            var_31 = ((/* implicit */long long int) -217275767);
                            var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -911272455164481778LL)) ? (((/* implicit */int) (unsigned char)72)) : (((/* implicit */int) (unsigned short)6284))));
                        }
                        for (long long int i_13 = 0; i_13 < 14; i_13 += 4) 
                        {
                            var_33 = ((/* implicit */_Bool) ((unsigned int) ((var_8) == (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_4]))))));
                            var_34 = ((/* implicit */short) ((long long int) ((signed char) arr_16 [8ULL])));
                            arr_37 [i_0] [i_4] [i_8 + 3] [i_9] [0] = ((/* implicit */unsigned short) arr_14 [i_0] [i_4]);
                        }
                        var_35 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_35 [i_0] [i_0] [i_0] [i_0] [i_0]) | (((/* implicit */int) arr_7 [(_Bool)1] [i_4]))))) && (((/* implicit */_Bool) (~(arr_30 [i_0] [i_0] [i_8] [i_9] [i_9]))))));
                    }
                } 
            } 
        }
        for (unsigned char i_14 = 3; i_14 < 10; i_14 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned char i_15 = 0; i_15 < 14; i_15 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned long long int i_16 = 0; i_16 < 14; i_16 += 1) 
                {
                    for (int i_17 = 0; i_17 < 14; i_17 += 4) 
                    {
                        {
                            var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) 0U))));
                            var_37 = ((/* implicit */unsigned char) ((int) var_11));
                            var_38 = ((/* implicit */long long int) max((var_38), (((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (-(5088317778567781932LL))))))))))));
                            var_39 = ((/* implicit */short) var_2);
                        }
                    } 
                } 
                var_40 = ((/* implicit */int) -9223372036854775785LL);
            }
            for (unsigned char i_18 = 0; i_18 < 14; i_18 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (long long int i_19 = 1; i_19 < 11; i_19 += 4) 
                {
                    for (int i_20 = 0; i_20 < 14; i_20 += 1) 
                    {
                        {
                            var_41 = var_8;
                            var_42 = ((/* implicit */unsigned char) (-(min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_19] [i_18]))) : (arr_27 [i_0] [i_0] [i_18] [i_19 + 1] [i_20]))), (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) * (((/* implicit */int) var_9)))))))));
                            var_43 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) -217275769)) ? (((/* implicit */int) (short)25167)) : (2147483647))), (((/* implicit */int) ((arr_47 [i_14] [i_14] [i_14 + 3] [i_14 - 3] [i_19 + 3] [i_19] [i_19 - 1]) && (arr_47 [i_14] [i_14] [i_14 + 1] [i_14 + 3] [i_19 + 1] [i_19] [i_19 - 1]))))));
                            var_44 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_13)) != (((/* implicit */int) arr_26 [i_18] [i_14 + 1] [i_14 + 2] [(signed char)3] [i_14 + 1])))) ? (arr_22 [i_14] [i_18] [i_19] [i_20]) : (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_18] [5ULL] [i_14 - 3] [i_14 - 3] [i_18])))));
                        }
                    } 
                } 
                var_45 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned char) arr_8 [i_0]))));
            }
            var_46 = ((/* implicit */_Bool) arr_54 [i_0] [6] [i_0]);
            var_47 = ((/* implicit */int) max((((-2982014206657267651LL) * (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0]))))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)11)) <= (((/* implicit */int) arr_13 [(_Bool)1])))))));
        }
        var_48 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(arr_45 [i_0]))))));
        /* LoopSeq 1 */
        for (signed char i_21 = 1; i_21 < 13; i_21 += 4) 
        {
            arr_58 [i_0] [i_0] = ((/* implicit */long long int) (+(2147483635)));
            /* LoopSeq 1 */
            for (int i_22 = 0; i_22 < 14; i_22 += 1) 
            {
                var_49 = ((/* implicit */unsigned int) ((int) arr_27 [(unsigned char)12] [i_21 + 1] [i_21] [i_21] [i_22]));
                var_50 += ((/* implicit */signed char) ((((/* implicit */int) min((arr_41 [(_Bool)1]), (((/* implicit */unsigned short) arr_11 [i_21 - 1] [i_21 - 1] [i_21 + 1]))))) ^ ((-(((/* implicit */int) arr_41 [6]))))));
                var_51 = ((/* implicit */long long int) var_8);
            }
        }
    }
    /* vectorizable */
    for (unsigned int i_23 = 0; i_23 < 14; i_23 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_24 = 1; i_24 < 11; i_24 += 1) 
        {
            for (short i_25 = 0; i_25 < 14; i_25 += 1) 
            {
                {
                    var_52 = ((/* implicit */int) var_13);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_26 = 1; i_26 < 11; i_26 += 4) 
                    {
                        var_53 -= ((/* implicit */long long int) ((arr_59 [i_23] [i_24 + 1] [i_26 + 3]) == (arr_59 [i_23] [i_24 + 1] [i_26 - 1])));
                        /* LoopSeq 3 */
                        for (signed char i_27 = 3; i_27 < 13; i_27 += 4) 
                        {
                            var_54 = ((/* implicit */int) arr_23 [i_27 - 2] [i_27 - 1] [i_27 - 1]);
                            var_55 = ((/* implicit */int) min((var_55), (((/* implicit */int) ((-178981237) < (((/* implicit */int) (unsigned short)59246)))))));
                        }
                        for (unsigned long long int i_28 = 2; i_28 < 12; i_28 += 1) 
                        {
                            var_56 = ((/* implicit */unsigned char) ((_Bool) var_5));
                            var_57 = ((/* implicit */long long int) (short)(-32767 - 1));
                        }
                        for (int i_29 = 0; i_29 < 14; i_29 += 4) 
                        {
                            arr_80 [i_23] [i_23] [i_25] [i_26] [i_26] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_74 [i_23] [i_24] [(unsigned char)1] [i_26] [i_26 + 1] [0]))));
                            var_58 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_72 [i_24 + 1])) ? (((/* implicit */int) arr_11 [10LL] [i_25] [i_29])) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_43 [i_23] [i_24 - 1] [i_25] [i_26])) : (((/* implicit */int) var_13))))));
                        }
                        arr_81 [i_23] [i_24] [i_25] [i_26] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)8)) ? (1900213632) : (((/* implicit */int) (signed char)-23))));
                        var_59 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(3563759123U)))) ? (((/* implicit */int) arr_60 [i_26] [i_24 + 1] [i_24] [i_26 + 2])) : (arr_44 [i_23] [i_23] [i_26] [i_24] [i_24 + 3] [i_24])));
                    }
                }
            } 
        } 
        var_60 = ((/* implicit */long long int) arr_51 [0ULL]);
        arr_82 [i_23] [i_23] = var_4;
    }
    var_61 = ((/* implicit */unsigned char) var_13);
}
