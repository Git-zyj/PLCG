/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18591
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_16 = (max(var_16, (((~((((~(arr_1 [i_0]))) & (((~(arr_2 [i_0])))))))))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_10 [i_1] [i_1] [i_1] [i_3] [i_2 - 1] [i_1] = (((((max(var_8, var_10))) ? ((var_12 ? var_0 : var_5)) : (((arr_7 [i_1]) % var_11)))));
                        var_17 = (max(var_17, (((+((((((arr_3 [i_0] [i_0]) ? (arr_0 [i_0]) : (arr_6 [i_3] [i_1] [i_3])))) ? (arr_3 [i_3] [i_2 + 2]) : (arr_6 [i_0] [i_0] [i_0]))))))));
                    }
                }
            }
        }
    }
    for (int i_4 = 3; i_4 < 14;i_4 += 1)
    {

        for (int i_5 = 1; i_5 < 14;i_5 += 1) /* same iter space */
        {
            var_18 = max((((!(arr_7 [2])))), (arr_6 [6] [i_4] [6]));
            var_19 = (min(((max((arr_14 [i_5] [i_5]), var_9))), -1183518089129294604));
        }
        /* vectorizable */
        for (int i_6 = 1; i_6 < 14;i_6 += 1) /* same iter space */
        {
            var_20 = ((arr_3 [2] [2]) ? var_5 : (arr_1 [i_6]));

            for (int i_7 = 1; i_7 < 12;i_7 += 1)
            {
                var_21 = -19;

                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    arr_25 [i_8] [i_8] [i_4] = ((~(arr_2 [i_7])));
                    var_22 += ((-(arr_14 [i_7 + 1] [i_7 + 2])));
                }
                var_23 = (((arr_17 [i_6 + 1]) && var_15));
            }
            for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
            {
                var_24 ^= (~var_0);

                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    var_25 ^= ((((((var_1 % (arr_7 [i_9]))) + 2147483647)) >> var_12));
                    var_26 = (max(var_26, (((-var_10 ? (~var_11) : var_9)))));

                    for (int i_11 = 3; i_11 < 13;i_11 += 1)
                    {
                        arr_35 [i_4 - 2] [i_4] [14] [i_4] [i_4] = ((!var_4) ? (((~(arr_23 [i_9] [i_10] [i_11])))) : var_6);
                        arr_36 [i_11] [i_10] [11] [i_6] [10] [i_4] = (((((var_10 ? 0 : var_3))) & (~var_2)));
                        var_27 = (min(var_27, var_2));
                    }
                }
                for (int i_12 = 3; i_12 < 13;i_12 += 1)
                {
                    var_28 = (min(var_28, ((((arr_34 [i_12 + 1] [i_6 + 1] [i_6 - 1] [1] [i_4 - 3]) ? var_8 : (((var_4 ? var_4 : (arr_22 [i_4 - 1] [i_9] [1] [i_12 - 3])))))))));
                    var_29 = (~var_0);
                    var_30 = ((-2053538868 ? var_0 : var_8));
                    var_31 = var_14;
                }
                for (int i_13 = 0; i_13 < 15;i_13 += 1)
                {
                    var_32 = (arr_31 [i_13] [i_9]);
                    var_33 = ((-(arr_2 [i_4 - 2])));
                }
                for (int i_14 = 2; i_14 < 11;i_14 += 1)
                {

                    for (int i_15 = 0; i_15 < 15;i_15 += 1)
                    {
                        arr_46 [i_4 + 1] [i_4 + 1] [i_15] [i_15] = ((((10 * (arr_42 [i_15] [i_15])))) ? var_10 : (~var_6));
                        var_34 = ((!(arr_18 [i_4 - 1] [i_9] [i_14] [i_15])));
                        var_35 = -var_10;
                        var_36 *= (((arr_44 [i_4] [i_6 - 1] [i_6] [i_9] [i_9] [14]) ^ (arr_8 [14] [i_15] [i_15])));
                    }
                    var_37 = (arr_26 [i_4] [i_4 - 3] [i_6 - 1] [i_14 + 2]);
                }
            }
            for (int i_16 = 0; i_16 < 15;i_16 += 1) /* same iter space */
            {
                arr_50 [i_6 + 1] [i_16] = ((var_10 ? ((3303503553 ? var_2 : (arr_7 [i_16]))) : (~var_6)));
                arr_51 [i_16] [i_16] [i_6] [i_4 - 1] = (arr_39 [i_16] [i_6 + 1] [i_6] [10] [i_4 + 1] [i_4]);
            }
            var_38 = (var_9 == var_2);
            arr_52 [i_4] [i_6] = ((((var_13 ? 0 : var_11)) & (var_12 < var_15)));
            arr_53 [i_4 + 1] [i_6] [i_6] = var_12;
        }
        for (int i_17 = 0; i_17 < 15;i_17 += 1)
        {
            arr_57 [i_4] [1] = ((~(arr_19 [i_4 - 1] [5] [i_4 - 3] [i_17])));
            var_39 *= var_7;
        }
        var_40 = (arr_18 [i_4 - 3] [i_4] [i_4] [i_4]);
    }
    var_41 = var_5;
    #pragma endscop
}
