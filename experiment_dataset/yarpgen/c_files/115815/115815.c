/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115815
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= var_5;
    var_19 = var_0;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            arr_5 [14] [i_1] [4] &= ((30145 ? ((1 ? (((min(1, 1)))) : ((var_14 / (arr_1 [i_0] [i_1]))))) : (((max((min(var_10, (arr_0 [i_1]))), (arr_0 [i_1])))))));

            for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
            {

                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    var_20 -= -97;

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
                    {
                        var_21 = ((arr_13 [i_0]) & 3);
                        var_22 = 3;
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
                    {
                        var_23 = ((var_2 || (arr_6 [13] [i_3] [i_1])));
                        var_24 ^= var_13;
                    }
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        var_25 = (max(108, (max((arr_10 [i_0] [i_0] [i_0] [8] [i_0]), (arr_10 [i_2] [i_3] [i_2] [14] [14])))));
                        arr_22 [i_0] [0] [14] [i_1] [14] [i_0] &= (arr_10 [i_0] [0] [i_0] [i_0] [i_0]);
                    }

                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        var_26 *= (~-1393);
                        var_27 -= ((((((1 * 1) ? -30 : -23))) ? var_15 : -27));
                        var_28 = (max(var_28, 24083));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        var_29 = (-2840743919649873105 / -969884455);
                        var_30 = (((arr_7 [i_0] [i_8]) - (arr_14 [i_0] [i_0] [10] [i_3] [i_8])));
                    }
                    arr_28 [i_0] = (max((arr_6 [i_0] [i_1] [i_2]), ((-(arr_6 [11] [i_0] [i_0])))));
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    var_31 = (max(var_31, (((((var_12 ? (arr_23 [i_0] [13] [i_2] [i_9] [i_0] [i_0]) : (arr_29 [i_9] [i_1] [i_1] [i_0]))) + 21)))));
                    var_32 -= (~var_17);

                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        var_33 -= 153378947;
                        var_34 &= (((((arr_3 [i_2] [i_1]) / 17857706474525975991)) * (((var_1 ? 22 : (arr_0 [i_10]))))));
                    }
                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        arr_36 [i_0] [i_1] [i_0] [i_1] [i_11] = ((~(arr_18 [12] [i_9] [15] [i_0] [i_0])));
                        var_35 = -var_2;
                        var_36 = var_5;
                        var_37 ^= ((38206897 / (arr_4 [i_2] [i_2])));
                    }
                    for (int i_12 = 0; i_12 < 17;i_12 += 1)
                    {
                        var_38 *= (arr_24 [i_2] [i_1] [i_2]);
                        var_39 = ((arr_18 [i_0] [i_0] [i_2] [4] [i_12]) * 1);
                        var_40 = ((53312 ? var_13 : (arr_14 [i_0] [i_0] [i_0] [i_0] [i_12])));
                        arr_40 [i_2] [4] [i_2] [i_2] [4] [4] &= 3700328739812594404;
                    }
                }
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    var_41 -= arr_30 [i_0] [i_0] [i_0] [i_0];
                    arr_43 [i_0] [i_0] = (((((arr_20 [i_0] [i_0] [13] [i_13] [i_0]) ? (arr_23 [i_0] [i_1] [i_2] [i_13] [i_0] [i_13]) : var_15)) - (arr_23 [i_0] [i_0] [1] [i_2] [i_2] [i_13])));
                    arr_44 [i_0] [i_0] [i_0] [i_0] [i_2] [i_0] &= 161;
                }
                arr_45 [i_0] [i_1] [i_0] = (((arr_35 [i_0] [i_1]) ? var_1 : (((((var_7 ? 22 : var_16)) * ((58110 ? 53 : 62)))))));
            }
            for (int i_14 = 0; i_14 < 17;i_14 += 1) /* same iter space */
            {
                var_42 = (min(1, (arr_3 [i_0] [i_0])));

                for (int i_15 = 0; i_15 < 17;i_15 += 1)
                {
                    var_43 = (((((0 - (12140128466156450666 - 1)))) ? (min((min(var_9, var_15)), var_4)) : (((-(arr_18 [i_0] [i_0] [i_0] [i_0] [9]))))));
                    arr_51 [i_0] [12] = (16 ? 6729 : 24100);
                }
                for (int i_16 = 0; i_16 < 17;i_16 += 1)
                {
                    var_44 = (max(var_44, var_5));
                    var_45 -= (min(var_14, (arr_13 [i_14])));
                }
                arr_55 [i_0] [i_0] [i_0] [i_1] = 707963004;
            }
            for (int i_17 = 0; i_17 < 17;i_17 += 1) /* same iter space */
            {
                var_46 = (((arr_24 [i_0] [i_0] [i_0]) > ((min((arr_24 [i_0] [i_1] [i_17]), 1)))));
                var_47 = (arr_2 [i_0]);
            }
            for (int i_18 = 0; i_18 < 17;i_18 += 1) /* same iter space */
            {
                var_48 &= 0;
                var_49 = (max((((arr_42 [i_0] [i_1] [i_18] [i_18]) - (arr_31 [i_0] [i_0] [i_18] [i_18] [8]))), (arr_31 [i_0] [i_1] [i_1] [i_18] [i_1])));
                arr_62 [i_0] [i_0] [i_0] = (((((4294967295 ? (arr_0 [i_0]) : 5399900872395587231))) ? 6740382797872082589 : var_11));
            }
            var_50 = (max(var_50, (((-(arr_31 [16] [i_1] [16] [i_1] [i_1]))))));
            var_51 &= 64565;
        }

        for (int i_19 = 0; i_19 < 17;i_19 += 1)
        {
            var_52 = (min(var_12, (max((((arr_29 [i_19] [i_0] [0] [i_0]) ? var_16 : (arr_11 [5] [i_19] [i_19] [11] [i_0] [i_0]))), -var_10))));
            var_53 *= (((((arr_59 [i_0] [i_0] [i_0]) / var_17)) * ((((!(arr_59 [i_0] [i_0] [i_0])))))));
        }
    }
    var_54 = var_0;
    #pragma endscop
}
