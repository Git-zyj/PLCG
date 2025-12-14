/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            arr_6 [i_0] = (((~(!var_6))));
            arr_7 [i_0] = -1111596851;
            var_15 = (min(var_15, (((~(arr_3 [i_0] [i_0]))))));
        }
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    arr_17 [i_0] [10] [i_0] [15] [i_0] [i_0] = (!268435455);
                    var_16 = (max(var_16, 7));
                }
                var_17 = ((-(arr_13 [i_0] [i_2] [i_2] [9] [14] [i_2])));
            }
            for (int i_5 = 2; i_5 < 15;i_5 += 1)
            {
                var_18 -= ((-(!var_8)));

                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
                    {
                        arr_25 [i_0] [i_0] [i_0] [i_0] [11] [i_0] [i_0] = ((!((((-(arr_21 [i_0])))))));
                        var_19 = (((-(arr_15 [5] [i_2] [5]))));
                    }
                    for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
                    {
                        var_20 = ((!((((-(arr_19 [i_5] [i_5] [i_5])))))));
                        arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] = (((-(~-18871))));
                    }
                    arr_29 [i_0] [i_0] [i_0] [i_6] |= (~(((!(!630136420)))));
                    arr_30 [i_0] [i_2] [i_5] [i_6] [i_0] = ((!(!66)));
                }
                var_21 += ((!((!((!(arr_9 [i_0] [2])))))));
            }
            var_22 = ((-(((!(!var_9))))));
            arr_31 [i_0] [i_2] [i_2] &= ((!(((-(!var_5))))));
            var_23 = (~((~(~1479006804))));
            var_24 = (max(var_24, -var_3));
        }
        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            arr_34 [10] = ((!(((-(~var_3))))));
            var_25 = (-((-(((!(arr_24 [i_0] [i_0] [i_0] [i_0] [11] [i_0])))))));
        }
        arr_35 [2] = (--var_1);
        arr_36 [i_0] [i_0] = ((-(~9)));
    }
    for (int i_10 = 4; i_10 < 15;i_10 += 1)
    {
        var_26 -= ((!(~-8)));
        var_27 = (min(var_27, -528482304));

        for (int i_11 = 2; i_11 < 13;i_11 += 1)
        {
            /* LoopNest 2 */
            for (int i_12 = 3; i_12 < 15;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 16;i_13 += 1)
                {
                    {

                        for (int i_14 = 2; i_14 < 15;i_14 += 1)
                        {
                            arr_48 [i_10] = 114;
                            var_28 = ((~(((-(arr_32 [i_10 - 1]))))));
                        }
                        var_29 = (~var_8);
                        arr_49 [14] [3] [i_12 - 3] [15] [i_10] [i_13] = ((!(!var_5)));
                        arr_50 [i_10 - 2] [i_10] [i_10 - 3] [i_10 - 3] = (arr_24 [i_10 - 2] [i_11] [i_11] [i_11] [i_12] [i_13]);
                    }
                }
            }
            arr_51 [i_10] [i_10 - 2] [i_10] = ((~(((!((!(arr_12 [i_10] [i_10 + 1]))))))));
        }
        var_30 = -32765;
    }
    var_31 = ((!(~24812)));
    /* LoopNest 3 */
    for (int i_15 = 0; i_15 < 24;i_15 += 1)
    {
        for (int i_16 = 2; i_16 < 23;i_16 += 1)
        {
            for (int i_17 = 1; i_17 < 20;i_17 += 1)
            {
                {
                    arr_59 [i_15] = (((-(!var_4))));
                    arr_60 [i_15] = ((-((-(arr_52 [i_15])))));
                    var_32 -= ((-(((!(~-45))))));
                    arr_61 [i_16 + 1] &= ((((-(arr_56 [13] [i_16 - 1] [i_16 - 1])))));
                }
            }
        }
    }

    for (int i_18 = 1; i_18 < 18;i_18 += 1)
    {
        arr_64 [i_18] [i_18] &= (~62);
        arr_65 [i_18] [18] = (!var_4);
        var_33 = (max(var_33, -33554431));
    }
    for (int i_19 = 0; i_19 < 13;i_19 += 1)
    {
        var_34 += (((~(arr_54 [i_19]))));
        arr_70 [i_19] [i_19] &= (~(--93));
    }
    #pragma endscop
}
