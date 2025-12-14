/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137661
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
    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) 6126453020285804017LL))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_4 [15] [i_0 - 2] [i_1] = ((/* implicit */int) 3227980227336983726LL);
                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (6583978592708044217LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (-9069119706201026940LL) : (((/* implicit */long long int) 421109334))))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_0]))))) : (12397402827961976584ULL)));
            }
        } 
    } 
    var_22 = ((/* implicit */short) var_6);
}
