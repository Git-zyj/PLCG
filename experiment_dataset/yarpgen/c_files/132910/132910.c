/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_15 = (min(var_15, (((arr_3 [i_0]) < (!var_11)))));
                    arr_7 [i_0] = 2279788417;
                    var_16 = (var_6 >= 4128009072);
                    arr_8 [i_2] [i_2] [i_2] = (((~(arr_0 [i_0] [i_2]))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 8;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        {
                            arr_17 [i_4] [i_4] = (max((max(4, (arr_14 [i_6] [i_6] [i_6]))), (((((var_11 ? var_14 : var_7)) < 1602204495)))));
                            var_17 &= ((+((var_11 ? ((var_0 ? (arr_6 [i_3]) : 4)) : 18446744073709551594))));
                            var_18 -= (max((max((arr_13 [i_4 + 2] [i_4 + 2]), 1)), (((max(var_1, (arr_3 [i_6]))) & var_2))));
                        }
                    }
                }

                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    var_19 = (max(((-(var_8 >= 1))), var_9));
                    arr_22 [i_3] [i_3] = ((((arr_0 [i_4 + 2] [i_4 + 2]) > (arr_21 [i_4 + 1] [i_4 - 2] [i_4 - 1]))));
                    arr_23 [i_3] [i_3] [i_3] [i_3] = 11059241197137268925;
                }
            }
        }
    }
    #pragma endscop
}
