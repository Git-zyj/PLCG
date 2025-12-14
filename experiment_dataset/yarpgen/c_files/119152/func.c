/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119152
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */_Bool) max(((+(((/* implicit */int) arr_0 [i_0])))), ((~(((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 1]))))));
                var_10 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) 415459610)))))));
            }
        } 
    } 
    var_11 = ((/* implicit */int) var_0);
}
