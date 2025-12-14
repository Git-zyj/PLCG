/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178339
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 ^= ((/* implicit */long long int) (((~(((/* implicit */int) (signed char)-104)))) <= (((/* implicit */int) var_3))));
                arr_5 [i_1] = ((/* implicit */long long int) min((var_9), (1201774999)));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) var_11))));
}
