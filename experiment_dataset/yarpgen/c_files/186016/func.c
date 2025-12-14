/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186016
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned char) (signed char)61);
        arr_3 [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) (signed char)-61)) != (var_9))))));
        arr_4 [(unsigned short)2] = ((/* implicit */long long int) arr_0 [i_0]);
        var_13 ^= ((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_0] [i_0]))));
    }
    var_14 = ((/* implicit */unsigned long long int) var_0);
    /* LoopNest 2 */
    for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        for (int i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            {
                arr_11 [(unsigned short)3] [12ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_1]))))) ? ((+(((/* implicit */int) arr_10 [i_1] [i_1] [i_1])))) : (((((/* implicit */_Bool) arr_8 [i_1] [5LL])) ? (((/* implicit */int) arr_8 [i_2] [i_1])) : (arr_9 [i_1] [i_1] [i_2])))));
                /* LoopSeq 2 */
                for (long long int i_3 = 1; i_3 < 14; i_3 += 3) 
                {
                    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) arr_9 [i_1] [i_1] [i_1]))));
                    arr_14 [i_1] [i_1] [i_1] [12] |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)65507))));
                    arr_15 [i_1] [i_3] [i_1] = ((/* implicit */signed char) ((int) (+(((((/* implicit */_Bool) (signed char)112)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2]))) : (-9223372036854775790LL))))));
                    var_16 = ((/* implicit */int) arr_1 [i_1] [i_2]);
                }
                /* vectorizable */
                for (signed char i_4 = 0; i_4 < 15; i_4 += 4) 
                {
                    /* LoopSeq 2 */
                    for (int i_5 = 0; i_5 < 15; i_5 += 3) 
                    {
                        arr_22 [10ULL] [(signed char)7] [i_4] [12LL] = ((/* implicit */unsigned long long int) arr_8 [i_2] [i_4]);
                        /* LoopSeq 3 */
                        for (unsigned int i_6 = 1; i_6 < 11; i_6 += 4) 
                        {
                            arr_27 [i_6] [i_6] [i_6] [i_6] [i_2] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-62)) & (((/* implicit */int) (signed char)61))));
                            arr_28 [i_6] [i_6] [(signed char)2] [i_5] [i_6] = ((/* implicit */signed char) ((int) var_6));
                        }
                        for (signed char i_7 = 0; i_7 < 15; i_7 += 4) 
                        {
                            var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((long long int) (signed char)62)))));
                            arr_33 [i_5] [i_5] [i_5] [i_5] [i_5] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_19 [i_7] [i_4]))));
                        }
                        for (unsigned int i_8 = 4; i_8 < 13; i_8 += 1) 
                        {
                            arr_37 [i_1] [i_1] [i_1] [i_4] [i_5] [i_8] [i_8] = ((/* implicit */unsigned short) (+(arr_29 [i_2] [i_8 + 1] [i_8] [i_8 + 1] [i_8] [i_8])));
                            arr_38 [6LL] [6LL] [(unsigned short)7] [0] [(unsigned short)12] = ((/* implicit */long long int) (((-(((/* implicit */int) arr_16 [i_8] [i_4] [i_2] [(unsigned short)8])))) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_5] [i_5] [i_5] [i_5])))))));
                        }
                        arr_39 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [1U] [i_1])) >> (((((/* implicit */int) arr_1 [i_4] [i_4])) - (6500)))));
                    }
                    for (int i_9 = 0; i_9 < 15; i_9 += 2) 
                    {
                        arr_42 [i_1] [i_2] [(unsigned short)14] [i_9] = ((/* implicit */unsigned short) (~((+(((/* implicit */int) (signed char)112))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_10 = 2; i_10 < 13; i_10 += 1) 
                        {
                            arr_46 [i_1] [i_1] [i_2] [i_10] [i_9] [i_10] = ((/* implicit */unsigned short) ((((((/* implicit */int) (signed char)-40)) + (2147483647))) << (((((/* implicit */int) (signed char)46)) - (46)))));
                            arr_47 [i_10 - 2] [i_10] [i_2] = ((/* implicit */unsigned short) (+(arr_35 [i_9] [i_10 - 2] [i_10] [i_10] [i_10 + 1] [i_10] [i_10])));
                            var_18 = ((/* implicit */short) ((((/* implicit */long long int) ((1527803572) << (((((/* implicit */int) (unsigned char)255)) - (255)))))) >= ((-(1699373060620551708LL)))));
                        }
                        for (long long int i_11 = 0; i_11 < 15; i_11 += 2) 
                        {
                            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (signed char)-73))));
                            var_20 = ((/* implicit */unsigned short) (((-(((/* implicit */int) arr_41 [i_1] [i_1])))) / (((/* implicit */int) ((signed char) arr_10 [i_9] [i_2] [(unsigned short)3])))));
                        }
                    }
                    arr_50 [i_2] [i_2] [i_1] = ((((/* implicit */int) arr_13 [i_4])) - (907032110));
                }
                var_21 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_35 [i_1] [i_1] [i_2] [i_1] [i_1] [i_1] [i_1])) && (((/* implicit */_Bool) ((signed char) (unsigned char)60))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_1] [i_1])))))) : ((+(((((/* implicit */_Bool) (unsigned short)44933)) ? (1699373060620551737LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [i_1])))))))));
                var_22 = (~(((/* implicit */int) (unsigned short)44933)));
            }
        } 
    } 
}
