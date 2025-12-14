/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104040
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_17 *= (0 ^ 18);
                var_18 = ((((((arr_2 [i_1]) ? (arr_0 [i_0 + 1]) : (arr_2 [i_1])))) ? ((((arr_0 [i_0 + 1]) / (arr_0 [i_0 + 1])))) : (arr_0 [i_0 + 1])));
            }
        }
    }
    var_19 = var_11;
    var_20 = (var_3 ? ((var_7 ? -var_3 : var_5)) : var_12);
    #pragma endscop
}
