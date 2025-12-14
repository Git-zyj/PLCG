/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112479
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((185 ? var_8 : var_6));
    var_14 = var_5;
    var_15 -= var_3;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_16 = -6446;
                arr_6 [i_0] [i_0] [i_0] = (arr_5 [i_0] [i_0 + 2]);

                /* vectorizable */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    var_17 = (arr_5 [i_0] [i_1]);

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        arr_11 [i_0] [i_0] [3] [i_3] = (-(arr_7 [i_2] [i_0]));
                        arr_12 [i_0] [i_0] [i_0] = var_1;
                    }
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        var_18 = (((arr_10 [i_2] [i_2] [i_2 + 1] [6] [6]) <= (arr_2 [i_0])));

                        for (int i_5 = 2; i_5 < 15;i_5 += 1)
                        {
                            arr_20 [i_0] [i_4] [0] [i_0] = (!44460);
                            var_19 *= (arr_8 [14] [i_1] [i_4]);
                            arr_21 [2] [i_1 + 1] [7] [i_0] [i_0] [i_1 - 1] = (arr_16 [i_5] [i_1] [i_0]);
                        }
                        arr_22 [i_2 + 2] [i_1 - 1] [3] [14] [i_0] = (~44460);
                        var_20 = (1101796270 ? (arr_18 [i_4] [i_2] [i_0 + 3]) : (arr_10 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0]));
                        var_21 = 13811266854326009439;
                    }
                    for (int i_6 = 2; i_6 < 13;i_6 += 1)
                    {
                        var_22 &= arr_4 [i_0] [i_2 - 1];
                        arr_25 [i_0 - 1] [15] [i_2 + 1] [i_0] [i_0] = 14161762181571996582;
                        arr_26 [i_0] [i_1] [i_1] [3] [i_6] = 203;
                        var_23 = (max(var_23, -var_7));
                        arr_27 [i_6] [i_0] [11] = (!-20678);
                    }
                    var_24 = (arr_15 [15] [i_0] [i_0] [i_0 + 1]);
                }
            }
        }
    }

    for (int i_7 = 1; i_7 < 20;i_7 += 1)
    {
        var_25 = (-32767 - 1);

        /* vectorizable */
        for (int i_8 = 1; i_8 < 18;i_8 += 1)
        {

            for (int i_9 = 0; i_9 < 21;i_9 += 1)
            {
                var_26 += (~547207559);
                arr_35 [i_9] [i_8] [i_7] = ((((((arr_33 [i_9] [i_8 + 3] [i_7] [i_7 + 1]) <= (arr_33 [i_7] [i_8] [i_7] [i_9])))) % 10245));
            }
            for (int i_10 = 2; i_10 < 20;i_10 += 1)
            {
                var_27 = (arr_33 [i_7] [i_7] [i_7] [i_7]);
                var_28 = (~2305280059260272640);
            }
            for (int i_11 = 0; i_11 < 21;i_11 += 1)
            {
                var_29 = 3114594310;
                var_30 ^= var_11;
                var_31 = var_10;
            }
            arr_41 [i_7 + 1] = -29814;
        }
        for (int i_12 = 0; i_12 < 21;i_12 += 1)
        {
            var_32 = (max(var_32, (((((!(arr_30 [i_7 - 1] [i_7 + 1]))) ? ((max((arr_30 [i_7] [4]), ((((arr_37 [10]) < var_2)))))) : 22362565)))));
            arr_44 [i_7] = var_3;
        }
        /* vectorizable */
        for (int i_13 = 3; i_13 < 18;i_13 += 1)
        {
            var_33 = (((-(arr_31 [i_13 - 2]))));
            var_34 = (min(var_34, ((((arr_31 [i_7 - 1]) ? (arr_38 [14] [i_7 + 1] [i_13 + 1] [i_13 - 1]) : (arr_42 [i_7] [i_13 + 3] [i_13]))))));
            var_35 |= (((arr_31 [i_7 + 1]) ? ((var_0 ? (arr_40 [i_7] [i_7]) : 31250)) : (((-2147483647 - 1) ? 34286 : 2147483647))));
            arr_47 [i_13 - 3] = (-1964267462 | ((32767 ? 54 : (arr_36 [i_13 + 1] [i_7 + 1] [i_7] [i_7 + 1]))));
            var_36 = (min(var_36, (arr_32 [i_7 + 1] [i_7 - 1])));
        }
        arr_48 [i_7] = (min(var_8, (min(54, -6015331587867626935))));
    }
    #pragma endscop
}
