/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125835
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_18 = (max((((((var_4 ? var_7 : 32520))) ? ((var_0 ? (arr_4 [i_2] [i_2] [i_2] [i_2]) : (arr_3 [i_0] [22] [7]))) : ((var_4 + (arr_1 [i_0] [i_0]))))), ((~(33015 > 33015)))));
                    arr_6 [i_0] [i_2] = ((((var_0 != ((var_1 ? 33015 : (arr_4 [i_0] [i_1] [18] [i_2]))))) ? (!3464) : (arr_1 [i_1] [i_0])));

                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        var_19 = max((max(((max(var_3, var_2))), ((32520 ? 33015 : 33015)))), ((~(~0))));
                        var_20 = ((!(arr_9 [i_2] [i_2] [i_2] [i_2])));
                    }
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        var_21 = (max(106, 32520));

                        for (int i_5 = 1; i_5 < 24;i_5 += 1)
                        {
                            var_22 = (((max((((1725707613 ? 0 : var_3))), (max(var_9, (arr_8 [i_5] [i_5] [i_2] [i_5] [i_0]))))) != ((((((-1000171990 ? var_12 : 1)) > (max(-29864, 219630777))))))));
                            var_23 = (!((((((~(arr_14 [i_0] [23] [i_5 - 1] [1] [i_0] [i_1])))) ? -var_10 : 32520))));
                        }
                        arr_17 [i_0] [i_0] [10] [i_0] [i_2] [i_4] = (~1);

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
                        {
                            var_24 = (min(var_24, (((arr_4 [i_0] [i_0] [i_0] [i_0]) ? (arr_4 [i_1] [i_1] [i_1] [i_1]) : (arr_11 [0] [i_1] [i_2] [i_4])))));
                            arr_22 [i_6] [i_4] [1] [1] [1] [i_0] &= (1190682158 % 1);
                            arr_23 [9] [2] [i_2] [i_2] [i_2] = (-(arr_19 [i_0] [i_1] [i_2] [i_4] [1]));
                            var_25 = (min(var_25, (((var_10 ? 5963 : 33015)))));
                            var_26 = (((((var_15 ? 1 : var_3))) ? -89 : (((arr_10 [i_1] [i_1] [i_1] [i_1] [i_1]) ? (arr_1 [i_6] [i_2]) : -766881147))));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 25;i_7 += 1) /* same iter space */
                        {
                            var_27 = (min(var_27, (arr_24 [i_0] [i_7] [i_7] [i_4] [i_7])));
                            var_28 = (min(var_28, (((-((33015 ? (arr_2 [i_0] [20]) : var_10)))))));
                            var_29 = var_1;
                            arr_26 [1] [i_1] [i_2] [i_4] [17] = (var_14 && var_12);
                        }
                    }
                }
            }
        }
    }
    var_30 &= (max(403899120, 106));
    #pragma endscop
}
