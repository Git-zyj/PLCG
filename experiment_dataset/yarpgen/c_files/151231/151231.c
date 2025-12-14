/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151231
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] [8] = ((1 + ((min(var_17, var_7)))));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            arr_5 [8] [i_1] = (arr_1 [i_0]);
            arr_6 [i_0] = (((var_5 || var_11) ? (arr_4 [i_1 - 1] [i_1] [i_1 + 1]) : (arr_4 [i_0] [i_0] [i_0])));
            arr_7 [i_0] = (((arr_3 [i_1 - 1] [i_1 + 1] [i_1 + 1]) ? ((-(arr_0 [i_1]))) : (var_7 > var_8)));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        arr_12 [i_3] [i_2] [i_1 - 1] [11] = (-108 / 1);
                        arr_13 [i_0] [i_1 - 1] [i_2] = ((((57990 | (arr_11 [i_0] [i_1])))) <= ((35518 ? var_3 : (arr_9 [i_3]))));

                        for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
                        {
                            arr_17 [i_4] [i_3] [i_2] [i_0] [i_0] = var_0;
                            arr_18 [i_0] [1] = 3214556580544794567;
                            arr_19 [i_0] [i_1] [i_1] [i_3] |= ((-((var_8 ? var_10 : (arr_9 [i_0])))));
                        }
                        for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
                        {
                            arr_23 [i_0] [i_2] [i_5] = var_1;
                            arr_24 [i_5] [i_3] [i_2] [i_1] [i_5] = (((arr_22 [i_0] [i_1] [6] [i_3] [i_5] [i_1 - 1]) ^ (arr_22 [i_0] [i_2] [i_2] [i_3] [i_5] [i_1 - 1])));
                            arr_25 [i_5] [i_3] [i_2] = var_8;
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                {
                    arr_30 [i_7] [i_6] [i_7] = (arr_15 [i_0] [i_0] [i_7] [i_7] [i_6] [i_7]);
                    arr_31 [10] = (max((arr_3 [i_0] [i_0] [i_0]), ((~((14206 >> (726451714 - 726451702)))))));
                }
            }
        }
    }
    var_19 = var_10;
    #pragma endscop
}
