/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_17 = ((!((min((arr_1 [i_0]), var_3)))));
        var_18 = (min(var_18, (((((!(((0 / (arr_1 [i_0])))))) ? (((!(44 && 4294967295)))) : ((((!(arr_1 [6]))))))))));
        var_19 = -1303487735;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] [15] = -1484696593;
        var_20 = -127;

        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 2; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 15;i_5 += 1)
                    {
                        {
                            var_21 = (min(var_21, 3779057856));
                            arr_19 [i_5 - 2] [10] [i_4] [10] [10] [i_1] = -127;
                            var_22 = arr_17 [i_5] [i_5] [i_3 + 2] [i_5 + 1] [i_3 + 2];
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 14;i_7 += 1)
                {
                    {
                        arr_24 [i_1] [i_6] [i_2] [i_1] [i_1] |= ((!(arr_22 [i_7 + 1] [1])));
                        var_23 = (min(var_23, var_14));
                        var_24 *= ((!(arr_12 [i_7] [i_7 - 2] [i_7 + 1] [i_7 + 2] [i_7 + 1] [i_7 + 1])));
                        arr_25 [8] [i_6] [i_6] [i_1] = (((arr_14 [3] [3] [i_7 + 2]) ? (arr_14 [15] [i_7 - 1] [i_7 - 1]) : (arr_16 [i_7 + 2] [i_7 - 1] [i_7 + 2] [i_7 - 1] [i_7 + 2] [i_7 - 1])));
                        var_25 += ((-((var_15 ? -1516554028 : (arr_14 [14] [14] [10])))));
                    }
                }
            }
            arr_26 [i_1] [i_1] [i_1] = arr_4 [i_1];
        }
        var_26 = (arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]);
        arr_27 [i_1] &= (((((var_7 ? (arr_18 [i_1] [i_1] [i_1] [i_1] [i_1]) : var_12))) ? ((var_16 ? var_13 : var_4)) : (!45)));
    }
    var_27 |= var_6;
    #pragma endscop
}
