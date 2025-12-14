/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17434
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 23; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (unsigned short)11310);
                                var_15 = ((/* implicit */signed char) ((((/* implicit */int) arr_5 [i_4] [i_2] [i_0] [i_0])) != (((/* implicit */int) var_1))));
                                var_16 = (i_1 % 2 == 0) ? (((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_3 + 1] [i_3 + 1] [i_3 + 2] [(unsigned short)22])) >> (((arr_12 [i_3 + 1] [i_3] [i_3 + 2] [i_1] [i_3 - 2]) - (3776757348U)))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_3 + 1] [i_3 + 1] [i_3 + 2] [(unsigned short)22])) >> (((((arr_12 [i_3 + 1] [i_3] [i_3 + 2] [i_1] [i_3 - 2]) - (3776757348U))) - (3182937740U))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 25; i_6 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_4 [i_1] [i_2] [i_5] [i_6])) ? (67108863) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_5] [i_6])))));
                                arr_18 [(unsigned short)12] [i_1] [i_2] [i_5] [i_1] = ((((/* implicit */int) arr_1 [i_2])) >> (((((/* implicit */int) var_12)) - (45613))));
                                arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */int) ((long long int) 1957572728U));
                                var_18 = ((/* implicit */signed char) ((((/* implicit */int) arr_17 [i_0] [i_0] [i_1] [i_2] [i_2] [i_5] [i_6])) / (((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                            }
                        } 
                    } 
                }
                arr_20 [i_1] [i_1] = ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_1] [i_1]))) >= (var_13))) ? (((/* implicit */int) arr_17 [i_0] [(unsigned char)5] [(short)22] [i_0] [i_0] [i_0] [i_1])) : (((/* implicit */int) arr_14 [i_0] [i_1]))))) ? (((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_10 [i_0])) : (((/* implicit */int) arr_4 [i_1] [i_0] [i_0] [i_0])))) % (((/* implicit */int) ((unsigned char) 2337394568U))))) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_1] [i_0])));
                var_19 = (((((~(((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) arr_6 [i_0] [i_0])))) >= ((~(((/* implicit */int) arr_10 [i_0])))));
                var_20 += ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)1)) & (((/* implicit */int) (_Bool)1))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_7 = 0; i_7 < 25; i_7 += 1) /* same iter space */
                {
                    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) arr_15 [i_7] [i_0] [i_0] [i_0]))));
                    /* LoopSeq 2 */
                    for (int i_8 = 1; i_8 < 24; i_8 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned int) ((int) var_0));
                        arr_26 [i_1] = ((/* implicit */unsigned short) 4294967295U);
                        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((/* implicit */int) var_14)) - (((/* implicit */int) (_Bool)1)))))));
                        arr_27 [i_1] = ((/* implicit */unsigned long long int) ((unsigned char) 0U));
                    }
                    for (unsigned short i_9 = 3; i_9 < 21; i_9 += 1) 
                    {
                        var_24 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) arr_21 [i_0] [(signed char)0] [i_1] [i_9 - 3]))));
                        var_25 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 2337394561U)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1] [i_7] [i_1]))))) >= (((/* implicit */long long int) ((arr_9 [i_1] [i_1] [i_1]) ? (((/* implicit */int) arr_1 [i_9])) : (-67108851))))));
                        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) -67108869))));
                        var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) 3017481939U))));
                    }
                }
                for (signed char i_10 = 0; i_10 < 25; i_10 += 1) /* same iter space */
                {
                    var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) ((unsigned char) min((arr_29 [(unsigned short)20]), (arr_29 [(unsigned char)16])))))));
                    var_29 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned char) (_Bool)1)))));
                }
            }
        } 
    } 
    var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) (signed char)0))));
    var_31 = ((/* implicit */unsigned int) ((int) (signed char)(-127 - 1)));
    var_32 = ((/* implicit */unsigned short) min((((/* implicit */long long int) var_13)), (((((/* implicit */_Bool) var_6)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
}
