/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_3 [5] = ((~(arr_0 [i_0] [i_0])));
        var_19 = max(((((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0])))), (((arr_2 [i_0]) & (arr_0 [i_0] [i_0]))));
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        var_20 |= (max(196, var_12));
        arr_6 [i_1] = (((((arr_4 [i_1 + 3]) ? (arr_4 [i_1 + 3]) : var_16)) - ((((arr_4 [i_1 + 4]) < var_7)))));
    }
    for (int i_2 = 2; i_2 < 14;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                {
                    var_21 = (max((((min(var_5, var_16)))), (arr_7 [10] [i_3])));
                    var_22 = ((~((((!(arr_13 [i_2]))) ? (((!(arr_15 [i_2] [2] [i_4])))) : ((((arr_8 [i_3]) && var_10)))))));
                }
            }
        }
        arr_16 [i_2 - 2] = ((9223372036854775799 != ((min(-9223372036854775800, var_8)))));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 12;i_7 += 1)
                {
                    {
                        var_23 = (((((var_16 / (arr_22 [i_2 - 1] [i_5] [i_6] [i_7])))) / 9223372036854775799));

                        /* vectorizable */
                        for (int i_8 = 1; i_8 < 12;i_8 += 1)
                        {
                            var_24 = (((arr_8 [i_6]) ? -9223372036854775788 : 12859234055323893964));
                            var_25 = (max(var_25, (arr_9 [i_2 - 1])));
                        }
                        /* vectorizable */
                        for (int i_9 = 3; i_9 < 13;i_9 += 1)
                        {
                            var_26 = ((-(arr_12 [i_2 - 1] [i_7 - 1])));
                            var_27 |= (((arr_28 [4] [i_2 - 2] [i_6] [5] [i_2 - 2] [i_9 - 2]) == (((arr_19 [1]) ? (arr_9 [i_9]) : (arr_21 [i_2 + 1] [i_2] [i_2])))));
                            var_28 = ((arr_26 [i_2 + 1] [i_7 + 1] [i_9] [i_9 - 2] [i_9 - 2]) ? (arr_4 [i_2 + 1]) : (arr_4 [i_2 + 1]));
                        }
                    }
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 24;i_10 += 1)
    {

        for (int i_11 = 2; i_11 < 23;i_11 += 1)
        {
            var_29 = var_2;
            arr_40 [i_10] [i_10] = var_0;
        }
        for (int i_12 = 0; i_12 < 24;i_12 += 1)
        {

            /* vectorizable */
            for (int i_13 = 3; i_13 < 22;i_13 += 1)
            {
                var_30 = (((arr_46 [i_10] [i_10] [i_13 + 1]) - var_0));
                arr_48 [i_10] [i_12] [i_13 + 2] |= ((var_9 ? 11417417325781930897 : (arr_47 [i_13 - 1] [i_13] [i_13 - 1] [i_13])));
            }
            var_31 = min((((arr_46 [i_10] [i_10] [i_12]) ? 28672 : 3404447972177466735)), (((var_8 ? (arr_46 [i_10] [i_10] [i_12]) : (arr_46 [13] [i_12] [i_12])))));
        }
        arr_49 [i_10] = var_2;
        var_32 = ((9223372036854775788 ? var_9 : ((-((max((arr_41 [i_10] [i_10]), 30)))))));
    }
    var_33 = ((var_4 ? (((min(var_4, var_18)) - ((var_3 ? -9223372036854775788 : var_12)))) : ((min(((min(32767, 0))), var_3)))));
    var_34 = var_13;
    #pragma endscop
}
