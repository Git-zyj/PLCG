/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17834
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
    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) var_13))));
    var_17 = ((/* implicit */long long int) 7966829195339238222ULL);
    var_18 |= ((/* implicit */signed char) var_6);
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 3; i_2 < 10; i_2 += 2) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        var_19 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min(((-(((/* implicit */int) arr_5 [i_0] [i_3])))), (((/* implicit */int) (unsigned char)118))))) * (var_14)));
                        var_20 = arr_9 [i_0 - 2];
                        arr_10 [i_3] = ((/* implicit */unsigned short) arr_2 [i_0]);
                    }
                    /* LoopSeq 4 */
                    for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) -4);
                        arr_13 [i_0] [i_1] [i_4] [i_0] = arr_1 [i_2 + 1];
                    }
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_22 *= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-23))) : (9341921532446376460ULL)))));
                        var_23 &= ((/* implicit */short) (~(((/* implicit */int) arr_1 [i_0]))));
                        /* LoopSeq 2 */
                        for (unsigned short i_6 = 1; i_6 < 10; i_6 += 3) 
                        {
                            arr_19 [3ULL] [3ULL] [i_5] [i_5] [i_2] = ((/* implicit */unsigned char) var_8);
                            arr_20 [i_6] [i_5] [4] [8U] [8U] &= ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(7966829195339238225ULL))))));
                        }
                        for (unsigned char i_7 = 0; i_7 < 11; i_7 += 2) 
                        {
                            arr_25 [i_7] [i_7] [i_7] [i_2 + 1] [i_7] [i_7] &= ((/* implicit */int) (~(-5536624257968519791LL)));
                            var_24 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) : (arr_12 [i_2 - 1] [i_0 - 1] [i_0 - 1])));
                        }
                        arr_26 [i_0] [i_2] [i_0] [i_5] [i_2 - 3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_0 + 1] [i_1] [i_2 - 3] [i_2 - 3] [i_2] [i_2 - 2])) ? ((~(var_2))) : (((/* implicit */int) arr_11 [i_1]))));
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 2) 
                    {
                        var_25 = ((/* implicit */unsigned int) max((min((((((/* implicit */_Bool) (unsigned char)255)) ? (-8390597661334681557LL) : (((/* implicit */long long int) 305490176U)))), (((/* implicit */long long int) var_3)))), (((/* implicit */long long int) ((unsigned char) var_9)))));
                        var_26 += ((/* implicit */long long int) arr_23 [i_0] [i_0] [i_1] [i_0] [i_8] [i_8] [i_1]);
                        var_27 += ((/* implicit */short) arr_14 [i_0] [0] [0] [0]);
                    }
                    for (signed char i_9 = 1; i_9 < 9; i_9 += 1) 
                    {
                        var_28 = ((/* implicit */_Bool) arr_3 [i_9]);
                        arr_32 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) max((((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2 + 1]))) * (max((89569198U), (((/* implicit */unsigned int) arr_9 [i_0])))))), (((/* implicit */unsigned int) (signed char)3))));
                    }
                }
                /* LoopNest 2 */
                for (unsigned short i_10 = 0; i_10 < 11; i_10 += 1) 
                {
                    for (signed char i_11 = 0; i_11 < 11; i_11 += 1) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (unsigned long long int i_12 = 1; i_12 < 9; i_12 += 2) 
                            {
                                var_29 = ((/* implicit */_Bool) (~(max((max((((/* implicit */unsigned int) var_10)), (arr_12 [i_1] [i_1] [i_0]))), (((/* implicit */unsigned int) var_15))))));
                                var_30 = ((/* implicit */signed char) ((max((max((var_14), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_9 [i_11]))))))) & (((/* implicit */unsigned long long int) arr_35 [i_0] [i_0] [i_0] [i_12]))));
                                var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_15 [i_0] [i_0] [i_0] [i_0 - 1] [i_12 + 2])), (var_1)))) ? (((/* implicit */int) arr_30 [i_0] [i_0])) : (var_2)));
                                var_32 += ((/* implicit */unsigned short) max((((/* implicit */long long int) (signed char)-7)), (-8390597661334681570LL)));
                            }
                            for (unsigned short i_13 = 2; i_13 < 10; i_13 += 2) 
                            {
                                var_33 = max((((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (var_0)))) ? (((/* implicit */unsigned long long int) (+(arr_44 [i_13] [1U] [i_1])))) : (max((((/* implicit */unsigned long long int) arr_37 [i_0] [i_0] [(unsigned short)4] [i_11] [(unsigned short)6] [i_11])), (arr_27 [i_10] [i_10] [i_10] [i_10]))))), (((/* implicit */unsigned long long int) (+(max((((/* implicit */unsigned int) (unsigned short)37276)), (var_1)))))));
                                var_34 |= ((((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) 3892318862U)), (10479914878370313405ULL))) | (((/* implicit */unsigned long long int) ((unsigned int) 8390597661334681566LL)))))) ? (-2649609457021349193LL) : (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_0 - 2] [i_0 - 2] [i_10] [i_11] [i_0 - 2] [i_10]))));
                                arr_46 [i_0] [i_1] [i_10] [i_10] [i_11] [i_1] = ((/* implicit */int) max((min(((-(arr_2 [i_13]))), (3145611098489937327ULL))), (((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)255)), (2649609457021349193LL)))) ? (arr_27 [i_1] [i_1] [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)-18)))))))));
                                var_35 = ((/* implicit */unsigned long long int) (-(arr_4 [i_1] [i_11])));
                            }
                            for (unsigned short i_14 = 1; i_14 < 9; i_14 += 2) /* same iter space */
                            {
                                var_36 = ((/* implicit */unsigned long long int) (-(((arr_12 [i_10] [i_10] [i_1]) << (((min((((/* implicit */int) (unsigned short)32512)), (var_2))) - (32489)))))));
                                var_37 |= ((/* implicit */unsigned long long int) (~(arr_28 [i_0 - 2] [i_14 + 2])));
                                var_38 -= ((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_0] [i_0])) >> (((((16067952341694779216ULL) >> (((arr_18 [i_0 + 1] [i_0 - 2] [(_Bool)1] [(_Bool)1] [i_10] [i_1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)7))))))) - (2008494042711847372ULL)))));
                            }
                            for (unsigned short i_15 = 1; i_15 < 9; i_15 += 2) /* same iter space */
                            {
                                var_39 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((_Bool) var_14))))) - (((/* implicit */int) var_13))));
                                var_40 = ((/* implicit */unsigned long long int) min((var_40), (((/* implicit */unsigned long long int) arr_36 [i_0] [i_0]))));
                                var_41 = ((/* implicit */unsigned int) min((var_41), (((/* implicit */unsigned int) ((long long int) min((((int) arr_14 [i_1] [i_10] [i_11] [i_15])), (((/* implicit */int) arr_38 [i_0] [i_0] [i_11] [i_15]))))))));
                                var_42 = ((/* implicit */unsigned long long int) max((var_42), (((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)28)), ((-(((/* implicit */int) arr_6 [i_1] [i_1] [i_15 - 1] [i_0 + 1])))))))));
                                arr_52 [i_0] [i_10] [i_1] [i_10] [i_1] [i_10] [i_15] = (+(((arr_7 [i_10] [i_10] [i_15 + 2] [i_11] [i_15 + 2] [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 + 1]))))));
                            }
                            arr_53 [i_10] [i_10] [i_1] [i_1] [i_10] = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((_Bool) var_6))), (min((max((((/* implicit */unsigned int) arr_11 [8U])), (4205398123U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_0 - 2] [(unsigned short)5] [i_10] [(unsigned short)5])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_0 [(signed char)8])))))))));
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (unsigned short i_16 = 0; i_16 < 11; i_16 += 2) /* same iter space */
                            {
                                arr_58 [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_47 [i_0 - 2] [i_0] [i_0] [i_0 - 2] [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_37 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0])) ? (arr_48 [i_0] [(unsigned short)4] [i_0] [i_0] [i_0]) : (89569161U)))) : (((9678449405839006617ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                                arr_59 [i_10] [i_1] [i_10] [i_10] [i_16] = ((/* implicit */signed char) arr_9 [i_0 + 1]);
                                var_43 = ((/* implicit */unsigned short) min((var_43), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_34 [i_0] [i_1] [i_0] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_10] [1ULL]))) : (3145611098489937304ULL))))));
                                var_44 = ((unsigned long long int) (unsigned char)41);
                            }
                            for (unsigned short i_17 = 0; i_17 < 11; i_17 += 2) /* same iter space */
                            {
                                var_45 = ((/* implicit */unsigned char) ((arr_27 [i_10] [i_10] [(_Bool)1] [(_Bool)1]) & (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_0 - 2] [i_0 + 1] [i_0 - 2] [i_1] [i_1] [i_10]))) | (arr_33 [i_0] [i_0 + 1] [i_0]))))));
                                var_46 = ((/* implicit */unsigned long long int) var_2);
                            }
                            for (unsigned short i_18 = 0; i_18 < 11; i_18 += 2) /* same iter space */
                            {
                                arr_66 [i_10] = ((/* implicit */unsigned short) (~((+(((/* implicit */int) arr_50 [i_0] [6LL] [6LL] [i_0] [i_0 - 1] [i_0 - 1]))))));
                                arr_67 [i_10] [i_10] [i_10] [i_1] [i_18] [i_18] [i_1] = ((/* implicit */short) (+((-(((arr_40 [i_18] [i_1] [i_1] [i_10] [i_11] [i_18]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)60879))) : (arr_51 [i_11] [7LL] [i_11])))))));
                            }
                            var_47 = ((/* implicit */signed char) var_3);
                            arr_68 [(unsigned short)10] [i_10] [i_10] [i_1] &= ((/* implicit */signed char) var_7);
                        }
                    } 
                } 
                var_48 = ((/* implicit */unsigned long long int) min((max((arr_24 [i_0] [i_0] [i_0] [i_1] [i_1]), ((-(((/* implicit */int) (unsigned short)1003)))))), (((((/* implicit */_Bool) arr_51 [i_1] [i_1] [i_0 - 1])) ? (arr_64 [i_0 - 2] [i_0 - 2] [i_0 - 1] [i_0 - 2]) : (((/* implicit */int) ((unsigned char) 89569154U)))))));
            }
        } 
    } 
    var_49 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) (signed char)18)) ? (var_10) : (-568726467))))) >> (((((/* implicit */int) (unsigned short)4875)) - (4853)))));
}
