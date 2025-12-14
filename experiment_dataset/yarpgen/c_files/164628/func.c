/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164628
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 8; i_1 += 3) 
        {
            {
                var_19 |= ((/* implicit */long long int) arr_1 [i_0]);
                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (+((-(((/* implicit */int) ((_Bool) 2707129679U))))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */int) var_12);
    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */int) var_16)) ^ (((/* implicit */int) var_15)))))));
}
