/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109753
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
    var_10 = ((/* implicit */_Bool) var_7);
    var_11 = min((((/* implicit */unsigned long long int) var_5)), (var_4));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 23; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_0] = ((/* implicit */int) ((min((arr_3 [i_0] [i_0 - 2]), (arr_3 [i_1] [i_0 - 2]))) ? (((/* implicit */long long int) arr_2 [i_0])) : (arr_0 [i_0] [i_0 - 2])));
                /* LoopNest 3 */
                for (long long int i_2 = 3; i_2 < 23; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_12 = ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2] [i_2 - 3])) ? (((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [(_Bool)1])) : (min((arr_2 [i_0 - 1]), (arr_2 [i_0 - 3]))));
                                var_13 = ((/* implicit */int) arr_5 [(short)2] [3] [i_4] [i_4]);
                                arr_12 [i_0] [i_2] [3U] [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) max((arr_2 [i_4]), (((/* implicit */int) arr_5 [i_4] [i_4] [i_4] [i_4]))))) ? (min((arr_6 [i_4] [i_3] [i_2 - 2]), (((/* implicit */long long int) arr_7 [9LL] [(unsigned char)14] [(_Bool)1])))) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0 + 1] [i_0 - 1]))))), (min((((/* implicit */long long int) arr_9 [i_2] [i_1])), (((arr_11 [(unsigned char)16] [i_1] [i_1] [i_2] [12U] [6U]) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3] [i_4]))) : (arr_6 [i_4] [i_1] [i_2])))))));
                                arr_13 [i_3] = ((/* implicit */unsigned char) arr_0 [i_2] [i_2]);
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */short) arr_3 [i_0 - 3] [i_0 + 1]);
                var_15 = ((/* implicit */unsigned long long int) arr_3 [i_0 - 2] [(_Bool)1]);
            }
        } 
    } 
}
