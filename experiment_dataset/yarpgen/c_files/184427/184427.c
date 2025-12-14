/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184427
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(7, (max(var_5, var_4))));
    var_13 = var_11;
    var_14 = min(var_7, var_1);

    /* vectorizable */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_15 = ((((((arr_3 [i_2] [i_1] [i_0]) && var_5))) == ((((arr_9 [i_2] [i_0]) != 44336)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_19 [i_4] [i_0] [i_2] [i_0] [i_0] [i_0] = arr_16 [i_2] [i_3] [i_4];
                                var_16 ^= var_8;
                            }
                        }
                    }
                }
            }
        }
        var_17 = (max(var_17, (((((15 ? (arr_5 [i_0]) : (arr_13 [i_0] [i_0] [20] [i_0] [i_0] [i_0]))) == (arr_9 [i_0 + 1] [i_0]))))));
        arr_20 [i_0] [i_0] = (((~247) == (arr_3 [i_0] [i_0 - 2] [7])));
    }
    for (int i_5 = 2; i_5 < 11;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                {
                    arr_28 [i_5] [10] [i_7] = arr_12 [i_6] [i_7];
                    var_18 = (max(var_18, ((min(((var_1 * (arr_25 [i_5] [i_5 - 1]))), ((min((arr_25 [i_5] [i_5 + 1]), (arr_25 [i_5 + 2] [i_5 + 1])))))))));

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        var_19 &= (((51849 >= var_2) ? (arr_7 [i_6]) : (57901 >= var_1)));

                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            var_20 = 65535;
                            arr_34 [3] [i_8] [i_7] [i_6] [3] = var_3;
                        }
                        for (int i_10 = 0; i_10 < 15;i_10 += 1)
                        {
                            var_21 = ((-(arr_31 [i_5] [i_5 + 1] [i_5 + 3] [i_5 - 1] [i_5])));
                            var_22 = (min(var_22, ((((arr_27 [i_10]) ? (arr_29 [i_5 + 2] [i_5 + 1] [i_5 - 2] [i_5 - 1]) : (((arr_35 [i_5 + 4] [i_5 + 4] [i_7] [6] [i_5 + 4]) ? var_11 : (arr_9 [i_6] [1]))))))));
                            var_23 = -var_9;
                        }
                    }
                    arr_37 [i_5] [i_6] [i_7] = (~35172);
                    arr_38 [i_5] [i_5] [i_7] [i_7] = (min((61382 / 65024), (min((~var_2), (arr_29 [i_5 - 1] [i_5 + 3] [i_5 - 2] [i_7])))));
                }
            }
        }
        arr_39 [i_5 - 1] = (!76);
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 19;i_11 += 1)
    {

        for (int i_12 = 2; i_12 < 18;i_12 += 1)
        {
            var_24 = (max(var_24, 63));
            var_25 = (max(var_25, (((((10879 ? (arr_13 [i_11] [i_11] [i_12] [i_11] [i_11] [i_12]) : 63)) == 15)))));
            arr_44 [i_12 + 1] [i_12 - 1] = arr_41 [i_11] [i_12];
            arr_45 [i_12 + 1] = ((125 == (arr_43 [i_12 - 2] [i_12 - 1])));
        }
        arr_46 [6] [i_11] = 0;
        arr_47 [i_11] = (arr_40 [i_11] [7]);
    }
    #pragma endscop
}
