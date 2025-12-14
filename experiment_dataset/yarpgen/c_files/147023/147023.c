/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147023
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (1 == 62707);
    var_17 = ((var_11 ? ((((!(8502308925546729117 / 4))))) : var_10));
    var_18 += (var_14 * 24);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_19 = 131071;
                arr_5 [i_0] [i_1] = ((min(2146435072, 131040)));
                var_20 += var_1;
            }
        }
    }
    #pragma endscop
}
