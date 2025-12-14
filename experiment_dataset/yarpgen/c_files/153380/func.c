/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153380
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
    var_16 = ((/* implicit */short) ((signed char) (~(((((/* implicit */int) var_2)) ^ (((/* implicit */int) var_10)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551601ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -3LL)))))) : ((+((+(10ULL)))))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */short) 3388054179852907562ULL);
                var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))))), (((((/* implicit */_Bool) arr_2 [(unsigned char)11] [i_0] [(unsigned char)11])) ? (18446744073709551591ULL) : (((/* implicit */unsigned long long int) arr_1 [i_0] [i_1])))))))));
                arr_6 [i_0] [0LL] [i_1] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (short)13397)) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */long long int) var_8)) : (var_3))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-13399)))))))), (((/* implicit */long long int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) var_3))))), (arr_3 [i_0] [i_1] [i_1]))))));
            }
        } 
    } 
    var_18 = 3314873255U;
    var_19 ^= ((/* implicit */unsigned int) var_1);
    /* LoopSeq 1 */
    for (int i_2 = 0; i_2 < 11; i_2 += 2) 
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            for (short i_4 = 0; i_4 < 11; i_4 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_5 = 1; i_5 < 8; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 11; i_6 += 2) 
                        {
                            {
                                var_20 = ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) -1187977874937242527LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2] [i_2] [i_4]))) : (1610612736U)))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)211))) == (0U)))));
                                var_21 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((short) (short)(-32767 - 1)))))))) * (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)202))))) ? (((((/* implicit */_Bool) 3791375604U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_3] [i_3] [i_2]))) : (arr_16 [i_3] [i_3] [i_6]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_10 [i_4] [i_4] [i_4]), (arr_10 [7] [7] [1U])))))))));
                            }
                        } 
                    } 
                    arr_19 [i_2] [i_3] [i_2] &= ((((/* implicit */_Bool) 2564202432U)) ? (max((arr_0 [i_3]), (arr_0 [i_4]))) : (((arr_0 [i_4]) / (((/* implicit */unsigned int) ((/* implicit */int) (short)19376))))));
                    arr_20 [8U] = ((/* implicit */unsigned long long int) min((arr_17 [i_2] [i_2] [i_3] [3ULL] [4LL]), (((/* implicit */short) ((unsigned char) max((var_11), (((/* implicit */long long int) var_6))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 1; i_7 < 10; i_7 += 4) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 11; i_8 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */int) (!(((((/* implicit */int) (unsigned char)242)) < (((/* implicit */int) arr_13 [(signed char)9] [(signed char)9] [(short)10] [i_2]))))));
                                arr_27 [i_2] [i_7 - 1] [3] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_7 + 1]))))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_7 + 1] [i_7 + 1])))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_9 = 0; i_9 < 11; i_9 += 3) 
                    {
                        var_23 = ((/* implicit */short) arr_28 [i_2] [i_2] [i_2] [i_2] [i_2] [i_9]);
                        arr_30 [0U] [i_3] [i_9] [i_9] = ((/* implicit */int) ((unsigned int) arr_16 [i_2] [i_3] [i_4]));
                    }
                    /* vectorizable */
                    for (short i_10 = 2; i_10 < 8; i_10 += 3) /* same iter space */
                    {
                        arr_33 [3] [i_4] [i_3] [i_2] = arr_17 [i_2] [(short)4] [(short)4] [i_4] [i_10];
                        var_24 = ((/* implicit */short) ((unsigned int) arr_26 [i_2] [i_2] [i_4] [i_10 + 1] [8LL] [i_4] [i_10 - 1]));
                        arr_34 [i_2] [5U] [i_2] [i_2] = ((/* implicit */unsigned int) arr_17 [i_2] [i_2] [i_2] [i_2] [i_2]);
                    }
                    for (short i_11 = 2; i_11 < 8; i_11 += 3) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_17 [i_2] [i_3] [i_4] [i_4] [i_11])), ((+(arr_0 [i_3]))))))));
                        var_26 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_2 [i_2] [i_2] [i_2])), (max((arr_1 [i_2] [i_3]), (((/* implicit */long long int) arr_31 [i_2] [i_3]))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_13 [i_2] [i_2] [i_4] [i_11 + 2])) ^ ((~(((/* implicit */int) var_9))))))) : (arr_0 [i_3])));
                    }
                }
            } 
        } 
        var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) arr_23 [i_2] [i_2]))));
    }
}
