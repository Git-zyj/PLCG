/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100799
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        arr_2 [3] = ((-5859567229523895994 / ((((arr_0 [i_0 + 3] [i_0 + 3]) >> (((arr_0 [i_0 + 2] [i_0 + 2]) - 1220329844)))))));
        var_20 = -0;
        var_21 -= (arr_1 [i_0 + 1]);
        var_22 = (arr_1 [i_0]);
        arr_3 [i_0] [i_0] = (!32750);
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            {
                var_23 = (var_9 / ((((((90 ? var_3 : var_11))) + (arr_1 [i_1])))));
                var_24 = (min(8, (arr_7 [i_1] [i_1] [i_1])));
                var_25 ^= (~35020);
            }
        }
    }
    var_26 ^= (((!var_1) - (((!var_6) >> (((~var_10) + 5471216092798096288))))));
    var_27 = var_17;
    #pragma endscop
}
