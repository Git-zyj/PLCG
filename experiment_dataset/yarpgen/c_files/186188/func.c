/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186188
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 23; i_2 += 3) 
            {
                {
                    var_17 = ((_Bool) ((((/* implicit */int) arr_2 [i_0])) + (var_11)));
                    arr_6 [i_2] = ((/* implicit */_Bool) ((unsigned long long int) var_13));
                }
            } 
        } 
    } 
    var_18 = var_0;
}
