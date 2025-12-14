/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141443
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = max(var_10, var_8);
    var_12 = (!var_0);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_13 = (min((((-(arr_3 [18])))), var_10));
                arr_6 [i_0] = (max((((-(arr_1 [i_0])))), (max((~var_8), var_0))));
                var_14 = arr_5 [i_0] [i_1 + 2];
            }
        }
    }

    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        arr_11 [i_2] = (!-46);
        arr_12 [i_2] = ((!(!var_1)));
        var_15 = -46;
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        arr_16 [i_3] = var_4;
        var_16 += (min((min((arr_9 [i_3]), var_7)), (arr_9 [1])));
        var_17 += var_2;
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_20 [i_4] [i_4] = (((arr_2 [i_4] [i_4]) / (max(-46, var_10))));
        arr_21 [i_4] [i_4] = var_10;
        arr_22 [5] = (max(((((arr_9 [i_4]) / (arr_9 [i_4])))), (min((arr_9 [i_4]), var_0))));
        arr_23 [i_4] = (arr_8 [i_4]);
        var_18 += (!-38);
    }
    var_19 = (!(((((max(38, 41)))) != ((var_0 ? -38 : var_0)))));
    #pragma endscop
}
