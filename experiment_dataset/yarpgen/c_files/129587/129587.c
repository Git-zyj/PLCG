/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129587
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_20 = var_2;
        var_21 = var_7;
        arr_3 [i_0] [i_0] = 19;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_22 += (arr_6 [i_2 + 1] [i_3]);
                        var_23 = (!(arr_8 [i_2 - 1]));
                        arr_13 [i_1] [i_2 + 1] [i_3] [i_1] [i_1] = (((arr_10 [i_2 - 1] [i_2] [i_2 + 2] [i_1]) < (arr_10 [i_2 + 1] [i_2 + 2] [i_2 + 2] [i_2])));
                    }
                }
            }
        }
        var_24 ^= (((arr_9 [1] [i_1] [1] [10]) ? (arr_9 [12] [i_1] [i_1] [i_1]) : (arr_11 [i_1] [i_1] [i_1] [i_1] [i_1])));
        arr_14 [i_1] [i_1] = (arr_7 [i_1]);

        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            var_25 = (arr_12 [i_1] [i_5]);
            /* LoopNest 2 */
            for (int i_6 = 2; i_6 < 20;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    {
                        arr_22 [i_1] [i_5] [i_5] [i_7] = (((arr_21 [21] [i_6 + 2] [i_6 + 1] [i_7]) <= (arr_9 [i_6] [i_6 + 2] [i_6 + 1] [i_6 - 1])));
                        var_26 = (arr_4 [i_1]);
                        var_27 = (max(var_27, (((-(arr_19 [i_6 - 1]))))));
                        var_28 = 1;
                    }
                }
            }
        }
        var_29 = ((((arr_17 [i_1]) ? 65535 : var_15)));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 17;i_8 += 1)
    {
        arr_26 [i_8] = ((~(((arr_12 [i_8] [1]) ? (arr_11 [11] [i_8] [i_8] [i_8] [i_8]) : var_8))));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                {
                    arr_32 [i_8] = (arr_27 [i_8] [i_9] [i_9]);
                    arr_33 [i_8] [6] [i_8] [i_10] = arr_6 [i_8] [i_8];
                    var_30 = (min(var_30, (arr_23 [i_8])));
                    var_31 = (((arr_15 [i_8] [i_8]) ? -28734 : (arr_23 [i_10])));
                }
            }
        }
    }
    for (int i_11 = 3; i_11 < 18;i_11 += 1)
    {
        arr_37 [i_11] = (min(var_1, (min((arr_8 [i_11 - 1]), (((8 > (arr_9 [i_11] [i_11] [12] [i_11 - 1]))))))));
        arr_38 [i_11] [i_11] = (arr_19 [i_11 - 1]);
        var_32 = (min((max((((arr_12 [15] [i_11 + 1]) ^ var_6)), ((235 ? var_2 : 0)))), var_8));
    }
    var_33 = ((~(((~2147483647) & var_1))));
    var_34 = (max((max(var_15, 111)), ((min(var_17, var_0)))));
    #pragma endscop
}
