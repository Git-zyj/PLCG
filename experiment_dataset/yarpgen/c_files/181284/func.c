/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181284
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                var_19 = max((((/* implicit */int) arr_0 [i_0])), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) -511590303)), (127U)))) ? (min((((/* implicit */int) (short)27652)), (-404816270))) : (((/* implicit */int) var_15)))));
                arr_5 [i_0] = ((/* implicit */short) 2282636313U);
                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((unsigned short) 4686266286354762571LL)))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) var_16);
}
