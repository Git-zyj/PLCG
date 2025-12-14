/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121815
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
    var_19 = ((/* implicit */short) min((1470032576), (var_17)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) var_2);
                arr_5 [i_0] = ((/* implicit */long long int) arr_2 [i_1]);
            }
        } 
    } 
}
