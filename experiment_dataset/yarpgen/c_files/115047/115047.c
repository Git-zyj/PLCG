/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115047
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= (max(1203020383427272787, var_7));
    var_17 = (((~0) ? (min(var_1, -0)) : var_2));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_18 |= ((-1 ? (~-751547165267942937) : ((min((arr_6 [i_0] [i_0] [i_0] [i_0]), (arr_6 [i_2] [i_2] [i_1] [i_0]))))));
                            var_19 |= (arr_6 [i_0] [i_1] [i_0] [i_0]);

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                var_20 = -var_5;
                                arr_10 [i_4] [i_0] [i_2] [i_0] [i_0] [i_0] = ((54 ? var_14 : 2147483647));
                            }
                            for (int i_5 = 0; i_5 < 17;i_5 += 1)
                            {
                                var_21 ^= ((((!(arr_8 [i_3]))) ? ((((arr_6 [i_0] [i_0] [i_1 - 3] [i_3]) != (arr_6 [i_1] [i_1] [i_1 + 2] [i_3])))) : ((~(((arr_6 [i_3] [i_3] [i_3] [i_3]) ? 1 : (arr_2 [i_0] [i_0])))))));
                                var_22 = -1;
                                var_23 = var_0;
                            }
                            var_24 = ((((((var_11 ? (arr_0 [i_2]) : (arr_9 [i_0] [i_3] [i_3] [i_3]))) != (arr_0 [i_0]))) ? ((((max((arr_12 [i_0] [i_1] [i_1] [i_1] [i_1]), -126))) ? (62 > 1170512046) : (~var_5))) : (arr_9 [i_0] [i_1] [i_1] [i_1])));
                        }
                    }
                }
                var_25 = var_5;
            }
        }
    }

    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        arr_15 [i_6] = (max((((min(-2, 7)))), (((arr_13 [i_6] [i_6]) ? 2960437955 : (arr_13 [i_6] [i_6])))));

        /* vectorizable */
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 18;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    {
                        var_26 ^= ((255 - (arr_16 [i_6])));

                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            var_27 ^= arr_20 [i_6] [i_6] [i_9];
                            var_28 = (max(var_28, ((((arr_20 [i_6] [i_6] [i_6]) ? 0 : var_4)))));
                        }
                        var_29 = (arr_19 [i_6]);
                        var_30 += 1;
                        var_31 = 2;
                    }
                }
            }
            arr_26 [i_6] [i_7] [i_7] &= ((!(arr_14 [i_6])));
        }
        for (int i_11 = 2; i_11 < 17;i_11 += 1)
        {
            var_32 -= (min((arr_20 [i_11] [i_11 - 2] [i_11 - 2]), (((arr_28 [i_11 - 1] [i_11 - 2]) % var_14))));
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 18;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 18;i_13 += 1)
                {
                    {
                        var_33 = (min(var_33, ((max((arr_14 [i_6]), (((arr_25 [i_6] [i_11] [i_12]) * var_11)))))));
                        var_34 = (((arr_23 [i_11 - 1] [i_11] [i_11 - 1] [i_11] [i_11]) ? (min(-var_7, (arr_22 [i_11]))) : (arr_28 [i_13] [i_12])));
                    }
                }
            }
            arr_36 [i_6] = (((1 < 2147483647) ? (((-2 <= var_8) ? (arr_33 [i_6] [i_6] [i_11 + 1] [i_11] [i_11 + 1] [i_11]) : var_14)) : (!4225245804)));
            var_35 = (max(var_35, ((((((arr_31 [i_6]) ? (arr_31 [i_11 - 2]) : (arr_31 [i_6]))) * (arr_21 [i_6] [i_11 + 1] [i_11 + 1] [i_11]))))));
        }
    }
    #pragma endscop
}
