/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153135
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_6, (max((-127 - 1), (63 - var_8)))));
    var_20 += ((var_12 ? var_6 : (max((~var_13), 46))));
    var_21 = ((-29931 ^ (max(var_12, (var_3 - var_4)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    arr_7 [i_0] = (arr_4 [i_0] [i_0] [i_0]);

                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            var_22 = 1;
                            var_23 = arr_1 [i_0];
                            arr_13 [i_4] [i_3] [i_0] [i_2] [i_0] [i_1] [i_0] = 65525;
                        }
                        arr_14 [i_0 + 1] [i_1] [i_0] [i_3 - 3] = 1;
                        arr_15 [i_0] [i_1] [i_2 - 1] [i_1] = min(((~(max(82, (arr_1 [i_0]))))), (((~(!var_4)))));
                        var_24 = ((((min(2987080472, (arr_0 [i_1])))) ? (arr_2 [i_0 + 2] [i_0 + 1]) : 1));
                        var_25 |= (((arr_8 [i_0] [i_0] [i_1]) ? (arr_8 [i_0] [i_0] [i_1]) : (((arr_8 [i_0] [i_0] [i_1]) ? (arr_6 [i_0 + 3]) : (arr_8 [i_0] [i_0] [i_1])))));
                    }
                    for (int i_5 = 1; i_5 < 8;i_5 += 1)
                    {
                        arr_18 [i_0] [i_0] [i_0] [i_0] = arr_9 [i_0 + 1] [i_0] [i_0];
                        var_26 = (~51);
                    }
                    arr_19 [i_0 + 1] [i_0] [i_0] = (min(-1307886834, (((-1103063684 ? ((2773863925 ? var_9 : var_17)) : (0 > 1))))));

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            var_27 = (min(var_27, var_14));
                            var_28 = arr_3 [i_0];
                            arr_25 [i_0] [i_0 + 3] [i_0 + 3] [i_0] [i_0 + 2] = var_1;
                            arr_26 [i_0] = 29;
                        }
                        for (int i_8 = 1; i_8 < 7;i_8 += 1)
                        {
                            var_29 = (((2987080481 ? 0 : 216)));
                            arr_29 [i_0] [i_1] [i_0] [i_2] [i_6] [i_8] [i_8] = (arr_10 [i_0 + 3] [i_0] [i_0 - 1] [i_0] [i_0 + 1]);
                            var_30 = (--16376);
                        }
                        var_31 = (((arr_4 [i_0] [i_0] [1]) / ((((arr_16 [i_0] [i_0] [i_0] [i_0] [4]) ? -41 : (arr_20 [8] [8] [5] [i_6] [i_0 + 2] [3]))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
