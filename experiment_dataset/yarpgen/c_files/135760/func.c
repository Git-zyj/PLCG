/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135760
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
    var_16 += ((unsigned char) (!(((/* implicit */_Bool) ((var_12) | (((/* implicit */unsigned long long int) var_2)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 9; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        {
                            arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = min((((((/* implicit */_Bool) ((unsigned char) arr_3 [i_0] [(short)0] [i_0]))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [8ULL]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_2])) < (((/* implicit */int) arr_5 [i_0])))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (var_1))))))));
                            var_17 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) max((var_13), (((/* implicit */unsigned char) (_Bool)0)))))) & (((((/* implicit */_Bool) (unsigned short)1024)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_6 [i_0] [i_0] [i_0] [(signed char)8])))))) ? (arr_6 [i_0] [i_0] [i_2 - 1] [i_2 - 1]) : (((/* implicit */long long int) ((unsigned int) arr_3 [i_0] [(short)8] [i_1 - 1])))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */short) arr_2 [i_0] [i_1 - 1]);
            }
        } 
    } 
}
