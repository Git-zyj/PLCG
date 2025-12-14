/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101846
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1) /* same iter space */
    {
        var_11 = 2328089660;
        var_12 = (max(var_12, ((max((arr_3 [i_0] [i_0]), ((((arr_2 [i_0 - 1]) > (((arr_3 [1] [i_0]) ? 1966877617 : 3647705171))))))))));

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_6 [i_0] [i_0] [i_1] = (arr_3 [i_1] [i_0]);
            var_13 = (arr_4 [i_0]);
        }
    }
    for (int i_2 = 2; i_2 < 9;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] [i_2] = -2147483642;
        arr_10 [i_2] = (max(72, ((min((arr_8 [i_2 - 1]), (arr_8 [i_2 + 1]))))));
        var_14 = ((!(((max(-1774420697, 18446744073709551599)) >= 3))));
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    {
                        var_15 = 167;
                        var_16 = -78;
                    }
                }
            }
            var_17 = var_0;
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    {
                        var_18 = (arr_23 [i_8]);
                        var_19 = (((((((min(var_9, 96))) ? (var_9 / 20) : 10930))) ? ((((!(arr_17 [i_3] [i_4] [i_8]))))) : (((var_1 == var_9) + ((-(arr_21 [i_4] [i_7] [i_8])))))));
                        var_20 = var_0;
                        var_21 = (min((max((!2536439101), (arr_15 [i_8] [i_4]))), (arr_21 [i_8] [i_8] [i_8])));
                        arr_25 [i_3] [i_3] = ((((min(88, (min((arr_17 [i_3] [i_4] [i_4]), var_9))))) ? ((~(var_4 == var_0))) : (!234)));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 0;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 11;i_11 += 1)
                {
                    {
                        arr_34 [i_10] [i_3] = ((((var_2 % (arr_27 [i_11 + 1] [i_10] [i_9 + 1]))) | ((~(arr_24 [i_11 - 1] [i_11 + 1] [i_9] [i_9 + 1])))));

                        for (int i_12 = 2; i_12 < 8;i_12 += 1) /* same iter space */
                        {
                            var_22 = (!var_9);
                            arr_39 [0] [i_3] [0] = var_6;
                            arr_40 [i_3] [i_3] = ((arr_21 [i_3] [i_9 + 1] [5]) - 1966877595);
                            var_23 ^= ((((!var_4) >= (((arr_28 [i_3] [10] [10]) ? var_4 : 0)))) ? (min((arr_24 [i_3] [i_9] [i_10] [i_11]), ((-(arr_22 [i_3] [i_9] [i_10] [i_9]))))) : (~151));
                            var_24 = var_7;
                        }
                        for (int i_13 = 2; i_13 < 8;i_13 += 1) /* same iter space */
                        {
                            arr_43 [i_3] [i_10] [i_11] [i_3] = var_0;
                            arr_44 [i_3] [i_3] [i_3] [i_3] = ((((arr_41 [i_3] [i_11 - 1] [i_13]) | (((~(-2147483647 - 1)))))));
                            var_25 = (-(-67 | 18446744073709551607));
                        }
                        for (int i_14 = 2; i_14 < 8;i_14 += 1) /* same iter space */
                        {
                            var_26 = (!2147483642);
                            var_27 = (max(var_27, (((max(14184, (((arr_35 [i_11] [i_11] [i_11] [i_11] [i_11]) ? (arr_18 [i_11] [i_14]) : var_8))))))));
                        }

                        /* vectorizable */
                        for (int i_15 = 0; i_15 < 12;i_15 += 1)
                        {
                            arr_49 [i_3] [2] [i_10] [i_11] [i_15] |= ((!(arr_46 [i_9] [i_9 + 1] [i_9 + 1] [i_9] [i_9] [i_9] [i_9 + 1])));
                            arr_50 [i_3] [i_9] [i_9] [i_3] [i_15] = 12591;
                        }
                        arr_51 [i_9 + 1] [i_3] [i_11] = ((~((var_8 ? (arr_32 [i_3] [i_9 + 1] [i_9] [i_9] [i_11 + 1]) : (arr_32 [i_9] [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_11 + 1])))));
                    }
                }
            }
        }
        var_28 = (max(var_28, 0));
    }
    var_29 = (max(2097088, var_2));
    var_30 = var_6;
    #pragma endscop
}
