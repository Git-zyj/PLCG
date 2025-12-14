/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130866
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (long long int i_3 = 3; i_3 < 20; i_3 += 2) 
                    {
                        var_10 = ((/* implicit */_Bool) min((var_10), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((9223372036854775807LL) - (9223372036854775807LL)))) / (arr_3 [i_3 - 2] [i_3 - 1]))))));
                        arr_11 [i_1] [i_1] [i_1] = ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)246))) / (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_2] [i_1]))) : (9223372036854775807LL))));
                        var_11 = ((/* implicit */signed char) (+(((/* implicit */int) (short)27749))));
                    }
                    for (unsigned short i_4 = 1; i_4 < 18; i_4 += 3) 
                    {
                        var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [(_Bool)1]))));
                        /* LoopSeq 4 */
                        for (short i_5 = 2; i_5 < 20; i_5 += 3) 
                        {
                            var_13 = ((/* implicit */unsigned long long int) (-(arr_6 [i_5 + 1] [i_4 + 1] [i_4 + 1])));
                            arr_18 [i_5 - 2] [i_4] [(unsigned char)2] [(unsigned char)6] [i_0] &= ((/* implicit */_Bool) (+((-(((/* implicit */int) (unsigned char)239))))));
                            arr_19 [10LL] [i_1] [4LL] [i_4] [i_5 - 2] |= arr_2 [2U];
                            var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_4 + 1])) != (((/* implicit */int) arr_1 [i_4 - 1]))));
                        }
                        for (unsigned char i_6 = 0; i_6 < 21; i_6 += 2) 
                        {
                            var_15 = ((/* implicit */int) (unsigned char)246);
                            var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_4 + 2]))));
                        }
                        for (unsigned short i_7 = 0; i_7 < 21; i_7 += 2) 
                        {
                            arr_25 [i_1] = ((/* implicit */long long int) (-(arr_24 [i_4 - 1] [i_0] [4ULL] [i_0])));
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)63694)) ? (((/* implicit */int) (short)-27749)) : (((/* implicit */int) (unsigned char)180))));
                        }
                        for (signed char i_8 = 0; i_8 < 21; i_8 += 3) 
                        {
                            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) (_Bool)0))));
                            var_19 = ((/* implicit */_Bool) (+(arr_28 [i_1] [i_1] [i_4 + 2] [i_4] [i_4] [i_4 + 1])));
                        }
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (unsigned char)17)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_20 [i_1] [i_0] [i_9] [i_9] [i_9]))))));
                        arr_32 [i_9] [i_1] = (i_1 % 2 == zero) ? (((/* implicit */unsigned char) ((((arr_2 [i_1]) / (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))) << (((((/* implicit */int) arr_4 [(unsigned short)12] [i_1] [i_2] [i_9])) - (104)))))) : (((/* implicit */unsigned char) ((((((arr_2 [i_1]) / (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))) + (9223372036854775807LL))) << (((((((/* implicit */int) arr_4 [(unsigned short)12] [i_1] [i_2] [i_9])) - (104))) - (2))))));
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 21; i_10 += 2) 
                    {
                        for (signed char i_11 = 4; i_11 < 17; i_11 += 2) 
                        {
                            {
                                var_21 += ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)15325)) % ((-(835966443)))));
                                var_22 = ((/* implicit */signed char) (~(((/* implicit */int) arr_35 [i_11 - 2] [i_11] [i_11 - 2] [i_11 - 2] [i_11 - 2]))));
                                var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (unsigned short)50211))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) arr_29 [i_0] [i_1] [i_2] [i_2]))));
                }
            } 
        } 
        arr_38 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) << (((((9223372036854775807LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)33563))))) - (9223372036854775782LL)))));
    }
    for (unsigned char i_12 = 0; i_12 < 11; i_12 += 3) 
    {
        arr_43 [i_12] [i_12] |= (+(((/* implicit */int) (short)-30610)));
        var_25 = (-(((((/* implicit */_Bool) arr_30 [i_12] [i_12] [i_12] [i_12])) ? (((/* implicit */int) arr_23 [i_12] [i_12] [i_12] [i_12] [1LL] [16LL])) : (((/* implicit */int) arr_30 [i_12] [i_12] [i_12] [i_12])))));
    }
    var_26 = ((/* implicit */unsigned char) 1967534332);
    var_27 = ((/* implicit */signed char) var_0);
}
