/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16348
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
    var_18 = ((/* implicit */unsigned long long int) var_1);
    var_19 = ((_Bool) ((var_6) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (var_16)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 17; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */_Bool) arr_7 [i_0 + 1] [i_0 + 1] [i_2 + 2]);
                    var_21 = ((/* implicit */signed char) var_1);
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned int) ((unsigned long long int) var_11));
}
