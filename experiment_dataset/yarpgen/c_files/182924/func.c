/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182924
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
    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) var_0))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            {
                arr_8 [i_0] [i_1 + 1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1 - 2] [i_1 + 1] [i_0])) ? (((/* implicit */int) arr_4 [i_1 + 1] [i_1 - 1] [i_0])) : (((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 2] [i_0]))))) != (((((long long int) 4522035815866895861LL)) / (arr_7 [i_1] [i_1 - 1])))));
                var_18 ^= arr_7 [i_0] [12];
                var_19 = ((/* implicit */unsigned long long int) arr_6 [i_0]);
            }
        } 
    } 
}
