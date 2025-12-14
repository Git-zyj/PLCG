/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124014
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
    var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) var_4))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) arr_3 [i_0] [i_0]);
        var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) ((((((/* implicit */int) arr_1 [(short)2])) + (2147483647))) << (((((arr_0 [i_0]) + (1046325812))) - (14))))))));
        var_13 *= ((unsigned short) arr_0 [i_0]);
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_7 [i_1] = ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) arr_6 [i_1])));
        var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) arr_6 [(_Bool)1]))));
        /* LoopNest 2 */
        for (signed char i_2 = 3; i_2 < 19; i_2 += 1) 
        {
            for (signed char i_3 = 1; i_3 < 19; i_3 += 2) 
            {
                {
                    arr_14 [i_1] [i_2] [i_2] [(short)1] = ((/* implicit */short) ((_Bool) var_10));
                    /* LoopSeq 2 */
                    for (unsigned char i_4 = 0; i_4 < 20; i_4 += 4) 
                    {
                        var_15 ^= ((/* implicit */int) arr_16 [i_4]);
                        arr_18 [(_Bool)1] [i_2] [i_2] [i_1] = ((/* implicit */short) (+(((/* implicit */int) arr_17 [(signed char)14] [i_1] [i_2 + 1] [i_2 - 1] [i_2] [i_3 - 1]))));
                        arr_19 [i_2 - 1] [i_2] [i_1] [i_1] [i_1] [i_2 + 1] = ((/* implicit */unsigned char) ((arr_11 [i_1] [i_1] [i_1]) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) arr_5 [(signed char)11] [i_1])) : (((/* implicit */int) arr_8 [(signed char)11] [i_1])))))));
                        var_16 -= (+(arr_12 [8LL] [i_3 - 1] [i_4]));
                    }
                    for (int i_5 = 2; i_5 < 19; i_5 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_6 = 1; i_6 < 17; i_6 += 4) 
                        {
                            arr_24 [i_1] [i_5] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_1] [i_2 - 2] [i_1]))) >= (arr_12 [4U] [i_2] [4U])));
                            arr_25 [i_1] [i_2 - 3] [4LL] [i_1] [i_6] [i_1] = ((/* implicit */unsigned short) arr_11 [1] [i_2 - 1] [i_2 + 1]);
                            var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_17 [i_6 - 1] [i_5 - 2] [i_1] [i_2 - 2] [i_2 - 2] [i_1])))))));
                        }
                        arr_26 [i_1] = arr_9 [i_1];
                    }
                }
            } 
        } 
        var_18 ^= ((((/* implicit */_Bool) arr_8 [(unsigned char)1] [i_1])) && (((/* implicit */_Bool) arr_13 [i_1] [i_1] [14LL])));
    }
}
