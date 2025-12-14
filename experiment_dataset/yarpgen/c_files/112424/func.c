/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112424
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_14 &= (((+(15064902018929701338ULL))) + (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))))));
                arr_6 [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_8)), (min((((/* implicit */unsigned long long int) arr_5 [i_0] [i_1])), (min((((/* implicit */unsigned long long int) var_12)), (0ULL)))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) var_11))));
}
