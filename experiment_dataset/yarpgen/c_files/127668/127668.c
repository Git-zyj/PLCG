/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((min(((min(0, var_15))), (max(2883911308, var_2))))) ? (((min(120, var_12)))) : var_15));
    var_17 = var_0;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = ((((max(136, 0))) << (max((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))), ((110 ? 0 : 1))))));
        arr_3 [i_0] = (max(((1 ? (((arr_0 [i_0]) ? 1 : (arr_1 [i_0]))) : ((min(var_3, (arr_0 [i_0])))))), (arr_0 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_6 [i_1] [2] = (arr_0 [i_1]);
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 7;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 9;i_3 += 1)
            {
                {
                    var_18 = ((arr_5 [i_2 + 1]) && (arr_5 [i_2 - 1]));
                    arr_12 [i_2] [3] [i_2 + 2] [i_3] = (((var_13 ? (arr_11 [i_1] [i_1] [i_1] [i_1]) : 0)));

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_19 = ((-(arr_0 [i_2])));
                        arr_15 [i_2] [i_2 - 2] [i_2 + 3] [i_2] = (((arr_1 [i_4]) ? ((125 & (arr_8 [i_2]))) : -1465743184));
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        arr_18 [i_1] [i_1] [i_1] [i_2] [i_1] [i_1] = ((((-(arr_10 [i_1] [i_1] [i_1] [i_1]))) - 120));
                        arr_19 [i_1] [i_2] [7] [i_3 + 1] [i_5] = (((0 != 6478969) ? (arr_0 [i_1]) : ((-1465743184 ? -6478970 : 1))));
                    }
                    arr_20 [i_3] [i_2] [i_2] [i_1] = (~6478969);
                }
            }
        }
    }
    #pragma endscop
}
