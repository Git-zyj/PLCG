/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139060
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
    var_19 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_20 |= ((/* implicit */long long int) ((((/* implicit */_Bool) 132120576U)) ? (2788099393U) : (1506867893U)));
                    var_21 = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0 + 2] [i_0 - 2] [i_0 - 2])) ? (var_9) : (arr_7 [i_0 + 2] [i_0 - 1] [i_0 - 2])))), (((long long int) arr_6 [4ULL] [i_0 - 1] [i_0] [i_0 - 3]))));
                }
            } 
        } 
    } 
    var_22 = var_0;
    var_23 = ((/* implicit */int) min((2788099417U), (1659180629U)));
}
