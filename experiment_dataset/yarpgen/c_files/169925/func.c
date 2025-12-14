/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169925
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
    var_15 = ((/* implicit */long long int) var_1);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        {
                            arr_9 [i_3] [i_3] [i_3] [i_1] [i_3] [i_3] = ((/* implicit */unsigned int) arr_3 [i_0]);
                            arr_10 [i_0] [i_0] [i_0] [i_2] [i_2] &= ((/* implicit */long long int) (((-(arr_1 [i_0]))) << ((((+(((/* implicit */int) (unsigned char)190)))) - (189)))));
                        }
                    } 
                } 
                arr_11 [i_1] [i_0] = ((/* implicit */signed char) ((arr_5 [i_0]) / (((/* implicit */int) ((unsigned char) var_2)))));
                /* LoopSeq 3 */
                for (signed char i_4 = 1; i_4 < 14; i_4 += 4) /* same iter space */
                {
                    var_16 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_12 [(short)5] [i_4] [(short)5] [(short)5])) ? ((~(var_2))) : (((((/* implicit */_Bool) (short)27062)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)-10846)))))) - (((/* implicit */int) (short)-12706))));
                    arr_15 [i_4] [i_1] [(unsigned char)6] [i_4] = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)127))));
                    arr_16 [i_4] [i_4] = ((/* implicit */short) ((((((long long int) var_5)) >> (min((((/* implicit */unsigned int) var_13)), (12U))))) - (((/* implicit */long long int) (((~(((/* implicit */int) arr_13 [i_1] [i_1])))) & (((/* implicit */int) var_4)))))));
                }
                for (signed char i_5 = 1; i_5 < 14; i_5 += 4) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (short i_6 = 0; i_6 < 15; i_6 += 2) 
                    {
                        arr_22 [i_5] = ((/* implicit */long long int) var_11);
                        arr_23 [i_5] [4U] [i_5] [(_Bool)1] [i_1] [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) var_7)) - (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [(signed char)4]))))), (arr_1 [i_5 - 1]))))));
                        arr_24 [1U] [i_1] [i_5] [i_5] = arr_17 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1];
                        arr_25 [i_5] [(_Bool)1] [i_0] [5U] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+((-(((/* implicit */int) arr_2 [i_5]))))))) ? (((((((/* implicit */int) arr_21 [i_6] [6LL] [6LL] [6LL])) / (var_14))) % (((/* implicit */int) arr_13 [i_5 + 1] [i_5 + 1])))) : ((-((~(var_14)))))));
                    }
                    for (short i_7 = 1; i_7 < 12; i_7 += 4) 
                    {
                        arr_28 [i_0] [(short)11] [i_5 + 1] [i_5] = ((/* implicit */int) arr_12 [i_5 + 1] [i_5] [i_5] [i_5]);
                        arr_29 [i_1] [i_1] |= ((/* implicit */signed char) ((1295485278585436009ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)10844)))));
                        arr_30 [i_1] [i_1] &= ((/* implicit */short) (~((~(arr_19 [i_5 + 1] [14U])))));
                        arr_31 [i_0] [(_Bool)1] [i_5 - 1] [i_5] [(unsigned char)7] [3U] = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_12 [i_7 + 1] [i_5] [i_5] [i_7 + 1])) ? (arr_12 [(signed char)4] [i_5] [i_5] [i_7 + 2]) : (arr_12 [i_7 + 3] [i_5] [i_5] [i_7 + 3])))));
                    }
                    var_17 &= ((/* implicit */unsigned int) var_12);
                }
                /* vectorizable */
                for (signed char i_8 = 1; i_8 < 14; i_8 += 4) /* same iter space */
                {
                    arr_34 [i_8] [i_1] = ((/* implicit */long long int) arr_2 [i_8 + 1]);
                    var_18 |= ((/* implicit */int) arr_6 [i_8]);
                }
                arr_35 [i_0] [(unsigned char)14] |= ((/* implicit */unsigned short) (-(max((((/* implicit */int) var_10)), (var_14)))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_9 = 2; i_9 < 13; i_9 += 1) 
                {
                    arr_38 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (arr_36 [i_9 + 2] [i_9 + 1] [i_9 - 1] [i_9 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_13)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 1; i_10 < 13; i_10 += 1) 
                    {
                        for (int i_11 = 0; i_11 < 15; i_11 += 1) 
                        {
                            {
                                arr_43 [12U] [i_1] [12U] [i_1] [(short)8] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_12)))) ? (((((/* implicit */int) arr_7 [i_0] [i_1] [i_9 - 2] [(_Bool)0])) >> (((arr_1 [i_11]) - (2786229273U))))) : (((/* implicit */int) arr_14 [i_0] [i_0] [i_11] [i_10 + 1]))));
                                var_19 = ((/* implicit */signed char) (+(var_1)));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */int) min((var_20), ((~(((/* implicit */int) var_0))))));
                }
            }
        } 
    } 
}
