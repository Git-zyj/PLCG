/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174717
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
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) var_1))));
                var_20 *= ((/* implicit */short) ((((/* implicit */int) (signed char)-33)) ^ (-268435456)));
            }
        } 
    } 
    var_21 *= ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned char)198)) / (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (signed char)31)) : (var_13))))) - (max((((/* implicit */int) var_9)), (((int) 549621596160LL))))));
    var_22 = ((/* implicit */long long int) ((((/* implicit */long long int) var_7)) <= ((-(var_4)))));
}
