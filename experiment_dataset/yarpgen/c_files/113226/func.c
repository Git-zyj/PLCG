/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113226
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
    var_15 = ((/* implicit */short) var_11);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) var_10))));
        var_17 = ((/* implicit */unsigned short) arr_2 [i_0] [i_0]);
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 10; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_1] [(unsigned char)3] [i_2] [i_3 + 2] [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_7))));
                                var_18 = ((/* implicit */unsigned char) arr_9 [i_3 + 2] [i_3 + 2] [i_3 + 2] [i_0 - 1]);
                                var_19 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_2] [i_2])) ? (((/* implicit */int) arr_11 [i_3] [i_2])) : (((/* implicit */int) var_2))))), (arr_13 [i_0] [i_0 - 2] [i_3] [i_3] [i_3 - 1])))) ? (arr_6 [i_2] [i_3] [i_4]) : (((/* implicit */long long int) (~(arr_7 [2] [i_2] [i_3 - 1] [i_4]))))));
                            }
                        } 
                    } 
                    arr_15 [i_1] [i_2] = max((max((min((1910929556U), (((/* implicit */unsigned int) (_Bool)1)))), (arr_5 [i_0 + 1] [i_0 + 1] [i_0 - 1]))), (((/* implicit */unsigned int) arr_2 [i_0 - 1] [i_0 - 1])));
                    /* LoopSeq 1 */
                    for (short i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        arr_18 [i_0] [i_1] [i_2] [6ULL] [9LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) arr_5 [i_0] [i_2] [i_2])), (var_1))), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_2] [i_0]))))) ? (max((((/* implicit */long long int) arr_2 [i_0] [i_5])), (((arr_2 [i_5] [i_2]) ? (((/* implicit */long long int) arr_7 [i_1] [i_2] [i_1] [i_0])) : (arr_13 [i_5] [i_1] [(_Bool)1] [i_5] [i_0]))))) : (arr_13 [i_5] [i_2] [i_0] [i_0] [i_0])));
                        arr_19 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) arr_8 [i_0] [i_1] [i_0]);
                    }
                    var_20 -= ((/* implicit */long long int) arr_11 [i_0] [i_1]);
                }
            } 
        } 
        arr_20 [i_0] |= ((/* implicit */signed char) arr_0 [i_0] [i_0]);
    }
    for (long long int i_6 = 2; i_6 < 11; i_6 += 2) 
    {
        arr_24 [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_6 + 1] [i_6 + 2])) ? (((((/* implicit */_Bool) min((arr_22 [i_6]), (arr_22 [i_6])))) ? (arr_23 [i_6 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) var_9)), (arr_21 [i_6] [8LL]))))))) : (arr_23 [i_6])));
        /* LoopSeq 2 */
        for (int i_7 = 0; i_7 < 15; i_7 += 2) 
        {
            /* LoopNest 2 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (unsigned short i_9 = 0; i_9 < 15; i_9 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (short i_10 = 0; i_10 < 15; i_10 += 3) /* same iter space */
                        {
                            arr_33 [i_7] [i_10] &= arr_31 [i_6 + 3] [i_6 + 2];
                            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) arr_26 [i_6 - 1]))));
                            arr_34 [i_7] [i_6] [i_8] [i_7] [i_6] = arr_29 [i_6 + 1];
                        }
                        for (short i_11 = 0; i_11 < 15; i_11 += 3) /* same iter space */
                        {
                            arr_38 [i_6] [i_7] [i_7] [8] [6] [i_11] = ((/* implicit */unsigned int) arr_29 [i_6 + 2]);
                            var_22 ^= (-(max((var_8), (((/* implicit */long long int) arr_28 [i_6 + 3])))));
                        }
                        for (short i_12 = 0; i_12 < 15; i_12 += 3) /* same iter space */
                        {
                            var_23 &= ((/* implicit */unsigned short) (-((+(arr_29 [i_8])))));
                            var_24 *= ((/* implicit */short) min((((((/* implicit */_Bool) arr_22 [i_6])) ? (arr_40 [i_6 + 2] [i_6 + 2] [i_6 + 2] [i_9] [i_9] [i_12]) : (arr_40 [i_12] [(unsigned char)7] [i_8] [i_6 - 2] [i_6 + 2] [i_6 - 2]))), (((/* implicit */int) arr_31 [i_8] [(signed char)9]))));
                            var_25 = ((/* implicit */unsigned short) max((((/* implicit */long long int) max((((/* implicit */unsigned int) arr_30 [i_6 + 4] [i_8] [i_12] [i_12])), (arr_36 [i_6 + 4] [i_6 + 1] [i_6 - 1])))), (var_8)));
                        }
                        var_26 = ((/* implicit */unsigned int) arr_22 [i_9]);
                    }
                } 
            } 
            arr_41 [i_6] [1ULL] [i_7] |= arr_23 [i_6];
        }
        for (signed char i_13 = 0; i_13 < 15; i_13 += 2) 
        {
            var_27 *= arr_39 [i_13] [i_6] [i_13] [i_6] [i_6] [i_6];
            var_28 = ((/* implicit */unsigned int) max((((/* implicit */int) arr_27 [(signed char)14] [i_13] [i_13])), (arr_40 [i_6] [i_6 + 2] [i_6] [i_13] [i_13] [i_6])));
        }
        arr_44 [11U] = ((/* implicit */unsigned long long int) max((min((max((arr_22 [(signed char)13]), (((/* implicit */int) arr_39 [i_6] [i_6] [i_6] [i_6 - 2] [i_6] [i_6 + 2])))), (((/* implicit */int) arr_21 [i_6] [i_6 + 3])))), (min((((/* implicit */int) arr_27 [i_6] [i_6] [i_6])), (max((((/* implicit */int) arr_28 [i_6 + 2])), (arr_40 [i_6] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6])))))));
    }
}
