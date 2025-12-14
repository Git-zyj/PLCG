/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_4 [i_0] = var_8;
                arr_5 [i_1] = var_4;
                arr_6 [i_0] = (max(var_4, (((arr_1 [i_0] [i_1]) * var_3))));
                var_12 -= -5182705448640407536;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                arr_14 [i_3] = (max(22960, (~-589311561)));
                var_13 = 11377;
                var_14 = (min((var_1 && var_0), var_6));
            }
        }
    }
    var_15 = var_3;
    #pragma endscop
}
