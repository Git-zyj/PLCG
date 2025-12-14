/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13560
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = ((var_7 ? (arr_0 [i_0 + 1]) : (arr_0 [i_0 - 3])));

        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {
            arr_7 [i_0] [i_0] [i_0] = -var_1;
            var_16 *= arr_0 [i_0];
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 2; i_3 < 10;i_3 += 1)
            {
                arr_14 [i_0] [i_2] [i_2] [i_2] = (min((((((var_14 ? (arr_1 [i_0]) : (arr_8 [i_0])))) ? ((((arr_9 [i_0 - 1] [i_0 - 3]) == 10))) : (((arr_5 [i_0]) ? (arr_13 [i_2] [i_0]) : 1)))), var_0));
                var_17 = (min((arr_12 [i_0] [i_0] [i_3 + 1]), (((arr_12 [i_3] [i_3] [i_3 + 1]) ? var_9 : (arr_12 [i_0] [i_0 - 2] [i_3 + 1])))));
            }
            var_18 = var_11;
        }
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        var_19 ^= (~var_9);
        arr_18 [i_4] = (!var_2);
    }
    /* vectorizable */
    for (int i_5 = 2; i_5 < 10;i_5 += 1)
    {
        var_20 = (((arr_22 [i_5 + 3]) * (arr_16 [6])));

        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            var_21 |= ((var_11 | ((~(arr_22 [i_6])))));
            var_22 = (~-var_14);
        }
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            var_23 = (max(var_23, (arr_16 [i_7])));

            for (int i_8 = 1; i_8 < 10;i_8 += 1)
            {

                for (int i_9 = 3; i_9 < 12;i_9 += 1)
                {
                    arr_34 [i_8] = (arr_33 [i_8] [i_8 + 3] [i_7] [i_8]);
                    arr_35 [i_5 + 2] [i_5] [i_8] [i_5] = -524287;
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 13;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 11;i_11 += 1)
                    {
                        {
                            arr_42 [5] [i_8] [5] [i_8] [i_5] = (arr_17 [i_5] [i_5]);
                            var_24 -= (arr_38 [i_7] [i_7] [i_10] [i_8 - 1]);
                            arr_43 [i_7] [i_7] [i_8] [i_7] [i_11] [i_10] = ((arr_29 [i_8] [i_11 + 1]) ? (arr_25 [i_8 + 3]) : (arr_29 [i_8] [i_11 + 1]));
                        }
                    }
                }
            }
        }
    }

    for (int i_12 = 0; i_12 < 16;i_12 += 1)
    {
        arr_48 [i_12] = (min(((((var_1 % (arr_16 [i_12]))) & (((arr_16 [i_12]) ? (arr_46 [i_12]) : var_1)))), ((((min(var_0, var_0))) ? ((var_13 ? 681927764 : var_11)) : (arr_46 [10])))));
        var_25 *= var_0;
        arr_49 [i_12] = ((!((((arr_46 [i_12]) ? var_12 : (arr_46 [i_12]))))));
    }
    for (int i_13 = 0; i_13 < 16;i_13 += 1)
    {
        arr_52 [i_13] = var_10;
        arr_53 [i_13] [i_13] = ((((max((arr_44 [i_13]), ((max(67, (arr_50 [i_13] [i_13]))))))) ? (max(((3015642819250654050 ? var_9 : (arr_47 [i_13]))), var_9)) : (max((((arr_50 [i_13] [i_13]) ? var_9 : var_5)), (arr_46 [12])))));
    }

    for (int i_14 = 0; i_14 < 20;i_14 += 1)
    {
        arr_57 [i_14] = (min(var_1, (((((12 ? var_3 : (arr_55 [i_14]))) == ((var_2 & (arr_55 [i_14]))))))));
        var_26 = var_4;
        arr_58 [11] = (((((arr_54 [i_14]) ? 78 : (((arr_54 [i_14]) ? -86 : 5305030096295687935)))) != var_14));
    }
    for (int i_15 = 1; i_15 < 20;i_15 += 1)
    {
        var_27 = ((((((arr_59 [i_15]) ? (arr_59 [i_15]) : var_12))) ? (((arr_59 [i_15]) ? (arr_59 [i_15]) : 2605971290399660468)) : ((((arr_59 [i_15]) ? (arr_59 [i_15]) : (arr_59 [i_15]))))));
        arr_61 [i_15] = (arr_60 [i_15]);
        var_28 = ((-68 ? (arr_60 [i_15]) : ((-(arr_60 [i_15])))));
    }
    var_29 = (min(((~((var_1 ? var_9 : var_11)))), (((((((var_11 + 2147483647) >> (var_6 - 30665)))) ? ((min(var_12, var_10))) : var_12)))));
    #pragma endscop
}
