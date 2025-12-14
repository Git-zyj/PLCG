/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104520
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_18 = (max(var_5, (min(((~(arr_0 [i_1] [i_1]))), (arr_5 [i_0] [i_2])))));
                    arr_7 [i_2] [i_2] [i_2] [i_2] = (min(var_17, ((((arr_0 [i_0] [i_0]) >= var_17)))));
                }
            }
        }
    }
    var_19 = min(((((min(1, 36502))) ? var_6 : (var_2 - var_14))), var_9);
    var_20 = (max(var_20, var_2));
    var_21 = (((((~(var_17 && var_1)))) ? (max((~var_1), (var_11 | var_16))) : var_17));
    #pragma endscop
}
