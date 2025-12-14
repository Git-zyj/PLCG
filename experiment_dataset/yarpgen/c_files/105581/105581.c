/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105581
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= ((!((min((~65535), (~var_4))))));

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        var_21 = (max(var_21, (((!((max(9223372036854775807, 1))))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_22 = (min(var_22, ((((arr_0 [i_0 - 2]) <= ((76 ? var_17 : 13790)))))));

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                var_23 = (((arr_5 [i_0 - 3] [i_0 - 2]) ? (arr_3 [i_0 - 2]) : ((~(arr_2 [i_2] [i_1])))));

                for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
                {
                    arr_13 [5] [i_1] [5] [1] |= ((!((((var_19 + 2147483647) >> var_15)))));
                    arr_14 [i_0] = (61 ? 61 : var_18);
                }
                for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
                {
                    var_24 = ((~((~(arr_11 [i_0] [1] [11] [i_4] [8])))));
                    var_25 = (arr_2 [i_0 + 2] [i_0 - 2]);
                    arr_19 [i_0] [i_1] [0] [8] [8] = ((!(arr_3 [i_2])));
                }
                for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
                {
                    var_26 = (min(var_26, (((-(arr_5 [i_0 - 3] [i_0 + 2]))))));
                    var_27 = ((4283768957812274104 ^ (-2147483647 - 1)));
                }
            }
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                var_28 -= (1 | 43215);
                var_29 -= 14162975115897277512;
                var_30 = ((~-418140692925663821) | (~27));
                arr_26 [i_6] = (arr_17 [i_0 + 1]);
            }
            var_31 = (min(var_31, (((var_12 ? ((-(arr_8 [7] [7] [8] [i_0]))) : -51)))));
            arr_27 [i_1] [5] = (arr_23 [i_0] [i_0] [i_0 - 1]);
            arr_28 [i_0] = (((arr_25 [i_0] [i_0 - 3] [5] [5]) / (arr_25 [i_0] [i_0 + 1] [i_0 + 1] [0])));
        }
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            var_32 -= -27071;
            arr_32 [i_0] [i_0] [i_0] = (((((1 ? (min(var_13, 15900870913644149883)) : (301861902 < var_16)))) ? (((!((!(arr_16 [i_0])))))) : (arr_21 [i_0] [2] [i_7] [4])));
        }
        for (int i_8 = 2; i_8 < 9;i_8 += 1)
        {
            var_33 -= (((!((max((arr_35 [0] [0] [i_0]), (arr_34 [3] [3] [1])))))));
            arr_36 [i_0] = ((~(arr_35 [i_0] [11] [i_0])));
        }
        var_34 *= (arr_12 [0] [0] [i_0] [i_0] [i_0]);
        arr_37 [i_0] [i_0] &= 1372455159;
    }
    for (int i_9 = 0; i_9 < 17;i_9 += 1) /* same iter space */
    {
        arr_40 [i_9] [i_9] = (arr_39 [i_9]);
        arr_41 [i_9] = ((~(arr_38 [0])));
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 17;i_10 += 1) /* same iter space */
    {
        var_35 = ((var_14 ? ((-418140692925663821 ? var_18 : 208)) : (61 - 61)));
        arr_44 [11] = ((4283768957812274092 ? var_10 : (arr_42 [6])));
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 17;i_12 += 1)
            {
                {
                    var_36 ^= (122 - var_11);
                    arr_49 [i_12] [i_11] [i_11] [i_10] = ((((18446603336221196288 || (arr_39 [i_12]))) || (!var_3)));
                    arr_50 [i_10] [12] [5] [i_12] = ((var_17 - ((var_14 - (arr_39 [i_11])))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 17;i_13 += 1) /* same iter space */
    {
        var_37 = (~5);

        for (int i_14 = 0; i_14 < 17;i_14 += 1)
        {
            arr_56 [i_13] [i_13] = (arr_46 [i_13]);
            /* LoopNest 2 */
            for (int i_15 = 2; i_15 < 16;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 17;i_16 += 1)
                {
                    {
                        arr_62 [7] [i_13] = (arr_48 [i_15 - 1] [12]);
                        arr_63 [i_15] [i_13] [i_13] [4] = ((!(((-14435 ? 51746 : 1)))));
                    }
                }
            }
        }
        for (int i_17 = 0; i_17 < 17;i_17 += 1)
        {
            var_38 = -2798595307;
            var_39 *= ((var_14 ? (((-23 ? -21 : 14434))) : ((var_14 ? 14162975115897277511 : (arr_59 [5] [15] [7] [i_13])))));
        }
        for (int i_18 = 0; i_18 < 17;i_18 += 1)
        {
            var_40 -= (((arr_66 [i_13] [i_18] [i_18]) ? (arr_66 [i_13] [i_18] [4]) : 4283768957812274097));
            var_41 = -62;
        }
        var_42 -= (((((~(arr_55 [i_13] [0] [2])))) ^ (((arr_52 [i_13]) ? var_16 : var_9))));
        var_43 = ((!(arr_70 [i_13])));
    }
    #pragma endscop
}
