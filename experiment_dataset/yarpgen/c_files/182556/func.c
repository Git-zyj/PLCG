/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182556
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
    for (unsigned long long int i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                arr_6 [i_1] = ((/* implicit */_Bool) var_5);
                /* LoopSeq 4 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [(signed char)1] [i_0 - 2])) || (((/* implicit */_Bool) var_10))));
                                arr_13 [4ULL] [i_1] [i_3] [i_4] |= ((/* implicit */unsigned long long int) (-(arr_4 [i_3])));
                                var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [(unsigned char)8] [i_1] [i_2] [i_4])) ? (((/* implicit */unsigned long long int) arr_9 [i_0 + 1] [i_0] [i_0 + 1] [i_0])) : (arr_11 [i_0] [(_Bool)1] [i_2] [i_3] [i_4]))))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_0] [i_0] = (+(arr_3 [i_0 - 1] [i_0 - 2]));
                }
                for (unsigned char i_5 = 1; i_5 < 10; i_5 += 4) 
                {
                    var_13 = ((/* implicit */long long int) ((unsigned char) ((unsigned char) arr_11 [i_5 - 1] [i_5] [i_5 - 1] [i_5] [i_0 - 1])));
                    var_14 = 6540982257667988038ULL;
                    var_15 = ((/* implicit */signed char) max((var_5), (((((/* implicit */_Bool) ((var_2) % (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? (((long long int) (unsigned char)48)) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : (arr_4 [i_5]))))))));
                }
                for (signed char i_6 = 0; i_6 < 13; i_6 += 4) 
                {
                    var_16 -= ((/* implicit */_Bool) (~(min((((/* implicit */long long int) var_3)), (var_5)))));
                    /* LoopNest 2 */
                    for (long long int i_7 = 0; i_7 < 13; i_7 += 4) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */int) max((((/* implicit */unsigned int) (+((+(((/* implicit */int) var_8))))))), (var_9)));
                                arr_24 [i_1] [i_6] [(_Bool)1] [i_8] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_12 [i_1] [i_7] [i_0 - 2] [i_0 - 2] [i_1]))))), (((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */unsigned long long int) -1098306850)) : (max((12942702076785826171ULL), (((/* implicit */unsigned long long int) var_4))))))));
                                var_18 -= ((/* implicit */short) max((((/* implicit */long long int) min((((/* implicit */int) arr_5 [i_0 - 2] [i_0 - 2] [i_0 - 1])), (arr_9 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 + 1])))), (var_2)));
                            }
                        } 
                    } 
                    var_19 *= ((/* implicit */int) ((var_9) >= (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)222)))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_9 = 0; i_9 < 13; i_9 += 3) 
                    {
                        arr_27 [i_1] |= ((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_4)))) * ((~(((/* implicit */int) arr_20 [i_0] [i_1] [i_1] [i_6] [i_1]))))));
                        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) var_9))));
                        arr_28 [i_0] [(signed char)12] [i_1] [i_9] [i_9] = ((/* implicit */long long int) ((((/* implicit */int) arr_22 [i_1] [i_1] [(_Bool)1] [9LL] [i_0 - 1] [9LL] [i_0 + 1])) ^ (((/* implicit */int) var_8))));
                        arr_29 [i_9] [(unsigned char)4] [i_9] [i_9] [i_1] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_0 - 2] [i_0 - 2]))));
                    }
                    for (unsigned short i_10 = 0; i_10 < 13; i_10 += 1) 
                    {
                        var_21 ^= ((/* implicit */long long int) arr_25 [i_0] [i_10] [7LL] [2U] [i_10] [9]);
                        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_7)))))));
                        var_23 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) min(((!(((/* implicit */_Bool) var_8)))), ((!(((/* implicit */_Bool) var_1))))))) - (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) == (max((((/* implicit */unsigned long long int) arr_4 [2ULL])), (1481740920738866589ULL))))))));
                        var_24 = ((/* implicit */short) (~(arr_26 [i_1] [i_0] [i_0 + 1] [i_0 + 1])));
                    }
                    for (unsigned int i_11 = 3; i_11 < 12; i_11 += 2) 
                    {
                        var_25 = ((/* implicit */_Bool) max((((((long long int) 5504041996923725445ULL)) << ((((+(((/* implicit */int) (unsigned short)24904)))) - (24904))))), (((/* implicit */long long int) var_7))));
                        var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) ((long long int) min((((/* implicit */long long int) var_3)), (var_6)))))));
                    }
                }
                for (unsigned long long int i_12 = 0; i_12 < 13; i_12 += 3) 
                {
                    var_27 -= ((/* implicit */unsigned long long int) var_5);
                    var_28 ^= ((/* implicit */unsigned short) ((1481740920738866567ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))));
                }
                /* LoopSeq 3 */
                for (signed char i_13 = 0; i_13 < 13; i_13 += 2) 
                {
                    var_29 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((unsigned char) (+(((/* implicit */int) arr_10 [i_1] [i_0])))))), (((unsigned long long int) var_2))));
                    var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_6)) ? (4539628424389459968ULL) : (((/* implicit */unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_14 = 0; i_14 < 13; i_14 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_15 = 0; i_15 < 13; i_15 += 2) 
                        {
                            var_31 = ((/* implicit */unsigned long long int) (((-((~(12942702076785826179ULL))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))));
                            var_32 = ((/* implicit */unsigned short) ((int) (~(var_9))));
                            var_33 = 12942702076785826191ULL;
                        }
                        arr_46 [i_14] [(unsigned short)7] [i_14] [i_14] = arr_43 [i_0] [i_14] [2U] [i_13] [i_13] [i_14];
                    }
                }
                for (long long int i_16 = 1; i_16 < 9; i_16 += 1) 
                {
                    var_34 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_21 [i_0] [i_0 - 2] [i_1] [(short)5] [i_1] [i_16]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (((((/* implicit */unsigned long long int) var_6)) + (arr_44 [(_Bool)1] [0ULL] [i_1] [i_1] [i_16 + 4] [i_16]))))) ^ (max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_3)), ((unsigned short)44663)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_1] [i_1] [i_16] [i_1]))) - (12942702076785826179ULL)))))));
                    var_35 = ((/* implicit */unsigned long long int) ((_Bool) (!(((/* implicit */_Bool) var_2)))));
                    var_36 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_7)), (max((((/* implicit */unsigned long long int) var_0)), (5504041996923725424ULL)))))) ? (var_6) : (min((((/* implicit */long long int) ((11905761816041563596ULL) != (12942702076785826191ULL)))), (min((var_6), (((/* implicit */long long int) arr_36 [i_0] [2LL] [3] [i_0]))))))));
                    arr_49 [i_0] [i_1] [i_0] [i_1] &= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_0] [i_0] [i_16] [i_16 + 1])) ? (6062730783853322330ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) 4294967295U))))) : ((+(((/* implicit */int) var_4)))))) << (((/* implicit */int) (!(((((/* implicit */_Bool) 5504041996923725445ULL)) && (((/* implicit */_Bool) arr_7 [i_16 + 4] [i_1] [i_0] [1])))))))));
                    var_37 = ((/* implicit */long long int) arr_38 [i_0] [i_0] [i_0] [i_0]);
                }
                for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                {
                    var_38 = ((/* implicit */unsigned long long int) ((((((long long int) var_8)) << (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_7 [i_1] [(short)8] [(signed char)5] [(short)8])))) - (28))))) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((var_9) << (((((/* implicit */int) var_7)) - (34)))))) || (((/* implicit */_Bool) ((unsigned char) arr_34 [i_0] [i_0] [i_0] [i_0 - 2])))))))));
                    /* LoopSeq 3 */
                    for (long long int i_18 = 1; i_18 < 10; i_18 += 2) 
                    {
                        var_39 = ((/* implicit */long long int) ((((max((arr_51 [i_1] [i_1] [i_1] [i_1]), (((/* implicit */unsigned long long int) var_10)))) - (((/* implicit */unsigned long long int) ((1293889477U) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1)))))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_37 [i_0 - 1] [i_0 - 1] [i_0 - 1]))))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_19 = 1; i_19 < 12; i_19 += 1) 
                        {
                            arr_56 [i_19] [i_19] [i_19] [i_18] [i_18] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [12U]))) - (min((arr_17 [i_0]), (((/* implicit */unsigned long long int) var_5)))))));
                            arr_57 [i_19] [i_1] [i_17 - 1] [(_Bool)1] [1LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_23 [i_0 + 1] [i_18 + 2] [i_17 - 1] [i_18] [i_18 + 2] [i_1]), (((/* implicit */long long int) var_1))))) ? (arr_23 [i_0 - 2] [i_18 + 2] [i_17 - 1] [9] [i_18 + 2] [(unsigned char)3]) : ((+(arr_23 [i_0 + 1] [i_18 - 1] [i_17 - 1] [i_18] [(_Bool)1] [(_Bool)1])))));
                            arr_58 [i_0 - 1] [i_1] [i_17] [i_19] [i_0 - 1] = ((/* implicit */unsigned short) (~(((unsigned long long int) ((((((/* implicit */int) var_10)) + (2147483647))) << (((var_2) - (3755731636151240987LL))))))));
                        }
                        var_40 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)12)) ^ (1)));
                        var_41 = ((/* implicit */unsigned int) min((min((((/* implicit */long long int) ((unsigned int) var_8))), (((((/* implicit */_Bool) var_6)) ? (var_2) : (var_6))))), (max((arr_30 [i_0 - 2]), (((/* implicit */long long int) var_4))))));
                        var_42 = arr_52 [i_0] [i_1] [i_1] [i_18];
                    }
                    for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) /* same iter space */
                    {
                        arr_61 [0ULL] [i_17] [i_1] [i_1] [11] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)18816)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_45 [i_0 - 1] [(signed char)0] [i_17 - 1] [(signed char)0] [i_20 + 1]))))));
                        arr_62 [i_20] [i_17 - 1] [8ULL] [6U] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_53 [i_20 + 1] [i_17 - 1] [i_0 - 2]))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)60))) : (var_9)));
                        arr_63 [i_0 - 2] [(signed char)4] [i_20] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (3001077819U)))));
                    }
                    /* vectorizable */
                    for (_Bool i_21 = 0; i_21 < 0; i_21 += 1) /* same iter space */
                    {
                        var_43 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_0] [(signed char)8] [i_0 - 2])) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)227))) < (var_6)))) : (((/* implicit */int) var_7))));
                        var_44 *= ((/* implicit */_Bool) (-(((/* implicit */int) (!((_Bool)0))))));
                        var_45 ^= ((/* implicit */unsigned long long int) arr_32 [i_21 + 1] [(_Bool)1] [(unsigned short)8] [i_17]);
                    }
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
    {
        for (signed char i_23 = 0; i_23 < 18; i_23 += 4) 
        {
            for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
            {
                {
                    var_46 = ((/* implicit */unsigned long long int) min((((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) min((((/* implicit */long long int) var_9)), (arr_69 [(short)9]))))))), (((signed char) ((unsigned char) var_3)))));
                    var_47 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((_Bool) ((89445435) + (((/* implicit */int) arr_72 [i_22] [(unsigned short)13] [i_22]))))))));
                }
            } 
        } 
    } 
    var_48 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((int) var_1)))));
}
