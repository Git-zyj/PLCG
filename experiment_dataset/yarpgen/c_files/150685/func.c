/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150685
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        arr_2 [(signed char)17] = ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) 11610542042743694625ULL))) / ((((!(((/* implicit */_Bool) arr_1 [i_0 + 4])))) ? (((/* implicit */int) ((unsigned char) arr_0 [i_0]))) : (var_2)))));
        var_10 = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((((/* implicit */int) var_8)) + (2147483647))) >> (((((/* implicit */int) var_9)) + (23126))))) : (((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_0])))))));
    }
    for (unsigned int i_1 = 1; i_1 < 10; i_1 += 2) /* same iter space */
    {
        var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_3 [i_1 + 4]), (arr_3 [i_1 + 2])))) ? (((/* implicit */int) ((unsigned short) (unsigned char)165))) : (((((/* implicit */_Bool) (unsigned short)26205)) ? (((/* implicit */int) (unsigned short)23229)) : (((/* implicit */int) (unsigned short)2424)))))))));
        var_12 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned int) (unsigned short)53285)))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 1; i_2 < 10; i_2 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_3 = 2; i_3 < 12; i_3 += 2) 
        {
            /* LoopSeq 1 */
            for (signed char i_4 = 0; i_4 < 14; i_4 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_5 = 0; i_5 < 14; i_5 += 2) 
                {
                    var_13 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) arr_10 [i_2] [8ULL]))) ? (((/* implicit */int) arr_3 [i_2 + 1])) : (((/* implicit */int) arr_7 [i_2 + 3] [i_2]))));
                    arr_16 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)29341)) ? (1894468560U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)11)))));
                }
                var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_3 [i_2])))))));
                arr_17 [i_3] [i_3 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_3 + 2] [i_4])) ? (var_2) : (((/* implicit */int) arr_10 [i_3 - 2] [i_4]))));
                var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_4] [4U] [i_2]))) : (arr_9 [i_2] [i_3]))))));
                arr_18 [(unsigned char)7] [i_3] [i_4] [i_3 + 2] = ((signed char) ((((/* implicit */int) (unsigned short)25757)) % (((/* implicit */int) var_1))));
            }
            /* LoopSeq 3 */
            for (short i_6 = 0; i_6 < 14; i_6 += 2) 
            {
                var_16 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 21U))));
                /* LoopNest 2 */
                for (unsigned char i_7 = 0; i_7 < 14; i_7 += 2) 
                {
                    for (unsigned short i_8 = 0; i_8 < 14; i_8 += 2) 
                    {
                        {
                            var_17 += ((/* implicit */unsigned short) arr_11 [i_8] [8U] [i_6]);
                            arr_26 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 16226622532124943806ULL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_7 [i_6] [i_6])))))));
                            arr_27 [(unsigned short)3] [i_3] [(short)3] [(unsigned short)3] [(unsigned short)3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) - (((/* implicit */int) arr_10 [i_8] [i_3]))))) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1894468560U))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_9 = 0; i_9 < 14; i_9 += 2) 
                {
                    for (unsigned short i_10 = 0; i_10 < 14; i_10 += 2) 
                    {
                        {
                            arr_32 [i_3] [(unsigned char)5] [(unsigned char)5] [i_3] [i_3 - 2] [i_3] = ((/* implicit */unsigned long long int) (signed char)91);
                            arr_33 [i_2] [i_3] [i_3] [10] [(unsigned short)3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (arr_30 [i_3 - 2] [i_2 + 2] [i_2 + 4] [i_2 + 2] [i_2]) : (arr_30 [i_3 - 2] [i_2 + 3] [i_2 - 1] [i_2 + 3] [i_2])));
                        }
                    } 
                } 
            }
            for (unsigned short i_11 = 0; i_11 < 14; i_11 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_12 = 0; i_12 < 14; i_12 += 2) 
                {
                    var_18 *= (short)32755;
                    arr_39 [i_2 + 3] [i_2] [i_2] [i_2] [i_2 + 3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_14 [i_3] [i_2 + 4] [i_2] [i_2]))));
                    var_19 = ((/* implicit */unsigned short) var_6);
                    /* LoopSeq 3 */
                    for (unsigned char i_13 = 1; i_13 < 13; i_13 += 2) 
                    {
                        var_20 = ((/* implicit */unsigned char) min((var_20), (((unsigned char) ((((/* implicit */unsigned long long int) 1894468560U)) + (arr_14 [i_2] [i_12] [i_11] [i_3]))))));
                        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 15U)) ? (((/* implicit */int) (unsigned short)53651)) : (((/* implicit */int) arr_42 [i_2] [i_2] [i_2 + 2] [i_2] [i_2]))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_2 - 1] [i_3] [6ULL] [i_12]))) : (570656657U))) : (1273954047U)));
                    }
                    for (signed char i_14 = 4; i_14 < 13; i_14 += 2) 
                    {
                        var_22 = ((/* implicit */unsigned short) ((arr_30 [i_2] [i_2 - 1] [i_3] [i_12] [i_2]) << (((arr_30 [i_2] [i_2 + 4] [i_2 + 4] [12ULL] [i_2 + 3]) - (7431602451806749903ULL)))));
                        var_23 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_40 [i_3 - 2] [i_14 - 4]))));
                        var_24 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_0 [i_14])))) ? (((unsigned int) (signed char)-116)) : (((/* implicit */unsigned int) ((/* implicit */int) (short)24784)))));
                    }
                    for (unsigned short i_15 = 2; i_15 < 13; i_15 += 2) 
                    {
                        var_25 = ((/* implicit */int) ((unsigned int) arr_23 [(unsigned short)9] [i_2] [i_3 - 2] [(unsigned short)9]));
                        var_26 = ((/* implicit */signed char) var_5);
                    }
                    var_27 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) var_1))))));
                }
                var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((signed char) ((((/* implicit */_Bool) (unsigned char)255)) ? (1894468564U) : (1894468573U)))))));
                /* LoopNest 2 */
                for (unsigned char i_16 = 0; i_16 < 14; i_16 += 2) 
                {
                    for (unsigned short i_17 = 0; i_17 < 14; i_17 += 2) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned short) var_7);
                            var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_2 + 4] [i_2 + 4] [(unsigned short)9]))))) ? (((/* implicit */int) arr_15 [i_2] [i_2 - 1] [i_2 - 1] [i_3 + 1] [i_11] [i_17])) : (((((/* implicit */int) (unsigned char)255)) ^ (((/* implicit */int) arr_37 [i_2] [i_3] [i_2])))))))));
                        }
                    } 
                } 
                var_31 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_43 [i_3 + 2] [i_2 - 1] [(unsigned short)8]))));
            }
            for (signed char i_18 = 0; i_18 < 14; i_18 += 2) 
            {
                arr_56 [i_18] [i_3 - 2] [i_2 - 1] = ((/* implicit */unsigned short) var_2);
                var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) var_3))));
                var_33 &= ((/* implicit */signed char) (~(((/* implicit */int) arr_43 [4ULL] [i_18] [i_18]))));
            }
            var_34 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_53 [i_3] [i_3] [i_2]))))));
        }
        var_35 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [i_2] [i_2] [i_2] [i_2 + 1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_2 + 2] [i_2] [i_2]))) : (arr_21 [i_2 + 2] [(unsigned char)0] [i_2] [i_2 + 1] [9U])));
        arr_57 [i_2] = ((/* implicit */unsigned char) ((arr_31 [i_2 - 1]) / (var_3)));
    }
    /* LoopSeq 1 */
    for (unsigned int i_19 = 1; i_19 < 22; i_19 += 2) 
    {
        var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_58 [i_19 + 1] [i_19])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_59 [i_19])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)65))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)42302)) : (((/* implicit */int) arr_59 [i_19 + 2]))))))))) : ((-(((((/* implicit */_Bool) arr_58 [i_19] [i_19])) ? (1800676480U) : (2400498735U))))))))));
        /* LoopSeq 3 */
        for (unsigned int i_20 = 3; i_20 < 22; i_20 += 2) 
        {
            arr_63 [i_20] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)61280)) << (((2494290831U) - (2494290816U)))));
            var_37 += ((/* implicit */unsigned short) var_7);
        }
        /* vectorizable */
        for (int i_21 = 1; i_21 < 23; i_21 += 2) 
        {
            arr_66 [i_19] [i_19] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_62 [(signed char)8])) ? (((/* implicit */int) arr_59 [i_21 + 1])) : (((/* implicit */int) arr_61 [(unsigned short)20] [i_21 + 1] [20U]))));
            var_38 = ((/* implicit */unsigned short) max((var_38), (((/* implicit */unsigned short) arr_59 [i_19 + 1]))));
        }
        for (int i_22 = 0; i_22 < 24; i_22 += 2) 
        {
            var_39 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_3)))) || (((/* implicit */_Bool) arr_67 [i_19 + 2] [i_19 + 2]))));
            var_40 *= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_68 [i_19 - 1]))) : (2400498731U))), (21U)));
        }
        arr_69 [i_19] [i_19] &= ((/* implicit */unsigned short) ((unsigned char) min(((unsigned char)133), (((/* implicit */unsigned char) (signed char)(-127 - 1))))));
        var_41 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((2400498725U), (((/* implicit */unsigned int) (unsigned char)10))))) ? ((~(((/* implicit */int) arr_62 [(unsigned short)4])))) : (((/* implicit */int) ((signed char) var_9))))))));
    }
    var_42 = ((/* implicit */int) min((((/* implicit */unsigned int) (unsigned short)65531)), (97148946U)));
}
