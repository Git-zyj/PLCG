/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136037
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
    var_12 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */int) var_0)), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_10)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_13 ^= ((/* implicit */unsigned long long int) arr_1 [i_0]);
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    arr_9 [(unsigned char)15] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_2]))) : (arr_8 [(_Bool)1] [i_2] [i_1])));
                    arr_10 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)2032))))) : (((((/* implicit */_Bool) arr_0 [(_Bool)1])) ? (arr_8 [i_0] [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))))))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 1) /* same iter space */
                    {
                        var_14 = arr_1 [i_2];
                        arr_13 [i_0] = ((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_2] [i_3]))) : (arr_8 [(_Bool)1] [i_1] [i_2]));
                    }
                    for (signed char i_4 = 0; i_4 < 16; i_4 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_19 [i_5] [i_4] [i_2] [i_0] [i_1] [i_0] |= ((arr_8 [i_0] [i_1] [i_4]) << (((/* implicit */int) arr_12 [i_0] [i_0] [i_2] [i_4])));
                            arr_20 [i_0] [i_1] [i_2] [i_4] [i_5] = ((/* implicit */signed char) ((((/* implicit */int) min((arr_15 [i_0] [i_0] [i_0] [i_0]), (arr_15 [i_0] [i_0] [i_4] [i_4])))) / (((/* implicit */int) max((arr_3 [i_5]), (arr_3 [i_0]))))));
                            var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) arr_1 [i_4]))));
                        }
                        for (unsigned short i_6 = 0; i_6 < 16; i_6 += 1) 
                        {
                            arr_23 [i_2] [i_2] [i_2] [i_2] [i_2] [i_0] &= ((/* implicit */short) (-(((/* implicit */int) arr_17 [i_0] [i_1] [i_2] [i_4] [(unsigned char)15] [i_4] [i_1]))));
                            var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) min((min((arr_15 [i_0] [i_1] [i_2] [i_4]), (arr_15 [i_4] [i_4] [i_2] [i_4]))), (((/* implicit */unsigned short) arr_2 [i_0])))))));
                            var_17 &= ((/* implicit */signed char) arr_7 [i_0] [i_1] [i_2] [i_4]);
                            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */int) min((arr_3 [i_6]), (((/* implicit */signed char) arr_5 [i_6]))))), ((-(((/* implicit */int) arr_6 [i_0] [(signed char)3] [(signed char)3] [i_4]))))))))))));
                            var_19 &= arr_16 [i_6] [i_4] [i_2] [i_1];
                        }
                        arr_24 [i_0] [(short)8] [i_2] = arr_21 [i_4];
                    }
                    /* vectorizable */
                    for (signed char i_7 = 0; i_7 < 16; i_7 += 1) /* same iter space */
                    {
                        var_20 += ((/* implicit */signed char) arr_14 [(unsigned short)15] [i_1] [(unsigned short)15] [i_7]);
                        var_21 &= ((/* implicit */unsigned char) arr_26 [i_0] [i_2] [i_7]);
                        var_22 += ((/* implicit */signed char) arr_1 [i_7]);
                    }
                    for (unsigned long long int i_8 = 1; i_8 < 13; i_8 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) arr_25 [i_8] [i_8] [i_2] [i_1] [i_0]))));
                        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) min(((-(((/* implicit */int) arr_12 [i_8 + 2] [i_2] [i_1] [i_0])))), (((/* implicit */int) min((arr_12 [i_0] [i_2] [i_1] [i_1]), (arr_12 [i_8] [i_2] [i_1] [i_0])))))))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_10 - 1]))))) ? (((/* implicit */int) arr_0 [i_9])) : (((/* implicit */int) min((arr_15 [i_10 - 1] [i_10] [i_10 - 1] [i_10 - 1]), (arr_15 [i_10 - 1] [i_10] [i_10 - 1] [i_10 - 1]))))));
                                var_26 = ((/* implicit */signed char) (-(((/* implicit */int) arr_21 [i_10 - 1]))));
                                arr_37 [i_10] = ((/* implicit */unsigned long long int) arr_35 [(_Bool)0] [i_9] [i_9] [i_10 - 1] [i_10 - 1]);
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */signed char) arr_21 [i_0]);
                }
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((/* implicit */int) var_0)) : (((((/* implicit */int) min((var_10), (var_1)))) - (((/* implicit */int) min((var_6), (((/* implicit */unsigned char) var_5)))))))));
}
