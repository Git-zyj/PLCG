/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12035
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [23] [i_1] = var_4;
                    arr_7 [i_1] [i_1] [18] = var_10;
                }
            }
        }

        for (int i_3 = 1; i_3 < 22;i_3 += 1)
        {
            arr_10 [i_0] [i_3] [i_0] = ((~(max((max(var_9, var_2)), (arr_2 [i_0])))));
            arr_11 [19] [i_3] [i_3] = (((((~(arr_3 [i_0] [3] [i_0])))) ? ((~(arr_5 [i_0 - 4] [i_0 + 4] [16] [i_3 - 1]))) : (arr_1 [23])));
        }
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            var_15 = (arr_12 [i_0]);
            arr_15 [i_0] [22] [i_4] = 1799217480;
            var_16 = (min((((~((min((arr_12 [i_0]), var_10)))))), var_13));
        }
        for (int i_5 = 4; i_5 < 22;i_5 += 1)
        {
            var_17 = ((var_5 - (((min(var_10, 1984))))));
            arr_19 [i_0] = (2950499541 ? (((arr_5 [i_0 - 3] [i_0 + 4] [i_5 - 4] [12]) ? (arr_5 [i_0 - 3] [i_0 + 2] [i_5 - 1] [22]) : 2303973088)) : (arr_5 [i_0 - 2] [i_0 + 4] [i_5 - 4] [i_5]));
        }
        arr_20 [i_0] = var_2;
    }
    for (int i_6 = 2; i_6 < 14;i_6 += 1)
    {
        arr_23 [1] = (arr_3 [i_6] [i_6] [i_6]);

        for (int i_7 = 2; i_7 < 13;i_7 += 1)
        {
            var_18 = ((arr_13 [20] [14] [14]) ? 1984 : ((max(var_11, var_2))));
            var_19 = 175;
        }
        for (int i_8 = 1; i_8 < 1;i_8 += 1)
        {
            var_20 = (~40);
            var_21 = (-(min((arr_22 [i_6 - 1]), var_6)));
            arr_30 [i_6] [i_8] [i_8] = var_7;
        }
        for (int i_9 = 4; i_9 < 14;i_9 += 1)
        {
            arr_34 [i_6] [1] [1] = (((((var_10 ? (arr_33 [i_9 - 1] [i_6 - 1] [i_6 - 1]) : (arr_31 [i_6 + 1])))) ? var_0 : ((((3419849551 ? var_13 : var_2)) >> (var_14 + 130)))));
            var_22 = (arr_33 [11] [i_9 + 1] [i_9]);
            /* LoopNest 2 */
            for (int i_10 = 2; i_10 < 12;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 14;i_11 += 1)
                {
                    {
                        var_23 = var_2;
                        var_24 = var_8;

                        for (int i_12 = 0; i_12 < 15;i_12 += 1)
                        {
                            var_25 = 2167401150;
                            var_26 = (min(var_26, ((((((~(arr_22 [i_10])))) == var_2)))));
                            arr_44 [i_6] [i_9] [i_11] [11] [i_12] = (min(((((arr_16 [i_6 + 1]) ? (arr_16 [i_6 + 1]) : var_12))), (((arr_16 [i_6 - 2]) ? var_6 : (arr_16 [i_6 - 1])))));
                            var_27 = 0;
                            arr_45 [i_11] [i_11] [i_11] = (!var_9);
                        }
                    }
                }
            }
        }
    }
    var_28 = var_6;
    #pragma endscop
}
