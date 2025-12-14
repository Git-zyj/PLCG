/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142830
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_6;
    var_17 = var_7;
    var_18 = var_3;

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        var_19 &= ((3 ? (max(0, (arr_0 [i_0 - 3]))) : ((min((arr_2 [i_0]), var_4)))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        var_20 = (((-var_9 ? -var_4 : ((((arr_6 [i_1] [i_3]) ? (arr_2 [1]) : (arr_6 [i_1] [i_1])))))));

                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            var_21 = (((((var_13 ? (~-34) : ((458752 ? 2147483647 : 4294967293))))) ? (((((max((arr_3 [1] [i_2] [4]), (arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 1] [10])))) ? (max(var_7, var_10)) : ((min(var_4, var_15)))))) : ((min(var_6, var_1)))));
                            arr_12 [11] [i_2] [i_1] [i_3] [i_4] = var_11;
                        }
                        arr_13 [22] [i_1] [i_1] [1] = (arr_0 [i_0 - 1]);
                    }
                }
            }
        }
        arr_14 [i_0] = (max((((arr_11 [i_0 - 2] [i_0] [i_0 - 2] [i_0 - 1] [i_0 - 3]) ? 0 : (arr_11 [i_0 - 2] [i_0 - 3] [i_0] [i_0] [i_0 - 2]))), (arr_5 [0])));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        var_22 = var_6;
        var_23 = (arr_16 [i_5] [i_5]);

        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                for (int i_8 = 4; i_8 < 23;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        {
                            arr_29 [i_5] [i_6] [i_7] [i_7] [i_5] [i_5] = ((-((-(arr_23 [i_5] [i_5] [i_7] [11] [i_8] [i_9])))));
                            arr_30 [i_7] [i_6] [i_6] = (((4294967292 || var_10) <= 1));
                            var_24 = 1;
                            arr_31 [i_5] [i_5] [i_7] [i_8 - 2] [i_9] [i_9] = -var_0;
                        }
                    }
                }
            }
            var_25 = ((((((arr_24 [18] [i_5]) ? 65531 : 1903789966))) ? (((31 ? (arr_19 [i_5] [i_5]) : 1))) : 4257376491));
        }
        for (int i_10 = 1; i_10 < 1;i_10 += 1)
        {
            arr_35 [i_5] [i_10] = 4294967276;
            arr_36 [i_5] [i_10 - 1] [i_10] = ((!(arr_21 [i_10 - 1] [i_10 - 1] [i_5])));
        }
        for (int i_11 = 0; i_11 < 24;i_11 += 1) /* same iter space */
        {
            arr_39 [21] [21] = (((arr_20 [i_11] [i_5] [i_5] [i_5]) ? (arr_19 [i_11] [i_11]) : (arr_26 [i_5] [i_11])));
            var_26 = (var_12 - -1336802752);
            var_27 = (arr_16 [i_5] [i_5]);

            for (int i_12 = 1; i_12 < 1;i_12 += 1)
            {
                var_28 = (((arr_33 [i_5] [i_11] [i_12 - 1]) ? -var_15 : (arr_41 [i_12] [i_11] [1])));
                arr_43 [i_5] [i_11] [i_11] = (((arr_18 [i_12] [i_12] [i_12 - 1]) ? (((~(arr_34 [i_5] [i_5] [i_5])))) : ((1 ? 4503599627370495 : (arr_21 [i_11] [i_11] [i_5])))));
                arr_44 [i_12] [i_11] [i_5] [i_5] = (arr_41 [0] [i_12 - 1] [0]);
                var_29 &= (((~var_15) ? (((((arr_37 [i_12 - 1] [i_11]) >= (arr_38 [i_5]))))) : (arr_22 [i_5])));
            }
        }
        for (int i_13 = 0; i_13 < 24;i_13 += 1) /* same iter space */
        {
            var_30 = ((~(((arr_28 [i_5] [2] [2] [i_13] [i_13]) ? var_0 : -2147483642))));
            arr_47 [i_5] [i_5] = (arr_15 [i_13]);
            var_31 = ((var_6 <= (arr_34 [i_5] [i_5] [i_5])));
        }
        arr_48 [6] [6] = var_3;

        for (int i_14 = 0; i_14 < 24;i_14 += 1)
        {
            arr_53 [i_5] = ((var_13 % (arr_19 [i_5] [i_14])));
            arr_54 [i_5] = (1 ? var_4 : (arr_42 [i_5] [12] [8] [i_14]));
            arr_55 [i_14] [i_5] [i_5] = (((arr_16 [i_14] [i_5]) ? (arr_52 [i_5] [i_5] [i_14]) : (arr_52 [i_14] [i_14] [i_5])));
        }
        for (int i_15 = 3; i_15 < 23;i_15 += 1)
        {
            var_32 = 4294967295;
            var_33 ^= ((var_12 ? -32762 : (arr_18 [i_5] [21] [i_15 + 1])));
        }
        for (int i_16 = 0; i_16 < 24;i_16 += 1)
        {
            var_34 = var_11;
            arr_62 [i_5] [i_5] [i_5] = ((((((arr_52 [i_5] [i_5] [i_5]) ? var_1 : var_2))) ? ((15 ? -1 : (arr_20 [i_5] [i_5] [i_5] [2]))) : var_9));
            var_35 = (~var_15);
            var_36 = arr_59 [i_16];
        }
    }
    for (int i_17 = 0; i_17 < 18;i_17 += 1)
    {
        var_37 = ((((((var_8 ^ (arr_25 [i_17] [i_17] [i_17] [i_17] [i_17]))))) ? (arr_58 [i_17] [i_17]) : (((var_15 <= (arr_51 [i_17] [1] [15]))))));
        var_38 = 2147483647;
    }
    #pragma endscop
}
