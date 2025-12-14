/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119569
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_13 = (min((((!(((72057456598974464 ? 1233 : 23269)))))), -var_9));
                var_14 = (((((1 ? (arr_1 [i_0]) : 1))) >> ((((max(11533, -100))) - 65375))));
            }
        }
    }
    var_15 = (!var_5);

    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {

        /* vectorizable */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 22;i_6 += 1)
                    {
                        {
                            arr_17 [i_6] [i_4] [i_4] [i_4] [i_2] = ((-(arr_11 [i_5] [i_5 - 1] [i_4] [i_6])));
                            var_16 = (min(var_16, (arr_13 [i_6 + 2] [i_6] [i_5 + 2] [i_4] [i_4] [i_4])));
                        }
                    }
                }
            }
            var_17 = ((99 & (arr_11 [10] [i_3] [i_2] [i_3])));
            arr_18 [i_3] = ((~((1 ? var_10 : var_11))));
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            var_18 = ((0 << ((((~(arr_12 [i_2] [i_7] [i_7] [i_2]))) + 38968))));
            arr_21 [i_2] = var_1;
            arr_22 [i_7] [i_7] = ((!(arr_12 [i_2] [i_2] [i_2] [i_2])));
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                {
                    arr_28 [i_2] [i_2] = ((((((!81) > (arr_27 [i_9])))) << (((arr_12 [i_2] [i_2] [i_2] [i_2]) - 38907))));
                    var_19 = (min(var_19, 64302));

                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        arr_31 [i_10] [18] [18] [i_9] = var_1;
                        var_20 &= (!4611685949707911168);
                    }
                    /* vectorizable */
                    for (int i_11 = 2; i_11 < 23;i_11 += 1) /* same iter space */
                    {
                        var_21 ^= (arr_20 [i_2] [i_2] [i_9]);
                        var_22 ^= ((arr_15 [i_2] [i_11 - 1] [i_2] [i_11 - 1]) != -var_5);
                        arr_36 [i_2] [13] [13] [13] = var_12;
                    }
                    /* vectorizable */
                    for (int i_12 = 2; i_12 < 23;i_12 += 1) /* same iter space */
                    {
                        var_23 ^= ((~(arr_32 [i_2] [i_2] [i_2] [i_12 + 1])));
                        arr_40 [i_12] [i_12 + 1] [i_12] [i_12 - 1] [i_12] |= (((arr_32 [i_12 + 1] [i_12 + 1] [i_12 - 1] [i_12 - 1]) == ((var_1 ^ (arr_11 [i_2] [i_8] [i_8] [i_12])))));
                    }
                    for (int i_13 = 2; i_13 < 23;i_13 += 1) /* same iter space */
                    {
                        var_24 = (arr_16 [i_2] [i_9]);
                        var_25 = var_6;
                    }

                    for (int i_14 = 0; i_14 < 24;i_14 += 1)
                    {

                        /* vectorizable */
                        for (int i_15 = 0; i_15 < 24;i_15 += 1)
                        {
                            var_26 = 0;
                            var_27 += ((4735893868872505043 ? -1606420455859649419 : var_3));
                            var_28 = (min(var_28, ((((arr_16 [i_8] [i_2]) ? (arr_16 [i_8] [i_9]) : var_8)))));
                            var_29 ^= (((!1) >= ((-(arr_39 [i_2] [i_9] [i_14] [i_15])))));
                        }
                        for (int i_16 = 0; i_16 < 24;i_16 += 1) /* same iter space */
                        {
                            arr_50 [i_16] [i_16] = ((~(arr_43 [i_2] [i_2] [i_9] [i_9] [i_14] [i_16])));
                            arr_51 [i_8] [17] [i_16] = (60314 ^ 5230);
                            var_30 = (!(((var_7 ? (min(4869229875317385782, (arr_23 [i_9] [i_9]))) : var_5))));
                            var_31 = var_11;
                        }
                        /* vectorizable */
                        for (int i_17 = 0; i_17 < 24;i_17 += 1) /* same iter space */
                        {
                            var_32 = ((~(arr_49 [0] [i_8] [i_8] [i_8])));
                            var_33 = (((281474972516352 ? (arr_53 [i_17] [i_14] [i_9] [19] [i_2] [i_2]) : var_6)) * (((arr_38 [i_14] [i_14] [i_8] [i_2]) / 7778659646744844696)));
                            arr_54 [i_2] [i_8] [i_9] [i_2] [i_17] = 38769;
                        }
                        for (int i_18 = 0; i_18 < 24;i_18 += 1) /* same iter space */
                        {
                            var_34 = var_0;
                            var_35 &= (arr_41 [i_8] [i_8] [i_14]);
                            arr_57 [i_18] [i_9] [i_14] [i_9] [i_9] [i_8] [i_2] = ((max((!1), 1233)));
                        }

                        for (int i_19 = 0; i_19 < 1;i_19 += 1)
                        {
                            var_36 = (~1);
                            var_37 = (min(var_37, ((((((1 & (~var_6)))) ? 49 : ((~((max(120, (arr_60 [i_2] [i_9] [i_2] [i_9] [i_9])))))))))));
                            var_38 = arr_23 [i_9] [i_14];
                            var_39 = max(((max(var_1, (arr_38 [i_19] [i_14] [i_2] [i_2])))), (((max((arr_37 [i_9] [i_19]), (arr_23 [i_8] [1]))) % 1)));
                            var_40 = -307556881818726271;
                        }
                    }
                    arr_61 [i_9] [i_9] [i_8] [i_2] = var_8;
                }
            }
        }
        var_41 = (min(var_41, ((((((var_5 ? (arr_13 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) : (arr_26 [i_2]))) + var_5)) - ((((var_1 >= (arr_12 [i_2] [i_2] [i_2] [i_2])))))))));
    }
    /* vectorizable */
    for (int i_20 = 3; i_20 < 14;i_20 += 1) /* same iter space */
    {
        var_42 = ((-(arr_37 [i_20] [i_20 - 1])));
        var_43 = (arr_56 [i_20 + 2] [i_20 - 1]);
    }
    for (int i_21 = 3; i_21 < 14;i_21 += 1) /* same iter space */
    {
        arr_67 [i_21] = (max(((((arr_34 [i_21] [i_21] [i_21 - 2]) ? (arr_16 [i_21] [i_21]) : (arr_60 [i_21 + 1] [i_21 + 3] [i_21] [i_21] [i_21])))), (max(((max(47611, (arr_65 [i_21])))), (arr_66 [i_21])))));
        arr_68 [i_21] [i_21] = (max((8251844324644263758 - 6368053966083629438), 4868416318310009467));
        var_44 = (!var_9);
        arr_69 [i_21] = var_9;
    }
    #pragma endscop
}
