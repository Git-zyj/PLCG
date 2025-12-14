/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111984
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopSeq 4 */
                for (int i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        var_14 *= ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_11 [i_0 + 1] [i_0 + 1] [(unsigned short)15] [i_3])) ? (((/* implicit */long long int) arr_11 [i_0 + 1] [i_0 + 1] [(signed char)3] [i_2])) : (var_8))));
                        arr_12 [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) arr_8 [5ULL] [5ULL] [i_2] [i_3])))))) ? (((/* implicit */int) ((unsigned short) min((67108863U), (((/* implicit */unsigned int) (signed char)-119)))))) : (max(((~(var_7))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_4 [(_Bool)1]))))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            var_15 = ((/* implicit */unsigned char) (((!(arr_5 [i_0 + 1] [i_0 + 1]))) ? (((/* implicit */long long int) (+(((unsigned int) var_11))))) : (((((/* implicit */_Bool) 67108870U)) ? ((+(var_5))) : (((/* implicit */long long int) 1625792638))))));
                            var_16 = ((/* implicit */unsigned long long int) min((1204518518U), (((unsigned int) (!(((/* implicit */_Bool) var_7)))))));
                            var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_0 + 1] [i_0 + 1]))))) ? (((/* implicit */int) ((signed char) arr_5 [i_0 + 1] [i_0 + 1]))) : (((/* implicit */int) arr_5 [i_0 + 1] [i_0 + 1]))));
                        }
                        var_18 = ((/* implicit */_Bool) max((min((arr_7 [i_0 + 1] [i_0 + 1] [14LL] [i_0 + 1]), (arr_7 [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1]))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */int) var_12)) != (((/* implicit */int) arr_3 [i_1] [i_2] [i_3]))))), (((long long int) arr_6 [i_0] [i_0] [i_0] [i_0])))))));
                    }
                    /* vectorizable */
                    for (long long int i_5 = 0; i_5 < 16; i_5 += 3) 
                    {
                        arr_20 [i_2] [i_2] [i_1] [i_2] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0 + 1] [i_0 + 1] [(_Bool)1] [i_0 + 1] [8LL]))) * (arr_9 [11] [i_2] [i_1] [11])))) ? (((/* implicit */int) ((unsigned char) arr_16 [(unsigned short)2] [(signed char)8] [(signed char)1] [i_5] [i_5]))) : (((/* implicit */int) arr_17 [(unsigned char)2] [(unsigned char)2] [i_0 + 1] [(unsigned char)2] [4LL] [i_0]))));
                        var_19 += arr_16 [1ULL] [(unsigned short)2] [i_2] [i_5] [i_5];
                        var_20 &= ((/* implicit */int) var_8);
                        var_21 -= ((/* implicit */unsigned short) ((unsigned long long int) 4194303LL));
                        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_14 [(signed char)2] [i_1] [i_2] [(unsigned short)9] [i_1]) : (((/* implicit */unsigned long long int) var_10))))))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_23 &= ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_9 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1])))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_13 [i_6] [(unsigned short)6] [(_Bool)1] [i_1] [(_Bool)1])) <= (var_7)))), (arr_9 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1]))) : (((/* implicit */unsigned long long int) max((var_7), (arr_0 [i_0]))))));
                        arr_23 [(_Bool)0] [13LL] [(signed char)3] [i_6] = ((/* implicit */unsigned char) ((unsigned int) max((arr_9 [i_6] [i_6] [i_6] [i_6]), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) * (67108863U)))))));
                        arr_24 [(_Bool)1] [i_1] [i_1] [i_1] [9LL] = ((/* implicit */short) (+(((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)51274))) & (9459468069615071843ULL))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (signed char)-34)) : (var_10)))))))));
                    }
                    var_24 = ((/* implicit */unsigned long long int) (+((~((+(((/* implicit */int) var_3))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 0; i_7 < 16; i_7 += 4) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 16; i_8 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned short) arr_26 [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [i_0]);
                                var_26 = ((/* implicit */signed char) min((var_26), (min((((/* implicit */signed char) (_Bool)1)), ((signed char)-119)))));
                                arr_31 [i_8] [5] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_12))));
                                var_27 ^= ((/* implicit */short) (-(max((((((/* implicit */_Bool) (short)-23569)) ? (-5165490346117174153LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)37643))))), (((/* implicit */long long int) ((arr_21 [(signed char)6]) ? (((/* implicit */int) arr_26 [i_0] [(unsigned char)1] [(signed char)1] [(unsigned short)11] [i_8] [i_8])) : (((/* implicit */int) arr_3 [(unsigned short)11] [2ULL] [(unsigned short)13])))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (int i_9 = 0; i_9 < 16; i_9 += 1) 
                    {
                        arr_36 [i_0 + 1] [i_0 + 1] [(_Bool)1] [(signed char)6] = ((int) min((((/* implicit */long long int) arr_28 [i_9] [6] [i_1])), (min((((/* implicit */long long int) arr_19 [i_1] [i_9] [i_2] [i_9] [i_1])), (-5165490346117174146LL)))));
                        var_28 = ((/* implicit */int) min((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (short)63)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-120))))), (((var_0) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_22 [(signed char)12] [i_9] [i_2] [i_9] [(unsigned short)15] [13])))))), (max((arr_9 [7LL] [i_1] [i_2] [i_9]), (((/* implicit */unsigned long long int) arr_0 [i_9]))))));
                        /* LoopSeq 3 */
                        for (unsigned short i_10 = 0; i_10 < 16; i_10 += 3) 
                        {
                            var_29 = ((/* implicit */signed char) ((unsigned long long int) (!((!(((/* implicit */_Bool) var_3)))))));
                            var_30 -= ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((((/* implicit */int) var_3)) & (((/* implicit */int) arr_19 [14ULL] [14ULL] [i_2] [(signed char)4] [i_1])))) | (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-119)) && (((/* implicit */_Bool) (unsigned short)53870)))))))), (min((((/* implicit */long long int) max((var_10), (969361350)))), ((+(var_8)))))));
                        }
                        for (unsigned short i_11 = 2; i_11 < 14; i_11 += 2) 
                        {
                            var_31 = min((max((arr_14 [i_11 - 1] [11] [(signed char)6] [i_11 - 1] [i_11 + 2]), (arr_14 [i_11 - 1] [i_11 - 1] [i_11 + 2] [i_11] [i_11 - 1]))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_18 [7ULL] [i_1] [i_11 - 2] [i_9] [i_11 + 2] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [15ULL] [i_2] [1] [1]))) : (arr_28 [(unsigned short)9] [(_Bool)1] [i_1]))) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [(_Bool)1] [13ULL] [11])) ? (((/* implicit */int) arr_13 [7LL] [2ULL] [i_2] [(unsigned short)1] [(unsigned short)1])) : (((/* implicit */int) var_13)))))))));
                            arr_43 [i_0] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_18 [(signed char)1] [i_11 - 1] [i_11 + 1] [i_11 - 2] [i_0 + 1] [i_0 + 1]), (((/* implicit */unsigned long long int) var_8))))) ? (max((arr_18 [12LL] [(unsigned short)11] [0LL] [i_11 - 2] [i_0 + 1] [0LL]), (((/* implicit */unsigned long long int) var_12)))) : (((/* implicit */unsigned long long int) max((var_5), (((/* implicit */long long int) var_0)))))));
                        }
                        for (unsigned int i_12 = 0; i_12 < 16; i_12 += 1) 
                        {
                            var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) ((unsigned short) 18446744073709551615ULL)))));
                            arr_47 [i_12] [i_1] [i_2] [i_2] [i_12] [i_0 + 1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_9 [i_0] [i_1] [i_0 + 1] [i_1])))) & ((~(arr_9 [1ULL] [i_1] [i_0 + 1] [i_0 + 1])))));
                        }
                        var_33 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((unsigned int) arr_32 [i_0 + 1] [i_0 + 1] [i_0] [15ULL] [(short)15]))), (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_0))) & (var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) var_7)) == (-5165490346117174153LL))))) : (max((arr_7 [i_0] [i_1] [5U] [i_9]), (((/* implicit */unsigned long long int) -1LL))))))));
                    }
                }
                for (int i_13 = 0; i_13 < 16; i_13 += 3) 
                {
                    var_34 += ((/* implicit */int) ((long long int) max((((/* implicit */unsigned long long int) (unsigned short)51274)), (arr_2 [i_0 + 1]))));
                    /* LoopSeq 2 */
                    for (unsigned char i_14 = 3; i_14 < 13; i_14 += 1) 
                    {
                        var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) ((((_Bool) arr_33 [i_0 + 1] [i_14 + 3] [i_14 + 3] [i_14] [i_0 + 1])) ? (max((((/* implicit */long long int) max((((/* implicit */short) var_9)), (arr_3 [i_13] [i_1] [i_0 + 1])))), (max((5911817434328227244LL), (((/* implicit */long long int) (signed char)50)))))) : ((+(var_2))))))));
                        var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((-(((/* implicit */int) var_1)))), (((/* implicit */int) ((var_8) >= (var_8))))))) ? (arr_11 [i_14] [i_14 + 1] [i_0 + 1] [i_0 + 1]) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_8)))) != (((((/* implicit */_Bool) arr_46 [12] [(signed char)13] [(unsigned char)11] [i_13] [i_13] [15LL] [15LL])) ? (arr_15 [i_13] [i_13] [i_13] [i_13] [i_13] [14U]) : (((/* implicit */unsigned int) var_10)))))))));
                        var_37 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_40 [i_0] [i_0 + 1] [i_1] [i_14 - 1] [i_14])) ? (((/* implicit */int) ((arr_14 [i_0] [i_1] [i_13] [(unsigned short)7] [(short)12]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [(unsigned short)8] [(unsigned short)8] [(unsigned short)8] [i_14] [(unsigned short)8])))))) : (((/* implicit */int) (unsigned short)38072))))));
                        var_38 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) max((min((((/* implicit */signed char) var_9)), (arr_34 [i_0 + 1]))), (var_1)))), ((~(var_8)))));
                    }
                    for (unsigned char i_15 = 4; i_15 < 14; i_15 += 4) 
                    {
                        var_39 *= ((/* implicit */_Bool) min((min((((var_10) & (arr_56 [i_15] [i_15]))), (((/* implicit */int) arr_54 [9ULL] [13U] [i_13] [(unsigned short)2] [i_13])))), (((/* implicit */int) arr_48 [13ULL] [i_1]))));
                        arr_58 [i_13] [i_13] [14ULL] [0ULL] [14ULL] = ((/* implicit */long long int) arr_4 [i_1]);
                    }
                    var_40 = ((/* implicit */short) ((unsigned long long int) max((((/* implicit */long long int) (short)32760)), (-1156933847657666220LL))));
                }
                for (unsigned short i_16 = 0; i_16 < 16; i_16 += 3) 
                {
                    var_41 = ((/* implicit */unsigned long long int) max((min((arr_51 [i_0 + 1] [i_1] [i_0 + 1] [i_0 + 1]), (arr_51 [2ULL] [i_1] [i_0 + 1] [i_0 + 1]))), (((/* implicit */long long int) ((unsigned char) ((arr_46 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_1] [i_0 + 1] [i_16] [i_16]) ^ (((/* implicit */int) arr_32 [i_16] [(signed char)7] [(signed char)10] [(_Bool)0] [(short)1]))))))));
                    var_42 *= (-((~(((/* implicit */int) var_9)))));
                    arr_61 [i_0] [(unsigned short)0] [i_16] [(unsigned char)5] = ((/* implicit */unsigned char) ((unsigned long long int) ((int) var_10)));
                }
                for (unsigned long long int i_17 = 1; i_17 < 14; i_17 += 2) 
                {
                    var_43 = ((/* implicit */_Bool) (+(((((arr_25 [11U] [i_1] [(_Bool)1] [11U]) + (((/* implicit */unsigned int) arr_0 [(_Bool)1])))) + (min((((/* implicit */unsigned int) arr_0 [i_0])), (arr_39 [15U] [12LL] [(unsigned short)14] [(unsigned short)14] [(unsigned short)14])))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_18 = 0; i_18 < 16; i_18 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_19 = 0; i_19 < 0; i_19 += 1) 
                        {
                            arr_68 [i_17] = ((/* implicit */_Bool) ((long long int) (!(((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_6)))))));
                            var_44 -= ((/* implicit */unsigned long long int) min((arr_53 [i_0] [(_Bool)1] [i_17] [(_Bool)1] [(_Bool)1] [i_19 + 1]), (((/* implicit */unsigned int) var_7))));
                            var_45 = ((/* implicit */long long int) max((var_45), (arr_51 [0U] [i_18] [i_17 + 1] [4LL])));
                        }
                        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                        {
                            arr_72 [i_17] = max((((/* implicit */long long int) max((arr_5 [i_0 + 1] [i_17 + 2]), (var_0)))), (((max((var_12), (var_9))) ? (arr_51 [i_0 + 1] [i_17] [i_0 + 1] [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_66 [i_0] [i_17] [i_17 + 2] [i_0] [i_20]))))));
                            var_46 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63))) * (7ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_17 - 1] [4ULL] [i_17 - 1] [i_0 + 1] [(unsigned short)3]))) : ((~(arr_55 [i_18])))));
                            arr_73 [i_0] [(_Bool)1] [(unsigned char)8] [i_17] [14U] [(signed char)5] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483646)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (8630002556615042347LL)))) ? (((/* implicit */int) max((arr_8 [i_0 + 1] [i_0 + 1] [11U] [i_0 + 1]), (arr_8 [i_0] [i_0 + 1] [i_0] [i_0])))) : ((~(((/* implicit */int) arr_8 [i_0] [7LL] [i_18] [i_20])))));
                        }
                        for (long long int i_21 = 0; i_21 < 16; i_21 += 3) 
                        {
                            var_47 = var_13;
                            var_48 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_35 [(short)2] [i_17 + 2] [i_17 + 1] [i_17] [(unsigned short)11])))))));
                        }
                        var_49 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) max((((/* implicit */unsigned long long int) var_12)), (arr_9 [9ULL] [(_Bool)1] [(signed char)3] [(signed char)6]))))) ? (((unsigned long long int) ((((/* implicit */_Bool) arr_22 [(unsigned char)9] [(_Bool)0] [i_17 + 2] [(_Bool)1] [4] [(_Bool)1])) ? (arr_15 [i_18] [i_17] [i_17] [(unsigned char)3] [i_1] [i_0 + 1]) : (((/* implicit */unsigned int) var_6))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) max((var_12), (arr_52 [i_18] [i_17] [i_1] [0ULL] [0ULL]))))) & (var_4))))));
                    }
                    var_50 = ((/* implicit */unsigned int) arr_19 [i_17 - 1] [i_17 + 1] [i_17 + 2] [i_17] [i_17]);
                    arr_77 [i_17] [i_17] [i_0 + 1] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((arr_69 [(unsigned short)9] [(unsigned short)9] [(short)7] [i_0] [i_0] [i_0]) ? (arr_7 [i_0] [i_0] [(signed char)11] [i_0 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (((arr_65 [(unsigned char)6] [i_17 + 1] [i_17] [i_17] [i_0 + 1] [i_0 + 1]) ? (((/* implicit */int) arr_38 [i_17 + 2] [(signed char)5] [(signed char)1] [(signed char)1] [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) var_11)))) : (((/* implicit */int) ((signed char) arr_26 [i_17] [4LL] [i_17] [i_17] [10ULL] [(unsigned short)11])))))));
                }
                /* LoopNest 3 */
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                {
                    for (signed char i_23 = 0; i_23 < 16; i_23 += 2) 
                    {
                        for (unsigned long long int i_24 = 0; i_24 < 16; i_24 += 1) 
                        {
                            {
                                arr_85 [i_22] [i_23] [i_22] [12] [i_22] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) >= (var_4))));
                                var_51 = ((/* implicit */int) min((((((/* implicit */_Bool) arr_39 [9LL] [i_22] [i_22] [(signed char)12] [i_22])) ? ((-(18446744073709551613ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 6961843730128111081ULL)))))), (((/* implicit */unsigned long long int) ((var_13) ? (var_8) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_0] [(signed char)10] [(_Bool)1] [i_22] [i_23] [(unsigned char)6])) ? (((/* implicit */int) arr_27 [i_0] [i_1] [4U] [i_23] [i_0])) : (((/* implicit */int) var_1))))))))));
                            }
                        } 
                    } 
                } 
                var_52 = ((/* implicit */signed char) min((var_52), (((/* implicit */signed char) (~(((unsigned long long int) -969361351)))))));
                arr_86 [(signed char)13] = ((/* implicit */unsigned long long int) ((((_Bool) arr_75 [(_Bool)1] [i_0 + 1] [i_0] [i_1] [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 4044072172985906920LL)))) : ((~(arr_75 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_1] [i_0 + 1])))));
                /* LoopNest 2 */
                for (long long int i_25 = 0; i_25 < 16; i_25 += 4) 
                {
                    for (long long int i_26 = 0; i_26 < 16; i_26 += 2) 
                    {
                        {
                            arr_93 [(signed char)11] [i_1] [i_0 + 1] = ((/* implicit */signed char) var_6);
                            var_53 |= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) arr_15 [12U] [12U] [i_1] [8ULL] [i_25] [(unsigned short)3])), (min((3606216266735245197ULL), (18446744073709551608ULL)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_54 = ((/* implicit */unsigned short) var_9);
    var_55 = ((/* implicit */signed char) max((var_55), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) (_Bool)0)), (3606216266735245197ULL))))));
    var_56 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_12)) : (((((/* implicit */_Bool) ((unsigned long long int) var_0))) ? (((/* implicit */int) ((unsigned short) 2147483646))) : (((/* implicit */int) var_0))))));
}
