/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10892
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
    for (unsigned long long int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            {
                var_11 -= ((/* implicit */int) var_0);
                arr_5 [(short)14] [i_0] [i_0 + 1] = ((/* implicit */unsigned long long int) var_2);
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) var_6))));
}
