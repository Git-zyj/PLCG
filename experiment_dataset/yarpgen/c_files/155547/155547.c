/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(((var_11 ? (var_3 >= var_12) : ((var_1 ? var_3 : var_12)))), -390712651));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_15 = (-((~(arr_2 [i_0]))));
        var_16 = (min(((~((max((arr_2 [i_0]), (arr_2 [i_0])))))), 390712651));
        arr_3 [i_0] = (min(390712659, ((((min(var_4, (arr_2 [i_0])))) ? -390712641 : -8969303139978841789))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        var_17 = 390712663;
        arr_8 [i_1 - 1] = (arr_7 [i_1 + 1]);
        /* LoopNest 3 */
        for (int i_2 = 4; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    {
                        var_18 = var_12;
                        arr_17 [i_1 + 1] [i_4] [i_2] [i_4] [i_2] [i_1] = ((-390712654 | ((28 ? (arr_6 [i_2]) : 1207569137283488573))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 12;i_5 += 1)
    {
        var_19 = (max(var_19, ((((18 || 390712650) ? (((!(arr_4 [i_5] [i_5])))) : 244)))));
        var_20 += (((arr_9 [i_5]) <= (arr_16 [i_5] [i_5 + 3] [i_5] [i_5])));
        var_21 = ((1 ? (arr_13 [i_5 + 1] [i_5 + 3] [i_5 + 2]) : var_3));
        var_22 *= (((arr_5 [i_5 + 3]) ? 1072 : (arr_5 [i_5 + 3])));
    }
    var_23 = ((var_1 ? ((((max(var_13, 64950))) ? var_5 : var_4)) : ((max((var_13 < var_4), (~var_6))))));
    #pragma endscop
}
