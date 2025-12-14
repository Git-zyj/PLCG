/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102189
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = (!var_5);
        arr_4 [i_0] = var_6;
        var_10 = (var_6 ? ((var_3 ? var_9 : (min(1659462966, -2873752067163699623)))) : (!var_2));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_13 [i_3] = (((~var_8) ? -96 : var_9));
                        arr_14 [i_0] [2] [i_2] [i_3] = ((var_3 ? var_6 : ((var_6 ? var_4 : var_3))));
                        arr_15 [i_0] [17] [i_3] [i_0] = (((((var_3 ? var_9 : (~var_0)))) ? ((var_0 ? var_6 : var_0)) : var_6));
                        var_11 = var_1;
                    }
                }
            }
        }
        var_12 = (max(var_12, ((max(var_9, ((var_9 ? var_8 : var_8)))))));
    }
    for (int i_4 = 1; i_4 < 15;i_4 += 1)
    {
        var_13 = (min(var_13, ((((((var_4 ? var_3 : var_2))) ? (((var_8 ? var_1 : var_7))) : (min(var_8, var_3)))))));
        arr_18 [i_4] [i_4] = (max((!var_7), (min(var_2, (~var_6)))));
    }
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        var_14 = (!251);
        var_15 = (((!var_0) ? (~var_3) : (min(var_2, var_7))));
    }
    var_16 = (max(var_16, (((var_1 ? (((var_8 ? var_1 : var_8))) : var_3)))));

    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        var_17 = ((((min(var_6, var_3))) ? (!var_1) : (max(var_3, var_9))));
        var_18 = (!-var_7);
        var_19 += var_9;
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 23;i_7 += 1)
        {
            for (int i_8 = 3; i_8 < 23;i_8 += 1)
            {
                {
                    arr_33 [i_7] [i_7] [i_7] = (((((var_6 ? var_7 : var_0))) ? (min(var_7, var_5)) : ((min((~2051488362), ((var_3 ? var_9 : var_3)))))));
                    arr_34 [i_7] [14] [i_6] [i_7] = (min(((var_3 ? var_6 : var_5)), (!var_6)));
                }
            }
        }
    }
    var_20 = (min(((var_6 ? (((var_8 ? var_9 : var_6))) : ((var_1 ? var_5 : var_7)))), (((var_7 ? var_4 : var_0)))));
    #pragma endscop
}
