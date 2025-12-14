/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164568
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
    for (signed char i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_4 [i_1] = ((/* implicit */short) arr_3 [i_1]);
                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) arr_2 [i_0])))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) max((((/* implicit */signed char) var_8)), (var_7)));
}
