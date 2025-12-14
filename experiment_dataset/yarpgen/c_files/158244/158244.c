/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_0;
    var_16 = (max(var_16, ((((max(var_9, var_6))) - var_2))));
    var_17 *= (var_6 != var_0);

    for (int i_0 = 1; i_0 < 18;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((~(((~var_3) / ((1905026261307937280 ? var_11 : (arr_1 [i_0])))))));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        {
                            arr_14 [i_0] [i_1] [i_0] [i_0] = ((-(((((var_7 != (arr_8 [12] [12])))) / (((var_14 <= (arr_6 [i_2] [i_2] [i_2]))))))));
                            var_18 ^= var_8;
                        }
                    }
                }
                var_19 &= (((0 | (arr_7 [i_0 + 4] [i_0 + 4]))));
                arr_15 [i_0] [i_0] [i_2] = var_13;
            }
            var_20 = (min(var_20, (arr_6 [i_0] [4] [4])));
            var_21 -= (((max(var_4, (arr_3 [18] [i_0]))) <= var_3));
            arr_16 [0] [i_0] = ((!((min((arr_0 [12]), var_7)))));
        }
        for (int i_5 = 1; i_5 < 21;i_5 += 1)
        {

            for (int i_6 = 3; i_6 < 21;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 18;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        {
                            arr_26 [i_0] [i_5 - 1] [i_0] [i_5] [i_6 + 1] [i_7 + 1] [i_0] = var_0;
                            arr_27 [i_0] [i_0 + 1] [i_0] [i_0] [i_0] = var_2;
                        }
                    }
                }
                arr_28 [i_0] = var_14;
            }
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                for (int i_10 = 2; i_10 < 19;i_10 += 1)
                {
                    {
                        arr_34 [i_0] [i_0] [i_9] [i_0] = (-var_1 & -var_5);
                        arr_35 [i_0] [i_0] [i_0] = (max((((var_6 ? var_1 : var_5))), -var_4));
                    }
                }
            }
            var_22 = (!var_12);
        }
        for (int i_11 = 0; i_11 < 22;i_11 += 1)
        {
            var_23 = ((var_13 ^ (var_5 + var_13)));
            arr_38 [i_0] = (arr_11 [i_11] [i_0] [i_0 - 1] [i_11]);
        }
        arr_39 [i_0] [i_0] = ((32767 ? 186658710 : var_11));
        arr_40 [i_0] = var_8;
    }
    /* vectorizable */
    for (int i_12 = 1; i_12 < 18;i_12 += 1) /* same iter space */
    {
        arr_45 [i_12] &= 178;
        arr_46 [i_12] = var_9;
    }
    /* vectorizable */
    for (int i_13 = 1; i_13 < 18;i_13 += 1) /* same iter space */
    {
        arr_49 [i_13 - 1] = (~var_13);
        arr_50 [i_13] = (((var_0 ? (arr_43 [10]) : (arr_9 [6] [i_13] [15] [6] [i_13]))));
        var_24 -= ((-((~(arr_17 [13] [i_13])))));
        arr_51 [18] = ((var_7 != (((var_12 ? var_6 : (arr_31 [i_13 + 2] [2] [i_13] [i_13 + 4]))))));
    }
    #pragma endscop
}
