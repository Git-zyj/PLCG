/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_20 = ((7 ? ((19305 ? var_11 : var_12)) : (((((arr_2 [i_0] [i_0 + 3]) || (arr_1 [i_0 + 4])))))));

        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
            {
                arr_8 [12] [4] [i_1] [12] = max(5591, 1391307547);
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        {
                            var_21 |= (((((~((var_9 ? (arr_7 [i_0] [0]) : 1))))) ? (0 - var_10) : (var_15 * var_12)));
                            arr_15 [i_3] [i_3] [6] [i_3] [i_3] [i_3] = (max((max(var_7, -1)), 13763370196070275667));
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_1] = (((var_4 == 8935766863474433985) || (((61940 ^ ((var_15 ? -2103219697542026619 : (arr_0 [i_0]))))))));
                            var_22 = (arr_5 [8] [8] [i_0 + 2]);
                        }
                    }
                }
                var_23 = var_9;
            }
            /* vectorizable */
            for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
            {
                var_24 = ((12532 << (((((-2147483647 - 1) - -2147483618)) + 43))));
                var_25 = 18446744073709551611;
            }
            var_26 = (max(var_26, (((!((min(((var_12 ? 0 : 87)), 0))))))));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            var_27 = var_5;
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 10;i_8 += 1)
                {
                    {
                        var_28 ^= ((var_7 ? ((-102 - (-32767 - 1))) : var_5));
                        arr_30 [i_6] [i_0 + 1] [i_0 + 1] [i_6] [i_0] [i_6] = 25281;
                        var_29 *= ((-4 ? 2951899343 : 4294967290));

                        for (int i_9 = 1; i_9 < 12;i_9 += 1)
                        {
                            arr_35 [i_0] [i_6] [i_0] [i_8] [i_9 + 1] |= (arr_11 [i_9] [i_9 + 2] [i_9 + 2] [10] [i_0 + 2] [i_0] [i_0 + 3]);
                            var_30 |= var_14;
                            var_31 = var_15;
                            var_32 = 233;
                        }
                        for (int i_10 = 0; i_10 < 14;i_10 += 1)
                        {
                            arr_38 [i_6] [i_10] [i_10] [i_10] [i_10] [i_10] = -219;
                            var_33 -= 16760832;
                            arr_39 [i_7] [i_8 + 2] [i_6] = (arr_2 [i_8 + 1] [i_0]);
                        }
                    }
                }
            }
        }
        var_34 |= var_4;
    }
    for (int i_11 = 1; i_11 < 10;i_11 += 1) /* same iter space */
    {
        var_35 = (arr_19 [i_11] [i_11 + 3] [i_11] [i_11]);
        arr_42 [i_11] = ((var_6 / ((((max(-25645, 0))) ? -35 : (-26725 * 39)))));
        var_36 = (max(((((-35184372088832 ? 2565575219 : 33554431)))), ((-535076443 ? (((min(var_1, var_13)))) : ((17 ? 1 : var_11))))));
    }
    var_37 = -var_9;
    var_38 ^= (var_2 + -0);
    #pragma endscop
}
