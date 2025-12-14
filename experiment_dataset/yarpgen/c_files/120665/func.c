/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120665
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [5LL] [5LL] &= ((/* implicit */unsigned int) max((4478699052861557244ULL), (((/* implicit */unsigned long long int) (short)-19580))));
                arr_5 [i_0] [i_0] = max((((/* implicit */short) (_Bool)1)), ((short)-19580));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) var_12);
    var_16 = ((/* implicit */long long int) (short)19580);
}
