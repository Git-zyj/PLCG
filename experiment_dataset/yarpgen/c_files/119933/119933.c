/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119933
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_18 = ((~768261118) ? 658708619 : 77);
                                var_19 = (min(var_19, (arr_14 [i_4 - 2] [i_4] [i_4] [i_4] [i_3 + 1] [i_3] [i_3])));
                                arr_15 [i_0] [18] [i_3] [i_3] [i_4 + 1] = (((arr_14 [i_3 - 1] [i_3 - 1] [i_3] [i_3 + 1] [8] [i_4 - 1] [i_4 - 2]) ? var_12 : var_17));
                            }
                        }
                    }
                    var_20 = (min(var_20, ((((arr_1 [i_0]) | var_11)))));
                    var_21 = (min(var_21, var_6));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                arr_22 [i_1] [i_2] = (-4611686018427387904 * 57344);
                                var_22 = var_13;
                                arr_23 [i_1] [i_1] [i_2] [i_5] = (((13835058055282163722 ? var_11 : -658708620)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 15;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 17;i_8 += 1)
                        {
                            {
                                var_23 = (min(var_23, (((140737488322560 ? var_0 : ((var_3 ^ (arr_7 [10] [i_2]))))))));
                                var_24 *= (((arr_11 [i_2] [i_8 - 1] [12] [i_8] [i_0]) ? -3680807792524773483 : 114));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_9 = 4; i_9 < 18;i_9 += 1)
                {
                    var_25 = -var_0;
                    arr_33 [i_9] [i_0] [i_0] [i_0] = 594290428;
                }
                arr_34 [i_1] [i_0] = ((((max((arr_1 [i_0]), (arr_29 [i_0] [i_0] [i_1] [i_1])))) ? (min(-9223372036854775787, -7558233152713773263)) : (((max(28, var_10))))));
            }
        }
    }

    /* vectorizable */
    for (int i_10 = 0; i_10 < 12;i_10 += 1)
    {
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 12;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 12;i_12 += 1)
            {
                {

                    for (int i_13 = 0; i_13 < 12;i_13 += 1)
                    {
                        var_26 &= var_17;
                        var_27 = var_5;

                        for (int i_14 = 3; i_14 < 11;i_14 += 1)
                        {
                            var_28 = var_12;
                            arr_48 [i_14] [i_13] [0] [i_10] [i_10] = var_5;
                            var_29 = (((((arr_8 [i_10] [i_10] [i_12] [i_13]) ? var_5 : var_9)) >= var_15));
                        }
                        for (int i_15 = 1; i_15 < 8;i_15 += 1)
                        {
                            arr_51 [3] [3] [i_12] [6] [3] = (((((var_11 ? 658708619 : var_12))) ? ((var_3 ? var_8 : 16)) : var_13));
                            arr_52 [i_10] [1] [i_12] [i_13] [5] [i_15] = var_17;
                            var_30 = (min(var_30, ((((1070 + 658708624) == (((var_8 <= (arr_18 [i_13] [i_13] [i_13] [i_13] [i_13])))))))));
                        }
                    }
                    var_31 *= ((!(arr_50 [i_12] [i_11] [i_10] [i_10])));
                    arr_53 [i_11] = var_7;
                    arr_54 [i_11] = var_14;
                }
            }
        }
        arr_55 [i_10] [i_10] = (((var_13 ? var_4 : var_6)));
    }
    var_32 = (max(var_32, (((-((((max(var_0, var_16))) ? ((var_16 ? 447618684 : -658708598)) : var_17)))))));
    var_33 = min(-var_6, -var_6);
    #pragma endscop
}
