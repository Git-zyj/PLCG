/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150454
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
    var_12 -= ((/* implicit */long long int) var_2);
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_9))));
                var_14 = ((/* implicit */int) max((min((((/* implicit */short) min((((/* implicit */unsigned char) arr_1 [i_0])), ((unsigned char)127)))), (((short) var_9)))), (var_8)));
                var_15 |= ((/* implicit */unsigned long long int) arr_2 [i_0]);
                var_16 = ((/* implicit */long long int) ((short) max((min((((/* implicit */unsigned long long int) arr_0 [(short)1])), (8957802417981188933ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_7 [i_0])) / (1169470940076879726LL)))))));
            }
        } 
    } 
}
