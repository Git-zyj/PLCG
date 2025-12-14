/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142302
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned char i_2 = 3; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            arr_13 [i_0] [i_4] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) 0LL)) : (var_5)))) ? (((((/* implicit */_Bool) var_9)) ? (arr_5 [(short)7]) : (var_11))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_7 [(short)4]))))));
                            var_12 -= ((/* implicit */short) arr_2 [i_0] [i_1]);
                            arr_14 [i_4] [i_3] [i_0] [3U] [i_4] = ((/* implicit */unsigned long long int) ((var_3) != (var_2)));
                        }
                        for (unsigned short i_5 = 1; i_5 < 10; i_5 += 2) /* same iter space */
                        {
                            arr_18 [i_3] [(unsigned short)8] [i_0] [i_0] &= ((/* implicit */unsigned short) var_1);
                            var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) arr_3 [i_0] [i_0]))));
                            var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_2))));
                            var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1279185222)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)188))) : (11503811659989768979ULL)))) ? ((~(var_2))) : (((/* implicit */unsigned long long int) 12)));
                            var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) arr_5 [i_5]))));
                        }
                        for (unsigned short i_6 = 1; i_6 < 10; i_6 += 2) /* same iter space */
                        {
                            var_17 ^= ((/* implicit */long long int) ((var_1) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_7)) > (var_3)))))));
                            var_18 |= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_10)))) == (var_4)));
                            var_19 = ((((/* implicit */_Bool) ((var_6) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [(short)7] [i_1] [2U] [i_1] [i_1])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_1)))) : (((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */unsigned long long int) var_11)))));
                            arr_22 [10] [i_3] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) var_2);
                        }
                        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (var_6) : (18446744073709551615ULL)));
                    }
                    for (signed char i_7 = 1; i_7 < 10; i_7 += 1) 
                    {
                        var_21 -= ((/* implicit */short) ((unsigned long long int) var_8));
                        var_22 = ((/* implicit */unsigned int) ((max((((((/* implicit */_Bool) var_4)) ? (var_1) : (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_7 [8LL])), (var_7)))))) & (min((((/* implicit */unsigned long long int) var_8)), ((~(arr_1 [i_7])))))));
                    }
                    arr_25 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) min((((/* implicit */int) arr_9 [i_2 - 3] [4ULL] [i_2] [i_2 - 2] [i_2 + 1])), ((-(((/* implicit */int) arr_9 [i_2 - 3] [i_2] [0] [i_2 - 1] [i_2 + 1]))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_8 = 0; i_8 < 11; i_8 += 3) 
                    {
                        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 13446720130884855695ULL)) ? (((var_2) - (arr_6 [i_8] [(unsigned char)4] [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_8] [i_2] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_8]))) : (arr_20 [i_0] [i_1] [i_1] [i_2] [i_8])))))))));
                        arr_28 [i_0] [i_1] [i_2] [i_8] = ((/* implicit */unsigned long long int) arr_21 [i_2]);
                        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_2] [i_8] [i_2 - 3] [i_2] [i_2] [i_2 + 1])) ? (((/* implicit */int) arr_11 [i_2] [i_8] [i_2 - 3] [i_2] [i_2] [i_2 - 1])) : (((/* implicit */int) arr_11 [i_1] [i_8] [i_2 - 3] [i_2] [i_2] [i_2 - 2]))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 2) 
                    {
                        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (var_3) : (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_2]))));
                        var_26 = ((/* implicit */_Bool) var_1);
                        var_27 *= ((/* implicit */unsigned char) arr_2 [i_9] [1U]);
                        arr_33 [(_Bool)1] [7LL] [i_2] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_10))));
                    }
                    var_28 = ((/* implicit */unsigned short) max((var_28), (((unsigned short) ((unsigned long long int) var_4)))));
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 0; i_10 < 11; i_10 += 3) 
                    {
                        for (unsigned int i_11 = 0; i_11 < 11; i_11 += 3) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned char) ((long long int) min((var_4), (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_11))))))));
                                var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) var_8))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_31 &= ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_8) : (var_8)))) : (var_10));
}
