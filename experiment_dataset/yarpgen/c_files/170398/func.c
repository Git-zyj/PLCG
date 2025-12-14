/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170398
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
    var_11 *= ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)0))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
                arr_5 [i_0] [i_0] [7LL] = ((/* implicit */signed char) 5787811210510947396ULL);
            }
        } 
    } 
    var_12 = ((/* implicit */signed char) var_6);
}
