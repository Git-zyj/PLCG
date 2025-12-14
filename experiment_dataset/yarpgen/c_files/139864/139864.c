/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139864
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(((-639220005 ? (var_0 + var_6) : var_7)), ((((((var_6 ? var_3 : var_3))) > 9000853256709280378)))));

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        var_12 = ((!((((-9223372036854775807 - 1) ^ 127)))));
        var_13 = ((((((arr_1 [i_0]) - 186))) || var_5));

        for (int i_1 = 3; i_1 < 17;i_1 += 1) /* same iter space */
        {
            var_14 = -1102799324;

            /* vectorizable */
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                var_15 -= 63622;
                var_16 += var_6;
            }
            /* vectorizable */
            for (int i_3 = 4; i_3 < 15;i_3 += 1)
            {
                var_17 = (!(var_6 & 2147483647));
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 17;i_5 += 1)
                    {
                        {
                            var_18 = ((((var_3 ? var_6 : (arr_8 [i_0] [i_0] [i_0] [i_4]))) >> (var_9 + 32369)));
                            var_19 = ((((((var_9 + 2147483647) << (((((((-2147483647 - 1) - -2147483636)) + 20)) - 8))))) ? var_6 : ((var_0 ? var_8 : 1))));
                        }
                    }
                }
                arr_18 [i_0] [i_0] [i_0] = ((!(arr_9 [i_0])));
            }
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                var_20 = (((var_8 ? (((arr_8 [i_1 - 3] [i_1] [i_0 - 3] [3]) ? (arr_3 [i_0]) : var_6)) : 1)));
                var_21 = (max(var_21, (((((min((-127 - 1), -var_10))) ? -0 : ((1 % (-2424776723390965383 - var_10))))))));
            }
            var_22 = (max(var_22, ((((((arr_5 [12] [i_1]) > (arr_5 [6] [i_1 + 1]))) ? (~97) : ((max((arr_5 [8] [8]), (arr_5 [0] [i_0])))))))));
            arr_21 [i_0] [i_1] = (((arr_17 [i_0] [i_0] [i_0] [i_1 - 2] [i_0 - 2] [i_0] [i_0]) - (arr_11 [i_0] [i_0] [i_1] [i_0] [i_0 - 2] [i_1])));
            var_23 = ((((max((arr_4 [i_0] [i_0 - 1]), (-9223372036854775807 - 1)))) ? ((~(arr_7 [i_1 - 3] [14] [i_0]))) : (var_8 % 1)));
        }
        for (int i_7 = 3; i_7 < 17;i_7 += 1) /* same iter space */
        {
            var_24 = ((!((!(arr_8 [i_7 - 1] [i_7 + 1] [i_7 - 3] [i_7 + 1])))));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    {
                        var_25 = (((((arr_25 [i_0 - 3] [i_0]) / (arr_25 [i_0 - 3] [i_0]))) * (-1396568080 == 1)));
                        var_26 = (max(var_26, (arr_14 [i_8] [i_9] [9] [i_8] [9] [9] [9])));
                    }
                }
            }
            var_27 = ((0 ? 121 : 0));
            var_28 -= ((((min(var_8, (arr_10 [i_0 - 3] [i_0 - 1])))) / (((max(249, (arr_26 [i_7] [4] [i_7]))) & (arr_11 [i_0 - 2] [i_7] [i_7] [14] [0] [i_7])))));
        }
        /* vectorizable */
        for (int i_10 = 3; i_10 < 17;i_10 += 1) /* same iter space */
        {
            arr_33 [i_0] = (((var_7 / var_6) ? 9223372036854775794 : (((arr_20 [12] [i_10]) ? var_1 : var_3))));
            var_29 = (arr_11 [i_0 - 1] [i_0 - 1] [i_0 - 2] [i_0] [i_10 - 1] [i_10 - 1]);
        }
    }
    for (int i_11 = 0; i_11 < 18;i_11 += 1)
    {
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 18;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 14;i_13 += 1)
            {
                {
                    var_30 = ((var_8 + ((((arr_19 [i_11] [i_12] [i_13] [i_12]) < (((max((arr_13 [i_11] [i_12] [i_12] [11]), var_9)))))))));
                    arr_44 [i_11] [16] [i_12] = (arr_13 [i_13] [i_11] [i_13] [i_13 + 2]);
                }
            }
        }
        arr_45 [i_11] = ((((((-2147483647 - 1) || (((-(arr_29 [i_11] [i_11] [i_11] [i_11] [i_11])))))))) != (arr_27 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]));

        for (int i_14 = 0; i_14 < 18;i_14 += 1)
        {
            var_31 = (max(var_31, ((max(1, (121 ^ 810203693))))));
            var_32 = (arr_17 [i_11] [i_11] [12] [i_11] [i_11] [16] [i_11]);
            var_33 -= ((var_5 ? (((arr_20 [i_11] [i_11]) ? 1 : (arr_27 [i_11] [i_11] [1] [i_11] [i_11] [i_11]))) : ((~(arr_27 [i_11] [i_11] [i_11] [i_11] [i_14] [i_14])))));
        }
        var_34 = (-var_3 % -3);
    }
    var_35 = (min(var_35, (((((((-127 - 1) ? 48120 : 963044990))) ? 1 : var_3)))));
    #pragma endscop
}
