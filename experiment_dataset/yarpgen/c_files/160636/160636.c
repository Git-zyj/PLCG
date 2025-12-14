/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160636
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = min((((-(!var_0)))), 8516951386978712635);

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_11 &= (~var_4);
        var_12 = (((!var_3) != (min(var_8, (var_7 > var_0)))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 14;i_3 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            var_13 = (var_5 - -var_2);
                            arr_10 [i_0] [i_1] [i_3] [8] [i_4] = ((~(-127 - 1)));
                        }
                        var_14 = (!-var_8);

                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            arr_13 [i_3] = (~var_4);
                            var_15 ^= (!3598278959);
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_3 + 1] [i_5] = (!var_3);
                            var_16 ^= (!var_0);
                            var_17 = (max(-var_7, (~var_3)));
                        }
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            var_18 = (max(((((min(-43, -4611258114453312729))) || var_8)), (((!var_3) || (var_5 && var_5)))));
                            var_19 = max((var_3 - var_9), (var_2 / var_4));
                            var_20 = (!((max(-var_2, (max(var_4, var_2))))));
                        }
                        arr_17 [5] [i_3] [i_2] [i_3] [i_0] = ((~((~((min(var_5, var_6)))))));

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            arr_20 [i_0] [i_3] [i_2] [i_3] [i_1] = (var_8 != var_2);
                            var_21 = (var_9 / var_4);
                            var_22 -= (!var_3);
                            var_23 = (var_3 ^ var_0);
                        }
                    }
                }
            }
        }
        var_24 = var_4;
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 14;i_8 += 1)
    {
        arr_23 [i_8] = ((-(!var_4)));

        for (int i_9 = 1; i_9 < 13;i_9 += 1)
        {
            var_25 = (max(var_25, (~var_3)));
            var_26 = (max(var_26, (-64 + var_1)));
        }
        for (int i_10 = 0; i_10 < 14;i_10 += 1)
        {
            var_27 = ((~var_3) - (!var_7));
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 14;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 14;i_12 += 1)
                {
                    {
                        var_28 = (var_5 | var_8);
                        var_29 = (var_5 != var_5);

                        for (int i_13 = 2; i_13 < 11;i_13 += 1)
                        {
                            arr_38 [i_10] [i_11] [i_13] = ((-var_8 >> (var_2 - 4590556755055430521)));
                            var_30 *= (-48 != var_9);
                            var_31 = var_9;
                        }
                    }
                }
            }
        }
        for (int i_14 = 0; i_14 < 14;i_14 += 1)
        {
            var_32 = (~(!var_5));
            arr_41 [i_8] [i_14] [i_14] = var_5;

            for (int i_15 = 0; i_15 < 14;i_15 += 1)
            {
                arr_45 [i_8] [i_14] [i_15] [i_15] = (~-49);
                var_33 ^= var_1;
            }
            for (int i_16 = 0; i_16 < 14;i_16 += 1)
            {
                var_34 = var_5;

                for (int i_17 = 0; i_17 < 14;i_17 += 1)
                {
                    var_35 += (var_0 / -var_9);
                    var_36 = (var_2 << (((var_5 + 125) - 31)));
                    var_37 = (min(var_37, (((!(!1))))));
                }
                var_38 ^= ((-var_1 - (var_9 == var_0)));
            }
            var_39 = (max(var_39, (((~(var_5 ^ var_8))))));
        }
        var_40 = -var_9;
        var_41 = ((var_2 == (!var_8)));
    }
    for (int i_18 = 0; i_18 < 10;i_18 += 1)
    {
        /* LoopNest 2 */
        for (int i_19 = 2; i_19 < 7;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 10;i_20 += 1)
            {
                {
                    arr_60 [i_20] [2] [i_20] = (min((((!var_6) >> (var_5 > var_0))), ((((((min(var_0, var_0)))) != (max(var_2, var_6)))))));

                    for (int i_21 = 0; i_21 < 10;i_21 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_22 = 0; i_22 < 10;i_22 += 1)
                        {
                            var_42 = var_4;
                            var_43 -= var_3;
                        }
                        for (int i_23 = 0; i_23 < 10;i_23 += 1)
                        {
                            arr_71 [i_18] [i_19] [i_19] [i_21] [i_21] [i_21] [i_20] = var_8;
                            var_44 = (min(var_44, 855264101));
                        }
                        var_45 = ((~((-(!var_9)))));
                        var_46 = var_0;
                    }
                    for (int i_24 = 0; i_24 < 10;i_24 += 1) /* same iter space */
                    {
                        arr_75 [i_18] [i_19] [i_20] [i_24] = (var_7 ^ var_3);

                        /* vectorizable */
                        for (int i_25 = 0; i_25 < 10;i_25 += 1)
                        {
                            var_47 = (max(var_47, -var_8));
                            var_48 = (max(var_48, ((((var_5 != var_2) != var_7)))));
                            var_49 *= (!var_4);
                        }
                    }
                }
            }
        }
        var_50 = ((-(((!(!var_8))))));
    }
    var_51 = (!var_5);
    #pragma endscop
}
