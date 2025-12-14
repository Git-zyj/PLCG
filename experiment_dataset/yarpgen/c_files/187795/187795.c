/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187795
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((((var_9 ? 10997 : -153791718))) & ((var_6 ? var_3 : var_15))))) * (min((((var_11 ? var_4 : var_15))), var_2))));
    var_20 = var_17;

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = (((((min(var_10, 187)))) * (max(var_6, (49461 * 0)))));
        arr_4 [i_0] = (((((0 * ((var_3 ? -4637734197099553970 : var_16))))) ? (arr_2 [i_0]) : -153791718));
        arr_5 [i_0] [i_0] = ((((max(2651769752, ((((arr_2 [7]) ? var_13 : 34122068)))))) & (max((-4637734197099553970 & 980073519), 4637734197099553970))));
        var_21 = (14314908938462440589 & (-2129051508 & -36875));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_22 = (~127);
            var_23 += (!var_11);
            arr_8 [i_0] [i_0] [13] = var_14;
            var_24 |= var_14;
        }
    }
    var_25 = ((-(((~-3288632079533598781) * (min(var_8, var_10))))));
    #pragma endscop
}
