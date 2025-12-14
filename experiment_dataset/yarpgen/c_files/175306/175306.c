/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_16 = (((arr_0 [i_0 - 2]) ^ (arr_2 [i_0 + 1])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_17 = (min(var_17, ((((arr_10 [i_0] [i_1] [i_2 + 1] [i_1]) && (arr_9 [0] [0] [i_2 - 1] [i_2 - 1]))))));
                        var_18 = (min(var_18, var_12));
                    }
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        var_19 = 8323072;

                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            arr_18 [i_2] [i_4] = ((0 ? 10118730065942180402 : 1));
                            var_20 ^= ((((~(arr_12 [1] [18] [i_5] [i_5] [i_5] [1]))) * (((arr_10 [i_5] [1] [i_2] [1]) % var_12))));
                            arr_19 [i_0] [i_0] [i_0] = (((arr_8 [i_4] [i_0] [i_0] [i_0]) <= (2147483647 - var_4)));
                        }
                        for (int i_6 = 1; i_6 < 18;i_6 += 1)
                        {
                            arr_22 [1] [i_2] [i_1] [1] = (((arr_15 [i_0 - 1] [i_0]) % ((768 ? 1858199256 : 1))));
                            arr_23 [0] [i_4] [i_2] [i_0 + 1] [i_0 + 1] = 0;
                            arr_24 [4] [i_6] = (((arr_20 [i_0 - 1] [i_6 - 1] [i_0 + 2] [i_4] [1]) >> (((arr_20 [i_0] [i_6 - 1] [i_0 + 2] [i_4] [i_4]) - 95))));
                        }
                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            var_21 = (((-619233 + 2147483647) >> (((arr_7 [i_7] [i_1]) + 1242634069054169499))));
                            var_22 = (min(var_22, ((((arr_14 [i_2 - 1] [i_1] [i_2] [i_7]) >> 1)))));
                            var_23 = var_1;
                            var_24 = ((arr_4 [i_0 + 1] [i_7] [i_7]) ? (arr_4 [i_0 + 3] [i_4] [i_4]) : -619246);
                        }
                    }
                    arr_27 [i_0 + 3] [i_0 - 1] [i_0] [i_0] = (~-3264569345);
                }
            }
        }
        arr_28 [i_0] = var_13;

        for (int i_8 = 1; i_8 < 17;i_8 += 1)
        {

            for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
            {
                arr_34 [1] [i_8] [i_9] [i_9] = 44127;
                var_25 = (max(var_25, ((((arr_16 [i_0 + 3] [5]) == 1)))));
                arr_35 [i_0] [i_0 + 1] [i_0 - 1] [i_0] = (arr_6 [i_0 + 2] [i_0 + 1] [i_8 + 1]);
                arr_36 [i_8] [i_8] [i_8] [i_8 + 2] = (arr_16 [i_8] [17]);
            }
            for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
            {
                arr_40 [i_0] [i_10] [i_10] = ((var_13 >> (((arr_31 [i_8 - 1]) - 459410131))));
                /* LoopNest 2 */
                for (int i_11 = 4; i_11 < 18;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 19;i_12 += 1)
                    {
                        {
                            var_26 = (max(var_26, (((var_4 <= (((var_2 ? (arr_5 [i_0] [i_10] [1] [i_12]) : 65535))))))));
                            var_27 ^= (((1030397929 & var_7) ? 4091494266649476377 : (arr_10 [i_0] [1] [15] [i_12])));
                            arr_45 [i_10] [i_8] [4] [i_11] [i_11 - 2] [14] [i_12] = (arr_13 [i_0] [i_8] [i_11 + 1] [9]);
                            var_28 = (min(var_28, (arr_1 [i_0 + 3] [i_8 + 2])));
                            var_29 = (max(var_29, (((arr_5 [i_0 - 1] [i_0 - 1] [i_11] [i_12]) % (arr_8 [i_0] [i_10] [11] [i_12])))));
                        }
                    }
                }
            }
            for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
            {
                var_30 = (((arr_7 [i_8] [17]) ? (arr_15 [i_8 + 2] [i_8 + 1]) : var_0));

                for (int i_14 = 1; i_14 < 16;i_14 += 1) /* same iter space */
                {
                    arr_50 [i_14] [4] [i_8] [i_0] = (((arr_13 [i_0 + 1] [i_8 + 1] [i_8 + 2] [i_14 + 3]) - (arr_13 [i_0 + 2] [i_8 + 2] [i_8 - 1] [i_14 - 1])));
                    arr_51 [5] [i_0] [i_8] [i_8] [i_0] [i_0] = (!-160);
                }
                for (int i_15 = 1; i_15 < 16;i_15 += 1) /* same iter space */
                {
                    var_31 += var_3;
                    arr_55 [1] [i_8 + 1] [i_13] [i_13] = (((arr_8 [i_0 - 2] [i_8 + 2] [i_13] [i_15]) / (arr_9 [i_0 + 3] [i_8 + 1] [i_15 + 3] [i_15 + 3])));

                    for (int i_16 = 1; i_16 < 18;i_16 += 1)
                    {
                        arr_59 [i_0] = (((arr_37 [i_15 + 1] [i_15 + 3] [i_15 - 1] [i_15]) < 24));
                        var_32 = (min(var_32, ((((1 ^ (arr_15 [i_0] [i_8])))))));
                        arr_60 [i_0] [i_0] [i_0] [i_15 + 3] [i_16] [i_8] = (arr_54 [i_15 + 1] [9] [i_15] [i_15]);
                        arr_61 [i_13] = (arr_16 [7] [i_16]);
                    }
                }

                for (int i_17 = 0; i_17 < 19;i_17 += 1)
                {
                    arr_65 [i_0 - 2] [i_17] = 4091494266649476369;
                    arr_66 [i_0] [i_0] [i_17] [i_17] = (arr_13 [i_17] [i_13] [i_8] [i_0 - 2]);
                }
                var_33 = (12732965529214043696 && (arr_33 [10] [i_8 - 1] [i_13]));
                var_34 = (max(var_34, ((((arr_63 [i_0] [i_0] [i_0 + 2] [i_0 + 1]) * var_8)))));
            }
            var_35 = (max(var_35, var_6));
        }
    }
    var_36 = (max(var_10, (var_7 * var_11)));
    var_37 = (min(var_37, var_3));
    #pragma endscop
}
