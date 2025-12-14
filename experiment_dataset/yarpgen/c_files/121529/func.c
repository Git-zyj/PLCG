/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121529
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
    var_17 = ((/* implicit */int) -9223372036854775806LL);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */signed char) (+(((/* implicit */int) var_10))));
                var_19 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (-((+(var_15)))))) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_2 [12U])) : (((/* implicit */int) arr_2 [14LL]))))), ((((_Bool)0) ? (9223372036854775805LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0]))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1])))));
            }
        } 
    } 
}
