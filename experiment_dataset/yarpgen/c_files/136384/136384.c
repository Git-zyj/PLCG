/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_15;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_20 = ((((((((arr_0 [i_0]) ? var_6 : var_13))) ? ((var_18 ? 3551381212 : 3208738650)) : var_9)) >= ((((arr_1 [i_0]) ? var_1 : (arr_1 [i_0]))))));
        var_21 = ((((((2552405902 ? var_9 : -22913)))) ? (var_1 & var_16) : (arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_22 = var_3;
        arr_5 [i_1] = ((((((arr_3 [i_1]) ? var_2 : 22912))) ? ((max(((14752728558056896679 ? 214 : 120)), (arr_3 [i_1])))) : ((((max(5531277070498326631, var_7))) ? var_11 : var_7))));
    }
    for (int i_2 = 3; i_2 < 22;i_2 += 1)
    {
        var_23 -= (arr_2 [i_2] [i_2]);
        arr_8 [14] [i_2] &= var_18;
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 12;i_3 += 1)
    {
        arr_12 [i_3 + 4] [i_3] = 0;

        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            var_24 += -26;
            arr_16 [i_3 + 1] = (var_10 / var_12);
        }
        var_25 = (max(var_25, (arr_14 [14] [i_3 - 2])));
    }
    var_26 = var_0;
    #pragma endscop
}
