/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140928
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] [2] = (((arr_0 [i_0] [i_0]) ? var_4 : 22323));
        var_15 = ((!(arr_0 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_16 = (((var_2 > ((((arr_1 [i_1]) - 1013815500))))) ? (min((arr_3 [i_1]), ((1013815496 ? 1 : var_7)))) : ((min(3281151795, ((((arr_3 [i_1]) ? (arr_1 [i_1]) : (arr_0 [i_1] [11]))))))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    {
                        var_17 -= min(3958060581, (max((1 == 105), (arr_4 [i_4]))));
                        var_18 += (((min(1, 3487529543517242399)) / (((-((min(-13128, 1))))))));
                        var_19 *= (((arr_4 [i_4]) >= 32746));
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        arr_17 [i_5] [i_5] = 1;
        var_20 = (max(var_20, ((((arr_7 [i_5] [i_5] [i_5]) ? var_12 : (!3281151795))))));
        arr_18 [i_5] [i_5] = (arr_3 [i_5]);
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        var_21 = (arr_0 [i_6] [i_6]);
        var_22 = (arr_21 [i_6]);
    }
    var_23 &= var_4;
    #pragma endscop
}
