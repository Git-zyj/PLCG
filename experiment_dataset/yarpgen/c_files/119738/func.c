/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119738
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) min(((-(((long long int) var_9)))), (((/* implicit */long long int) 1365197756U))));
                var_10 = ((unsigned int) arr_3 [i_0] [i_0] [i_0]);
            }
        } 
    } 
    var_11 = ((/* implicit */long long int) 4294967284U);
    var_12 = ((/* implicit */long long int) var_9);
}
