/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186032
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
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_16 = var_9;
                    arr_8 [i_2] = ((((/* implicit */_Bool) ((int) var_14))) ? (((((/* implicit */_Bool) var_9)) ? (var_6) : (((/* implicit */long long int) 871589123U)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_0 + 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [i_0]))) : (871589123U)))));
                }
            } 
        } 
    } 
    var_17 = var_11;
}
