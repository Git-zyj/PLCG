/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122445
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) (~(arr_3 [i_0] [i_0])));
                arr_7 [i_0] [i_0] = ((/* implicit */signed char) ((unsigned short) min((((/* implicit */unsigned long long int) var_6)), (arr_3 [i_0] [i_1]))));
                /* LoopSeq 3 */
                for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        var_12 = ((/* implicit */short) ((((arr_5 [i_0] [i_1] [i_2]) << (((arr_3 [i_1] [i_2]) - (8584997621317136306ULL))))) >> (min((var_3), (((/* implicit */unsigned long long int) (signed char)7))))));
                        var_13 = ((/* implicit */unsigned long long int) ((min((((var_2) ? (((/* implicit */int) var_7)) : (arr_5 [i_3] [i_1] [i_1]))), (var_0))) / (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_10)) / (arr_4 [i_0] [2U] [i_2])))) ? (((((/* implicit */_Bool) var_0)) ? (arr_5 [i_0] [i_1] [i_0]) : (((/* implicit */int) var_8)))) : (((/* implicit */int) arr_0 [i_2]))))));
                        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) (~(((((/* implicit */int) var_11)) >> (((arr_9 [i_0]) - (19232960))))))))));
                    }
                    var_15 ^= ((/* implicit */unsigned long long int) ((unsigned int) max((var_9), (((/* implicit */unsigned int) ((arr_3 [i_0] [i_1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))));
                }
                for (unsigned int i_4 = 0; i_4 < 10; i_4 += 2) 
                {
                    arr_16 [i_4] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_10 [i_4] [i_1] [i_4] [i_1])) / (arr_15 [i_0] [i_1] [i_4])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)10)) && (((/* implicit */_Bool) 4923142685726059723ULL)))))) : (((((((/* implicit */unsigned long long int) arr_10 [i_0] [i_1] [i_0] [i_4])) & (var_3))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1282)))))));
                    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (~(((arr_9 [i_4]) << (((((/* implicit */int) (signed char)-10)) + (14))))))))));
                }
                for (long long int i_5 = 0; i_5 < 10; i_5 += 2) 
                {
                    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_18 [i_0] [i_0] [i_5])) % (((((/* implicit */long long int) ((/* implicit */int) var_7))) - (arr_1 [i_1])))))) : (var_3)));
                    /* LoopSeq 3 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (signed char i_7 = 0; i_7 < 10; i_7 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned short) (signed char)9);
                            arr_26 [i_0] [i_7] [i_6] [i_7] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_12 [i_5] [i_6]))) ? (var_3) : (((/* implicit */unsigned long long int) var_9))));
                            var_19 = ((/* implicit */int) 562941363486720LL);
                            var_20 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-20006))))) ? (arr_17 [i_0] [i_0] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_4))))))), (arr_25 [i_5])));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_21 = ((/* implicit */signed char) 268435455U);
                            var_22 ^= ((((/* implicit */_Bool) max((var_4), (((/* implicit */int) ((unsigned short) arr_24 [i_0] [i_1] [i_1] [i_6] [i_8] [i_8] [i_8])))))) ? (((int) var_10)) : (((/* implicit */int) (!(((/* implicit */_Bool) 67108863))))));
                            arr_30 [i_0] [i_1] [i_5] [i_6] [i_0] |= ((/* implicit */unsigned int) max((max((arr_11 [i_0] [i_0] [8U] [i_6] [i_8]), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_18 [i_0] [9ULL] [i_8])))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_12 [i_1] [i_6])))))));
                            arr_31 [i_8] [i_6] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_5 [i_1] [i_6] [i_1])) ? (arr_5 [i_0] [i_0] [i_0]) : (arr_5 [8] [i_6] [i_6])))));
                            var_23 = ((/* implicit */int) arr_14 [i_0] [i_1] [9ULL]);
                        }
                        var_24 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (signed char)-10)), (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_3))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))));
                        arr_32 [i_0] [i_1] [(unsigned short)6] [i_6] [i_6] [i_6] = ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) != (((arr_20 [i_5]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6))))))), (var_0)));
                        arr_33 [1LL] [i_1] [i_1] [(unsigned short)0] = arr_20 [i_5];
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                    {
                        var_25 |= ((/* implicit */signed char) ((((unsigned long long int) (unsigned short)54366)) & (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_34 [i_0] [i_0] [i_0] [i_0] [i_0])) >> (((((/* implicit */int) arr_28 [i_0] [i_0] [i_5] [i_1] [i_0] [i_1] [i_5])) - (21992))))))));
                        var_26 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_1] [i_9]))) : (4611685984067649536ULL)))) ? (var_10) : (((((/* implicit */_Bool) arr_14 [i_9] [i_1] [i_0])) ? (((/* implicit */int) arr_14 [i_0] [i_1] [i_1])) : (((/* implicit */int) arr_14 [i_9] [i_9] [i_9]))))));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_11 = 0; i_11 < 10; i_11 += 2) 
                        {
                            var_27 *= ((/* implicit */unsigned long long int) arr_39 [i_0] [i_1] [i_5] [i_5] [i_10] [i_11]);
                            var_28 = ((/* implicit */signed char) (+(1416551354)));
                        }
                        /* LoopSeq 1 */
                        for (signed char i_12 = 2; i_12 < 7; i_12 += 1) 
                        {
                            var_29 ^= ((/* implicit */unsigned int) (+((+(((((/* implicit */_Bool) var_6)) ? (arr_15 [(signed char)1] [i_10] [i_12 + 2]) : (((/* implicit */unsigned long long int) arr_17 [i_0] [i_5] [i_12]))))))));
                            var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)9))) : (((((/* implicit */_Bool) (signed char)9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (max((var_9), (268435455U))))))))));
                            var_31 |= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_12 [i_10] [i_0]))))), (max(((-(arr_15 [i_0] [i_0] [i_5]))), (((/* implicit */unsigned long long int) arr_39 [i_12 + 2] [i_1] [i_12 + 2] [i_1] [i_12] [i_5]))))));
                            var_32 = ((/* implicit */int) arr_3 [i_10] [i_5]);
                        }
                        var_33 ^= ((/* implicit */unsigned long long int) ((min((var_1), (((/* implicit */long long int) arr_22 [i_10] [i_0])))) & (((/* implicit */long long int) max((arr_22 [i_0] [i_0]), (arr_22 [i_0] [i_0]))))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_13 = 0; i_13 < 10; i_13 += 2) 
                    {
                        for (short i_14 = 1; i_14 < 9; i_14 += 4) 
                        {
                            {
                                var_34 = ((/* implicit */unsigned long long int) var_6);
                                arr_50 [i_14] [i_1] [i_5] [i_13] [i_14 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) max(((signed char)-31), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_10)))))))) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((18190019735413321387ULL) % (((/* implicit */unsigned long long int) arr_19 [i_14] [(unsigned char)4] [(_Bool)1] [i_1])))) : (((((/* implicit */_Bool) 8227895438396906094LL)) ? (((/* implicit */unsigned long long int) var_10)) : (12393663969564575670ULL))))) : (((/* implicit */unsigned long long int) ((arr_46 [i_14 - 1] [i_14] [i_14 + 1] [i_14] [i_14 + 1]) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) 2955051149U)) ? (((/* implicit */unsigned int) var_10)) : (arr_21 [i_13] [i_1] [i_5])))))))));
                                var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) (((-(arr_45 [i_0] [i_0] [i_0] [i_0]))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) var_7)), (var_5)))) && (((/* implicit */_Bool) ((arr_2 [(_Bool)1] [i_1]) ? (arr_46 [i_0] [i_1] [i_5] [i_13] [i_1]) : (((/* implicit */long long int) 706846342))))))))))))));
                            }
                        } 
                    } 
                    var_36 = ((/* implicit */unsigned long long int) var_1);
                }
                /* LoopSeq 2 */
                for (unsigned long long int i_15 = 1; i_15 < 8; i_15 += 4) 
                {
                    var_37 = ((/* implicit */short) min((var_37), (((/* implicit */short) ((((/* implicit */long long int) (~(((int) 15166205181874366071ULL))))) / (2323922251589311913LL))))));
                    arr_53 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) max((arr_12 [i_15] [i_1]), (((/* implicit */short) var_6)))))))) ? (((((/* implicit */_Bool) var_11)) ? (max((((/* implicit */unsigned long long int) arr_17 [i_1] [i_1] [i_1])), (arr_41 [i_1] [i_1] [i_1] [8ULL]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned long long int) min((var_9), (((/* implicit */unsigned int) ((_Bool) var_8))))))));
                    arr_54 [i_1] [i_15] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((_Bool) var_1))), (min(((+(4194304ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_1] [i_0] [i_0] [(short)9]))) : (0LL))))))));
                    var_38 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [2] [i_15 - 1])) ? (var_3) : (((/* implicit */unsigned long long int) min(((-(((/* implicit */int) var_8)))), (((int) 194049091778855166LL)))))));
                    var_39 *= ((/* implicit */_Bool) min((var_1), (((/* implicit */long long int) (-(((/* implicit */int) var_8)))))));
                }
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    var_40 = ((/* implicit */short) min((var_40), (((/* implicit */short) (-(((((/* implicit */_Bool) arr_48 [i_16] [i_16] [i_1] [i_0])) ? (-1881058969) : (((/* implicit */int) arr_48 [i_16] [i_1] [i_0] [i_0])))))))));
                    var_41 = ((/* implicit */int) 17762551374344768647ULL);
                    var_42 ^= ((/* implicit */unsigned long long int) ((unsigned int) (+(arr_21 [i_0] [i_1] [i_0]))));
                }
                var_43 = ((/* implicit */unsigned int) arr_56 [i_0]);
            }
        } 
    } 
    var_44 = (+(((/* implicit */int) (unsigned char)128)));
    var_45 = ((/* implicit */signed char) (((~(max((-1492574254), (var_10))))) + ((-(var_4)))));
}
