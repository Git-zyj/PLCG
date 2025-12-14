/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178262
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_9 ? (((var_10 ? (((var_14 ? -111 : 49975))) : var_0))) : 0));

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = (((((var_15 ? 0 : 1228039029)))));
        var_20 = ((((((((var_8 ? var_13 : var_4))) ? (var_5 > var_14) : (min(var_3, 0))))) ? ((min((arr_1 [i_0 + 2] [i_0]), (max(6776, -35))))) : 0));
        arr_3 [i_0] [i_0 - 1] = ((+(max((var_9 | var_17), var_18))));
        var_21 = (max(var_21, -1657635208));
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            var_22 = (min(((0 + (arr_6 [i_1 + 1] [i_1 - 1] [i_1 - 1]))), ((~(arr_6 [i_1 - 1] [i_1 + 1] [i_1 + 1])))));
            var_23 = var_13;
            var_24 = 0;
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
        {
            arr_12 [i_1 - 1] = (arr_4 [i_1 - 1] [i_3]);
            arr_13 [i_1 + 1] = ((((((arr_11 [i_1 - 1]) ? var_4 : (arr_6 [i_1 + 1] [i_3] [i_1])))) ? -15525 : (arr_9 [i_1] [i_1 - 1])));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
        {
            arr_18 [i_1] = (arr_5 [i_4] [i_1]);

            for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
            {
                var_25 = (arr_20 [i_5] [i_1] [i_1 + 1] [i_1 + 1]);
                var_26 = var_13;
            }
            for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
            {
                arr_25 [i_1] [i_4] = (((arr_4 [i_1 - 1] [i_1 + 1]) >= ((12264430480508575367 ? 18095 : var_12))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 14;i_8 += 1)
                    {
                        {
                            var_27 = ((((var_0 ? var_15 : 0)) << (((arr_29 [i_1] [i_1 - 1] [i_1 + 1] [i_1] [i_1]) - 1765318877))));
                            arr_31 [i_8] [i_8] [1] [i_7] [i_7] [i_7] [i_7] = 0;
                            var_28 = ((-114 & (arr_9 [i_8 + 1] [i_8 + 1])));
                        }
                    }
                }
            }
            arr_32 [i_1] = (var_11 ? (arr_30 [i_1 + 1] [i_1 - 1] [i_1] [i_1 - 1] [i_4]) : (arr_30 [10] [i_1 + 1] [i_1 + 1] [i_1] [i_4]));
        }
        arr_33 [i_1] [i_1] = (((((var_18 ? -var_4 : 14241))) ? (((((arr_11 [i_1 + 1]) | 3857565022)) | 40917)) : (var_10 || 71)));
    }
    for (int i_9 = 0; i_9 < 11;i_9 += 1)
    {
        arr_38 [i_9] = (~0);
        var_29 = (arr_15 [i_9] [i_9] [i_9]);
    }
    var_30 &= var_5;
    var_31 = var_6;
    #pragma endscop
}
