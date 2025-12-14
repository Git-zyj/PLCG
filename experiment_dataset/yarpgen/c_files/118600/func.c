/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118600
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
    var_11 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */unsigned long long int) (((-(-64486282))) & (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */long long int) var_9);
                var_13 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0]))));
            }
        } 
    } 
}
