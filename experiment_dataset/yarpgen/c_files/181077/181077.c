/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181077
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_20 = (min(var_20, (arr_2 [i_1])));

                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        arr_11 [i_3] [i_3] = ((var_10 ? (1120501434259000610 + 23687) : (arr_6 [4] [i_1])));

                        for (int i_4 = 3; i_4 < 20;i_4 += 1)
                        {
                            arr_14 [i_0] [i_0] [i_0] [i_0 - 1] [i_3] [i_0] [i_3] = arr_0 [i_2] [13];
                            var_21 = var_11;
                        }
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            arr_17 [i_0] [i_1] [i_1] [i_3] [i_3] [i_3] [i_5] = (((((((-97 > (arr_2 [i_0]))) < (arr_12 [i_0 - 1] [i_3 - 1] [12] [12] [i_3 - 1] [i_5]))))));
                            arr_18 [i_3] = (min(3713855408737336779, (min(-3713855408737336763, -111948605))));
                            var_22 = (min(var_22, var_4));
                            var_23 = ((~(arr_5 [i_0 - 1] [i_3 - 1])));
                        }
                    }
                    var_24 = -3713855408737336755;
                }
            }
        }
    }

    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {
        arr_21 [i_6] = ((var_14 / (((((((arr_7 [0] [i_6] [17] [i_6]) + 2147483647)) << (((((arr_20 [i_6] [i_6]) + 1742)) - 3)))) >> ((((arr_19 [i_6]) <= var_7)))))));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {
                {
                    arr_27 [i_6] [i_6] [i_6] [i_6] = (max(var_8, 1));
                    var_25 = (!(arr_22 [i_6] [i_7] [9]));
                }
            }
        }
    }
    #pragma endscop
}
