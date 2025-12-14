/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141110
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 3; i_1 < 21; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (signed char i_4 = 1; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((var_9) ? (((/* implicit */int) ((unsigned short) (signed char)48))) : (((/* implicit */int) var_5))))) - (min((((/* implicit */unsigned int) var_9)), (((((/* implicit */_Bool) (signed char)15)) ? (2252988379U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)42)))))))));
                                var_18 &= arr_9 [i_0] [i_0] [i_0] [i_0];
                                arr_12 [i_0] [i_1 + 3] [i_1] [12LL] [i_1 + 1] [i_1] &= ((((/* implicit */unsigned long long int) ((long long int) max((-1LL), (((/* implicit */long long int) (signed char)8)))))) <= (((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1 + 3] [16U] [i_1] [i_1 - 2] [i_1 + 2]))) : (arr_9 [i_0] [i_0] [i_2] [i_3]))));
                                arr_13 [i_0] [i_0] [i_2] [(signed char)5] [i_1] [(signed char)5] = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_3] [i_3] [i_1] [i_1])) ? (((/* implicit */int) arr_3 [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_8 [i_2] [(_Bool)1] [i_2] [8ULL] [i_0]))))) ? ((-(((/* implicit */int) var_5)))) : (((/* implicit */int) arr_3 [i_1] [i_1] [i_1 - 2])))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */signed char) max((var_19), (var_16)));
                }
            } 
        } 
        arr_14 [(unsigned short)13] = ((/* implicit */signed char) (~(min((((/* implicit */long long int) arr_2 [i_0])), (arr_10 [i_0] [2LL] [(unsigned short)23] [i_0] [i_0] [i_0])))));
    }
    var_20 &= ((/* implicit */long long int) var_15);
}
