/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((-((1460005683 ? var_7 : var_7)))));
    var_15 = var_12;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = max(((-44 ? 44 : 3252561476273810049)), (arr_0 [i_0]));
        arr_3 [4] [i_0] &= var_12;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
        {
            var_16 = (((arr_6 [i_0] [i_0] [i_1]) ? (arr_5 [i_0] [i_0]) : (arr_5 [i_0] [i_1])));
            var_17 -= (arr_5 [i_0] [i_0]);
            var_18 = (arr_6 [i_0] [i_0] [i_0]);
            arr_7 [i_0] = (5870682606635694160 || 24568);
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
        {
            var_19 = (max(var_19, var_12));

            for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
            {
                var_20 = arr_8 [0];
                arr_12 [i_0] [i_0] [16] [i_3] = ((~(((arr_5 [i_0] [i_0]) ? (arr_5 [i_0] [i_0]) : var_2))));
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        {
                            var_21 = (arr_5 [i_0] [i_0]);
                            var_22 = var_12;
                        }
                    }
                }
            }
            for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
            {
                var_23 = (arr_6 [i_0] [i_2] [i_6]);
                var_24 = ((((var_7 | (min(-989503449, -45)))) > ((var_3 >> (!var_3)))));
            }
            for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
            {

                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    var_25 = (17646 * -45);
                    var_26 = var_6;
                    var_27 = (min(var_27, (~var_4)));
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    arr_26 [i_0] [i_0] [13] [i_9] = (((arr_18 [18] [17] [4] [i_0]) && (var_13 && var_9)));
                    arr_27 [i_0] = (((!var_13) != (arr_6 [i_0] [i_2] [i_9])));
                    arr_28 [i_0] [i_0] = -var_4;
                }
                var_28 = ((((var_2 >> (((min(18446744073709551606, var_5)) - 30505)))) + (((((arr_22 [i_7]) && var_0))))));
            }
            var_29 = (max(var_29, ((max((min((arr_20 [i_0] [i_0] [i_2] [6]), var_5)), (((var_9 && (arr_20 [i_0] [i_0] [i_0] [i_2])))))))));
            var_30 = (((((var_6 | (arr_15 [i_2] [i_2] [i_2] [i_0] [i_0])))) ? (min((arr_15 [i_0] [i_0] [i_0] [i_2] [i_0]), var_4)) : (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])));
        }
        var_31 |= (((((arr_20 [i_0] [i_0] [i_0] [1]) ^ (-32767 - 1))) << (var_3 - 102)));
        var_32 = (max(((max(var_3, var_12))), (((arr_22 [i_0]) ? var_2 : var_7))));
    }
    for (int i_10 = 0; i_10 < 23;i_10 += 1)
    {
        arr_32 [i_10] [i_10] = ((25 + (((768 + var_11) ? var_6 : var_6))));

        for (int i_11 = 0; i_11 < 23;i_11 += 1)
        {
            var_33 = 24589;

            for (int i_12 = 0; i_12 < 23;i_12 += 1) /* same iter space */
            {
                arr_37 [i_10] [i_10] = (max(((((!var_7) <= (max(13, 2147483647))))), (((~var_5) - (arr_34 [i_12])))));

                for (int i_13 = 1; i_13 < 20;i_13 += 1)
                {
                    arr_40 [i_10] [i_10] [i_12] [i_13] [i_10] [i_11] = var_0;
                    arr_41 [i_13 + 3] [i_11] [i_11] [i_10] = ((-(arr_38 [i_10] [i_10] [i_11] [i_12] [i_13 + 3] [i_13 + 1])));
                }
                for (int i_14 = 0; i_14 < 23;i_14 += 1)
                {
                    var_34 = (((((-((((arr_30 [i_10] [i_12]) || var_0)))))) ? (arr_30 [i_10] [3]) : (arr_43 [i_14] [i_11] [i_12] [i_14] [i_11])));
                    arr_45 [i_14] [i_10] [i_11] [i_10] = ((~(~var_6)));
                }
                var_35 = (max(var_35, (!var_1)));
            }
            for (int i_15 = 0; i_15 < 23;i_15 += 1) /* same iter space */
            {
                arr_48 [i_15] |= ((((var_9 >= (arr_38 [i_10] [1] [i_10] [i_10] [i_10] [i_10]))) && (((17 ? (1748190225 && var_7) : (~43))))));
                arr_49 [i_10] [i_10] [i_10] = ((var_1 ? (18446744073709551614 ^ 32751) : var_0));
                var_36 = (max(var_36, (((!(arr_47 [i_10] [i_11] [i_15]))))));
                var_37 = var_12;
            }
        }
        for (int i_16 = 0; i_16 < 23;i_16 += 1)
        {
            var_38 &= (min(((((arr_29 [i_16]) || 25394))), (var_6 - var_5)));
            var_39 = (arr_31 [17]);
        }
    }
    var_40 = var_2;
    #pragma endscop
}
