/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123955
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_2 [i_0] = (max((max(var_3, var_10)), var_14));
        arr_3 [5] [i_0] = var_3;
        var_15 *= (max((min((max(var_7, var_3)), var_6)), (min(((max(var_6, var_7))), var_3))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_6 [i_0] [i_0] = var_11;

            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                var_16 ^= (max(var_0, var_10));
                var_17 += (max(var_13, (max(var_7, var_9))));
            }
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {

                /* vectorizable */
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    var_18 += var_14;
                    var_19 = var_13;
                    arr_15 [i_0] [i_3] = var_10;
                    arr_16 [i_4] [i_1] [i_4] |= var_13;
                }
                arr_17 [i_0] [i_3] [i_3] |= var_8;
                var_20 = var_9;
            }
            for (int i_5 = 3; i_5 < 10;i_5 += 1)
            {
                arr_20 [i_0] [i_0] [i_0] [i_0] = var_1;
                var_21 = (min(((max(var_7, (min(var_7, var_4))))), var_10));

                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {

                    /* vectorizable */
                    for (int i_7 = 3; i_7 < 10;i_7 += 1)
                    {
                        var_22 = var_13;
                        var_23 -= var_1;
                        var_24 = var_14;
                        var_25 = var_9;
                    }
                    arr_26 [i_0] [i_1] [i_5] = var_11;
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    arr_30 [i_0] [i_0] = var_1;
                    arr_31 [5] [i_1] [i_0] [i_1] = var_6;
                }

                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    arr_34 [i_0] [i_0] [6] [i_0 + 1] = (max((max(var_3, var_2)), ((max(var_11, var_0)))));

                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        arr_39 [i_0] [i_9] = var_10;
                        arr_40 [i_0] [i_0] [i_5] [i_0] [i_10] = (max((max(var_3, var_4)), ((min(var_8, var_4)))));
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 12;i_11 += 1)
                    {
                        arr_43 [i_11] [i_0] [i_5] [i_0] [i_0 + 1] = var_10;
                        arr_44 [i_0] [i_0] [i_0] [i_11] [9] [i_1] = var_9;
                    }
                    for (int i_12 = 1; i_12 < 9;i_12 += 1)
                    {
                        arr_49 [9] [i_1] [i_1] [i_1] [i_0] = var_11;
                        arr_50 [0] [i_1] [i_0] [i_9] [i_12] &= var_13;
                        arr_51 [i_0] [i_1] [i_5] [i_0] [i_5] = (min((min(var_4, var_11)), ((max(var_13, var_13)))));
                        var_26 = (max((max(var_10, (min(var_7, var_3)))), ((max(var_1, var_14)))));
                        arr_52 [i_0 + 1] [i_0] [i_0] = (min(var_14, var_4));
                    }
                }
                for (int i_13 = 4; i_13 < 11;i_13 += 1)
                {
                    var_27 = (max((min(var_3, var_12)), ((max(var_10, var_4)))));
                    var_28 = var_12;
                    var_29 = var_3;
                    var_30 ^= var_1;
                }
                /* vectorizable */
                for (int i_14 = 0; i_14 < 12;i_14 += 1)
                {
                    arr_57 [i_0] [i_0] [i_0] [i_0] = var_12;
                    var_31 = var_3;
                }
            }
        }
        for (int i_15 = 1; i_15 < 10;i_15 += 1)
        {
            arr_62 [i_0] [i_15] [i_0] = var_13;

            for (int i_16 = 0; i_16 < 12;i_16 += 1)
            {
                arr_66 [i_0] = var_12;
                var_32 = (min((max(var_1, var_13)), var_0));
            }
            for (int i_17 = 2; i_17 < 10;i_17 += 1)
            {
                var_33 = var_11;
                var_34 = (max(var_34, ((max((min(var_5, var_11)), ((max(var_1, var_9))))))));
                arr_70 [i_0 + 1] [i_15] [i_0] = var_2;
            }
            for (int i_18 = 0; i_18 < 12;i_18 += 1)
            {
                arr_74 [6] [1] [i_0] = var_10;
                var_35 = (max(((max(var_9, ((max(var_8, var_8)))))), var_6));
                arr_75 [i_0] [i_0] [i_0] = (min(((min(var_13, var_9))), (max(var_11, (max(var_13, var_12))))));
                arr_76 [i_18] [i_18] [i_0] [i_18] = var_4;
            }
            var_36 = (max(var_36, ((min((max(var_3, var_4)), var_8)))));
            arr_77 [i_0] [i_0] [i_15] = (max((max(var_11, var_3)), (min(var_3, var_11))));
        }
        for (int i_19 = 0; i_19 < 12;i_19 += 1)
        {
            var_37 += (min((min(var_12, var_12)), ((max(var_5, var_14)))));
            var_38 = var_7;
        }
        /* vectorizable */
        for (int i_20 = 0; i_20 < 12;i_20 += 1)
        {
            var_39 *= var_3;
            arr_84 [i_20] [i_20] [i_20] &= var_4;
        }

        for (int i_21 = 0; i_21 < 12;i_21 += 1)
        {
            arr_88 [2] [i_0] = var_9;
            var_40 = (min((max(var_13, var_9)), (min(var_14, var_9))));
            arr_89 [i_0] = var_14;
        }
    }
    for (int i_22 = 0; i_22 < 1;i_22 += 1) /* same iter space */
    {
        var_41 = (max((max(var_0, var_6)), ((min(var_0, var_9)))));
        var_42 *= (min(((max(var_10, var_8))), var_12));
    }
    for (int i_23 = 0; i_23 < 1;i_23 += 1) /* same iter space */
    {
        var_43 ^= (min(var_1, ((min(var_13, var_2)))));
        arr_97 [i_23] [i_23] = min((max(((min(var_0, var_13))), var_6)), var_5);
    }
    /* vectorizable */
    for (int i_24 = 0; i_24 < 1;i_24 += 1) /* same iter space */
    {
        var_44 = var_11;
        arr_100 [i_24] = var_1;
        arr_101 [i_24] = var_13;
        var_45 |= var_11;
    }
    var_46 = (max(var_11, var_10));
    #pragma endscop
}
