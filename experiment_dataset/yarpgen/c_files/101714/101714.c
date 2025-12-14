/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_18 |= ((~((-910777672 ? ((-910777669 ? (arr_0 [18] [18]) : var_1)) : ((((arr_0 [i_0] [18]) ? (arr_1 [1]) : 13)))))));
        var_19 |= (((!910777669) <= (min(var_0, 3230149004))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_20 = ((var_9 ? (((arr_1 [i_1]) ? 224 : var_0)) : (arr_2 [i_1] [i_1])));
        var_21 *= (((((var_1 ? 224 : 14754651594172651098))) ? ((-910777672 ? -5197037756253191996 : var_8)) : (var_13 == 910777671)));
        var_22 |= (((arr_0 [14] [14]) & (var_13 == var_15)));
    }
    for (int i_2 = 1; i_2 < 12;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            var_23 = (arr_6 [i_3]);
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 10;i_5 += 1)
                {
                    {
                        var_24 = ((((var_8 ? (arr_10 [i_5 + 3] [i_5 - 1] [i_5 + 3] [i_5 - 1]) : (arr_10 [i_5 + 3] [i_5 + 1] [i_5 + 1] [i_5 + 3]))) % (arr_10 [i_5 + 1] [i_5 - 1] [i_5 - 1] [i_5 - 1])));
                        var_25 = (!(((((((arr_4 [i_2] [i_3]) * var_1))) ? -5197037756253191996 : ((var_8 ? -116 : var_8))))));
                    }
                }
            }
        }
        for (int i_6 = 3; i_6 < 12;i_6 += 1)
        {
            arr_15 [i_2] = ((((((((arr_3 [i_2]) <= var_8))) / (max(var_5, 910777668)))) % var_8));
            var_26 = (((31650 | var_15) < (min((((!(arr_1 [i_2])))), (var_12 - var_9)))));
        }
        arr_16 [i_2] [i_2] = 910777669;
        var_27 *= (min(252, ((-910777669 ? var_11 : (910777660 <= 30)))));
    }
    var_28 = ((var_7 % (((-910777672 / var_10) ? var_6 : 28))));
    #pragma endscop
}
