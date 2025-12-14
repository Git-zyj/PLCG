/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133933
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 |= ((/* implicit */int) arr_0 [i_0]);
                var_19 = 262220301;
            }
        } 
    } 
    var_20 = ((/* implicit */short) var_9);
    var_21 += ((/* implicit */unsigned int) var_17);
    var_22 |= ((/* implicit */long long int) (~(((/* implicit */int) var_10))));
    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) var_8))));
}
