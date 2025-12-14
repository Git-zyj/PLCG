/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154185
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
    for (short i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */_Bool) arr_1 [9ULL]);
                var_13 *= ((/* implicit */unsigned char) var_2);
                arr_4 [i_0] [i_1] = ((/* implicit */signed char) arr_2 [i_0] [i_1] [9U]);
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    var_14 ^= ((/* implicit */unsigned char) max((((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))), ((-(((/* implicit */int) (signed char)-41))))))), (-2026917171309847615LL)));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 7; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [(unsigned char)1] [i_2] [i_1] = ((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) arr_9 [i_0] [i_2] [i_2] [i_1] [i_4])), (((((/* implicit */long long int) ((/* implicit */int) var_0))) % (var_2))))), (((/* implicit */long long int) (signed char)-41))));
                                arr_15 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_1 - 1] [i_1] [i_3 + 1] [i_0 + 1] [i_1 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)41))) : (((unsigned int) (unsigned char)69)))))));
                                arr_16 [i_1] [i_1 - 1] [i_2] [(unsigned char)6] [i_4] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_9 [i_3 + 2] [i_3 + 3] [i_3] [i_1] [i_3 - 1])) : (((/* implicit */int) arr_9 [i_3 + 3] [i_3 + 2] [i_3 + 3] [i_1] [i_3 + 2]))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_9 [i_3 - 1] [i_3] [i_3 + 3] [i_1] [i_3 - 1]))))) : ((-(var_9)))));
                                var_15 *= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_9 [i_0] [i_2] [i_2] [i_2] [i_3 - 1]))));
                                arr_17 [(unsigned char)5] [i_1 - 1] [i_1 - 1] [i_1] [i_4] = ((/* implicit */_Bool) 17040415531436411038ULL);
                            }
                        } 
                    } 
                }
                for (short i_5 = 1; i_5 < 7; i_5 += 3) 
                {
                    arr_20 [i_0] [(signed char)0] [i_1] [i_5] |= ((/* implicit */unsigned long long int) arr_19 [i_0] [i_0] [i_1] [i_0]);
                    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((var_6) + (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) ? (arr_13 [i_1] [i_1 - 1] [i_1] [i_1] [i_1]) : (min((((/* implicit */unsigned int) (unsigned short)43867)), (2890784417U))))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 - 2] [i_1] [(unsigned char)7]))))))));
                    arr_21 [i_1] [i_1] [i_5 + 1] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */_Bool) max((arr_11 [i_0] [i_1] [i_1] [i_5] [i_0]), (((/* implicit */long long int) arr_7 [i_0] [i_1] [i_1]))))) ? ((+(var_9))) : (((/* implicit */unsigned long long int) arr_5 [i_1]))))));
                    /* LoopSeq 3 */
                    for (long long int i_6 = 1; i_6 < 9; i_6 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned int) ((-1386521261) & (((/* implicit */int) (unsigned char)127))));
                        var_18 = ((/* implicit */long long int) var_4);
                        arr_24 [i_1 - 1] [2ULL] [i_6] [i_1] = ((/* implicit */long long int) var_7);
                    }
                    /* vectorizable */
                    for (unsigned short i_7 = 2; i_7 < 7; i_7 += 1) 
                    {
                        arr_28 [i_0] [i_0] [i_5] [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) (+(((((/* implicit */int) arr_6 [i_1] [i_5] [i_1])) / (((/* implicit */int) (unsigned short)60488))))));
                        arr_29 [i_1] [i_1] = ((/* implicit */unsigned char) arr_13 [i_0] [i_0] [i_5] [i_0] [i_7]);
                        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (+(arr_5 [i_0]))))));
                        arr_30 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (arr_11 [i_0 - 1] [i_1] [i_0 - 1] [i_5 + 3] [i_1]) : (arr_11 [i_0] [i_1] [i_0] [i_5 - 1] [i_0])));
                    }
                    for (signed char i_8 = 4; i_8 < 9; i_8 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_9 = 0; i_9 < 10; i_9 += 1) 
                        {
                            var_20 = var_5;
                            var_21 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_10))) / (arr_19 [i_1] [i_0] [i_5 + 3] [i_5 + 1])))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (min((arr_19 [i_0 - 1] [i_8] [i_8] [i_5 + 1]), (((/* implicit */long long int) arr_32 [i_0 + 1] [i_1] [i_5] [i_5 - 1] [i_0] [i_8 + 1]))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_10 = 0; i_10 < 10; i_10 += 1) 
                        {
                            var_22 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_0] [i_10] [i_5] [(unsigned char)6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_11 [i_0] [i_8] [i_5 + 2] [i_8] [i_10])))) ? (((/* implicit */unsigned long long int) arr_11 [8ULL] [i_0] [8ULL] [i_8] [i_10])) : (((((/* implicit */_Bool) arr_13 [i_0] [i_1 - 1] [5ULL] [i_8] [5ULL])) ? (arr_10 [i_0 - 2] [i_1 - 1] [i_8] [i_10]) : (((/* implicit */unsigned long long int) var_6))))));
                            arr_38 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_22 [(unsigned short)4] [i_1] [i_1])) | (((/* implicit */int) arr_22 [i_1] [i_1] [9U]))));
                        }
                        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_5 + 3] [i_0] [i_1])) || (((/* implicit */_Bool) arr_8 [i_5 - 1] [9ULL] [i_1])))))) != (((((/* implicit */_Bool) arr_8 [i_5 + 3] [i_5 + 3] [i_1])) ? (arr_8 [i_5 - 1] [i_0 + 1] [i_1]) : (arr_8 [i_5 + 1] [i_1 - 1] [i_1])))));
                    }
                }
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) var_10);
    /* LoopSeq 1 */
    for (unsigned int i_11 = 3; i_11 < 21; i_11 += 3) 
    {
        var_25 = ((/* implicit */long long int) min((arr_40 [i_11]), (max((((/* implicit */unsigned long long int) var_6)), ((+(arr_40 [i_11])))))));
        arr_41 [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_11 - 1] [i_11 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (18446744073709551608ULL)));
    }
    var_26 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 3266104634398516483LL))));
    var_27 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_0))));
}
