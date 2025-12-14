/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17621
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, ((min((max((29587 && var_12), (max(16310639566757052449, var_9)))), 35949)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_15 = -29586;
        var_16 = ((((arr_1 [i_0] [i_0]) / var_0)) > (arr_0 [i_0]));
        var_17 = (arr_1 [i_0] [i_0]);

        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            var_18 = (((arr_3 [i_0] [i_0] [i_1]) ? (arr_3 [i_0] [i_0] [i_1 - 2]) : (arr_3 [i_0] [i_0] [i_0])));
            /* LoopNest 3 */
            for (int i_2 = 4; i_2 < 7;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        {
                            arr_13 [i_0] [i_1] [i_0] [7] [i_3] [i_4] [i_3] = (-(35949 ^ 35949));
                            var_19 = 15167595602709731843;
                        }
                    }
                }
            }
            var_20 = (((arr_10 [i_1 + 1] [i_1] [i_1 - 2] [i_1 - 1]) > ((((arr_4 [i_0] [i_0] [i_1]) <= (arr_12 [i_1 + 1] [7] [i_1] [i_0] [i_0] [i_0] [i_0]))))));
        }
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        {
                            arr_29 [i_0] [i_0] [i_6] [i_7] [i_8] = ((!(((1 ? 29587 : 0)))));
                            arr_30 [i_0] [i_0] = (((arr_24 [i_6] [i_5] [i_5] [7] [i_8] [i_5]) <= (arr_26 [i_0] [i_5] [i_6] [1] [i_8] [i_8])));
                            var_21 = ((var_2 >> (889311805 > 3685132286198222806)));
                        }
                    }
                }
            }
            arr_31 [i_0] [i_0] = (((arr_12 [i_0] [i_0] [i_0] [i_5] [i_0] [i_5] [9]) ? (arr_25 [i_0] [i_0]) : 0));
            var_22 &= ((((((arr_15 [i_5] [i_5]) ^ 1))) && (arr_9 [i_0] [i_0] [i_0] [1])));
        }
        for (int i_9 = 3; i_9 < 8;i_9 += 1)
        {

            for (int i_10 = 0; i_10 < 10;i_10 += 1)
            {
                var_23 = (min(var_23, ((((arr_14 [i_9 + 2] [i_10]) > (arr_22 [i_9 - 3] [i_9 - 1] [i_9 - 2] [i_9 - 2] [i_9 - 3] [5]))))));
                arr_37 [i_0] = (1 || 29587);
            }
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 10;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 10;i_12 += 1)
                {
                    {
                        var_24 = (max(var_24, (((1612516549 ? (arr_1 [i_9 - 1] [i_9 + 2]) : (arr_15 [i_11] [i_11]))))));
                        arr_44 [i_0] [i_9] [i_0] [i_0] = (((arr_42 [i_9 + 1] [i_0] [i_0] [i_9 - 2]) ^ (arr_5 [i_0] [i_0] [i_12])));
                        var_25 = ((16489638866914594120 ? 15167595602709731843 : 1));
                        var_26 = (arr_6 [i_9] [1] [1]);
                    }
                }
            }
            var_27 = (((29586 == var_0) ? ((((arr_16 [i_0]) != 1))) : -139416513));
        }
    }
    #pragma endscop
}
