/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139273
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [i_0] [22] [i_0] [22] = var_9;

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_12 [2] [i_1] [0] [i_3] |= ((((((arr_5 [i_2 - 3]) >= var_18))) / 18025));
                        arr_13 [i_0] [i_0] [19] [i_0] [i_0] [i_3] = (arr_2 [i_0] [i_2 + 1] [i_3]);
                        arr_14 [i_0] [i_1] [22] [i_3] = (min(2785427342295852778, 1));
                        arr_15 [i_3] [i_3] [i_2] [1] = (!((((arr_3 [i_0] [i_1] [4]) - (arr_8 [i_2 - 2] [i_1 - 1] [i_1 - 1])))));
                        arr_16 [i_0] [i_1] [i_2] [8] [i_3] = (arr_4 [i_0] [9] [i_0]);
                    }
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        arr_19 [i_0] [i_0] [i_2 - 2] [19] = (!((min(((var_14 << (-112 + 125))), (~1)))));
                        arr_20 [i_0] [i_0] [i_0] [i_0] = -18490;
                        arr_21 [i_0] [i_0] [i_4] = 72;
                    }
                    for (int i_5 = 1; i_5 < 22;i_5 += 1)
                    {
                        arr_24 [18] [i_1] [i_2] [i_5] |= ((0 ? -66 : 32465));
                        arr_25 [i_0] [i_0] [22] [1] [i_0] [7] = (max((max((arr_2 [i_2 - 2] [i_5 - 1] [i_5]), 5611)), (arr_6 [i_0] [i_1] [i_1 - 1])));

                        /* vectorizable */
                        for (int i_6 = 1; i_6 < 23;i_6 += 1)
                        {
                            arr_29 [i_0] [5] [i_0] [i_5] [0] [1] = var_18;
                            arr_30 [2] [2] [i_2] [20] [i_2 - 3] [i_2 - 2] = (((arr_17 [i_0] [12] [12] [i_0] [4] [12]) == (502048884 >= 1)));
                        }
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            arr_34 [i_0] [i_0] [i_1] [i_0] [i_0] [i_7] = 2372469942;
                            arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] = (max(var_12, ((1 ? (arr_11 [i_0] [1] [i_2] [13] [i_7] [i_2]) : ((1235351638 ? var_6 : var_17))))));
                        }
                    }
                }
            }
        }
    }
    var_19 = 2499748699;
    var_20 = (((-var_16 ? -var_3 : var_16)));
    #pragma endscop
}
