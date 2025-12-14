/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145755
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (-17355 ? ((((-var_9 != (min(2273934710, 2273934710)))))) : var_0);
    var_19 = (max(var_19, ((((~var_17) ? var_3 : ((var_2 ? var_10 : (var_6 / var_12))))))));
    var_20 = (~2021032578);
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [11] = (arr_2 [i_0]);
                arr_6 [i_0] [i_1] = ((((54230 >= var_15) < (arr_2 [i_0 - 3]))));
            }
        }
    }
    #pragma endscop
}
