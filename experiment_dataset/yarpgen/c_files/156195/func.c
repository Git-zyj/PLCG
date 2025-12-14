/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156195
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
    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) 134217720U))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_0] [i_0] = var_12;
                arr_6 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 4160749575U)) ? (-1721655541) : (((/* implicit */int) (_Bool)1))));
                arr_7 [i_0] = ((/* implicit */_Bool) var_9);
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) var_17);
}
