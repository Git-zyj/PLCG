/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17015
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= ((var_10 ? (var_9 - var_9) : var_8));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 12;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        {
                            var_13 = ((var_9 ? (var_10 >= var_10) : ((var_4 ? var_11 : var_1))));
                            var_14 = (~var_6);
                        }
                    }
                }
            }
            var_15 = (var_8 & var_10);
        }
        for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
        {
            var_16 = var_9;
            arr_16 [i_0] [i_0] = ((-var_1 >= (var_8 / var_2)));
        }
        for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
        {
            var_17 ^= (((var_4 ? var_3 : var_9)));
            var_18 = var_3;
        }
        for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
        {
            arr_23 [i_0] [i_0] [i_0] = (((~var_8) < ((var_4 ? var_3 : var_11))));
            var_19 &= (((((207 ? 7 : 448))) ? (var_8 | var_3) : ((var_11 ? var_9 : var_2))));
        }
        arr_24 [i_0] = var_4;
    }
    for (int i_8 = 1; i_8 < 12;i_8 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            var_20 = (!var_10);
            var_21 = var_8;
        }
        for (int i_10 = 0; i_10 < 14;i_10 += 1)
        {
            var_22 -= ((!((((32 && 1) >> (var_1 - 18319252558389901085))))));
            var_23 = ((var_4 ? var_9 : (var_8 + var_6)));
            var_24 = (-var_8 == var_6);

            for (int i_11 = 0; i_11 < 14;i_11 += 1)
            {
                var_25 = (min(var_25, ((((((var_9 ? (var_4 && var_5) : (var_9 / var_7)))) ? (((((var_2 ? var_2 : var_0))))) : -var_11)))));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 14;i_13 += 1)
                    {
                        {
                            var_26 += ((var_1 ? var_2 : (((var_3 || (var_3 || var_11))))));
                            arr_39 [i_13] [i_13] [i_11] [i_11] [i_13] [i_11] = var_9;
                        }
                    }
                }
            }
        }

        for (int i_14 = 0; i_14 < 1;i_14 += 1)
        {
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 14;i_16 += 1)
                {
                    {
                        arr_48 [i_8] [i_16] [i_14] [i_15] [i_16] = ((var_0 || (!var_10)));
                        arr_49 [i_16] [i_16] = (~var_3);
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_17 = 1; i_17 < 1;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 14;i_18 += 1)
                {
                    {
                        arr_54 [i_8] [i_8] [i_18] [i_17] = var_0;
                        var_27 = -var_5;
                    }
                }
            }
        }

        for (int i_19 = 0; i_19 < 14;i_19 += 1)
        {
            /* LoopNest 3 */
            for (int i_20 = 0; i_20 < 1;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 14;i_21 += 1)
                {
                    for (int i_22 = 1; i_22 < 13;i_22 += 1)
                    {
                        {
                            arr_67 [i_8] [i_19] [i_20] [i_8] [i_22] = ((~((((var_5 >> (var_11 - 17461290593406150930)))))));
                            var_28 = (((~-var_3) ? (((var_5 & var_7) ? var_8 : (~var_7))) : var_2));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_23 = 0; i_23 < 14;i_23 += 1)
            {
                for (int i_24 = 0; i_24 < 1;i_24 += 1)
                {
                    {
                        var_29 ^= ((var_10 ? -var_9 : var_7));
                        arr_75 [i_8 + 1] [i_19] [i_23] [i_24] = (((~var_1) ? var_11 : var_6));
                        arr_76 [i_24] [i_19] [i_19] = (!1);
                        arr_77 [i_8 + 1] [i_8 + 1] [i_23] [i_19] = (-var_0 != var_4);
                    }
                }
            }
            arr_78 [i_19] [i_19] = ((((var_1 || (!var_8))) ? var_1 : var_4));
            arr_79 [i_19] [i_8 - 1] = (((var_7 ? (~var_11) : var_3)));
        }
        for (int i_25 = 0; i_25 < 1;i_25 += 1)
        {
            var_30 += var_1;
            var_31 = (!var_11);
            var_32 *= (!(((~(!var_8)))));
            var_33 = (var_7 != var_6);
            var_34 = var_3;
        }
        /* vectorizable */
        for (int i_26 = 4; i_26 < 13;i_26 += 1) /* same iter space */
        {
            arr_84 [i_26 + 1] [i_8] = var_8;
            arr_85 [i_8 + 2] [i_26 - 3] = ((var_4 <= (var_8 >> var_5)));
        }
        for (int i_27 = 4; i_27 < 13;i_27 += 1) /* same iter space */
        {
            arr_89 [i_8] = (var_7 || (((-var_11 ? 131 : var_8))));
            arr_90 [i_8 + 2] [i_8 + 1] [i_8 + 1] = var_3;
        }
        var_35 = (max(var_35, (((!((((!var_9) ? var_6 : (var_10 || var_4)))))))));
    }
    #pragma endscop
}
