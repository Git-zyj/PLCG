/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170697
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((~((-1069166204 / (-127 - 1)))));
        arr_4 [i_0] = arr_0 [i_0] [i_0];
        var_20 = var_13;

        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            var_21 = (max(var_21, (arr_1 [i_0])));
            arr_9 [6] [6] = (((arr_6 [i_0] [i_0] [i_0]) > (arr_1 [i_1 - 1])));
            var_22 = ((!(arr_0 [i_1 - 1] [i_1 + 1])));
            var_23 -= arr_7 [i_1] [i_1 + 1] [i_1 - 1];
        }
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            arr_12 [i_2] = (~var_1);
            var_24 = (((arr_6 [i_0] [i_0] [i_0]) / var_17));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 9;i_4 += 1)
                {
                    {
                        var_25 = (min(var_25, ((((arr_10 [i_4 - 1]) ? (arr_1 [i_4 + 1]) : (arr_1 [i_4 + 1]))))));
                        var_26 = (((-103 + 2147483647) >> (var_2 + 1262487953)));
                        arr_18 [8] [i_0] = ((-(arr_5 [5] [i_2] [3])));
                    }
                }
            }
        }
        for (int i_5 = 1; i_5 < 7;i_5 += 1)
        {

            for (int i_6 = 2; i_6 < 7;i_6 += 1)
            {
                var_27 = var_0;
                arr_27 [i_0] [i_0] [i_5] = ((arr_2 [i_6 + 3] [i_5 + 3]) ^ (arr_2 [i_6 + 3] [i_5 + 3]));
                arr_28 [i_5] [i_5] [i_6] = (((arr_15 [i_0] [i_0] [i_0] [i_5 + 2]) ? ((((arr_14 [i_0] [i_0] [9] [i_0]) || (arr_0 [i_0] [2])))) : (arr_8 [i_0])));
                var_28 = (max(var_28, (var_16 > 118)));
            }
            var_29 = ((arr_0 [4] [4]) ? (arr_20 [i_5 + 3] [i_5 + 2]) : (arr_2 [i_0] [1]));
            var_30 = (min(var_30, (((var_5 & (arr_6 [i_5 + 1] [i_5 + 3] [i_5 - 1]))))));
            /* LoopNest 3 */
            for (int i_7 = 3; i_7 < 7;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 9;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        {
                            var_31 = (((5899319780031624967 / var_9) ? (arr_17 [i_8 - 1] [i_5 + 2]) : (~var_8)));
                            var_32 += ((!(arr_14 [i_0] [i_7] [7] [i_5 + 2])));
                            var_33 = var_0;
                            var_34 = var_17;
                        }
                    }
                }
            }
        }
    }

    for (int i_10 = 1; i_10 < 18;i_10 += 1)
    {
        var_35 = (max(var_35, ((min(-46, 1840721421)))));
        arr_42 [2] = (((((arr_41 [i_10] [i_10 + 1]) || (arr_40 [i_10]))) || (var_16 && var_9)));
    }
    var_36 = var_11;
    var_37 = var_9;
    #pragma endscop
}
