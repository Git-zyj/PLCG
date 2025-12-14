/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111455
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (-(arr_1 [i_0]));
        var_11 = -var_10;
        var_12 = (max(var_12, (((((var_8 ? (arr_1 [i_0]) : (arr_2 [i_0])))) ? 12 : (arr_0 [i_0])))));
        var_13 = (((arr_1 [i_0]) == (arr_1 [i_0])));
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_14 = (min(var_14, (arr_1 [i_1])));
        var_15 = (max(var_15, (((arr_5 [i_1] [i_1]) ? var_4 : (arr_1 [i_1])))));
    }
    var_16 = var_7;

    /* vectorizable */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        arr_8 [i_2] [i_2] = ((!(arr_6 [i_2])));
        var_17 = -36;
        arr_9 [6] = (((28 >= 228) ? var_2 : var_6));
        var_18 = (max(var_18, -var_8));
    }
    for (int i_3 = 1; i_3 < 15;i_3 += 1)
    {
        var_19 = (min((max(35, var_8)), (((22 ? (arr_7 [i_3 + 1]) : (arr_7 [i_3 + 2]))))));

        /* vectorizable */
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            var_20 = 121;
            arr_16 [i_3] = (arr_15 [i_3] [i_4]);
        }
        /* vectorizable */
        for (int i_5 = 1; i_5 < 17;i_5 += 1)
        {
            var_21 = (min(var_21, var_3));
            var_22 = (min(var_22, (((var_0 ? (arr_12 [i_3 + 3]) : (arr_18 [i_3 + 2] [i_5 + 1]))))));
            var_23 &= ((~(arr_0 [i_5 - 1])));
        }
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            var_24 = (min(var_24, var_6));
            arr_21 [i_6] [i_3] = (min((min(157, 921069504)), 228));
            var_25 = (min(var_25, (((!224) ? (max(((var_3 ? var_10 : var_3)), (arr_1 [i_6]))) : (((!(arr_17 [i_3 + 1]))))))));
            arr_22 [i_3 + 2] [i_6] = (45 >= var_6);
        }
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 21;i_7 += 1)
    {
        var_26 = (min(var_26, (((-(arr_24 [2]))))));
        var_27 = ((!(arr_24 [i_7])));
    }
    #pragma endscop
}
