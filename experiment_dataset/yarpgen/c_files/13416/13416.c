/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= (((var_5 ? -7593928951571850231 : ((var_8 ? var_1 : 33439)))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_11 = -0;

            for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
            {
                arr_8 [i_0] [i_1] [i_0] [i_0] |= (arr_4 [i_0] [i_1] [i_1]);
                var_12 = -25977;
                var_13 = (max(var_13, (((-(arr_7 [i_0] [i_0]))))));
                var_14 = (min(var_14, 15818434289776425874));
                var_15 = (min(var_15, ((!(arr_5 [i_0] [i_0])))));
            }
            for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
            {
                var_16 = (max(var_16, (!25976)));
                arr_11 [i_0] [1] [i_1] [i_1] = 1939385382;
                var_17 ^= ((+(((arr_3 [i_3] [i_1]) ? 0 : var_2))));
            }
            for (int i_4 = 1; i_4 < 14;i_4 += 1)
            {
                var_18 &= var_5;
                var_19 = (max(var_19, -26000));
            }
        }
        for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    {
                        var_20 ^= (((!(arr_10 [i_0] [i_5] [i_6]))) ? (((-25996 ? 0 : var_3))) : ((0 ? -19445 : 10777604972712999094)));
                        arr_23 [i_6] [i_6] [i_6] = var_5;
                    }
                }
            }
            var_21 = 10029;
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
        {

            for (int i_9 = 2; i_9 < 15;i_9 += 1)
            {
                var_22 += var_7;
                var_23 ^= ((-(arr_2 [i_9 - 1])));
            }
            for (int i_10 = 2; i_10 < 16;i_10 += 1)
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 4; i_12 < 16;i_12 += 1)
                    {
                        {
                            var_24 &= (116 ? (arr_34 [i_12] [6] [i_12 - 4] [i_12 - 1] [6] [i_12]) : (arr_34 [i_12] [i_12] [i_12 - 4] [i_12 - 1] [i_12] [i_12]));
                            var_25 = (max(var_25, (~0)));
                            var_26 = (min(var_26, 6));
                        }
                    }
                }
                arr_36 [4] [i_8] [i_8] [i_0] |= 6;
                var_27 += (((!1705596390) ? var_3 : (arr_5 [i_0] [i_10 - 2])));
                var_28 = (min(var_28, var_1));
                var_29 -= 3345245918;
            }
            var_30 = (min(var_30, (arr_4 [i_8] [i_8] [i_8])));
            arr_37 [i_0] [i_8] [i_8] |= ((-(arr_1 [i_0])));
        }
        var_31 += -1;
    }
    for (int i_13 = 0; i_13 < 17;i_13 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_14 = 0; i_14 < 17;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 17;i_16 += 1)
                {
                    {
                        var_32 = (min(var_32, var_8));
                        var_33 = 1073479680;
                    }
                }
            }
        }

        for (int i_17 = 1; i_17 < 16;i_17 += 1)
        {
            var_34 = (min(var_34, (!1911321641)));
            var_35 = (max(var_35, (arr_9 [i_13] [i_17 + 1] [i_17 - 1] [i_17 + 1])));
        }
        for (int i_18 = 0; i_18 < 17;i_18 += 1)
        {
            arr_55 [4] = (arr_33 [i_13] [i_13] [1] [i_13]);
            var_36 = (arr_20 [i_13] [i_13] [i_13] [i_18]);
        }
    }
    var_37 = (max(var_37, var_9));
    var_38 = (!var_6);

    for (int i_19 = 0; i_19 < 17;i_19 += 1)
    {
        arr_59 [i_19] = (((0 > (arr_31 [i_19] [9]))));
        arr_60 [i_19] = ((((!((!(arr_12 [i_19]))))) ? (25986 && 26020) : 19));
        arr_61 [i_19] = ((((arr_41 [10] [8]) + 2147483647)) << (((((-32767 - 1) + 32773)) - 5)));
        /* LoopNest 2 */
        for (int i_20 = 0; i_20 < 1;i_20 += 1)
        {
            for (int i_21 = 0; i_21 < 17;i_21 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_22 = 4; i_22 < 16;i_22 += 1)
                    {
                        for (int i_23 = 0; i_23 < 17;i_23 += 1)
                        {
                            {
                                var_39 = 1;
                                var_40 -= ((!15559447917245605248) ? (arr_17 [i_19] [i_19] [i_19]) : (var_3 > 31917));
                                var_41 = (-(arr_34 [i_22 + 1] [i_22] [i_22] [i_22] [i_22 - 4] [i_22]));
                                var_42 = (min(var_42, (((var_2 ? -6815684450232247898 : 1145291732)))));
                            }
                        }
                    }
                    arr_74 [i_19] [6] [i_19] &= var_4;
                }
            }
        }
    }
    #pragma endscop
}
