/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_11 = ((~((~((min(1, var_9)))))));
                arr_7 [i_0] [i_0] = (max(((-((max(var_4, (arr_0 [i_0] [14])))))), (!-var_2)));
                var_12 = ((+(max((arr_3 [i_0 - 1] [i_0 - 1]), (arr_4 [i_0] [i_1])))));
                var_13 = (((((-9223372036854775790 ? (-9223372036854775790 - -1632) : 0))) ? (((!(arr_5 [i_0] [i_1] [21])))) : ((min(var_7, var_9)))));
            }
        }
    }

    for (int i_2 = 1; i_2 < 8;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                {
                    var_14 = 1;
                    var_15 = (min((((((var_10 ? 536870912 : (arr_9 [i_2])))) ? 4797 : (arr_5 [i_2] [i_3] [18]))), (((arr_3 [i_2 + 2] [i_2 + 4]) * 1))));
                    arr_15 [i_2] [i_2] [i_2] = ((((-(arr_5 [i_2] [i_3] [i_2])))));
                    var_16 = (arr_3 [i_2] [i_4]);
                    var_17 = var_8;
                }
            }
        }
        arr_16 [i_2] = (max((((arr_0 [i_2] [i_2 + 1]) ? 9223372036854775807 : var_5)), (arr_0 [i_2] [i_2 + 1])));
    }
    for (int i_5 = 1; i_5 < 20;i_5 += 1)
    {
        arr_21 [i_5] [i_5] = arr_5 [i_5] [i_5 + 1] [i_5 + 1];
        var_18 *= (((arr_3 [i_5 - 1] [i_5 + 1]) ? (((1 ? 1 : -48))) : (max(var_7, var_0))));
        arr_22 [i_5 - 1] = (~1);
    }
    var_19 *= (((var_0 & -var_2) / var_4));
    var_20 = (var_0 - var_0);
    #pragma endscop
}
