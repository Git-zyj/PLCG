/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(1, (~1702841574518892786)));
    var_19 = var_16;

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0] = (i_0 % 2 == zero) ? ((((((arr_0 [i_0] [i_0 - 1]) ? ((min(1, -5110997796793717515))) : (1702841574518892780 + var_4))) >> ((var_14 ^ (arr_0 [i_0] [i_0])))))) : ((((((arr_0 [i_0] [i_0 - 1]) ? ((min(1, -5110997796793717515))) : (1702841574518892780 + var_4))) >> ((((var_14 ^ (arr_0 [i_0] [i_0]))) - 190)))));
        arr_3 [i_0] [i_0] = var_1;
    }
    for (int i_1 = 3; i_1 < 24;i_1 += 1)
    {
        arr_7 [i_1 + 1] = 4200;
        var_20 *= (min((((!(((-1702841574518892792 ? var_8 : var_10)))))), ((min((arr_5 [i_1 - 3]), (arr_4 [i_1]))))));

        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            arr_10 [i_2 - 1] = ((var_14 >> (2064384 - 2064368)));
            arr_11 [i_1] [i_1] [i_1] = (arr_4 [i_1 - 3]);
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 24;i_4 += 1)
                {
                    {
                        var_21 ^= ((((min(var_6, 112))) ? (min(var_11, ((1702841574518892799 ? 2064362 : -1702841574518892787)))) : 1702841574518892786));
                        var_22 -= (((((arr_15 [i_4] [i_4 + 1] [i_3] [i_2]) + 9223372036854775807)) >> (((-32767 - 1) + 32781))));

                        for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
                        {
                            arr_18 [i_1 - 3] [i_1 - 3] [i_3] [i_4 + 1] [i_1 - 3] = (!var_5);
                            var_23 = (min(var_23, (49 > 3099762422)));
                            arr_19 [i_1 - 2] [i_2 - 1] [i_3] [i_3] [i_5] = var_13;
                        }
                        for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
                        {
                            var_24 = (max(var_24, ((min((min(-49, 18446744073709551615)), ((min((arr_9 [i_2 - 1] [i_2 - 1]), (arr_15 [i_2 - 1] [i_1] [i_3] [i_1 - 1])))))))));
                            var_25 = var_15;
                            var_26 = (arr_20 [i_1]);
                            var_27 -= (arr_23 [i_1 - 1] [i_2 - 1] [i_2 - 1] [i_4 + 1] [i_4 - 1]);
                        }
                    }
                }
            }
        }

        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            arr_28 [i_1] [i_1 - 2] = ((((((((arr_14 [i_1 - 1]) + 2147483647)) >> (((arr_14 [i_1 + 1]) + 32148))))) ? var_10 : var_4));

            for (int i_8 = 0; i_8 < 25;i_8 += 1) /* same iter space */
            {
                var_28 -= ((~((((var_12 ? var_6 : 22328))))));
                arr_31 [i_8] = var_16;
            }
            for (int i_9 = 0; i_9 < 25;i_9 += 1) /* same iter space */
            {
                arr_35 [i_1 + 1] = (arr_6 [i_7]);
                arr_36 [i_7] [i_9] |= (arr_23 [i_1 - 2] [i_1 - 2] [i_9] [i_7] [i_7]);
                arr_37 [i_1 - 1] [i_1 - 1] = 1702841574518892798;
            }
            for (int i_10 = 0; i_10 < 25;i_10 += 1) /* same iter space */
            {
                arr_40 [i_10] [i_7] [i_7] [i_7] = (((((min(32762, -8))) ? (min(0, 1702841574518892791)) : 1702841574518892786)));
                arr_41 [i_10] [i_10] [i_1] = (arr_39 [i_1 - 1] [i_1] [i_10] [i_1 - 2]);
            }
            /* vectorizable */
            for (int i_11 = 0; i_11 < 25;i_11 += 1) /* same iter space */
            {
                var_29 = (arr_8 [i_1] [i_1 - 1] [i_1]);
                var_30 = (-(arr_9 [i_1 + 1] [i_1 + 1]));
                arr_44 [i_1] [i_7] [i_7] [i_11] = ((~(arr_6 [i_1 - 2])));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 25;i_12 += 1)
                {
                    for (int i_13 = 1; i_13 < 22;i_13 += 1)
                    {
                        {
                            var_31 -= (arr_46 [i_1]);
                            var_32 = (arr_27 [i_1]);
                        }
                    }
                }
            }
            var_33 ^= ((!(~var_4)));
        }
        for (int i_14 = 0; i_14 < 25;i_14 += 1)
        {
            arr_53 [i_14] [i_1 - 3] = (min((((!(((1 ? -1702841574518892791 : (arr_32 [i_14] [i_1] [i_1]))))))), (var_16 + var_8)));
            arr_54 [i_1 - 3] [i_1 - 3] [i_14] = (arr_34 [i_1 - 1] [i_1 - 1]);
        }
    }
    /* LoopNest 2 */
    for (int i_15 = 0; i_15 < 15;i_15 += 1)
    {
        for (int i_16 = 0; i_16 < 15;i_16 += 1)
        {
            {
                arr_59 [i_15] [i_15] = ((~(min(var_8, var_0))));
                arr_60 [i_15] = min(-var_1, var_10);
            }
        }
    }
    var_34 = var_4;
    #pragma endscop
}
