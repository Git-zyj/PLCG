/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147853
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */int) 4294967293U);
                    var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) var_0))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */int) min((var_7), ((~(min((1663841028U), (0U)))))));
    var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) (((!(((/* implicit */_Bool) ((unsigned int) var_11))))) ? (var_0) : (var_12))))));
}
