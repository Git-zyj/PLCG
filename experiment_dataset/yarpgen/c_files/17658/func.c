/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17658
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
    var_12 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_8)), (((((((/* implicit */_Bool) var_0)) ? (var_11) : (var_11))) * (((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
    var_13 -= ((/* implicit */long long int) max((var_3), (((/* implicit */unsigned long long int) (((+(((/* implicit */int) (_Bool)0)))) / (((/* implicit */int) var_5)))))));
    var_14 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((_Bool) var_6)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    arr_6 [i_2] [(unsigned char)2] [i_1] [i_2] = ((/* implicit */unsigned char) (~(102326545)));
                    var_15 ^= ((/* implicit */unsigned char) (_Bool)1);
                    var_16 = ((/* implicit */int) ((min((arr_4 [i_2 - 1] [i_2 - 1] [(_Bool)1] [i_2]), (arr_4 [i_2 - 1] [i_2 - 1] [i_2] [i_2]))) + (((arr_4 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2]) + (arr_4 [i_2 - 1] [i_2 - 1] [1LL] [i_2])))));
                    arr_7 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2 - 1]))) : (((((/* implicit */unsigned long long int) -801340686)) / (var_3)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2 - 1]))) * (((((/* implicit */_Bool) arr_3 [i_2] [i_2] [i_2])) ? (arr_4 [i_0] [i_1] [i_1] [i_2]) : (((/* implicit */unsigned long long int) 2147483647)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                }
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 14; i_4 += 2) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 4) 
                        {
                            {
                                var_17 += ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [12] [i_3 - 1] [i_3 - 1] [i_3 - 1])) & (((((/* implicit */int) arr_9 [i_0])) ^ (((/* implicit */int) (_Bool)1))))))) > (((min((((/* implicit */unsigned long long int) (_Bool)1)), (var_3))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
                                arr_18 [i_3] [i_3] [i_5] [(_Bool)1] [i_3] [i_3] = (i_3 % 2 == zero) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((arr_3 [i_0] [i_0] [(_Bool)1]) / (((/* implicit */unsigned long long int) -7235398991276016105LL)))) << (((((/* implicit */int) arr_12 [i_0] [i_1] [i_3 - 1] [i_3] [i_4] [i_5])) >> (((((/* implicit */int) arr_17 [i_3] [10LL] [i_4] [11] [i_1] [i_1] [i_3])) - (231)))))))) ? (var_11) : (arr_2 [i_3 - 1] [i_1])))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((arr_3 [i_0] [i_0] [(_Bool)1]) / (((/* implicit */unsigned long long int) -7235398991276016105LL)))) << (((((/* implicit */int) arr_12 [i_0] [i_1] [i_3 - 1] [i_3] [i_4] [i_5])) >> (((((((/* implicit */int) arr_17 [i_3] [10LL] [i_4] [11] [i_1] [i_1] [i_3])) - (231))) + (136)))))))) ? (var_11) : (arr_2 [i_3 - 1] [i_1]))));
                                arr_19 [i_3] [i_4] = ((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) min((arr_1 [i_5]), ((_Bool)1)))), (((7235398991276016116LL) | (((/* implicit */long long int) arr_13 [(_Bool)1] [(unsigned char)10] [i_3] [(unsigned char)10] [i_3] [(unsigned char)10])))))) << (((((-7235398991276016111LL) + (7235398991276016138LL))) - (27LL)))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */_Bool) (+(((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) arr_9 [i_3]))))));
                    var_19 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (((min((arr_4 [i_3] [i_3] [i_1] [i_3]), (((/* implicit */unsigned long long int) (_Bool)1)))) / (min((((/* implicit */unsigned long long int) arr_11 [i_0] [i_1])), (var_4)))))));
                    var_20 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3]))) - (-7235398991276016105LL))), (((/* implicit */long long int) arr_14 [i_3 - 1] [i_3 - 1] [i_3 - 1] [(_Bool)1]))))), (max((((/* implicit */unsigned long long int) min(((_Bool)1), ((_Bool)1)))), (arr_16 [i_0] [i_0] [i_3] [i_0] [i_0])))));
                    arr_20 [i_0] [i_3] [i_0] [i_0] = ((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_3] [i_0] [i_3 - 1]);
                }
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
                {
                    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) -2786087900278786584LL))));
                    var_22 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)250))));
                    arr_23 [i_0] [i_1] [i_6 - 1] [i_6] = ((/* implicit */long long int) (-(max((((/* implicit */unsigned long long int) (_Bool)1)), (((var_10) ? (arr_21 [i_6 - 1] [i_1] [i_1] [(_Bool)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                }
                /* vectorizable */
                for (long long int i_7 = 0; i_7 < 14; i_7 += 2) 
                {
                    var_23 = ((/* implicit */unsigned char) ((arr_5 [i_0] [i_1] [i_7] [i_0]) / (((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1] [i_0]))));
                    /* LoopNest 2 */
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                        {
                            {
                                arr_32 [i_8] [(unsigned char)8] [i_8] [i_7] [i_1] [i_8] = ((/* implicit */unsigned char) ((arr_8 [i_0] [i_8]) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 12387814144067141967ULL))))))));
                                var_24 = (!((!(((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_0])))));
                                var_25 = ((/* implicit */int) (((+(((/* implicit */int) (_Bool)1)))) <= (((/* implicit */int) arr_26 [i_7] [i_7] [i_9 - 1]))));
                                arr_33 [i_7] [i_8] [i_7] [i_7] [i_8 - 1] = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                                var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_7] [i_7] [i_9 - 1])) ? (arr_28 [i_8] [i_8] [i_8] [i_0] [i_8]) : (((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_15 [(_Bool)1] [(_Bool)1] [i_0] [(_Bool)1] [i_8] [i_1]))))))))));
                            }
                        } 
                    } 
                }
                var_27 ^= ((/* implicit */unsigned char) (-((-(arr_4 [8] [i_1] [i_0] [i_0])))));
                /* LoopSeq 1 */
                for (int i_10 = 0; i_10 < 14; i_10 += 4) 
                {
                    arr_36 [i_0] [i_1] [i_10] [i_10] = ((/* implicit */_Bool) ((int) min((((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_10] [i_1])), (((var_11) * (arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                    var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) max((((((/* implicit */_Bool) min((1794702552), (((/* implicit */int) (unsigned char)205))))) ? (((/* implicit */int) ((var_2) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) arr_17 [i_0] [i_1] [i_1] [i_1] [(_Bool)1] [i_10] [i_10])))), (((/* implicit */int) ((((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) 9223372036854775787LL)))) || (((/* implicit */_Bool) min((arr_4 [(unsigned char)4] [i_1] [(unsigned char)4] [i_10]), (((/* implicit */unsigned long long int) arr_29 [i_0] [i_1] [i_10] [i_0])))))))))))));
                    /* LoopNest 2 */
                    for (int i_11 = 1; i_11 < 11; i_11 += 4) 
                    {
                        for (int i_12 = 0; i_12 < 14; i_12 += 1) 
                        {
                            {
                                var_29 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_16 [10LL] [i_11] [i_0] [i_11] [2])))))) ? (((min((((/* implicit */long long int) arr_9 [i_10])), (arr_8 [i_0] [i_10]))) * (((/* implicit */long long int) min((((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [(unsigned char)1])), (arr_5 [i_0] [6ULL] [i_0] [6ULL])))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_25 [i_11] [i_1])), (arr_22 [i_0] [i_0] [i_0] [i_0]))))))))));
                                var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) ((((((var_4) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) / (((/* implicit */unsigned long long int) arr_5 [i_0] [10LL] [i_0] [i_12])))) * (((/* implicit */unsigned long long int) (-((+(var_6)))))))))));
                                var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_11 [i_1] [i_0])))) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : (max((var_8), (((/* implicit */int) arr_0 [i_1]))))))) - (((min((arr_24 [i_0] [i_1] [i_10] [i_0]), (arr_29 [i_0] [i_1] [i_10] [i_10]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 2147483647)) || (var_7))))) : (var_9))))))));
                                arr_43 [i_11] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */long long int) ((/* implicit */int) arr_25 [i_11] [0LL]))) - (var_6)))))) ? (((/* implicit */unsigned long long int) arr_38 [i_12] [i_11 + 2] [i_10] [i_1])) : (((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_34 [i_11] [i_10] [i_1] [i_0]), (arr_41 [i_0] [(_Bool)1] [i_1] [i_11] [i_11] [i_12]))))) / (arr_2 [i_0] [i_0])))));
                                arr_44 [i_0] [i_11] [i_10] [i_11] [i_10] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_6)) * ((-(arr_21 [i_0] [(_Bool)0] [(_Bool)0] [i_12])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_13 = 0; i_13 < 14; i_13 += 3) 
                    {
                        for (unsigned char i_14 = 0; i_14 < 14; i_14 += 3) 
                        {
                            {
                                arr_50 [i_14] [i_13] [i_10] [i_13] [i_10] = ((((/* implicit */_Bool) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_10] [i_0] [i_10] [i_0] [i_0]))) + (3ULL)))))) ? (((/* implicit */int) ((arr_8 [i_10] [i_0]) == (((/* implicit */long long int) ((((/* implicit */int) arr_29 [(_Bool)1] [i_1] [i_10] [i_0])) ^ (var_8))))))) : (((/* implicit */int) min((((11899754177058948038ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)122))))), (arr_14 [i_0] [i_1] [i_1] [i_13])))));
                                arr_51 [i_0] &= min(((((+(arr_30 [i_0] [(_Bool)1] [(unsigned char)9] [i_13] [i_14] [i_13] [i_0]))) + (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) - (arr_8 [i_0] [i_0])))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_1 [i_14])), (((((/* implicit */int) arr_49 [i_0] [i_1] [i_1] [i_0] [i_14])) * (((/* implicit */int) arr_24 [(unsigned char)12] [i_1] [(unsigned char)12] [i_13]))))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
