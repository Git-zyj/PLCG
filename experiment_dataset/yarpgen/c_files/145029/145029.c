/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145029
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_10 *= -192;
        arr_2 [i_0] [i_0] &= (arr_1 [i_0 + 1]);
        arr_3 [i_0] [i_0] = (arr_1 [i_0 + 1]);

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            arr_7 [i_0] [i_1] [i_1] = 31632;
            arr_8 [2] [2] [i_1] |= -6;

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                arr_11 [i_0] [i_1] [i_2] = (((arr_6 [i_1]) ? (arr_6 [i_1]) : (arr_6 [i_1])));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        {
                            var_11 = ((((((arr_9 [i_0]) ? (arr_1 [7]) : -42))) ? (arr_16 [i_0 - 1] [i_0] [i_1] [i_2] [i_1] [i_4]) : (arr_4 [i_0] [i_1])));
                            var_12 = (var_3 | var_3);
                        }
                    }
                }
            }
            var_13 = var_7;
        }
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 10;i_7 += 1)
                {
                    {
                        var_14 |= (arr_23 [i_0] [i_5] [0]);
                        var_15 = 31;
                        arr_26 [i_7 - 1] [i_6] [i_5] = (((arr_22 [i_5] [i_0] [5] [i_7]) ? (arr_22 [i_5] [i_6] [i_7] [i_7]) : (arr_22 [i_5] [i_7] [2] [i_7])));
                        var_16 = (((arr_24 [i_0] [i_5] [i_5] [i_7] [i_7] [i_5]) > (arr_9 [i_5])));
                    }
                }
            }
            var_17 *= var_3;
        }
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            var_18 = (arr_4 [i_0 + 1] [i_0]);
            var_19 = ((((((arr_4 [i_0] [i_8]) + (arr_19 [i_0] [i_0])))) ? ((((var_3 && (arr_28 [i_8]))))) : (arr_1 [i_0 + 1])));
        }
        for (int i_9 = 1; i_9 < 11;i_9 += 1)
        {

            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                var_20 = 10349349286142971737;
                arr_35 [i_0 - 1] [11] [i_9] = ((!(arr_16 [i_0 - 1] [i_0] [i_0] [i_0] [i_9] [i_0])));
                var_21 = (arr_12 [i_10] [i_9 - 1] [i_10] [i_9] [i_9]);
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 12;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 9;i_12 += 1)
                    {
                        {
                            var_22 = 8;
                            var_23 = (arr_9 [i_0 - 1]);
                        }
                    }
                }
            }
            for (int i_13 = 4; i_13 < 11;i_13 += 1)
            {
                var_24 = (((var_7 ? -17010 : var_4)));
                arr_45 [i_9] [i_9] [i_13] [i_13] = (arr_28 [i_9]);
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 12;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 12;i_15 += 1)
                    {
                        {
                            var_25 = (arr_41 [6] [i_0] [i_13]);
                            var_26 = (((arr_46 [i_0 + 1] [i_9] [i_9 + 1] [i_9 - 1]) < (arr_46 [i_0 + 1] [i_9] [i_9 - 1] [i_9 - 1])));
                        }
                    }
                }
            }
            for (int i_16 = 0; i_16 < 12;i_16 += 1)
            {
                var_27 = var_0;
                var_28 = ((-(arr_33 [i_0])));
            }
            var_29 = (arr_20 [4] [i_9]);
            var_30 = (~0);

            for (int i_17 = 0; i_17 < 12;i_17 += 1)
            {
                var_31 = ((252 ? var_7 : 0));
                arr_55 [i_0 + 1] [i_9] [i_9] = ((arr_18 [i_0] [i_9] [i_0]) > var_2);
            }
            var_32 = (max(var_32, (((~(arr_34 [i_0 - 1] [i_9 + 1]))))));
        }
        arr_56 [i_0] [1] = (~8097394787566579878);
    }
    for (int i_18 = 0; i_18 < 11;i_18 += 1)
    {
        var_33 &= (((arr_16 [0] [i_18] [i_18] [i_18] [10] [i_18]) ? (((((arr_18 [4] [i_18] [0]) != (((arr_51 [8] [7] [7]) ? var_6 : (arr_15 [i_18] [i_18] [1] [8] [10]))))))) : ((-var_5 * ((var_7 ? var_3 : var_9))))));

        for (int i_19 = 0; i_19 < 11;i_19 += 1)
        {
            arr_62 [i_18] [i_18] = (min((arr_25 [i_19] [i_19] [i_18] [i_18]), (((arr_19 [i_18] [i_18]) ? (arr_25 [i_18] [i_18] [i_18] [i_19]) : (arr_19 [i_18] [i_19])))));
            var_34 = (((((-6101 ? 8097394787566579899 : 27)) ? ((15538591963021293569 ? var_3 : var_3)) : -732449142)));
            var_35 = (((((-((max((arr_14 [i_18] [i_18] [i_19] [1] [i_19]), -59)))))) + (((arr_58 [i_18]) ? var_6 : var_1))));
            var_36 |= (!var_7);
        }
        for (int i_20 = 0; i_20 < 11;i_20 += 1)
        {
            var_37 = (min(((~(arr_54 [i_18] [i_18] [i_20]))), (((((-3293 & (arr_41 [i_18] [i_20] [i_20])))) ? ((-9 ? (arr_34 [3] [i_20]) : var_9)) : ((min((arr_54 [i_18] [i_18] [i_20]), (arr_34 [i_20] [3]))))))));
            var_38 = (((((21147 ? 32766 : 120))) ? (((!(arr_46 [6] [i_18] [i_18] [i_18])))) : (arr_48 [i_18] [i_18] [i_18] [1] [i_18])));
            arr_66 [i_18] [i_20] [i_18] = (max((arr_28 [i_18]), (!var_3)));
            var_39 = (max(var_39, (((16 ? (((arr_64 [i_18]) ? (arr_64 [i_20]) : 258706373554231058)) : (((arr_54 [i_18] [i_20] [i_20]) - ((var_2 ? -24019 : var_0)))))))));
            var_40 = ((max((arr_17 [i_20]), (((arr_5 [i_18] [i_20] [0]) ? (arr_40 [i_20] [i_18]) : 109)))));
        }
    }
    var_41 = var_8;
    #pragma endscop
}
