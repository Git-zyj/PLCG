/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, var_2));
    var_11 &= (((((17627263532811896965 ? 0 : 49198))) ? 3600301673773502469 : var_3));
    var_12 = var_1;

    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        var_13 = (min(var_9, var_1));
        arr_3 [i_0] = (min(((min((arr_2 [i_0 + 1]), (arr_2 [i_0 + 1])))), (((arr_2 [i_0 + 1]) ? (arr_2 [i_0 + 1]) : var_4))));
        arr_4 [i_0] [i_0 - 4] &= (arr_2 [i_0]);
        var_14 *= ((((arr_0 [i_0 - 3] [11]) | var_8)));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_15 = (min(var_15, (((~((var_6 ? (min(18446744073709551612, (arr_0 [i_1] [i_1]))) : (((arr_0 [i_1] [i_1]) ^ var_6)))))))));

        for (int i_2 = 2; i_2 < 12;i_2 += 1)
        {
            var_16 = (min(var_1, (min(((var_1 ? var_2 : var_2)), 16325))));
            var_17 = (((min((arr_0 [i_2 + 1] [i_2 + 2]), (arr_0 [i_2 - 1] [i_2 + 2]))) ^ (arr_0 [i_2 + 2] [i_2 - 2])));
        }
        var_18 = (0 | 59317);
    }

    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_12 [i_3] [i_3] = (~var_7);
        var_19 = ((!(arr_2 [i_3])));
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 7;i_4 += 1)
    {
        var_20 *= ((var_1 ? 0 : (((arr_13 [1] [i_4 + 3]) ? -20072 : (arr_13 [9] [i_4])))));
        var_21 = ((-(arr_0 [i_4 + 1] [i_4 - 2])));
        /* LoopNest 2 */
        for (int i_5 = 3; i_5 < 9;i_5 += 1)
        {
            for (int i_6 = 4; i_6 < 7;i_6 += 1)
            {
                {
                    var_22 = var_4;
                    var_23 = (((arr_14 [i_4 - 1] [i_4 - 2]) | (arr_9 [i_4 + 3] [i_5 + 1] [i_6 + 3])));
                }
            }
        }
        var_24 = ((((var_5 | (arr_17 [i_4] [0]))) | (arr_19 [i_4 - 2])));
        var_25 = (arr_7 [i_4] [i_4 - 1]);
    }
    #pragma endscop
}
