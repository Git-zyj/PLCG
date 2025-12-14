/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_0 ? (max(((var_10 ? -2340 : var_11)), ((max(var_7, var_9))))) : var_0));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_13 = (~4290452630316926773);
        arr_2 [i_0] = (((((arr_1 [i_0]) > var_1)) ? (arr_0 [i_0]) : (arr_1 [i_0 + 1])));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_14 = ((-((-2363 ? -var_6 : ((min(var_10, (arr_4 [i_1]))))))));
        arr_5 [i_1] = (((!(arr_1 [i_1]))) ? 2329 : (min(var_2, (arr_3 [i_1]))));
        arr_6 [7] = (arr_1 [i_1]);
    }
    for (int i_2 = 1; i_2 < 10;i_2 += 1)
    {
        var_15 |= (((((-32205 ? (min((arr_0 [2]), 30738)) : ((var_3 * (arr_7 [i_2] [i_2])))))) ? (min((max(var_1, 4718066314004034583)), ((((arr_1 [i_2 + 2]) ? var_9 : (arr_0 [0])))))) : var_0));
        arr_9 [i_2] = ((-(((((var_6 / (arr_7 [i_2] [i_2])))) ? (arr_1 [i_2 - 1]) : (arr_8 [i_2 - 1])))));

        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            var_16 &= (arr_10 [i_2]);
            var_17 = (((arr_0 [4]) ? ((min(((((arr_11 [i_3]) || var_7))), (min(var_10, var_7))))) : ((((-12388 || -1) >= ((((arr_1 [i_3]) && (arr_11 [i_2])))))))));

            /* vectorizable */
            for (int i_4 = 1; i_4 < 10;i_4 += 1)
            {
                arr_15 [i_4 + 1] [i_3] [i_2] = -0;
                var_18 = ((~((~(arr_11 [i_2])))));
            }
            /* vectorizable */
            for (int i_5 = 3; i_5 < 13;i_5 += 1)
            {
                var_19 = (((((30629 ? var_0 : var_7))) ? (arr_14 [i_2]) : (arr_1 [i_2 + 1])));

                for (int i_6 = 3; i_6 < 11;i_6 += 1)
                {

                    for (int i_7 = 1; i_7 < 13;i_7 += 1)
                    {
                        var_20 = (30644 % 15772);
                        var_21 = var_3;
                    }
                    arr_24 [i_2] [i_3] [i_5] [i_6] [i_5] = (arr_12 [i_6] [i_5] [i_2] [i_2]);
                    var_22 = (min(var_22, (((((((arr_8 [i_6]) ? (arr_22 [4] [i_5] [i_5] [i_5] [6]) : var_7))) ? ((-(arr_19 [i_6 - 3] [i_2 - 1] [i_2 - 1]))) : ((-193259125 / (arr_14 [i_2]))))))));
                    var_23 = var_7;
                }
                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    var_24 = ((!(arr_7 [i_5 - 2] [i_2 + 3])));
                    var_25 = ((-(arr_20 [i_2] [i_3] [i_5 - 1] [i_5])));
                    arr_28 [i_8] [i_5] [i_5] [i_2] = (((arr_26 [i_5] [i_5] [i_5 + 1] [i_5 - 1]) && var_3));
                }
                for (int i_9 = 1; i_9 < 11;i_9 += 1)
                {
                    var_26 += var_8;
                    var_27 ^= ((-(arr_12 [i_2 + 3] [i_5 - 2] [i_5 - 2] [i_9 + 2])));

                    for (int i_10 = 1; i_10 < 13;i_10 += 1)
                    {
                        arr_34 [i_2] [i_2] [i_5 + 1] [i_5] [i_3] = (((arr_22 [i_2] [i_2] [i_2 + 3] [i_2] [i_5]) ? (((0 * (arr_22 [i_2] [i_3] [i_5] [0] [i_5])))) : var_11));
                        var_28 = 9443412211927152482;
                    }
                    arr_35 [i_5] = (~var_11);
                }
                var_29 = (((arr_20 [i_5] [i_5] [i_5 + 1] [i_5]) | (((arr_30 [i_2 + 2] [i_3] [i_5] [i_5 - 2] [i_5 - 2]) ? 0 : (arr_8 [i_2])))));
                var_30 |= 82;
            }
            var_31 = (max((((arr_32 [i_2] [i_2] [i_2 + 2] [i_2 + 1] [11] [i_2 + 3]) * (arr_30 [i_2] [i_2 + 1] [i_2] [i_2] [i_2 - 1]))), ((((arr_26 [i_2] [6] [i_2] [i_2 - 1]) ^ (arr_32 [i_2] [i_2 - 1] [i_2 + 4] [i_2 + 4] [i_2] [i_2 - 1]))))));
            var_32 = (((((~19) * (!3062474349))) - var_1));
        }
    }
    /* vectorizable */
    for (int i_11 = 4; i_11 < 17;i_11 += 1)
    {
        var_33 = (arr_36 [i_11 - 3]);

        for (int i_12 = 1; i_12 < 17;i_12 += 1) /* same iter space */
        {
            var_34 = (arr_39 [i_11 - 2] [i_12 + 1]);
            var_35 = ((~(arr_40 [i_11 - 2] [i_12 - 1])));
        }
        for (int i_13 = 1; i_13 < 17;i_13 += 1) /* same iter space */
        {
            var_36 = (-32762 != 511);
            var_37 = (14 + 54);
        }
        for (int i_14 = 0; i_14 < 18;i_14 += 1)
        {
            arr_46 [6] = ((64 ? 30626 : 503));

            for (int i_15 = 0; i_15 < 18;i_15 += 1)
            {
                var_38 = var_0;
                var_39 += (((arr_43 [i_11 - 2]) ? ((var_11 ? var_10 : (arr_48 [i_11]))) : ((~(arr_41 [i_11] [i_11])))));
            }
            for (int i_16 = 0; i_16 < 18;i_16 += 1)
            {
                var_40 = ((!(arr_40 [i_11 + 1] [i_11 - 1])));
                var_41 &= (arr_42 [i_11]);
            }
            for (int i_17 = 0; i_17 < 1;i_17 += 1)
            {
                var_42 = var_2;
                var_43 = (11971 * 230);
                var_44 ^= (((arr_37 [i_11 - 1]) ^ (arr_37 [i_11 - 1])));
            }
            var_45 = (-(arr_49 [i_11 + 1]));
        }
    }
    #pragma endscop
}
