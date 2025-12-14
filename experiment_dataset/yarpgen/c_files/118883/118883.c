/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118883
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    var_14 = 9223372036854775807;
                    arr_8 [i_0] [i_0] [i_2] = (arr_1 [i_1 + 1]);

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_15 = (min((9223372036854775807 && 432154878), (255 / var_11)));
                        var_16 = (((4613845684861213931 ? (min(var_0, var_10)) : var_13)));
                        arr_13 [i_0] [i_3] [i_0] [i_3] = (!-0);
                    }
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        var_17 = (arr_7 [i_4] [i_1] [i_0] [i_2]);
                        arr_16 [i_0] [i_0] [i_2] = 3559993402800453358;
                    }
                }
                var_18 = 255;
                arr_17 [i_0] [i_0] = var_10;
                arr_18 [i_0] = var_10;
            }
        }
    }
    var_19 = 7559814154280183094;
    var_20 = var_7;
    var_21 = var_12;

    for (int i_5 = 4; i_5 < 12;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 14;i_7 += 1)
            {
                {
                    arr_25 [i_5 - 4] [i_6] [i_5] = var_10;
                    var_22 = (max(var_22, (((((((((arr_24 [i_5] [i_6] [i_7 + 1] [i_5]) ? (arr_19 [i_6] [i_5]) : (arr_19 [i_6] [i_6])))) ? ((var_0 ? var_8 : (arr_21 [i_6] [i_6] [i_7]))) : var_5)) > ((((-32761 ? 9387257712370878870 : 1231811883579899361)) + ((var_13 ? var_11 : var_1)))))))));
                }
            }
        }
        var_23 ^= ((((min(-95223308, (arr_22 [i_5] [1] [i_5 - 3])))) ? (arr_23 [i_5 - 3] [i_5] [2]) : ((((-31636556 ? var_0 : var_3))))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                {
                    var_24 = (((((arr_29 [i_9] [i_8] [i_8]) ? (arr_21 [i_5] [i_5 - 2] [i_8]) : (((-(arr_27 [i_5])))))) <= 53));

                    /* vectorizable */
                    for (int i_10 = 2; i_10 < 14;i_10 += 1)
                    {
                        arr_35 [i_10] [i_5] [i_9] [i_8] [i_5] [i_5 - 1] = ((-(((arr_23 [i_5] [i_8] [i_5]) ? var_0 : (arr_28 [i_5])))));
                        var_25 += (arr_21 [i_9] [i_8] [i_9]);
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        arr_38 [i_5] [i_8] [i_9] [i_9] = ((-9223372036854775807 ? (arr_29 [i_5 + 3] [i_8] [i_9]) : (arr_29 [i_5] [i_9] [i_11])));
                        arr_39 [i_5] [i_8] [i_9] [i_5] = (((arr_31 [i_5 - 2] [i_8] [i_9] [i_5 - 2]) << (var_2 - 216)));
                        var_26 = (((arr_23 [i_5] [i_5 - 3] [i_5]) ? 1 : (arr_23 [i_5] [i_5 + 1] [i_5])));
                    }
                }
            }
        }
        arr_40 [i_5] = (min(var_6, (arr_30 [i_5 - 4] [i_5 + 1] [i_5])));
    }
    for (int i_12 = 0; i_12 < 24;i_12 += 1)
    {
        var_27 = -3164;
        var_28 = ((9223372036854775807 && (((-(arr_41 [i_12]))))));

        for (int i_13 = 4; i_13 < 22;i_13 += 1)
        {
            /* LoopNest 3 */
            for (int i_14 = 0; i_14 < 24;i_14 += 1)
            {
                for (int i_15 = 3; i_15 < 20;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        {
                            arr_53 [i_14] [i_12] [i_16] = var_1;
                            var_29 = (arr_52 [i_12] [i_13] [i_14] [i_12] [i_16]);
                        }
                    }
                }
            }
            var_30 = (max(var_30, ((min(((min((arr_44 [1]), (arr_44 [16])))), ((var_12 ? (!var_2) : ((var_0 / (arr_44 [20]))))))))));
            arr_54 [i_12] [i_12] = (arr_51 [i_12] [i_13] [i_13] [i_12] [i_12] [i_12]);
        }
    }
    for (int i_17 = 0; i_17 < 13;i_17 += 1)
    {
        var_31 = ((((min(((235 ? (arr_46 [i_17] [i_17] [i_17]) : (arr_23 [i_17] [i_17] [i_17]))), 10))) ? var_2 : (0 * 65534)));
        arr_59 [i_17] = min(1, 17214932190129652255);
    }
    #pragma endscop
}
