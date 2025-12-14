/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137872
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                var_13 = (max(((((arr_0 [i_0]) <= (arr_2 [i_1])))), (max(-3766212192657484302, 240))));
                arr_5 [i_0] [i_0] [i_0] = (max((min((arr_2 [i_0 + 1]), (arr_2 [i_0 + 2]))), (min((arr_2 [i_0 + 2]), (arr_2 [i_0 - 2])))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        arr_9 [i_2] [i_2] = (arr_8 [i_2]);
        var_14 = var_12;
    }
    for (int i_3 = 1; i_3 < 9;i_3 += 1)
    {
        var_15 = 112;
        arr_12 [i_3] = (arr_0 [i_3 + 1]);
    }
    for (int i_4 = 1; i_4 < 22;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    arr_19 [i_4] [20] [i_4 - 1] = 22;
                    var_16 = (min(var_10, (((arr_18 [i_4] [i_4] [i_5 + 1] [i_6]) / (arr_18 [i_4] [i_4] [i_5 + 2] [i_6])))));
                    arr_20 [16] [16] [i_5] [i_6] = arr_18 [i_5] [i_5] [i_5 + 2] [i_5 + 2];
                    var_17 = (~24);

                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        var_18 += (max((arr_22 [17] [17]), var_6));
                        var_19 += (min(((((-1 % (arr_22 [i_6] [0]))))), var_10));
                        arr_23 [i_4 + 1] = var_3;
                    }
                }
            }
        }
        var_20 ^= (min((arr_16 [i_4 + 1]), (((!1769008399) ? (arr_17 [i_4] [i_4 + 1] [i_4]) : (arr_22 [i_4 - 1] [i_4])))));
        var_21 = ((max((arr_21 [i_4] [11] [i_4 + 1] [i_4 - 1] [i_4] [i_4]), (min(4294967295, 212)))));
        arr_24 [i_4] [i_4 + 1] = var_12;
    }
    var_22 = ((((var_5 / ((max(4148365860, -9))))) | ((((-1081451531 < (min(var_11, var_1))))))));
    #pragma endscop
}
