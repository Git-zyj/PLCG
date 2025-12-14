/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106637
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        var_13 = (arr_2 [i_0]);
        arr_3 [17] [i_0 + 1] = (arr_0 [21]);
        var_14 = (min(var_14, (((((var_7 ? (arr_2 [i_0]) : 524774709))) ? -2025 : var_8))));
    }
    for (int i_1 = 2; i_1 < 23;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_15 = ((!(arr_7 [i_1 + 2] [i_1 - 1])));
            var_16 = 524774711;
            var_17 -= ((((((((arr_4 [2]) ? var_3 : var_1))) ? 3618802638498476394 : (arr_4 [i_1 - 1]))) == -9223372036854775801));
            arr_10 [i_1] = (((~37) ? var_3 : (max(var_12, (~-524774711)))));
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    {
                        arr_17 [i_1] [8] [8] [i_4] = ((!(arr_15 [i_1] [i_1])));
                        var_18 = (((-(arr_7 [i_1] [i_1]))));
                    }
                }
            }
        }
        for (int i_5 = 1; i_5 < 21;i_5 += 1)
        {
            var_19 = (min(((((arr_14 [i_1] [i_1 + 2] [i_1 - 1] [i_5 + 2] [i_5 + 2]) ? (arr_14 [12] [i_1 + 1] [i_1 + 1] [i_5 + 4] [i_1 + 1]) : (arr_14 [i_1] [i_1 + 2] [i_1 + 1] [i_5 + 3] [i_1 + 2])))), (arr_18 [13] [0])));
            var_20 -= (((((4294967289 + (((((arr_6 [i_1] [i_1] [i_1]) <= var_10))))))) <= (((arr_14 [11] [23] [i_5] [23] [4]) + (arr_9 [i_1] [i_1] [i_1])))));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    {
                        arr_26 [i_1 - 1] [0] [i_1 - 1] [0] = -1;
                        var_21 -= 9223372036854775795;
                    }
                }
            }
        }
        var_22 = (min(var_22, 1676971063));
    }
    var_23 = (var_9 != var_2);
    var_24 = var_4;
    #pragma endscop
}
