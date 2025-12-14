/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170333
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_18 |= ((min(-1950675195, 55)));
                var_19 = min((65535 * -27292), (max((arr_1 [i_0]), (arr_2 [i_0]))));
            }
        }
    }
    var_20 -= min(var_12, (var_8 - 108));
    var_21 |= ((((((!var_14) < (min(0, var_17))))) < var_13));
    #pragma endscop
}
