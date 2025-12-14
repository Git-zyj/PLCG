/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110219
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_7 [i_0] [10] [i_0] = 1;

            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                arr_10 [1] [i_0] [i_2] = (!43);
                var_17 = (var_3 ? var_3 : var_10);

                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    arr_15 [1] [i_1] [i_0] = (~var_16);

                    for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
                    {
                        var_18 = ((var_16 ? 14 : var_14));
                        var_19 = (max(var_19, ((((var_3 / var_5) || (((var_11 ? 213 : 43))))))));
                        var_20 = ((var_3 ? 43 : 15282114111758899645));
                        arr_19 [6] [0] [i_0] [i_3] [i_4] [i_0] = var_0;
                    }
                    for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
                    {
                        var_21 = (max(var_21, (((25295 ? -426285898 : 43)))));
                        var_22 = (((arr_0 [1]) % var_15));
                    }
                    arr_23 [i_0] [7] [10] = (var_12 | var_10);

                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        var_23 = ((var_6 ? (~var_14) : (((arr_24 [i_0] [i_1] [i_2] [i_3]) ^ (arr_16 [i_0] [1] [i_2] [i_3])))));
                        var_24 *= ((var_9 ? 174669430561352044 : (arr_26 [3] [i_1] [i_1] [i_3] [0])));
                    }
                }
            }
        }
        arr_27 [i_0] [i_0] = ((177677801 ? 43 : -315843882));
    }

    /* vectorizable */
    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {

        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {

            for (int i_9 = 1; i_9 < 24;i_9 += 1)
            {

                for (int i_10 = 0; i_10 < 25;i_10 += 1)
                {
                    var_25 = var_5;

                    for (int i_11 = 1; i_11 < 24;i_11 += 1) /* same iter space */
                    {
                        var_26 &= 1;
                        var_27 ^= var_9;
                        var_28 = (((41 + 25299) / -var_13));
                    }
                    for (int i_12 = 1; i_12 < 24;i_12 += 1) /* same iter space */
                    {
                        var_29 = (max(var_29, (-29588 == var_4)));
                        arr_44 [i_10] [1] |= var_3;
                        var_30 = 63;
                    }

                    for (int i_13 = 1; i_13 < 23;i_13 += 1)
                    {
                        var_31 |= 54;
                        var_32 = var_10;
                        var_33 = (var_12 >> var_9);
                    }
                    for (int i_14 = 0; i_14 < 25;i_14 += 1)
                    {
                        var_34 = ((var_4 || (arr_34 [i_9 + 1] [1] [7] [i_10])));
                        var_35 ^= (27 || -6481507356143626639);
                        var_36 = -18272074643148199572;
                    }
                }
                for (int i_15 = 3; i_15 < 24;i_15 += 1)
                {

                    for (int i_16 = 0; i_16 < 25;i_16 += 1)
                    {
                        var_37 -= (var_5 / var_15);
                        var_38 = (((((3314087824150249463 ? var_8 : 3547031570))) ? ((var_6 ? var_8 : var_10)) : ((177677801 ? 1 : var_3))));
                        var_39 = (max(var_39, (arr_37 [i_9 + 1] [i_9 + 1])));
                        var_40 |= var_7;
                    }

                    for (int i_17 = 0; i_17 < 25;i_17 += 1)
                    {
                        var_41 ^= (var_1 / 51);
                        var_42 = (~5541369250337599899);
                        var_43 = (-12088 < 177677801);
                    }
                    for (int i_18 = 0; i_18 < 25;i_18 += 1)
                    {
                        var_44 = (((((var_6 ? var_11 : var_13))) ? var_14 : -1));
                        arr_58 [i_7] [14] [14] [21] [i_8] = var_9;
                    }

                    for (int i_19 = 0; i_19 < 25;i_19 += 1)
                    {
                        var_45 = (arr_55 [i_9 - 1]);
                        var_46 = (min(var_46, (!18446744073709551615)));
                    }
                }
                var_47 |= var_9;

                for (int i_20 = 0; i_20 < 25;i_20 += 1)
                {
                    arr_63 [1] [i_8] [9] [i_8] [i_20] [i_8] = ((!(954907683603461747 / 3181649344)));
                    arr_64 [i_7] [i_8] [i_9] [i_8] = var_4;

                    for (int i_21 = 0; i_21 < 1;i_21 += 1)
                    {
                        arr_67 [2] [1] [1] [i_20] [0] [14] [1] &= ((3938571327 * (((var_8 ? var_8 : var_15)))));
                        var_48 *= -1919870593;
                    }
                    for (int i_22 = 0; i_22 < 25;i_22 += 1)
                    {
                        arr_71 [i_8] [i_8] [i_9] [i_22] [i_22] = var_1;
                        var_49 = (min(var_49, ((((arr_56 [22] [i_20] [i_9] [i_20]) ? var_13 : var_12)))));
                        var_50 = -var_7;
                        var_51 = (arr_68 [5] [i_9 - 1] [i_8] [i_20] [i_22] [15] [i_20]);
                    }
                }
            }
            arr_72 [0] |= var_14;
            var_52 -= (var_13 ? (var_14 / var_5) : 43);
        }
        var_53 = (max(var_53, (var_8 / var_0)));
        var_54 = (((arr_30 [i_7] [i_7]) ? (arr_43 [i_7] [i_7] [1] [i_7] [i_7] [22]) : (-3585106886942210177 && 1)));
    }
    var_55 = (max((min(((3221225472 ? 2441759466 : 7614914270398763933)), (((var_0 << (var_3 - 10215)))))), var_6));
    #pragma endscop
}
