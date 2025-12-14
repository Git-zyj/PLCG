/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129078
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
    var_16 |= ((/* implicit */int) min((((max((var_12), (((/* implicit */long long int) var_13)))) - (((/* implicit */long long int) ((/* implicit */int) var_15))))), (((/* implicit */long long int) var_0))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            {
                var_17 += ((/* implicit */short) ((var_4) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32737)))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) (short)(-32767 - 1))) == (((/* implicit */int) (short)32710))));
                arr_6 [i_0] = ((/* implicit */unsigned int) var_11);
            }
        } 
    } 
}
