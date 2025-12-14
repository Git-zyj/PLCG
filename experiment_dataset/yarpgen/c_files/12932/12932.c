/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((!9223372036854775807) + var_8);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = ((~(arr_1 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 7;i_3 += 1)
                    {
                        var_16 = (max(var_16, (~255)));
                        var_17 = var_5;
                        var_18 = (arr_3 [i_1 - 1] [i_3 + 1] [i_0]);

                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            var_19 = (max(var_19, (((var_14 ? var_8 : var_10)))));
                            var_20 = (arr_15 [i_0] [i_3] [1]);
                            var_21 |= ((var_11 ? (arr_7 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 1]) : ((-1208643397 ? var_12 : var_4))));
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_22 = (((((var_0 ? var_12 : (arr_0 [3])))) && (~26)));
                            var_23 = (((((686386220 ? -1208643384 : -1208643381))) && 1208643397));
                            arr_19 [i_0] [i_0] [i_3 - 1] [i_0] = 1208643383;
                            var_24 = var_0;
                        }
                    }
                    var_25 = (arr_14 [i_1] [i_1 + 1] [i_0] [i_1] [i_1 + 1] [i_2]);
                    var_26 = (13 << 0);
                }
            }
        }
    }
    for (int i_6 = 1; i_6 < 12;i_6 += 1) /* same iter space */
    {
        arr_24 [i_6] = (arr_23 [i_6 + 1]);

        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            var_27 = (max(var_27, ((max((((max(var_0, var_8)) + (((arr_23 [i_7]) ? (arr_28 [i_6 + 2] [i_7]) : var_2)))), ((0 ? var_8 : var_6)))))));
            arr_29 [i_6] [i_6] [i_7] = (((((-124 % ((~(arr_26 [i_6 + 2] [i_6 + 2] [i_7])))))) | ((18446744073709551601 >> (-1 + 63)))));
            var_28 = (((var_7 && var_13) & (arr_23 [i_6])));
        }
    }
    for (int i_8 = 1; i_8 < 12;i_8 += 1) /* same iter space */
    {
        var_29 -= (((max(0, (-2147483647 - 1))) / (min((arr_22 [i_8 - 1]), (arr_22 [i_8 + 2])))));
        var_30 = (min(var_12, ((-(arr_27 [i_8 - 1] [i_8 + 2] [i_8 + 1])))));
        var_31 = max((max(var_9, (3 | var_12))), (arr_28 [i_8] [i_8 + 2]));
    }
    #pragma endscop
}
