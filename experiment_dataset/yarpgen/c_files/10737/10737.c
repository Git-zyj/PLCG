/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max((max(var_10, var_7)), (-var_1 + 1)));
    var_16 += ((!(!10791548338884913263)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 -= ((!((!(arr_2 [i_0])))));
                    var_18 = (((!-33) + (((!(((arr_0 [i_0]) >= 1)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_19 = (+((var_3 ? (arr_12 [i_0] [i_0] [i_1] [i_2 - 1] [i_3] [1] [i_4 + 1]) : var_10)));
                                var_20 = (((((min(10524766944307156782, 1)) ? (!-12) : var_13))));
                                var_21 = ((!(((-(!var_7))))));
                            }
                        }
                    }

                    for (int i_5 = 1; i_5 < 10;i_5 += 1)
                    {
                        var_22 ^= ((-(arr_10 [i_5] [i_5] [5] [i_5] [i_1] [i_5])));
                        var_23 = (-(((-(arr_13 [i_0] [i_1] [i_0] [10] [i_0] [i_0])))));
                        arr_16 [i_2] [i_1] [i_2] [i_5] = max(((-((7623196013771318159 ? -17 : -53)))), -0);
                    }
                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 7;i_6 += 1)
                    {
                        arr_19 [i_0] [i_2] [10] = ((!(((441006946 ? (arr_7 [6] [6] [6] [i_6]) : -7)))));
                        arr_20 [i_2] [i_2] [i_2] [i_2] [i_0] = -39;
                        var_24 &= (((!-22897) & 46199));
                        var_25 *= ((1 / (arr_18 [i_2] [i_2 - 1] [4] [i_6 + 3] [i_2] [i_6])));
                    }
                }
            }
        }
    }
    var_26 = -245605365;
    #pragma endscop
}
