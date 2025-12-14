/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132995
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_13 = ((1 | (arr_4 [i_1] [i_1])));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_16 [i_1] [i_1] [i_2] [i_3] [i_4] [i_1] = (arr_2 [5]);
                                var_14 = (arr_0 [i_3 + 1] [i_3]);
                                var_15 = 1;
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
                    {

                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            arr_22 [i_0] [i_1] [i_1] [12] [i_1] &= var_1;
                            arr_23 [0] [i_1] [0] [0] [i_6] = ((!(arr_2 [9])));
                            var_16 = (min(var_16, ((min(((~(max(4036461205, 8976748988153478823)))), ((max(1, (arr_21 [i_6] [6] [i_2] [i_1 + 3] [i_0])))))))));
                            var_17 = (max(var_17, var_9));
                        }
                        var_18 ^= (arr_14 [i_2]);
                        arr_24 [i_2] [i_2] [i_1] = ((((((min(var_11, var_8))) ? 2147483626 : -var_1))) ? (arr_10 [i_1] [i_0] [i_2] [i_5]) : var_0);
                        arr_25 [i_2] [i_1] = arr_13 [i_1] [i_2] [i_1] [i_1] [i_0];
                        var_19 = 1;
                    }
                    for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
                    {
                        var_20 = 1;

                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            var_21 = (min(var_21, ((min(-1, (((-632218818 / 8976748988153478822) * 2147483626)))))));
                            var_22 = (min(((-(-2147483627 + 4036461205))), ((4036461202 >> (4036461205 - 4036461188)))));
                        }
                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            arr_34 [i_0] [4] [i_0] [i_0] &= var_6;
                            var_23 = ((((!(arr_28 [i_1] [i_1] [i_2] [i_9])))) + (arr_10 [1] [1] [1] [i_9]));
                        }
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 16;i_10 += 1) /* same iter space */
                    {
                        var_24 = (((arr_31 [i_1 + 2] [1]) + (arr_31 [i_1 + 3] [2])));
                        var_25 = (arr_4 [i_1] [i_1]);
                        var_26 = (max(var_26, ((((0 && 34586) == 0)))));
                    }
                    for (int i_11 = 0; i_11 < 16;i_11 += 1)
                    {
                        arr_41 [i_1] [i_2] [8] [i_1] [i_1] = 1140662869775790440;
                        var_27 = (min(var_27, (arr_26 [i_0] [i_1] [i_2] [9])));
                    }
                }
            }
        }
    }
    var_28 = 1;
    #pragma endscop
}
