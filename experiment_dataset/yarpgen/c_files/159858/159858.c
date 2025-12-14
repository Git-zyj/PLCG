/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_5 ? (max(((var_2 ? 1 : var_7)), (var_8 & var_6))) : -405453838));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_11 = (max(((-(arr_2 [i_0]))), (arr_2 [18])));
        var_12 |= (min((arr_0 [i_0]), (min((arr_0 [i_0]), (arr_0 [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 22;i_1 += 1)
    {
        var_13 *= ((!(((var_3 ? var_5 : (arr_6 [i_1]))))));

        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {
            var_14 = ((-(arr_9 [i_1 - 2] [0] [i_2])));
            var_15 = (arr_3 [i_2 - 1] [i_1 - 3]);
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    {
                        var_16 = ((!(!var_0)));
                        var_17 = ((~(arr_12 [i_1] [i_2] [i_1] [i_4])));
                    }
                }
            }

            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                arr_17 [i_5] [i_2] [5] [i_2] = (arr_8 [i_1] [13] [i_2]);
                var_18 = (arr_8 [2] [i_2] [i_2]);
            }
            for (int i_6 = 1; i_6 < 22;i_6 += 1)
            {
                var_19 = 143;
                var_20 = (((arr_14 [i_1] [i_1] [i_1] [22] [i_1] [i_1]) ^ (arr_10 [18] [i_6 - 1] [i_2 + 1] [18])));
            }
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                var_21 = var_0;
                var_22 *= (arr_4 [i_1]);
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        {
                            arr_27 [i_1] [i_1] [i_1] [1] &= ((-(arr_6 [i_1 - 3])));
                            arr_28 [i_2] [i_9] [i_2] [6] [9] = (!405453838);
                            var_23 |= 0;
                            arr_29 [i_1] [i_2] [i_2] [i_7] [i_1] [i_8] [i_9] = arr_23 [i_1] [i_2 + 1] [i_2 + 1] [i_9];
                        }
                    }
                }
                var_24 &= (arr_13 [1] [i_2]);
            }
        }
        var_25 = (~9382449294786572761);
    }
    var_26 &= -18;
    #pragma endscop
}
