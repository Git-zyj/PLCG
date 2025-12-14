/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151863
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_0] = (arr_2 [i_0 + 1] [i_0 - 1] [i_0 + 1]);
                var_19 -= ((~((29419 & ((var_7 ? 3 : 4))))));
                var_20 = (((arr_1 [i_1 - 2]) ? ((1 ? (((!(arr_2 [i_0] [i_0 + 1] [1])))) : (((arr_2 [i_0] [17] [i_0]) * -13977)))) : 1));
            }
        }
    }
    var_21 = var_0;
    var_22 = (~-var_2);
    #pragma endscop
}
