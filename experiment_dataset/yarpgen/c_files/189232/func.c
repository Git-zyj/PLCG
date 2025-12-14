/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189232
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
    var_14 = ((/* implicit */unsigned char) var_7);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_1 + 3] [i_1] = ((/* implicit */int) 4294967295U);
                var_15 = ((/* implicit */unsigned char) (~(((int) var_11))));
                arr_5 [i_0 - 1] |= ((/* implicit */_Bool) 3553977834652642274LL);
                var_16 = ((/* implicit */unsigned int) -1694175542978354908LL);
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) 12928270649215518033ULL);
}
