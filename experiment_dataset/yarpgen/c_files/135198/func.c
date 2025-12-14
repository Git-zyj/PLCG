/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135198
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
    var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) min((var_16), (((/* implicit */unsigned long long int) max((1634559207), (((/* implicit */int) ((_Bool) -1689131150)))))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_19 -= ((_Bool) (~(min((((/* implicit */int) (short)-14399)), (1689131149)))));
                var_20 *= ((arr_1 [i_0] [i_0 + 2]) << (((var_6) + (1037573074345183206LL))));
            }
        } 
    } 
    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((var_2) ^ (var_8))))));
    var_22 = ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) ((short) var_4))))), (max((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) < (9007194959773696ULL)))), (var_15)))));
    var_23 = var_14;
}
