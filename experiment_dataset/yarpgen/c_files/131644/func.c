/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131644
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
    for (long long int i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        for (long long int i_1 = 4; i_1 < 24; i_1 += 1) 
        {
            {
                var_11 = (-((-((+(((/* implicit */int) (_Bool)1)))))));
                var_12 += ((/* implicit */unsigned short) ((((/* implicit */long long int) ((arr_0 [i_1 - 3] [i_0 - 1]) ? (((/* implicit */int) var_8)) : (var_0)))) & (max((var_4), (((/* implicit */long long int) (_Bool)1))))));
                var_13 = ((/* implicit */unsigned short) var_1);
            }
        } 
    } 
    var_14 = ((/* implicit */_Bool) min(((+(max((var_0), (var_10))))), (var_0)));
    var_15 = ((/* implicit */_Bool) (~((~(((/* implicit */int) var_8))))));
}
