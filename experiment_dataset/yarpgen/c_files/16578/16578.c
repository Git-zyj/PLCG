/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
            {
                arr_6 [i_0] [i_0] [i_2] = ((arr_5 [i_0 + 1] [i_0 + 2] [i_0 + 2] [i_0]) ? (arr_5 [i_0 - 3] [i_0 + 3] [i_0 + 3] [i_0]) : (arr_5 [i_0 - 3] [i_0 + 3] [i_0 - 4] [i_0]));
                var_18 = (max(var_18, (~2953932033)));
                arr_7 [i_0] [i_0] [i_2] = (var_3 ? 2421302391 : (arr_3 [i_0 + 1] [i_0 - 4]));
            }
            for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
            {
                var_19 *= ((!(arr_3 [i_1] [i_3])));
                var_20 = (~(arr_0 [i_0 + 1]));
                arr_11 [i_0 + 1] [6] [i_0 + 1] = var_6;
                arr_12 [i_0 - 4] [i_0 - 4] [i_1] [i_0 - 4] |= var_4;
            }
            for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
            {
                arr_15 [i_4] [i_4] [i_4] [i_4] = (~var_1);
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        {
                            arr_22 [i_0] [i_4] [i_4] [i_5] [i_6] = 1773148964;
                            arr_23 [i_0] [i_0] [i_4] [i_5] [i_5] [i_1] [i_6] |= arr_21 [i_0] [i_1] [i_1] [i_1] [8];
                            arr_24 [i_0] [i_0] [i_0] [5] [i_4] [i_6] [i_6] = var_16;
                        }
                    }
                }
            }
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                arr_27 [i_0] [i_1] [i_7] [2] = 35538022;
                arr_28 [i_7] [i_0] [i_0] = ((((-(arr_18 [i_1]))) > (arr_4 [i_1] [i_1] [i_0 - 1])));
                var_21 = ((!(arr_8 [i_0 + 4] [i_0 + 1] [i_0] [i_0 + 3])));
            }
            arr_29 [i_0] [i_1] [i_1] = var_11;
            arr_30 [11] [i_1] = arr_13 [i_0 - 3];
            arr_31 [i_1] = ((arr_16 [i_0] [5] [i_1] [i_1] [i_1]) ? var_17 : (arr_16 [i_1] [i_1] [i_0] [8] [i_0]));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 10;i_9 += 1)
                {
                    {
                        arr_37 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] |= (var_16 && var_11);
                        arr_38 [5] [i_1] [i_8] [i_1] = var_4;
                    }
                }
            }
        }
        for (int i_10 = 0; i_10 < 12;i_10 += 1)
        {
            var_22 = (max(var_22, ((((min((arr_41 [5] [i_0]), var_9))) ? ((3075690521 ? (arr_14 [i_0 - 1] [i_0 - 2] [i_10]) : (arr_41 [i_0] [i_10]))) : (arr_41 [i_0] [i_10])))));

            /* vectorizable */
            for (int i_11 = 0; i_11 < 12;i_11 += 1)
            {
                arr_44 [i_0] [i_0] = (((arr_5 [i_0] [i_10] [i_11] [i_0 + 1]) || (arr_5 [i_10] [i_10] [i_11] [i_0 + 1])));
                var_23 = (315551306 ? 3335938604 : 390152019);
            }
            /* vectorizable */
            for (int i_12 = 0; i_12 < 12;i_12 += 1)
            {
                arr_48 [i_0] [i_10] [i_12] = (2756305868 - (arr_4 [i_0 + 2] [i_0 - 3] [i_0 - 1]));
                arr_49 [i_0] [i_10] [i_0] = (!var_4);
                arr_50 [7] [i_0] = ((-(arr_17 [i_12] [i_12] [8] [i_12] [i_12] [i_0])));
            }
        }
        arr_51 [i_0] = (((((arr_0 [i_0 + 4]) ? 0 : (arr_0 [i_0 + 3]))) != (max(var_7, var_11))));
        var_24 ^= arr_43 [i_0] [i_0] [i_0];
        arr_52 [11] = (((arr_43 [i_0] [i_0] [i_0]) <= ((var_11 ? ((var_15 ? var_0 : (arr_39 [i_0]))) : ((var_10 >> (var_15 - 1124962392)))))));
    }
    var_25 = ((var_5 || ((min(var_13, var_6)))));

    for (int i_13 = 0; i_13 < 17;i_13 += 1)
    {
        arr_55 [i_13] = max((((3904815277 == 2931999691) ? ((2600772705 ? var_7 : var_10)) : var_9)), (max(2521818331, 1208367929)));
        var_26 = (min(var_26, (((((((min((arr_53 [i_13]), (arr_54 [i_13] [i_13])))) ? (max((arr_54 [i_13] [i_13]), 471723356)) : (((arr_54 [i_13] [i_13]) + var_3))))) ? ((1925503228 ? 0 : 3054711634)) : (arr_54 [i_13] [i_13])))));
    }
    /* vectorizable */
    for (int i_14 = 3; i_14 < 22;i_14 += 1)
    {
        var_27 ^= 820153540;
        var_28 += ((!(!3823243912)));
        var_29 = (2147418112 ? 1531788546 : 812044108);
        arr_58 [i_14 + 1] = (((arr_57 [i_14]) == var_1));
    }
    #pragma endscop
}
