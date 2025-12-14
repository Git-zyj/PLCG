/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152244
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
    var_11 = ((min((((/* implicit */unsigned long long int) var_2)), (((0ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))) - (min((0ULL), (((/* implicit */unsigned long long int) 2251731094208512LL)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned int) var_4);
                var_12 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min((-4742958613202922025LL), (((/* implicit */long long int) 518956491))))), (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (0ULL)))));
            }
        } 
    } 
    var_13 -= ((/* implicit */_Bool) var_10);
}
