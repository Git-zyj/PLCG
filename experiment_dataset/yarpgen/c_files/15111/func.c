/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15111
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
    var_18 = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)64))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_19 ^= ((((/* implicit */_Bool) min(((+(((/* implicit */int) var_14)))), (((/* implicit */int) ((unsigned char) var_0)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_6)))) : ((-(((((/* implicit */_Bool) 33776997205278720LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)131))) : (3403330356720153593LL))))));
                var_20 = ((/* implicit */long long int) (+((+(((/* implicit */int) ((var_1) < (((/* implicit */int) (short)13729)))))))));
            }
        } 
    } 
}
