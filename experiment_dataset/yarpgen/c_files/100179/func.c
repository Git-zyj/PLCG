/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100179
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
    for (unsigned long long int i_0 = 1; i_0 < 22; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) arr_1 [22U]);
        var_16 = ((11186555903445517807ULL) / (((/* implicit */unsigned long long int) 2868741130U)));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                for (unsigned int i_3 = 1; i_3 < 23; i_3 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            arr_13 [i_1] [i_1] [(unsigned char)19] = ((/* implicit */unsigned long long int) 1426226165U);
                            arr_14 [i_1] [i_1] [i_2] [i_3] [i_3 - 1] [i_2] [i_4] = ((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_3] [i_4]);
                        }
                        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [11] [i_3])) ? (4294967295U) : (arr_8 [i_1 - 1] [i_1 - 1] [i_1 + 1])));
                        arr_15 [i_1] [11U] = ((/* implicit */unsigned long long int) (-(arr_2 [i_2])));
                        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) 1426226165U))));
                        arr_16 [18ULL] [i_1] [i_2] [i_2] [i_2] [i_3] |= ((/* implicit */short) ((((/* implicit */int) var_2)) / (arr_4 [i_1 + 1])));
                    }
                } 
            } 
            var_19 = ((((/* implicit */_Bool) (unsigned short)55096)) ? (arr_2 [i_1 + 1]) : (arr_2 [i_1 - 1]));
        }
        for (unsigned int i_5 = 0; i_5 < 24; i_5 += 3) 
        {
            var_20 = ((/* implicit */long long int) ((var_0) | (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)87))) : (2868741130U)))));
            arr_21 [i_0] [2U] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11))));
            arr_22 [(signed char)15] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_0 - 1])) || (((/* implicit */_Bool) arr_6 [i_0 + 1] [i_0 + 2]))));
        }
    }
    /* vectorizable */
    for (unsigned long long int i_6 = 1; i_6 < 22; i_6 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) 1426226177U))));
        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (short)(-32767 - 1)))));
    }
    var_23 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) (unsigned short)17233)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) var_9)) : (-2348539693119630876LL)))))) && (((/* implicit */_Bool) var_1))));
}
