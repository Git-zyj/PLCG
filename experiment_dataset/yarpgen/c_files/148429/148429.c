/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148429
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (var_7 * ((((5062 ? 911144270 : var_6)) & (-911144270 && -911144259))));
    var_12 = (min(var_12, var_7));
    var_13 = (min(var_13, (((var_1 ? var_0 : var_1)))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_14 = (min(var_14, var_7));
        arr_3 [i_0] [1] = ((!(((((max(911144259, (arr_1 [i_0])))) ? ((-(arr_1 [i_0]))) : (((arr_2 [i_0]) << (var_2 - 10052))))))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_8 [0] = -911144270;
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            arr_20 [i_4] [i_4] [i_4] = (max(((-911144256 ? -911144263 : -911144259)), (((((var_6 % (arr_17 [5] [i_2] [i_2] [2] [i_2] [i_2]))) < (arr_9 [10]))))));
                            arr_21 [i_1] [0] [2] [i_2] [i_1] [i_1] [i_1] &= (var_2 | var_7);
                        }
                        for (int i_6 = 3; i_6 < 17;i_6 += 1)
                        {
                            arr_24 [13] [i_2] [i_2] [11] [i_4] = (arr_22 [i_4] [i_2]);
                            arr_25 [i_4] [6] [i_3] [i_3] [i_3] [18] [i_3] = var_5;
                            arr_26 [i_4] [i_2] [i_2 + 1] [10] = (((arr_15 [0] [i_2] [i_2] [0] [i_2 - 1] [i_2]) ? ((max(var_7, (arr_19 [i_1])))) : (arr_23 [i_6 + 3] [16] [i_6 - 1] [i_6 - 2] [i_6 + 1] [12] [i_6])));
                            var_15 = (var_9 < -8560051303216216282);
                        }
                        var_16 = ((max((arr_16 [i_1] [i_1] [i_1] [4] [i_1] [i_1]), (((!(arr_13 [i_1] [17])))))));
                    }
                }
            }
        }
    }

    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {

        for (int i_8 = 4; i_8 < 23;i_8 += 1)
        {
            var_17 = (max(var_17, -123));
            arr_34 [i_7] [i_7] = 1;
        }
        var_18 = (((((arr_27 [i_7]) / (arr_27 [i_7]))) < (~911144259)));
    }
    #pragma endscop
}
