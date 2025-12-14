/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 17;
    var_20 = var_13;
    var_21 = var_6;

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        var_22 = ((((((arr_1 [i_0 + 3]) & var_5))) ^ ((var_14 / (((var_0 ? 28769 : 63)))))));
        var_23 += ((((!(20978 + 10577))) ? (86 / -3065377834) : ((~((18446744073709551606 ? var_14 : 67108863))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_4 [i_1] = (47 * 28868);
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_24 = ((var_13 ? (arr_9 [i_1] [i_3] [i_3] [i_4] [i_4]) : var_8));
                        arr_11 [i_1] [i_3] [i_4] [i_1] [i_1] [i_3] = ((!(arr_9 [i_1] [i_2] [i_2] [i_4] [i_4])));
                        var_25 = var_8;
                        var_26 += ((var_15 ? (~222) : (arr_1 [i_4])));
                    }
                }
            }
        }
        arr_12 [i_1] = ((!(3065377824 | var_7)));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        arr_17 [i_5] [i_5] = (var_10 - var_7);
        arr_18 [i_5] = var_0;

        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            var_27 = (var_14 == var_0);
            arr_22 [i_6] [i_6] = ((var_7 ? -16648 : (max((0 ^ var_17), (var_4 == var_7)))));
        }
    }
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {

        /* vectorizable */
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            var_28 = (var_10 | 95);
            arr_29 [i_7] [i_7] = ((~((-51 ? var_10 : var_4))));
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 1;i_10 += 1)
            {
                {
                    var_29 = var_10;
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 12;i_11 += 1)
                    {
                        for (int i_12 = 3; i_12 < 11;i_12 += 1)
                        {
                            {
                                arr_41 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] = var_5;
                                arr_42 [i_12] [i_7] [i_7] [i_7] [i_7] = (((((var_12 ? var_12 : (1 ^ -27077)))) && (0 + 8010675671286822973)));
                            }
                        }
                    }
                    var_30 = ((~((max((arr_8 [i_7] [i_10 - 1] [i_9]), ((min(var_0, 1))))))));
                    arr_43 [i_10] [i_7] [i_10] = (((arr_30 [i_10 - 1] [i_10 - 1] [i_10 - 1]) / ((((arr_34 [i_10 - 1] [i_10 - 1]) + var_8)))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 12;i_14 += 1)
            {
                {
                    arr_48 [i_7] [i_13] [i_7] [i_7] = var_6;
                    var_31 = var_2;
                }
            }
        }
    }
    var_32 = (~var_17);
    #pragma endscop
}
