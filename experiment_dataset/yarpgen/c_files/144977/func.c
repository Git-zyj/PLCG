/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144977
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
    var_10 = ((/* implicit */long long int) max((var_7), ((unsigned char)205)));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 22; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 21; i_3 += 2) 
                    {
                        for (signed char i_4 = 3; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned short) ((((_Bool) ((((/* implicit */_Bool) arr_8 [i_1] [i_2] [21LL])) || (((/* implicit */_Bool) var_8))))) || ((!((!(((/* implicit */_Bool) var_7))))))));
                                var_12 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)12))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (signed char i_5 = 1; i_5 < 23; i_5 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_6 = 1; i_6 < 21; i_6 += 4) 
                        {
                            var_13 = ((/* implicit */int) 4547781411485576957ULL);
                            var_14 = ((/* implicit */unsigned char) ((0ULL) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_7)), (var_5)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0)))))));
                        }
                        for (unsigned char i_7 = 1; i_7 < 23; i_7 += 3) 
                        {
                            arr_22 [i_0] [i_0] [i_0] [i_0] [i_7] [i_2] [i_0] = ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) (-(((951807299) * (((/* implicit */int) (_Bool)1))))))) : (0LL));
                            var_15 = ((/* implicit */unsigned short) arr_6 [i_0] [i_2]);
                        }
                        var_16 = ((/* implicit */long long int) arr_19 [i_0 - 1] [i_1] [i_1] [i_1] [(unsigned char)10]);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 2) 
                        {
                            arr_26 [i_2] [i_5] [i_2] [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_8))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_2))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [11])))))))))));
                            var_17 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */unsigned int) arr_20 [i_2 + 2] [i_0 + 1])) * (var_3))));
                            arr_27 [i_8] [i_2] [i_2 - 1] [i_2] [19U] = ((/* implicit */unsigned int) max(((-(((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) arr_21 [i_0] [i_0 - 1] [i_0 + 1] [i_2 - 1] [(unsigned char)19] [i_5 + 1] [i_5]))));
                            arr_28 [i_0] [i_1] [i_2] [i_5 - 1] [7ULL] = ((/* implicit */unsigned int) var_0);
                        }
                    }
                    for (unsigned int i_9 = 3; i_9 < 23; i_9 += 3) 
                    {
                        var_18 = ((/* implicit */unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) 18ULL))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 4294967267U)), (13898962662223974659ULL)))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_21 [i_2] [i_1] [i_0] [(_Bool)1] [i_1] [i_9] [i_2])) : (((/* implicit */int) (unsigned short)65535)))) : (((/* implicit */int) var_8))))));
                        var_19 = (!(((/* implicit */_Bool) (unsigned short)65535)));
                        /* LoopSeq 3 */
                        for (unsigned int i_10 = 2; i_10 < 23; i_10 += 4) 
                        {
                            arr_34 [i_0 + 1] [i_1] [8U] [(unsigned short)2] [i_2] = ((((((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) 4294967295U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_0] [i_0] [i_2 + 1] [i_9] [i_10]))) : (arr_14 [i_0] [i_2] [i_2 - 1] [i_0]))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_0] [i_1] [21] [21] [i_9 - 1] [i_9] [i_10])) ? (((/* implicit */int) arr_8 [i_1] [i_2] [i_1])) : (((/* implicit */int) (!(((/* implicit */_Bool) 0LL)))))))));
                            arr_35 [i_9] [i_2] = ((/* implicit */signed char) (+(((/* implicit */int) arr_21 [i_10] [i_9] [i_2] [i_2] [(_Bool)1] [(_Bool)1] [i_0]))));
                        }
                        for (int i_11 = 0; i_11 < 24; i_11 += 3) /* same iter space */
                        {
                            arr_39 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) var_8);
                            var_20 = ((/* implicit */unsigned int) ((var_1) || (((((arr_9 [i_11] [i_2]) || (((/* implicit */_Bool) var_5)))) || (var_1)))));
                            arr_40 [i_2] = max(((~(var_6))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_3)))) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) * (var_9))))))));
                            var_21 = ((unsigned int) ((((/* implicit */int) arr_12 [i_9 - 1] [i_0 - 1] [i_0 - 1] [i_2 + 2])) * (((/* implicit */int) arr_12 [i_9 + 1] [i_0 + 1] [i_2] [i_2 - 1]))));
                            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (signed char)-64)) : (((/* implicit */int) (unsigned char)227))));
                        }
                        for (int i_12 = 0; i_12 < 24; i_12 += 3) /* same iter space */
                        {
                            var_23 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)13))))) || (((/* implicit */_Bool) (-(4294967295U)))))))));
                            var_24 = ((/* implicit */unsigned long long int) var_2);
                        }
                    }
                    for (unsigned char i_13 = 0; i_13 < 24; i_13 += 2) 
                    {
                        var_25 = ((/* implicit */unsigned long long int) var_0);
                        var_26 = ((/* implicit */unsigned long long int) var_7);
                        /* LoopSeq 3 */
                        for (unsigned long long int i_14 = 1; i_14 < 23; i_14 += 3) 
                        {
                            var_27 = ((/* implicit */unsigned short) var_5);
                            var_28 = ((/* implicit */unsigned long long int) var_7);
                            var_29 = ((/* implicit */unsigned char) (((~(4547781411485576977ULL))) * (((/* implicit */unsigned long long int) var_9))));
                            var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(min((var_6), (((/* implicit */unsigned long long int) (_Bool)1))))))) ? (((/* implicit */long long int) (-(((((/* implicit */int) arr_10 [i_0 + 1] [i_0 + 1] [i_2] [11U] [18ULL] [i_14])) >> (((var_4) - (4488900510394445593ULL)))))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_21 [i_0] [i_1] [i_14] [i_13] [i_0 + 1] [i_13] [i_0])))) : (((((/* implicit */long long int) var_3)) / (1412494885156448206LL)))))));
                        }
                        for (unsigned int i_15 = 3; i_15 < 22; i_15 += 1) 
                        {
                            var_31 = ((/* implicit */unsigned long long int) 2837053303U);
                            arr_53 [i_2] [i_2] [i_2] [i_13] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) 0LL)) : (var_6))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_42 [i_0] [1U] [(signed char)17] [i_2 + 1] [i_13] [22U] [i_2])), (arr_48 [i_0] [i_1] [i_1] [(signed char)12] [i_13] [i_2] [i_15 + 2])))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)7))) : (arr_50 [i_2] [i_1]))) : (((/* implicit */unsigned long long int) var_2))))));
                            var_32 = ((/* implicit */signed char) ((unsigned long long int) (signed char)-8));
                            var_33 = ((max((((/* implicit */unsigned long long int) arr_37 [i_0 + 1] [i_0 - 1])), (var_6))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_2)))));
                        }
                        for (signed char i_16 = 1; i_16 < 23; i_16 += 4) 
                        {
                            var_34 = (i_2 % 2 == zero) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0))))) * (((((/* implicit */int) arr_43 [i_0] [i_0 - 1] [i_2 + 1] [i_2] [i_16 - 1])) >> (((((/* implicit */int) arr_43 [i_0] [i_0 - 1] [i_2 + 2] [i_2] [i_16 - 1])) - (72)))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0))))) * (((((/* implicit */int) arr_43 [i_0] [i_0 - 1] [i_2 + 1] [i_2] [i_16 - 1])) >> (((((((/* implicit */int) arr_43 [i_0] [i_0 - 1] [i_2 + 2] [i_2] [i_16 - 1])) - (72))) - (145))))))));
                            var_35 = ((/* implicit */unsigned short) min(((-((~(var_4))))), (min((min((arr_18 [i_0] [i_0] [(unsigned char)8] [i_0] [5U] [5LL] [(unsigned char)10]), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) min((var_1), ((_Bool)1))))))));
                        }
                    }
                }
            } 
        } 
    } 
}
