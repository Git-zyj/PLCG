/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140830
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            arr_5 [i_0] = var_13;
            var_16 = (((arr_0 [i_1] [i_0]) && (((~(arr_4 [i_0]))))));
        }
        for (int i_2 = 3; i_2 < 22;i_2 += 1)
        {
            var_17 = (max(var_17, ((((arr_6 [i_2 - 2] [i_2 + 3] [i_2 + 3]) & (arr_6 [i_2 - 2] [i_2 + 3] [i_2 + 3]))))));

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                var_18 *= (arr_0 [i_0] [i_3]);

                for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
                {
                    var_19 -= (((((var_13 || (arr_1 [i_4])))) & var_5));
                    arr_14 [i_0] [i_3] [i_4] = (arr_0 [i_0] [i_4]);
                    var_20 = var_2;
                }
                for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
                {
                    var_21 = (max(var_21, (arr_0 [i_0] [i_2 - 2])));
                    var_22 = (((arr_12 [i_0] [i_2 - 3] [i_2 + 2] [i_0] [i_2 - 3] [i_2 - 2]) ? (arr_10 [i_0]) : (arr_12 [i_2] [i_2 - 2] [i_2 - 1] [i_0] [i_2] [i_2 - 3])));
                    var_23 = var_15;
                }
            }
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                arr_20 [1] [i_0] [i_6] = var_10;
                var_24 = (~(arr_19 [i_0] [i_0]));
            }
            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {
                var_25 = (arr_21 [i_7] [i_2] [i_0] [1]);
                var_26 = (min(var_26, ((((arr_6 [i_2 - 2] [i_2 - 3] [i_2 - 1]) ? (arr_9 [i_2 - 2] [24] [i_2]) : (arr_6 [i_2 + 3] [i_2 + 3] [i_2 - 1]))))));
                arr_23 [i_0] [i_0] [i_0] [i_0] = (!255);
                arr_24 [i_0] [i_2 - 3] [i_0] = var_8;
            }
            /* LoopNest 3 */
            for (int i_8 = 4; i_8 < 23;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 24;i_9 += 1)
                {
                    for (int i_10 = 3; i_10 < 21;i_10 += 1)
                    {
                        {
                            var_27 -= var_6;
                            var_28 = var_11;
                        }
                    }
                }
            }
        }
        arr_36 [i_0] [i_0] = (arr_8 [i_0] [i_0] [i_0] [i_0]);
        var_29 = (arr_0 [i_0] [i_0]);
        var_30 = (max(var_30, (arr_18 [i_0] [i_0] [i_0] [i_0])));

        for (int i_11 = 0; i_11 < 25;i_11 += 1)
        {
            var_31 = (arr_22 [i_0] [i_0] [i_0] [i_0]);
            arr_41 [i_0] = var_10;
        }
    }
    var_32 = (min(var_32, var_10));

    for (int i_12 = 2; i_12 < 12;i_12 += 1)
    {
        /* LoopNest 2 */
        for (int i_13 = 1; i_13 < 11;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 13;i_14 += 1)
            {
                {
                    var_33 = (max(((max((!0), (arr_43 [i_12 + 1])))), (max((arr_49 [i_14] [i_13] [i_14] [i_12]), (arr_43 [i_12 + 1])))));
                    var_34 = ((~(arr_0 [i_12 + 1] [i_12])));
                    arr_50 [i_12] [i_12] [i_14] [i_14] = ((var_11 > (min(((-(arr_43 [i_12]))), ((((arr_30 [i_12] [i_13]) < var_3)))))));
                    var_35 = var_3;
                }
            }
        }
        arr_51 [i_12] [i_12] = var_9;
    }
    var_36 = var_9;
    var_37 = var_7;
    #pragma endscop
}
