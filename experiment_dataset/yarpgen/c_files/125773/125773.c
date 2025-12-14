/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125773
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, var_2));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_17 = arr_4 [i_0] [i_0] [i_1];
                var_18 = (max(var_18, ((837740611 ? 536346624 : 4294967295))));
                arr_7 [i_0] = var_1;
                arr_8 [i_0] [i_1] [i_1] = ((((var_13 << (((arr_1 [i_0]) - 2490396985))))) ? ((var_13 ? (min(var_7, 2605630655)) : var_0)) : (min(932589405, 4155547962)));
            }
        }
    }
    #pragma endscop
}
