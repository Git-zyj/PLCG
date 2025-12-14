/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164608
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
    var_10 ^= ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) var_2))) | (((/* implicit */int) var_6))));
    var_11 |= ((/* implicit */unsigned short) ((((-7181263451263669269LL) & (((/* implicit */long long int) ((/* implicit */int) var_1))))) <= (((/* implicit */long long int) ((/* implicit */int) var_4)))));
    var_12 = var_9;
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_4 [i_0] = arr_2 [i_0] [i_0];
        /* LoopSeq 2 */
        for (unsigned short i_1 = 2; i_1 < 14; i_1 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (long long int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                var_13 = ((/* implicit */long long int) min((var_13), (min((max((((/* implicit */long long int) (+(((/* implicit */int) var_3))))), (var_0))), (((/* implicit */long long int) min((((/* implicit */int) min((var_4), (var_6)))), (((((/* implicit */int) (unsigned short)2621)) + (((/* implicit */int) arr_3 [i_1] [i_1])))))))))));
                /* LoopSeq 1 */
                for (long long int i_3 = 0; i_3 < 16; i_3 += 4) 
                {
                    var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0]))));
                    /* LoopSeq 4 */
                    for (unsigned short i_4 = 0; i_4 < 16; i_4 += 4) 
                    {
                        var_15 = ((/* implicit */long long int) max((var_15), (((((long long int) arr_14 [i_0] [i_1] [i_2] [i_1] [i_4])) << ((((((+(((/* implicit */int) arr_13 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_0])))) & (((/* implicit */int) var_9)))) - (1441)))))));
                        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) var_1))));
                        var_17 = ((/* implicit */unsigned short) (+(((((((/* implicit */int) var_3)) >> (((arr_11 [i_3] [i_0]) + (7403538416137368290LL))))) << (((((arr_11 [i_0] [i_1 - 2]) + (7403538416137368306LL))) - (21LL)))))));
                        var_18 -= max((arr_5 [i_0]), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) (unsigned short)62914))) && (((/* implicit */_Bool) ((long long int) arr_8 [(unsigned short)1] [8LL] [8LL])))))));
                    }
                    for (long long int i_5 = 0; i_5 < 16; i_5 += 2) 
                    {
                        var_19 = ((/* implicit */long long int) min((var_19), (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) arr_5 [i_5])) : (((/* implicit */int) var_1))))), (min((((/* implicit */long long int) arr_13 [15LL] [i_3] [i_1 - 1] [15LL])), (((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) & (var_0)))))))));
                        var_20 = min((((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0])) ? (-5465829524267677698LL) : (arr_7 [i_0] [i_1 - 2] [(unsigned short)0]))), (min((((/* implicit */long long int) var_6)), (arr_8 [i_0] [i_1 + 1] [i_0]))));
                        var_21 = ((/* implicit */unsigned short) var_0);
                    }
                    for (unsigned short i_6 = 0; i_6 < 16; i_6 += 4) /* same iter space */
                    {
                        var_22 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) 1012595904862967364LL))))))));
                        var_23 = ((/* implicit */unsigned short) ((((min((-1360292023902313970LL), (min((((/* implicit */long long int) arr_0 [i_3])), (var_0))))) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_2] [i_2] [4LL] [4LL])) - (45818)))));
                    }
                    for (unsigned short i_7 = 0; i_7 < 16; i_7 += 4) /* same iter space */
                    {
                        var_24 = arr_21 [i_1] [i_1 - 2] [i_1 - 1] [i_1 + 2] [i_3];
                        var_25 = max((((max((((/* implicit */long long int) arr_21 [i_7] [i_1] [i_1] [i_1] [i_0])), (var_7))) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))))), (min((((/* implicit */long long int) max(((unsigned short)18551), (arr_3 [i_0] [i_0])))), (max((arr_7 [i_0] [i_3] [i_3]), (((/* implicit */long long int) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                    }
                }
                /* LoopNest 2 */
                for (long long int i_8 = 2; i_8 < 14; i_8 += 2) 
                {
                    for (long long int i_9 = 0; i_9 < 16; i_9 += 4) 
                    {
                        {
                            var_26 = var_0;
                            var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_25 [i_0] [i_1 - 2] [i_8 + 1] [i_8]) | (min((((/* implicit */long long int) var_9)), (arr_16 [i_0] [i_8])))))) || (((/* implicit */_Bool) var_4))));
                        }
                    } 
                } 
            }
            /* LoopSeq 2 */
            for (unsigned short i_10 = 1; i_10 < 13; i_10 += 1) 
            {
                var_28 = max((min((((((/* implicit */_Bool) arr_11 [i_0] [i_0])) ? (arr_22 [i_1 - 2] [i_10 + 3] [i_1 - 2] [i_0] [(unsigned short)3]) : (((/* implicit */long long int) ((/* implicit */int) var_4))))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_10 [i_0] [i_1] [i_1]))))), (((/* implicit */long long int) min((arr_3 [i_1 - 2] [i_1]), (var_9)))));
                var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) max((((/* implicit */int) (unsigned short)57782)), (min((((/* implicit */int) min((arr_30 [i_0] [i_0]), (arr_30 [(unsigned short)1] [i_0])))), ((~(((/* implicit */int) var_4)))))))))));
            }
            for (unsigned short i_11 = 0; i_11 < 16; i_11 += 3) 
            {
                var_30 = arr_11 [i_0] [i_0];
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_12 = 0; i_12 < 16; i_12 += 3) 
                {
                    var_31 = ((/* implicit */long long int) (unsigned short)0);
                    arr_39 [i_11] [i_11] [i_11] [i_11] = ((/* implicit */long long int) ((((/* implicit */int) ((var_2) != (((/* implicit */long long int) ((/* implicit */int) var_9)))))) % ((~(((/* implicit */int) arr_28 [i_0] [i_12] [i_11] [i_11]))))));
                    arr_40 [i_0] [i_1 - 1] [i_1 - 1] [(unsigned short)9] [i_11] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_33 [i_11] [i_1 + 2] [i_1 + 2]))));
                }
                /* vectorizable */
                for (long long int i_13 = 0; i_13 < 16; i_13 += 4) 
                {
                    var_32 |= ((/* implicit */unsigned short) ((arr_24 [i_1 - 1]) <= (((/* implicit */long long int) ((/* implicit */int) var_4)))));
                    arr_44 [i_11] [i_11] [i_13] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_28 [i_0] [i_0] [i_0] [i_1 + 2]))));
                    var_33 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_11] [i_1 - 2] [i_13]))));
                }
                var_34 = ((/* implicit */unsigned short) min((((/* implicit */long long int) max((arr_23 [i_0] [i_0] [i_0] [i_11] [i_0] [i_11] [i_1]), (var_3)))), (((long long int) (unsigned short)8177))));
                var_35 = ((/* implicit */unsigned short) 8014907512449913805LL);
                var_36 = ((arr_25 [i_11] [i_0] [i_0] [i_0]) + (min((min((arr_7 [i_0] [i_0] [i_11]), (-1012595904862967377LL))), (arr_32 [i_1 + 2] [i_0] [i_0]))));
            }
        }
        for (unsigned short i_14 = 2; i_14 < 14; i_14 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_15 = 4; i_15 < 14; i_15 += 4) /* same iter space */
            {
                var_37 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) || (((/* implicit */_Bool) arr_10 [i_14] [i_14] [i_0])))));
                var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)21377)) && (((/* implicit */_Bool) (unsigned short)0))))) : (((/* implicit */int) arr_34 [i_0] [i_0]))));
                var_39 = ((/* implicit */long long int) max((var_39), (((/* implicit */long long int) arr_41 [7LL] [9LL] [i_15 + 1]))));
            }
            for (long long int i_16 = 4; i_16 < 14; i_16 += 4) /* same iter space */
            {
                arr_55 [i_0] [i_0] [i_0] [0LL] = ((/* implicit */unsigned short) ((arr_25 [i_0] [i_14] [11LL] [4LL]) != (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                /* LoopSeq 2 */
                for (long long int i_17 = 2; i_17 < 13; i_17 += 4) 
                {
                    var_40 = ((/* implicit */long long int) min((var_40), (((((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 5465829524267677687LL)))) / (min((var_2), (arr_48 [i_0] [7LL]))))) * (((/* implicit */long long int) ((/* implicit */int) ((arr_14 [i_14 + 2] [i_14] [i_16 - 1] [9LL] [i_17 + 3]) <= (((/* implicit */long long int) ((/* implicit */int) min((arr_41 [i_0] [i_0] [i_0]), (arr_54 [i_17] [i_17] [(unsigned short)3] [(unsigned short)3])))))))))))));
                    var_41 = var_6;
                }
                for (unsigned short i_18 = 3; i_18 < 13; i_18 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_19 = 1; i_19 < 13; i_19 += 4) 
                    {
                        var_42 = ((/* implicit */unsigned short) (~(min((min((((/* implicit */long long int) arr_5 [i_18])), (var_0))), (((((/* implicit */_Bool) arr_57 [i_0])) ? (var_5) : (arr_8 [i_14] [i_14] [i_0])))))));
                        var_43 += ((/* implicit */long long int) ((((/* implicit */int) arr_38 [i_19])) != (((/* implicit */int) var_6))));
                        var_44 = ((/* implicit */long long int) min((var_9), (((/* implicit */unsigned short) (((+(var_8))) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) <= (arr_31 [i_18 + 1]))))))))));
                    }
                    for (long long int i_20 = 0; i_20 < 16; i_20 += 3) 
                    {
                        arr_65 [i_18] = ((/* implicit */unsigned short) min(((!(((/* implicit */_Bool) arr_31 [i_18 + 1])))), ((!(((/* implicit */_Bool) arr_31 [i_18 - 1]))))));
                        arr_66 [i_0] [i_18] [i_0] [i_0] [7LL] = ((/* implicit */unsigned short) ((((((((/* implicit */long long int) ((/* implicit */int) var_3))) + (var_0))) - (min((var_0), (((/* implicit */long long int) var_9)))))) - (var_5)));
                        var_45 -= ((/* implicit */unsigned short) arr_36 [i_14]);
                        var_46 = max((max((arr_17 [i_0] [i_14 + 1] [i_0] [7LL] [i_16 + 2]), (arr_17 [i_0] [i_14 - 2] [i_16] [i_16] [i_16 - 1]))), (min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_18 - 1] [i_20]))))), (arr_16 [i_14 - 2] [i_14]))));
                    }
                    var_47 = ((/* implicit */unsigned short) ((long long int) min((((var_0) & (arr_2 [i_0] [i_0]))), (((/* implicit */long long int) ((arr_33 [i_0] [i_14] [i_16]) == (((/* implicit */long long int) ((/* implicit */int) arr_58 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))))));
                    var_48 = min((((((/* implicit */_Bool) 6736381145173131983LL)) ? (min((((/* implicit */long long int) (unsigned short)15)), (arr_48 [i_0] [i_14 + 2]))) : (((/* implicit */long long int) (+(((/* implicit */int) var_3))))))), (((/* implicit */long long int) arr_13 [i_16 + 1] [i_16 + 1] [i_16 - 1] [(unsigned short)9])));
                    var_49 -= ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((((/* implicit */int) arr_51 [i_16] [i_16] [i_16])) >> (((((/* implicit */int) arr_47 [i_0] [i_14] [i_16])) - (50204))))) >> (((((((/* implicit */int) var_1)) >> (((/* implicit */int) (unsigned short)0)))) - (608)))))), (min((arr_33 [i_18 + 2] [i_18 + 3] [i_14 + 1]), (((/* implicit */long long int) arr_51 [i_18 + 2] [i_18] [i_14 + 1]))))));
                    var_50 = ((/* implicit */long long int) max((var_50), (((long long int) max((arr_53 [i_14 + 1] [i_14] [i_18 + 1] [i_18]), (var_1))))));
                }
            }
            /* LoopSeq 1 */
            for (unsigned short i_21 = 3; i_21 < 15; i_21 += 1) 
            {
                var_51 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_4))) - (min((((/* implicit */long long int) var_3)), (arr_8 [i_14 - 1] [i_21] [i_14 - 1])))));
                var_52 &= ((/* implicit */unsigned short) ((max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_4))))), ((~(var_2))))) ^ (((/* implicit */long long int) ((/* implicit */int) min((arr_47 [i_14 - 2] [i_14 + 1] [i_21 - 3]), (var_3)))))));
                var_53 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max(((~(arr_17 [i_0] [i_14] [i_21] [i_21] [i_21 - 1]))), (-6LL))))));
                /* LoopNest 2 */
                for (long long int i_22 = 1; i_22 < 13; i_22 += 1) 
                {
                    for (unsigned short i_23 = 2; i_23 < 15; i_23 += 2) 
                    {
                        {
                            var_54 -= min((min((arr_50 [i_23 + 1] [i_23 + 1] [i_23]), (((/* implicit */long long int) (unsigned short)29274)))), (max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_5))))), (max((((/* implicit */long long int) var_6)), (var_7))))));
                            var_55 = ((/* implicit */long long int) min(((unsigned short)9957), (min((arr_1 [i_14 + 2]), (arr_1 [i_14 - 1])))));
                            var_56 = max((((((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)13129), (arr_38 [i_21]))))) % (max((((/* implicit */long long int) arr_54 [i_0] [i_0] [i_0] [(unsigned short)5])), (var_0))))), (max((arr_67 [i_21] [i_21 - 2] [i_21] [i_21 + 1]), (((long long int) var_4)))));
                        }
                    } 
                } 
            }
        }
        var_57 = ((/* implicit */unsigned short) (((~(arr_8 [i_0] [i_0] [i_0]))) <= (var_2)));
        var_58 = ((/* implicit */unsigned short) max((((long long int) max((var_8), (var_0)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) min((var_0), (var_2)))))))));
    }
}
