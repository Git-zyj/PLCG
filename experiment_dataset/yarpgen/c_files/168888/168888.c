/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168888
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_16 ? ((-((765091205 ? 765091205 : var_11)))) : var_5));

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_18 -= ((!(~765091205)));
        arr_2 [i_0] = ((+(((!var_4) ? -var_11 : ((var_7 ? var_6 : -26617))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_15 [0] [i_2] [i_3 - 1] [2] &= (((max(((var_6 ? (arr_10 [i_4]) : (arr_4 [i_2] [i_3] [i_2]))), ((min(26635, -765091206))))) / ((-(((arr_7 [i_1 + 4]) & var_15))))));
                                var_19 *= (~4665708577101656678);
                            }
                        }
                    }
                    arr_16 [i_0] [i_0 + 1] [i_0] = ((-(arr_6 [i_0] [i_2])));
                    arr_17 [i_0] [i_0] [i_0] = min((((var_5 ? (arr_4 [i_0 - 1] [i_1 - 1] [i_0]) : var_15))), var_2);
                }
            }
        }
        var_20 = (min(var_20, ((-var_8 ? ((var_6 | (((arr_13 [6]) ? 23458 : var_5)))) : (((arr_14 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0]) ? -765091205 : 19440))))));
    }
    for (int i_5 = 2; i_5 < 19;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            arr_24 [i_5] [i_6] = var_11;
            arr_25 [i_6] [i_6] = ((((((max((arr_22 [i_5] [i_6] [i_6]), 8706562531781347079))) ? (((min(10279, (arr_18 [5]))))) : (min(24337, var_2)))) >> ((((min(-1921654197, -765091211))) ? 12 : (min(var_10, var_0))))));
        }
        for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
        {
            arr_29 [i_5] [i_5] [i_5] = (max((min(16882459767233037318, (arr_28 [i_5 - 1] [i_5 - 2]))), ((((arr_28 [i_5 - 2] [i_5 + 1]) << (1921654197 - 1921654194))))));
            var_21 = (max(var_21, ((((((~(((arr_19 [i_5 - 1]) | (arr_20 [i_5 - 2])))))) | (min(117, var_4)))))));
        }
        for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
        {
            var_22 = (max((((arr_31 [i_5 - 2]) ? (arr_31 [i_5 + 1]) : (arr_31 [i_5 - 2]))), (((((~55257) + 2147483647)) << (((min(var_11, var_15)) - 51))))));

            /* vectorizable */
            for (int i_9 = 0; i_9 < 20;i_9 += 1)
            {
                arr_34 [i_5] = -1879834982257121190;
                var_23 = ((arr_23 [i_5 - 1]) | (arr_27 [i_5 - 1] [i_5 + 1]));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 20;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 20;i_11 += 1)
                    {
                        {
                            arr_41 [i_5] [i_8] [i_9] [16] [i_11] = var_7;
                            var_24 *= (arr_36 [7] [i_5 - 2]);
                            arr_42 [17] [i_10] [i_10] [i_9] [i_8] [i_5] = (0 <= 26617);
                            arr_43 [14] [i_10] [i_9] [i_8] [i_5] = (131071 ^ var_4);
                        }
                    }
                }
                var_25 = ((((((arr_20 [i_8]) ? var_15 : var_0))) ? 765091205 : var_1));
                arr_44 [i_5 - 2] [i_8] [i_9] [i_9] = ((var_14 ? 1461300996 : (arr_18 [i_5 + 1])));
            }
        }
        var_26 -= (min(((-var_3 * (arr_35 [i_5 - 1] [i_5 - 1] [i_5 + 1] [i_5 + 1]))), (--62103)));
        arr_45 [i_5] = ((((((var_0 ? -6 : var_11))) ? (max(var_2, var_0)) : (~var_7))));
        var_27 *= ((((max((var_13 << 1), (var_15 | 765091220)))) && (((((min(1570, var_0))) ? ((max(var_13, var_11))) : 10286)))));
    }
    var_28 = (~var_3);
    #pragma endscop
}
