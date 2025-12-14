/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109699
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_10;

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_16 = (((((arr_1 [i_0]) ? (1 != var_13) : ((0 ? (arr_1 [i_0]) : 1)))) - ((~(arr_3 [i_0])))));
        var_17 = ((((((arr_2 [i_0 + 3] [i_0 - 1]) + 1))) ? (arr_2 [i_0] [i_0 - 1]) : ((((arr_2 [i_0] [i_0 - 1]) || (arr_2 [i_0] [i_0 + 3]))))));
        var_18 = (((((arr_3 [i_0]) ? (arr_3 [i_0]) : (arr_3 [i_0]))) | ((min((arr_3 [i_0]), (arr_3 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_19 = (1209861717 - var_2);
        var_20 = (((~var_5) ? (((arr_3 [8]) ? 1 : (arr_4 [i_1]))) : (arr_5 [i_1])));
        var_21 = (arr_0 [1]);
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    {
                        var_22 += (((arr_4 [i_3 - 1]) | (arr_5 [i_1])));

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_23 = (max(var_23, ((var_7 ? (arr_19 [i_2] [i_2] [i_3] [i_4] [i_3 + 1] [i_2]) : var_14))));
                            var_24 = 1;
                        }
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            var_25 = ((var_8 || (~906675755)));
                            var_26 = (((var_0 ? -60369 : var_5)));
                        }
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            var_27 = var_0;
                            var_28 = max((((5638764311312729210 ? 101 : (arr_26 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [9])))), (((arr_21 [i_3 + 1] [i_3 - 2] [i_3 + 3] [i_3] [i_3 + 3]) ? (arr_5 [i_3 - 1]) : (((arr_25 [i_1] [i_2] [i_3 - 2] [i_4] [i_2]) ? (arr_1 [i_2]) : var_13)))));
                        }
                        var_29 = (((((98 + (arr_16 [i_3 + 3] [i_3 - 2] [i_3 + 2] [i_3 - 1])))) ? var_7 : (arr_22 [i_3 - 2] [i_3 + 2] [i_3 + 3] [i_3 - 2] [i_3])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
