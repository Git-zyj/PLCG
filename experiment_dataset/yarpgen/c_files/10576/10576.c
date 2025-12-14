/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10576
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((min(((var_2 ? var_12 : var_7)), ((max(var_8, var_9)))))) ? var_12 : var_9));
    var_15 = (min(((min(-91, var_3))), (((min(var_3, var_11))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0 - 2] [i_2 - 2] [i_3 + 1] = ((((max((max(var_1, var_1)), var_1))) ? var_5 : (((((var_2 ? (arr_8 [i_0 - 2] [i_1 + 1] [i_2 - 1] [i_3 - 1] [i_0]) : var_9))) ? (!var_13) : ((var_4 ? var_0 : var_4))))));

                            for (int i_4 = 0; i_4 < 11;i_4 += 1)
                            {
                                arr_14 [i_0 - 3] [i_0] [i_2 - 1] [i_3 - 1] [i_4] = (min(94, 161));
                                arr_15 [i_3 + 1] [i_0] = ((~((~(arr_4 [i_0 - 1] [i_1 - 3] [i_2 - 2] [i_0 - 3])))));
                                var_16 = ((~(arr_7 [i_0 - 1] [i_0] [i_2 + 1] [i_4])));
                                arr_16 [i_0 - 1] [i_1 + 2] [i_1 + 2] [i_2 - 1] [i_3 + 2] [i_0] = (arr_13 [i_4] [i_3 + 1] [i_2 - 2] [i_1 + 1]);
                                arr_17 [i_0 - 1] [i_1 + 1] [i_0] [i_2 - 2] [i_3 - 1] [i_4] = (((!(arr_8 [i_0 + 1] [i_1 - 2] [i_1 + 1] [i_3 - 1] [i_0]))));
                            }
                            /* vectorizable */
                            for (int i_5 = 1; i_5 < 9;i_5 += 1)
                            {
                                var_17 = var_2;
                                arr_20 [i_0] [i_3 - 1] [i_2 + 1] [i_3 - 1] [i_5 + 1] = var_11;
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 10;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            {
                                arr_28 [i_0] [i_7 - 2] [i_6] [i_1 + 2] [i_0] = (((161 ? 166 : 1)));
                                arr_29 [i_0 + 1] [i_0 - 1] [i_8] [i_7 - 2] [i_1 + 1] [i_0] [i_1 - 3] = var_0;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
