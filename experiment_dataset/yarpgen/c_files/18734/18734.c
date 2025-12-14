/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18734
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_16 = (min(var_16, (arr_7 [i_0] [i_2] [2])));
                            var_17 = (min(var_17, (((0 / 1) * 0))));
                        }
                    }
                }
                var_18 *= ((+((-(((arr_2 [4]) ? var_4 : var_8))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 23;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 22;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 22;i_8 += 1)
                        {
                            {
                                var_19 ^= -var_14;
                                var_20 = ((((((arr_21 [i_7 + 1] [i_6 + 1] [i_8 + 1] [i_8 + 1] [8]) >= (arr_21 [i_7 - 1] [i_6 - 3] [i_8 + 2] [i_8 + 2] [10])))) / ((max((arr_21 [i_7 - 1] [i_6 - 2] [i_8 - 1] [i_8 - 1] [10]), (arr_21 [i_7 - 1] [i_6 - 3] [i_8 - 1] [0] [8]))))));
                            }
                        }
                    }
                    arr_26 [i_6] [i_5] [7] [i_6] = (min((max(var_6, (arr_22 [i_6] [i_6] [i_6] [i_6 - 2] [i_6 - 2] [i_6 + 1] [i_6 + 2]))), (arr_22 [i_6] [i_6] [2] [i_6 - 2] [i_6 - 2] [i_6] [i_6 + 2])));

                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        arr_30 [i_6] = ((-var_5 * (max((arr_24 [i_4] [i_6] [i_6] [5]), (arr_24 [i_4] [i_6] [i_6 + 2] [i_9])))));
                        var_21 = (var_4 / 22);
                        arr_31 [i_6] = (((81 & 0) ? (!var_1) : ((((arr_17 [i_5] [i_6 + 2] [i_6 - 3]) < (arr_24 [1] [i_6] [i_6 - 3] [i_6 - 3]))))));
                    }
                    for (int i_10 = 1; i_10 < 1;i_10 += 1)
                    {
                        arr_34 [i_6] [i_6] [i_6] = min((((((min((arr_29 [i_6] [i_6] [i_6 + 1] [i_6]), 46527))) ? (-127 - 1) : (((!(arr_27 [i_4] [i_6] [i_5] [21] [i_4] [i_4]))))))), (var_9 & 1));
                        var_22 = ((var_1 != (max(94087240, var_13))));
                        arr_35 [i_6] [14] [i_6] [14] = (arr_14 [6]);
                        arr_36 [10] [1] [i_6] [i_6] [23] [i_4] = (min(84, (~-517359547)));
                        arr_37 [i_6] [1] [1] [i_10] = (min(46527, 1));
                    }
                }
            }
        }
    }
    var_23 = var_15;
    var_24 = (((((2080374784 > (var_15 - var_7)))) / var_1));
    #pragma endscop
}
