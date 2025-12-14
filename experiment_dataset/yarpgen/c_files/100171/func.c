/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100171
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
    var_13 -= 4060033648788416461ULL;
    var_14 = var_3;
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 17; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [17ULL] = (~(((((/* implicit */_Bool) 255ULL)) ? (arr_4 [i_1 - 2] [i_1 - 4] [i_0]) : (arr_4 [i_1 - 2] [i_1 - 4] [i_1]))));
                arr_6 [i_1] [i_1] [i_0] = ((((/* implicit */_Bool) ((unsigned long long int) var_12))) ? ((((+(17019294979142249799ULL))) / (6768930179021123938ULL))) : ((~(9025552454625092356ULL))));
            }
        } 
    } 
}
