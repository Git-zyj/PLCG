/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103825
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_5 / (var_7 && var_5)));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        var_18 = (((((max(var_10, var_6)))) && (1664910731 || 2064384)));
                        var_19 = ((var_4 | ((var_11 << (((min(var_8, var_8)) - 933238072))))));
                        var_20 = (max(var_20, ((max(((((min(var_10, var_10)) && (((var_8 << (var_1 - 31))))))), (min(var_11, var_4)))))));
                        arr_11 [6] [i_1 - 1] [i_1] [10] [i_1] [i_3] = (min((max((var_1 != var_4), (min(var_8, var_5)))), (((max(var_16, var_3))))));
                        var_21 = (min(var_21, ((min(var_0, var_2)))));
                    }
                }
            }
        }
        var_22 |= (max((max(var_9, ((var_4 << (var_2 - 6638))))), var_7));
        arr_12 [1] = var_8;

        for (int i_4 = 3; i_4 < 11;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 8;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    {
                        arr_21 [3] [i_4 - 1] [1] [i_4 - 1] [3] = (min((max(((min(var_13, var_16))), (var_4 | var_1))), (var_9 > var_6)));
                        var_23 ^= (var_14 <= var_5);
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 10;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    {
                        var_24 = ((((0 > 26) % (min(-2064385, 32767)))));
                        arr_27 [i_7] = min(var_3, (var_2 / var_11));
                    }
                }
            }
        }
        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {

            /* vectorizable */
            for (int i_10 = 2; i_10 < 11;i_10 += 1)
            {

                for (int i_11 = 0; i_11 < 12;i_11 += 1)
                {
                    arr_38 [i_0] [i_11] [i_0] = ((var_5 != (var_14 >= var_10)));
                    var_25 = 2064375;
                    var_26 = var_15;
                }
                for (int i_12 = 0; i_12 < 12;i_12 += 1)
                {

                    for (int i_13 = 0; i_13 < 12;i_13 += 1)
                    {
                        arr_43 [i_0] [i_9] [i_9] [i_9] [i_9] [i_12] [i_13] = var_1;
                        arr_44 [i_0] [i_10] [i_12] = (var_2 != var_10);
                    }
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        var_27 = var_5;
                        arr_47 [i_0] [i_0] [i_10 - 2] [i_10 - 2] [i_12] [i_14] |= var_4;
                    }
                    for (int i_15 = 0; i_15 < 12;i_15 += 1)
                    {
                        arr_51 [1] [1] [i_10 - 2] [i_12] [i_12] = (var_10 << (var_6 + 8418259707912593220));
                        var_28 = (var_6 - var_14);
                        var_29 &= (((var_1 || var_7) || var_16));
                        arr_52 [i_12] = var_3;
                        var_30 = var_1;
                    }
                    var_31 = (((var_13 == var_2) > (var_4 | var_8)));

                    for (int i_16 = 0; i_16 < 12;i_16 += 1) /* same iter space */
                    {
                        arr_55 [i_12] [i_12] [i_10 - 1] [i_9] [i_12] = (var_12 / var_5);
                        arr_56 [i_0] [i_12] [i_0] [1] [i_0] = var_0;
                        var_32 = var_7;
                    }
                    for (int i_17 = 0; i_17 < 12;i_17 += 1) /* same iter space */
                    {
                        arr_59 [4] [i_12] = (var_0 - var_10);
                        arr_60 [i_12] [4] [i_10] [i_12] [i_12] [i_17] = (((var_5 <= var_12) && var_8));
                        var_33 = (min(var_33, (var_9 * var_14)));
                    }
                    for (int i_18 = 0; i_18 < 12;i_18 += 1) /* same iter space */
                    {
                        arr_64 [i_0] [i_9] [i_12] = var_7;
                        arr_65 [i_12] [i_12] [i_10] [i_9] [i_12] = var_12;
                        var_34 = ((var_15 << (var_15 - 121)));
                    }
                }
                for (int i_19 = 0; i_19 < 12;i_19 += 1)
                {

                    for (int i_20 = 0; i_20 < 12;i_20 += 1) /* same iter space */
                    {
                        var_35 = var_14;
                        arr_70 [i_0] [i_0] [i_10] = (var_8 <= var_8);
                        arr_71 [i_0] [i_9] [i_10 - 1] [i_10 - 1] [i_19] [i_19] = (var_6 % var_7);
                        arr_72 [i_0] = var_11;
                    }
                    for (int i_21 = 0; i_21 < 12;i_21 += 1) /* same iter space */
                    {
                        arr_77 [3] [i_9] [i_9] = (((var_4 && var_2) | var_11));
                        var_36 = (var_0 | var_5);
                    }
                    arr_78 [i_0] = var_7;
                    var_37 = var_12;
                }
                for (int i_22 = 0; i_22 < 12;i_22 += 1)
                {
                    arr_82 [1] = (var_16 * var_10);
                    var_38 *= ((var_16 & (var_13 | var_7)));
                    var_39 = (max(var_39, var_6));
                }
                /* LoopNest 2 */
                for (int i_23 = 0; i_23 < 1;i_23 += 1)
                {
                    for (int i_24 = 1; i_24 < 10;i_24 += 1)
                    {
                        {
                            arr_87 [i_9] [i_9] [i_24] = var_16;
                            arr_88 [3] [i_24] [4] [i_9] [i_24] [i_0] = var_10;
                            arr_89 [i_24] [1] [i_23] [i_24] [i_24] [i_24] = (var_16 | var_3);
                        }
                    }
                }
            }
            var_40 -= var_16;
        }
        var_41 = (max((var_2 % var_0), var_2));
    }
    for (int i_25 = 0; i_25 < 17;i_25 += 1)
    {
        var_42 = (((var_3 / var_1) / var_16));
        var_43 = (max(var_43, ((((-29 + 2147483647) >> 1)))));
        var_44 *= var_9;
    }
    #pragma endscop
}
