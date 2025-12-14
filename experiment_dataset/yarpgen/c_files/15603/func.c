/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15603
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
    var_20 = ((/* implicit */int) -1LL);
    var_21 = ((/* implicit */_Bool) var_0);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (signed char i_3 = 1; i_3 < 21; i_3 += 3) 
                    {
                        {
                            arr_10 [i_0] [i_0] [i_2] [i_0] [(signed char)11] [i_2] = ((/* implicit */signed char) arr_9 [i_0] [i_0] [i_2] [i_2] [i_1 - 2]);
                            /* LoopSeq 1 */
                            for (unsigned char i_4 = 0; i_4 < 23; i_4 += 2) 
                            {
                                var_22 += ((((/* implicit */_Bool) ((signed char) (unsigned char)255))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_1 - 1] [i_1 + 2] [i_2] [i_1] [i_1 - 1] [i_1] [i_2])) ? (((/* implicit */int) arr_8 [i_1] [i_1 + 1] [i_1 + 2] [(_Bool)1] [i_4] [i_3 + 2])) : (((/* implicit */int) arr_8 [i_1] [i_1 + 2] [i_1 - 2] [(unsigned char)14] [i_2] [i_3 + 2]))))));
                                arr_15 [i_4] [(_Bool)1] [i_3 - 1] [i_0] [14LL] [i_0] [i_0] = ((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) var_3)), (var_13))) ^ (((/* implicit */unsigned long long int) (~(-16LL))))));
                                arr_16 [i_0] [i_1] [20ULL] [i_3] [i_4] = ((/* implicit */signed char) var_18);
                            }
                            var_23 ^= ((/* implicit */_Bool) var_6);
                            var_24 = (((((+(arr_11 [i_0] [i_2] [i_2] [i_3 + 2] [i_3]))) + (9223372036854775807LL))) << (((((((/* implicit */long long int) ((/* implicit */int) arr_8 [(_Bool)1] [i_1] [i_1] [i_1] [i_2] [i_1 - 1]))) & (((((/* implicit */_Bool) 1LL)) ? (arr_11 [(unsigned char)4] [i_2] [i_2] [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-75))))))) - (60LL))));
                            arr_17 [(_Bool)1] [(signed char)5] [i_0] [i_0] = ((/* implicit */unsigned long long int) min((max((arr_5 [i_0] [i_0] [i_2]), (arr_5 [i_0] [i_0] [i_2]))), (min((arr_5 [i_0] [i_0] [i_2]), (arr_5 [i_0] [i_0] [i_2])))));
                        }
                    } 
                } 
                arr_18 [(signed char)19] [(signed char)19] [i_0] = ((/* implicit */signed char) ((int) -6LL));
                /* LoopSeq 3 */
                for (unsigned char i_5 = 2; i_5 < 20; i_5 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_0 [(_Bool)1])) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_5]))))))) ? (((((/* implicit */int) arr_22 [i_1 - 2] [i_5 + 3] [i_6] [i_6] [i_6])) ^ (((/* implicit */int) arr_24 [(signed char)2] [i_5 + 3] [i_5] [i_5 + 3])))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((var_15) > (-11LL))))) <= (((long long int) arr_12 [i_6] [i_5] [i_0] [i_0] [(_Bool)1] [i_0]))))))))));
                        /* LoopSeq 1 */
                        for (signed char i_7 = 4; i_7 < 22; i_7 += 3) 
                        {
                            var_26 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (_Bool)1)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9))))) ? (((/* implicit */long long int) 1707958581)) : (((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (((/* implicit */long long int) arr_13 [20ULL] [i_6] [i_0] [i_5] [i_0] [(unsigned char)20] [i_0])) : (arr_6 [i_0])))))));
                            arr_27 [i_1] [i_1] [(signed char)4] [i_1 - 2] [i_1] &= min((((/* implicit */unsigned long long int) arr_4 [i_0] [(signed char)0] [i_7 - 1])), (((((/* implicit */_Bool) arr_22 [i_0] [i_1] [i_5] [i_6] [i_5])) ? ((((_Bool)1) ? (arr_19 [i_0] [i_5] [i_6] [i_7]) : (((/* implicit */unsigned long long int) 6LL)))) : (((/* implicit */unsigned long long int) arr_13 [i_0] [i_7 - 1] [(signed char)6] [i_0] [i_5 + 2] [20LL] [i_5 + 3])))));
                            var_27 *= ((/* implicit */long long int) ((unsigned long long int) (+(((/* implicit */int) (_Bool)0)))));
                        }
                        arr_28 [i_0] = (+(((unsigned long long int) ((((/* implicit */int) var_5)) != (((/* implicit */int) arr_22 [i_0] [i_1] [i_5] [i_0] [i_6]))))));
                        /* LoopSeq 1 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_28 = ((signed char) (!(((/* implicit */_Bool) arr_0 [i_0]))));
                            var_29 += ((/* implicit */signed char) (_Bool)1);
                            arr_32 [i_0] [i_1 + 1] [i_5] [i_0] [i_1 + 1] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_30 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_30 [i_0] [i_0] [i_0] [i_0] [i_0])))), (((((/* implicit */int) arr_30 [i_0] [i_0] [i_0] [i_0] [i_0])) * (((/* implicit */int) (_Bool)1))))));
                            var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) min((((/* implicit */long long int) var_11)), (11LL))))));
                            var_31 += ((/* implicit */signed char) (_Bool)1);
                        }
                    }
                    for (unsigned char i_9 = 0; i_9 < 23; i_9 += 3) 
                    {
                        arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(arr_25 [i_0] [i_1] [8LL] [6ULL] [i_0] [i_1 - 2])));
                        /* LoopSeq 1 */
                        for (signed char i_10 = 2; i_10 < 21; i_10 += 2) 
                        {
                            arr_40 [i_0] [i_0] [i_0] [i_9] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_36 [i_0] [i_0])) : (((/* implicit */int) (signed char)-96))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_5 + 1] [i_0] [i_10]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-110)))))));
                            arr_41 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_20 [i_0] [i_9] [(signed char)7] [i_0]);
                            var_32 |= ((/* implicit */signed char) ((min((var_0), (((/* implicit */long long int) (-(((/* implicit */int) arr_5 [i_0] [i_10] [i_0]))))))) - (((/* implicit */long long int) arr_21 [i_0] [i_0] [i_0] [(signed char)8] [i_0]))));
                            arr_42 [i_10] [i_10] [(signed char)12] [i_5] [i_0] [i_10] [i_0] &= ((/* implicit */signed char) ((((/* implicit */int) var_17)) >> (((arr_33 [i_0] [i_0] [i_0] [i_0]) - (13446061140650574548ULL)))));
                        }
                        var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) (((_Bool)0) || (((/* implicit */_Bool) ((((/* implicit */int) var_3)) - (((/* implicit */int) arr_20 [(unsigned char)18] [i_5 - 2] [i_1 + 2] [(unsigned char)18]))))))))));
                    }
                    arr_43 [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */long long int) (-(((/* implicit */int) var_14))))), (((((/* implicit */long long int) ((/* implicit */int) var_7))) - (arr_11 [i_0] [i_0] [i_0] [i_1 + 2] [i_0])))));
                }
                for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                {
                    var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_11])) && (((((/* implicit */int) arr_30 [i_0] [i_1] [i_11 - 1] [i_0] [i_1])) < (((/* implicit */int) var_5))))))) | (((/* implicit */int) ((signed char) min((var_9), (((/* implicit */unsigned char) arr_38 [17ULL] [i_1] [i_1] [i_1] [i_0]))))))));
                    arr_46 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((int) var_11))) - ((~(min((var_0), (((/* implicit */long long int) (_Bool)0))))))));
                }
                for (unsigned long long int i_12 = 4; i_12 < 22; i_12 += 3) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_13 = 0; i_13 < 23; i_13 += 1) 
                    {
                        arr_53 [i_0] [i_1] [i_0] [22LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_0] [i_1 - 1] [i_12] [(_Bool)0] [i_12 + 1])) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_12] [i_1 - 1] [i_12 + 1])) : (((/* implicit */int) arr_23 [i_0]))));
                        var_35 = (i_0 % 2 == 0) ? (((/* implicit */unsigned long long int) ((-1LL) / (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_1 - 2] [i_0])))))) : (((/* implicit */unsigned long long int) ((-1LL) * (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_1 - 2] [i_0]))))));
                        var_36 = ((/* implicit */_Bool) ((((/* implicit */int) ((signed char) var_14))) ^ (((((/* implicit */_Bool) arr_19 [(signed char)0] [i_12 - 4] [(signed char)0] [i_0])) ? (((/* implicit */int) (signed char)19)) : (((/* implicit */int) var_17))))));
                        var_37 = ((/* implicit */int) max((var_37), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)121))) / (arr_47 [i_1 + 2]))))));
                    }
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        var_38 = ((/* implicit */signed char) arr_34 [i_1]);
                        /* LoopSeq 2 */
                        for (signed char i_15 = 0; i_15 < 23; i_15 += 1) 
                        {
                            arr_60 [i_0] [(signed char)14] [i_12] [i_0] [i_0] [i_1] [i_1] = ((/* implicit */long long int) arr_12 [i_14] [i_14] [11ULL] [i_1] [i_1 - 2] [i_0]);
                            arr_61 [i_0] [i_0] = ((((((((/* implicit */_Bool) var_15)) ? (arr_6 [14ULL]) : (arr_58 [i_14] [i_0] [i_12] [i_14] [i_15] [(signed char)9]))) >> (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && ((_Bool)1)))))) | (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((1543140284022575490ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                        }
                        for (unsigned long long int i_16 = 1; i_16 < 20; i_16 += 1) 
                        {
                            var_39 = ((/* implicit */unsigned char) ((((/* implicit */int) min((arr_48 [i_1 + 2] [i_1 + 2] [i_12 + 1] [i_0]), (((/* implicit */unsigned char) var_8))))) << (((((/* implicit */int) min((arr_12 [i_1] [i_1 + 2] [i_1] [i_1 - 2] [i_1 + 2] [i_1 + 2]), (arr_12 [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 2] [i_1 + 2] [i_1 - 2])))) - (58)))));
                            arr_66 [(signed char)19] [i_0] [i_12] [i_0] [i_0] = (signed char)125;
                        }
                        arr_67 [(unsigned char)22] [(unsigned char)22] [(unsigned char)22] &= arr_1 [(signed char)18];
                    }
                    arr_68 [i_0] = var_17;
                    /* LoopNest 2 */
                    for (signed char i_17 = 0; i_17 < 23; i_17 += 2) 
                    {
                        for (signed char i_18 = 4; i_18 < 22; i_18 += 3) 
                        {
                            {
                                arr_75 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_74 [i_1] [i_0] [i_18] [(unsigned char)16] [i_18]))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (14084769954281242724ULL)))));
                                arr_76 [i_0] = ((/* implicit */int) ((_Bool) ((unsigned long long int) (+(((/* implicit */int) var_3))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_40 = ((/* implicit */long long int) min((var_40), (((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) && ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)-114))))))))))));
    var_41 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)65))) : (var_13)))) ? (((/* implicit */int) (signed char)-67)) : ((-(((/* implicit */int) ((var_10) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1)))))))));
}
