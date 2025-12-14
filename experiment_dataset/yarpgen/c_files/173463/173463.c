/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173463
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= var_4;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_20 = 0;
        var_21 -= (((arr_0 [i_0]) - var_1));
        arr_3 [i_0] = ((((((arr_2 [i_0]) > var_1))) << ((1 ? 0 : 1))));
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_22 -= 1;
            var_23 = ((var_9 ? (((arr_4 [i_1] [i_2]) & var_7)) : 0));
            arr_10 [i_1] [i_2] = -var_6;
            arr_11 [1] [i_2] = (17491 + var_5);
        }
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {

            for (int i_4 = 1; i_4 < 19;i_4 += 1) /* same iter space */
            {

                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    var_24 = (((arr_16 [i_5] [i_4]) != (var_5 < var_6)));
                    arr_19 [i_4] [i_4] = 1;
                    var_25 = (((arr_15 [i_4] [i_4 + 2] [i_4]) ? (arr_15 [i_4] [i_3] [i_4]) : var_8));
                }
                var_26 = (((arr_9 [i_4 + 1] [i_4]) ? (arr_9 [i_4 + 2] [i_3]) : (arr_9 [i_4 + 1] [17])));
                var_27 = (var_11 << 1);
                var_28 = var_6;
            }
            for (int i_6 = 1; i_6 < 19;i_6 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 20;i_8 += 1)
                    {
                        {
                            var_29 = -2048;
                            arr_28 [4] [i_3] [i_1] = 54880;
                        }
                    }
                }
                var_30 = (arr_14 [i_1] [i_1] [i_3] [i_1]);

                for (int i_9 = 2; i_9 < 19;i_9 += 1)
                {
                    arr_31 [i_1] [3] [3] [i_1] [3] [3] = (!var_11);
                    arr_32 [i_3] = ((40216 ? (arr_12 [i_9 - 1] [i_9 - 2]) : (arr_12 [i_9 - 1] [i_9])));
                    arr_33 [i_9] [i_6] [i_3] [7] [i_1] = (40216 > 1);
                }
                var_31 -= (1 << 0);
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 1;i_11 += 1)
                    {
                        {
                            var_32 = (arr_12 [i_6 + 2] [i_6 + 2]);
                            var_33 = (((arr_23 [i_1] [i_3] [i_6 - 1] [i_11 - 1]) - var_0));
                            arr_40 [i_1] [1] [i_6 + 1] [i_10] [1] = (1 - 63498);
                        }
                    }
                }
            }
            for (int i_12 = 1; i_12 < 19;i_12 += 1) /* same iter space */
            {

                for (int i_13 = 1; i_13 < 19;i_13 += 1)
                {
                    var_34 = 0;
                    var_35 -= ((var_2 << (arr_46 [i_13 + 2] [i_12 + 2] [i_1])));
                }
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    var_36 = 0;
                    arr_50 [i_1] [i_14] [i_12 + 2] [i_14] = ((1 ? var_12 : (arr_26 [i_12 + 2] [i_12 + 1] [i_12 + 2])));
                    arr_51 [i_1] [1] [i_14] [i_1] = var_8;
                }
                for (int i_15 = 0; i_15 < 1;i_15 += 1) /* same iter space */
                {

                    for (int i_16 = 0; i_16 < 21;i_16 += 1)
                    {
                        arr_57 [i_1] [i_3] [i_12 + 1] [i_15] [i_16] = ((-(arr_7 [i_1] [i_3])));
                        var_37 = (max(var_37, ((((~var_16) ? 10055 : ((var_1 ? var_9 : 44178)))))));
                        arr_58 [i_1] [i_1] [i_12] [i_16] = (arr_39 [i_12] [i_12] [i_12 + 1] [i_12] [i_12 + 2] [i_12] [i_12]);
                        var_38 = (arr_15 [i_1] [i_12 - 1] [i_1]);
                    }
                    for (int i_17 = 0; i_17 < 0;i_17 += 1)
                    {
                        var_39 = (max(var_39, (((((0 ? 1 : 1)) % var_0)))));
                        var_40 = var_6;
                    }
                    for (int i_18 = 3; i_18 < 19;i_18 += 1)
                    {
                        var_41 -= (!(arr_45 [i_18] [i_15] [i_12] [i_12 - 1] [i_3] [i_1]));
                        arr_65 [i_1] [i_3] [0] [i_15] [i_18] = ((1 >> (((arr_41 [12] [12]) ? 0 : var_14))));
                    }
                    var_42 = (max(var_42, 0));
                    arr_66 [i_1] [i_3] [i_3] [i_15] [i_12] = ((0 ? (arr_22 [i_12 - 1] [i_3]) : var_4));
                    var_43 -= (arr_21 [i_12 + 2]);
                }
                for (int i_19 = 0; i_19 < 1;i_19 += 1) /* same iter space */
                {
                    var_44 = (((arr_9 [i_1] [i_12 + 2]) ? ((19349 ? var_15 : (arr_25 [i_19] [i_12] [i_12 + 2] [i_3] [i_1] [i_1]))) : (!0)));
                    var_45 = var_10;
                    var_46 = ((1 ? var_6 : var_12));
                }
                /* LoopNest 2 */
                for (int i_20 = 4; i_20 < 17;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 1;i_21 += 1)
                    {
                        {
                            var_47 = (((((var_10 % (arr_54 [i_12] [i_3] [i_1])))) || (arr_70 [3] [i_12] [i_12 + 2] [i_12 + 1] [i_12] [i_12])));
                            var_48 = (max(var_48, ((((arr_18 [i_12 + 1] [i_12 + 1] [i_1] [16]) ? 1 : ((1 ? var_8 : var_13)))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_22 = 0; i_22 < 0;i_22 += 1)
                {
                    for (int i_23 = 0; i_23 < 21;i_23 += 1)
                    {
                        {
                            arr_78 [i_1] [i_1] [i_22] [i_22] [i_1] = (((arr_17 [i_12 - 1] [i_12 + 1] [i_12 - 1] [i_12 - 1] [i_12 + 2] [i_22]) ? (arr_17 [i_12 + 1] [i_12] [i_12 + 1] [i_12 + 1] [i_12] [i_22]) : 1));
                            var_49 = ((var_9 <= (arr_9 [i_12 - 1] [1])));
                        }
                    }
                }
            }
            var_50 -= var_14;
            var_51 -= 55195;
            var_52 -= (((arr_77 [i_1] [i_1] [i_1] [i_3] [i_3] [i_1] [i_3]) ? (arr_77 [8] [i_1] [1] [i_1] [i_1] [i_1] [i_3]) : (arr_77 [i_1] [i_3] [i_1] [i_3] [i_3] [i_1] [i_1])));
            var_53 = (!var_8);
        }

        for (int i_24 = 3; i_24 < 19;i_24 += 1)
        {
            /* LoopNest 2 */
            for (int i_25 = 0; i_25 < 21;i_25 += 1)
            {
                for (int i_26 = 0; i_26 < 1;i_26 += 1)
                {
                    {
                        var_54 = (((arr_16 [i_24 + 1] [i_24 - 2]) ? (arr_16 [i_24 - 3] [i_24 - 1]) : var_15));
                        var_55 = (0 < 44198);
                        var_56 = ((var_15 ? var_4 : (0 & var_15)));
                        arr_86 [i_26] [i_25] [i_24] [i_24] [1] [i_1] = (!1);
                    }
                }
            }
            var_57 = (max(var_57, (((1 ? 1 : (arr_21 [i_1]))))));
        }
    }
    #pragma endscop
}
