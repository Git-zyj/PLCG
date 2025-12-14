/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167696
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [(signed char)6] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (arr_1 [2] [2]) : (((((/* implicit */_Bool) ((arr_8 [i_1] [i_1] [i_0]) & (((/* implicit */unsigned long long int) var_11))))) ? (arr_7 [i_2] [i_1 - 1] [i_0 + 1] [i_2]) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_12)) : (var_2)))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned char i_3 = 2; i_3 < 20; i_3 += 4) /* same iter space */
                    {
                        var_15 = var_13;
                        var_16 *= arr_3 [i_3 - 1];
                    }
                    /* vectorizable */
                    for (unsigned char i_4 = 2; i_4 < 20; i_4 += 4) /* same iter space */
                    {
                        arr_16 [i_2] [(_Bool)1] = ((/* implicit */signed char) 3744130954481151212ULL);
                        var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (1475309387) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) (short)32767)) : (-1100641759));
                        var_18 *= ((/* implicit */unsigned char) var_10);
                    }
                    for (int i_5 = 0; i_5 < 21; i_5 += 4) 
                    {
                        arr_20 [i_0] [i_5] [16ULL] [i_2] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((var_3) < (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))), (((((/* implicit */_Bool) (signed char)18)) ? (arr_13 [i_2] [i_1] [(_Bool)1] [i_5] [i_1 + 2]) : (((/* implicit */long long int) var_0))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 21; i_6 += 3) 
                        {
                            var_19 = ((/* implicit */int) (unsigned short)65535);
                            arr_23 [i_2] [(unsigned char)1] [i_5] [i_2] [i_1] [i_2] = ((/* implicit */_Bool) arr_21 [i_6] [i_2 - 1] [i_2 - 1]);
                            arr_24 [1U] [i_1] [(unsigned char)16] [(signed char)7] [i_1] [i_2] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_2] [(_Bool)0] [i_2])))));
                        }
                        for (unsigned long long int i_7 = 1; i_7 < 20; i_7 += 2) 
                        {
                            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) min((-2147483636), (((/* implicit */int) (short)-8925))))) ? (((((/* implicit */_Bool) (unsigned char)96)) ? (((/* implicit */unsigned long long int) arr_11 [i_0] [(unsigned char)9] [i_2] [(unsigned char)9] [(unsigned char)11] [i_1 - 1])) : (arr_8 [i_0 - 1] [i_5] [i_7 - 1]))) : (((arr_27 [i_0] [2] [i_2] [0U] [i_7] [i_0 - 1] [i_2]) & (((/* implicit */unsigned long long int) var_10)))))) : (((/* implicit */unsigned long long int) var_2)))))));
                            var_21 = ((/* implicit */_Bool) arr_22 [i_7]);
                            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) var_13))));
                        }
                        for (unsigned long long int i_8 = 3; i_8 < 20; i_8 += 1) 
                        {
                            arr_33 [i_8] [i_1 + 3] [i_2] [i_2 + 1] [i_2] = ((/* implicit */unsigned int) min((-1475309387), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) max(((unsigned char)233), (((/* implicit */unsigned char) (signed char)-12))))) : (((((/* implicit */int) arr_18 [i_8] [i_1] [(unsigned short)9] [i_1] [i_0 - 1] [19])) ^ (arr_7 [i_2] [(unsigned char)4] [(unsigned char)4] [i_2])))))));
                            var_23 = ((/* implicit */_Bool) var_3);
                        }
                    }
                    for (unsigned char i_9 = 0; i_9 < 21; i_9 += 2) 
                    {
                        arr_36 [i_2] = max((max((((/* implicit */unsigned int) min((1475309400), (((/* implicit */int) var_8))))), (((((/* implicit */_Bool) var_2)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)6))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0 - 1] [(_Bool)0] [i_2 - 1])))))) ? (((((/* implicit */_Bool) var_14)) ? (arr_6 [i_0 - 1] [i_1] [i_2]) : (((/* implicit */unsigned int) var_11)))) : (var_3))));
                        arr_37 [i_2 + 1] [i_2] [i_2] [16] = ((/* implicit */short) var_3);
                        arr_38 [i_0 + 1] [i_2] [i_1 + 2] [i_2] [i_0 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_2] [i_0] [i_2 + 1] [5ULL] [5ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_5)))) ? (((/* implicit */unsigned int) min((arr_30 [i_2] [i_2] [i_2 + 1] [i_2] [i_2]), (arr_30 [i_2] [0ULL] [i_2 + 1] [i_2 + 1] [i_9])))) : (((((/* implicit */_Bool) arr_30 [i_2] [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_5)))));
                    }
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_10 = 1; i_10 < 19; i_10 += 4) 
                    {
                        var_24 *= ((/* implicit */unsigned int) arr_19 [9U] [i_2] [i_2 - 1] [i_2] [i_2] [i_2 + 1]);
                        arr_43 [i_2] [11U] [i_2] = ((/* implicit */unsigned long long int) arr_4 [i_0]);
                    }
                    for (unsigned int i_11 = 0; i_11 < 21; i_11 += 1) 
                    {
                        var_25 = max((((/* implicit */unsigned int) arr_28 [i_11] [i_1] [i_2] [i_11] [i_11] [i_11])), (max((((/* implicit */unsigned int) arr_4 [i_0 - 1])), (var_10))));
                        arr_46 [i_0] [14LL] [14LL] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1100641757)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)0))))) ? (952976868U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-19)))));
                    }
                    for (unsigned short i_12 = 3; i_12 < 19; i_12 += 3) 
                    {
                        var_26 |= ((/* implicit */long long int) ((arr_40 [(short)18] [i_1] [i_1] [(unsigned short)10] [i_1] [i_1 - 1]) % (4294967295U)));
                        var_27 = ((/* implicit */short) arr_30 [i_2] [i_2] [i_2 + 1] [i_12] [(_Bool)1]);
                        var_28 = ((/* implicit */unsigned int) arr_5 [6] [7]);
                    }
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */unsigned int) var_12);
}
