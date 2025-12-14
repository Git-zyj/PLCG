/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110574
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_20 = 58231;
            arr_5 [i_0] [i_1] [i_1] = (arr_0 [i_0] [i_1]);
        }
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            arr_10 [7] [7] [i_0] = (var_14 ? var_19 : (arr_7 [i_0 + 2] [i_0 + 1]));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 4; i_4 < 24;i_4 += 1)
                {
                    {
                        var_21 = (arr_13 [i_0 + 1]);

                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 23;i_5 += 1)
                        {
                            var_22 = (arr_4 [i_3]);
                            var_23 -= (((arr_3 [i_0 - 2] [i_4 - 3]) ? (!0) : var_0));
                            var_24 = (arr_16 [13] [i_2] [i_4 - 4] [i_5 - 1] [i_5] [i_5 + 2]);
                            arr_19 [i_5] [i_5] [i_3] [i_4 + 1] [i_5] = (((arr_0 [i_0 - 2] [i_4 - 3]) && var_17));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            var_25 = (((!var_9) ? (arr_15 [i_0] [i_0] [i_0] [i_0 + 1] [i_0] [i_0]) : (arr_3 [i_0 - 1] [i_4 - 1])));
                            var_26 &= (~-11654);
                            arr_22 [i_2] [i_2] [11] [i_4] [i_6] = (!var_16);
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            var_27 = (max(var_27, 0));
                            var_28 += var_19;
                        }
                    }
                }
            }
        }
        for (int i_8 = 4; i_8 < 23;i_8 += 1)
        {
            var_29 = var_19;
            var_30 = ((((((arr_20 [i_0 - 1]) ? ((11654 & (arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1]))) : 0))) & ((max(var_19, var_4)))));
            var_31 *= (!18446744073709551614);
        }
        /* vectorizable */
        for (int i_9 = 1; i_9 < 23;i_9 += 1)
        {
            arr_29 [i_0] = arr_2 [i_0 - 2] [20];
            arr_30 [i_9] = ((((arr_27 [11] [i_0] [i_9]) ? (arr_13 [i_9]) : 11663)));
            var_32 |= var_2;
        }
        var_33 = min(212281744, var_19);

        for (int i_10 = 1; i_10 < 21;i_10 += 1)
        {
            arr_33 [i_0] [i_10] = ((~((max((min(var_19, 255)), var_3)))));
            /* LoopNest 3 */
            for (int i_11 = 2; i_11 < 24;i_11 += 1)
            {
                for (int i_12 = 1; i_12 < 21;i_12 += 1)
                {
                    for (int i_13 = 3; i_13 < 22;i_13 += 1)
                    {
                        {
                            var_34 = ((((max(var_3, (arr_40 [i_10 + 2] [20] [i_10] [i_13 - 3] [i_0 - 1])))) ? var_10 : -var_1));
                            var_35 -= (min((min((max(var_3, 39414)), var_16)), ((max((((!(arr_28 [i_10] [i_13])))), (arr_34 [i_11 + 1] [i_10] [i_0 + 1] [i_0 - 2]))))));
                        }
                    }
                }
            }
            arr_41 [15] [9] [9] = ((~(max(((((arr_25 [i_0 + 1] [i_0]) != 6983990524102359363))), var_13))));
            var_36 = ((!(((~(arr_23 [i_0] [9]))))));
            arr_42 [i_0] [i_10] [i_10] = ((~((1 >> (((arr_9 [i_10 + 3] [i_0 + 1] [i_0 + 1]) + 1324020191))))));
        }
        var_37 = (max(var_37, (((!(arr_31 [i_0] [i_0]))))));
    }
    for (int i_14 = 0; i_14 < 19;i_14 += 1)
    {
        var_38 = var_4;
        var_39 = (arr_40 [i_14] [i_14] [i_14] [i_14] [i_14]);
        var_40 = min(-var_17, var_19);
    }
    var_41 = -11659;

    for (int i_15 = 1; i_15 < 20;i_15 += 1)
    {
        var_42 = ((~(((var_2 <= (!var_1))))));
        arr_48 [i_15] = var_4;
    }
    var_43 = var_12;
    var_44 = ((~(((!(var_18 | 39406))))));
    #pragma endscop
}
