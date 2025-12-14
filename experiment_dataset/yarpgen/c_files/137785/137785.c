/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((var_8 && var_9) == ((var_8 ? var_3 : var_0)))) ? -27502 : (((!(!var_10))))));
    var_16 = (max(var_16, var_12));

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_2 [8] [8] = ((min(var_9, -var_8)));
        arr_3 [i_0] [i_0] = (max((max(var_11, (var_6 * var_6))), ((max((min(var_1, var_12)), var_3)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {

                        for (int i_4 = 3; i_4 < 9;i_4 += 1)
                        {
                            arr_15 [3] [i_3] [i_2] [i_3] [7] = ((((((((27509 << (27501 - 27490)))) & (max(268402688, -16384))))) ? ((min(var_2, var_13))) : var_13));
                            arr_16 [i_3] [i_3] [i_2] [1] [10] [i_1] [i_3] = ((((var_9 < (min(var_8, var_12)))) ? (((((var_2 >> (var_13 + 9529)))) ^ (max(1825708255, 53200)))) : var_1));
                            var_17 = (min(var_17, (((((((((var_8 ? var_6 : var_13))) == var_8))) < var_3)))));
                            var_18 = (max(var_18, ((((var_4 ? var_7 : var_5))))));
                            arr_17 [2] [i_3] [i_3] [i_0] = ((((var_7 ? var_8 : var_8))));
                        }
                        for (int i_5 = 3; i_5 < 7;i_5 += 1)
                        {
                            arr_21 [9] [i_1] [i_1] [i_1] [8] [i_3] = (((-var_11 + (var_13 / var_14))));
                            var_19 = (min(var_19, ((max(268402702, (27525 <= 62756))))));
                            arr_22 [i_3] [i_1] [4] [i_1] [i_3] = (var_4 ^ var_3);
                            var_20 = (min(var_20, ((8 ? 12832935142279344037 : 2234))));
                        }
                        arr_23 [i_3] [i_1] = ((192 + ((((var_10 && (var_3 < var_12)))))));
                    }
                    var_21 = (max(var_21, ((((((!1379795761205349196) % ((var_8 ? var_4 : var_8)))) > ((((var_4 ? var_12 : var_5)) * var_13)))))));
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
    {
        arr_26 [3] [i_6] = (min(var_3, (var_3 - var_12)));
        var_22 = (max(var_22, ((((((!var_10) != var_13)) ? ((~(min(var_11, var_4)))) : (var_10 ^ var_4))))));
        var_23 = ((((max(((max(var_1, var_2))), (var_14 * var_8)))) ? var_7 : var_4));
        arr_27 [4] [i_6] = ((~(var_10 < var_14)));
        var_24 = ((var_7 ? (~var_5) : (!var_5)));
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 10;i_7 += 1)
    {
        var_25 -= var_13;
        var_26 = (min(var_26, var_14));
        var_27 = (max(var_27, var_1));

        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            var_28 = (min(var_28, (var_6 * -14579)));
            var_29 = (var_7 | var_1);
            arr_33 [i_8] [i_8] [i_8] = (var_6 && var_1);
        }
        for (int i_9 = 3; i_9 < 10;i_9 += 1)
        {
            arr_37 [i_9] [9] [i_9] = ((var_6 ? var_11 : var_2));
            var_30 = (min(var_30, ((((var_6 ^ var_6) > var_14)))));
            var_31 = (min(var_31, ((((var_4 == var_10) ? var_13 : (var_2 + var_13))))));
        }
        for (int i_10 = 1; i_10 < 11;i_10 += 1)
        {

            for (int i_11 = 0; i_11 < 12;i_11 += 1)
            {
                arr_43 [i_10] [i_10 - 1] [i_7] [i_10] = (var_5 != var_10);
                arr_44 [i_10] [i_10] [i_10] = ((var_11 | ((var_10 ? var_0 : var_3))));
                arr_45 [i_10] [i_11] [9] [i_10] = (var_3 == var_14);
            }
            for (int i_12 = 3; i_12 < 10;i_12 += 1)
            {
                arr_50 [i_10] [1] [i_10] = ((var_5 ? var_3 : var_7));
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 12;i_13 += 1)
                {
                    for (int i_14 = 3; i_14 < 11;i_14 += 1)
                    {
                        {
                            var_32 = ((var_12 ? ((var_9 << (var_6 + 22084))) : (var_8 != var_0)));
                            arr_56 [i_7 - 1] [i_7] [i_10] [i_7] [i_7 + 2] [2] [6] = (!var_6);
                            arr_57 [i_10] [i_10] [i_10] = (var_4 > var_1);
                            var_33 = ((var_14 > (var_11 / var_8)));
                            arr_58 [i_14] [i_10] [i_13] [i_12] [i_10 + 1] [i_10] [i_7 + 1] = ((var_4 || (var_4 && var_1)));
                        }
                    }
                }
            }
            var_34 = (min(var_34, (((var_4 ? var_7 : var_0)))));
            var_35 = var_0;
        }
    }
    var_36 = (min(var_36, var_7));

    for (int i_15 = 0; i_15 < 12;i_15 += 1)
    {
        var_37 *= (~2850);

        for (int i_16 = 0; i_16 < 12;i_16 += 1)
        {
            arr_63 [i_15] = (((!var_1) < var_11));

            /* vectorizable */
            for (int i_17 = 0; i_17 < 12;i_17 += 1)
            {
                arr_67 [i_17] [0] [i_17] = var_3;
                arr_68 [i_17] [5] [4] [i_17] = ((var_9 << (var_13 + 9516)));
                var_38 = var_6;
                var_39 = var_0;
            }

            for (int i_18 = 0; i_18 < 12;i_18 += 1)
            {
                arr_72 [i_15] [i_15] [7] [5] = ((((1379795761205349209 ? 32767 : 1787754558)) << (((min(var_0, var_9)) - 5854459886690947963))));
                arr_73 [i_18] [i_18] [i_18] [i_18] = ((((!(var_10 | var_6))) ? var_0 : var_3));
            }
            var_40 = (((min((((123 ? 27523 : -19120))), 4092)) >= (((max(var_13, var_3))))));
        }
        for (int i_19 = 0; i_19 < 12;i_19 += 1)
        {
            var_41 = (min(var_41, (max(((var_0 << (var_13 + 9559))), (var_12 % var_14)))));
            var_42 = (min(var_42, var_5));
        }
        for (int i_20 = 3; i_20 < 10;i_20 += 1)
        {
            /* LoopNest 2 */
            for (int i_21 = 0; i_21 < 12;i_21 += 1)
            {
                for (int i_22 = 1; i_22 < 9;i_22 += 1)
                {
                    {
                        arr_86 [6] [10] [i_20] [i_15] [i_15] = ((var_4 <= (9 / 27540)));
                        var_43 = (((min(879016323, 549688705024)) * var_13));
                        arr_87 [i_22 - 1] [8] [i_20] [i_20] [i_15] [8] = max((((var_13 ? var_1 : var_12))), ((var_0 ? var_10 : var_10)));
                    }
                }
            }
            var_44 = (min(var_44, ((((((var_7 >> (var_2 - 57)))) != (((var_11 <= (~var_0)))))))));
            arr_88 [i_15] [4] [i_20] = ((!(!var_5)));
        }
    }
    #pragma endscop
}
