/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166284
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= ((var_11 & ((-26274 ? 27753 : 27743))));
    var_19 = ((~(((10025 | var_14) ? ((var_1 ? var_6 : var_1)) : (!var_0)))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_20 = (((((~(arr_1 [i_0])))) ? (~27753) : ((~(arr_1 [i_0])))));
        var_21 = ((((max(0, (arr_1 [16])))) / ((max((arr_0 [i_0]), -4)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_22 = var_3;

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    {
                        var_23 = ((!(~31)));

                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            var_24 = (!-var_7);
                            var_25 = (max(var_25, -var_4));
                            var_26 = (arr_12 [i_3] [i_1]);
                            arr_16 [13] [20] [i_3] [i_3] [i_3] = ((-((((arr_11 [17] [14] [14] [i_5]) == var_5)))));
                            var_27 = ((~(arr_8 [i_1] [i_1])));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    {
                        var_28 = (min(var_28, ((((arr_13 [i_1] [i_1] [i_1]) ? (arr_13 [i_1] [i_1] [i_1]) : var_3)))));
                        arr_22 [i_7] [5] [i_1] = ((10019 ? var_4 : -29));
                        var_29 = (min(var_29, ((((arr_9 [14] [i_2] [10] [i_7]) ? (arr_11 [i_1] [i_2] [i_6] [i_6]) : var_12)))));
                        arr_23 [i_1] = (~var_5);
                        arr_24 [i_7] [i_6] [i_6] [i_2] [i_2] [i_1] = var_7;
                    }
                }
            }
        }
        for (int i_8 = 2; i_8 < 23;i_8 += 1)
        {

            for (int i_9 = 0; i_9 < 25;i_9 += 1)
            {
                arr_29 [i_1] [i_8] = ((~(arr_18 [17] [i_8] [17] [i_8])));
                var_30 = ((+(((arr_11 [15] [i_9] [24] [i_1]) ? (arr_18 [i_1] [i_8] [i_9] [i_1]) : -27753))));
                var_31 = (arr_10 [i_8 + 1] [i_8] [i_8 + 1]);
            }
            for (int i_10 = 0; i_10 < 25;i_10 += 1)
            {
                arr_33 [i_8] = -27743;
                var_32 = (max(var_32, ((((!-6158) == ((((arr_28 [i_1] [i_1] [2]) <= 26309))))))));
                var_33 = (((arr_21 [i_8 - 1] [i_8 + 1]) ? -26438 : (arr_21 [i_8 + 2] [i_8 + 1])));
            }
            for (int i_11 = 0; i_11 < 25;i_11 += 1)
            {
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 25;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 25;i_13 += 1)
                    {
                        {
                            var_34 = ((-(arr_7 [i_1] [i_1])));
                            var_35 = (max(var_35, (((!(((4032 ? var_7 : var_12))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_14 = 3; i_14 < 24;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 25;i_15 += 1)
                    {
                        {
                            var_36 = -53;
                            var_37 = ((((72 ? -16386 : -32094)) * -4));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 25;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 25;i_17 += 1)
                    {
                        {
                            var_38 = ((24597 ? (var_9 * 4310) : (arr_12 [i_8 - 2] [i_11])));
                            var_39 = ((!(arr_17 [i_1] [i_11] [i_11])));
                            var_40 = var_0;
                        }
                    }
                }
                var_41 = var_0;
                var_42 = 14553;
            }

            for (int i_18 = 0; i_18 < 25;i_18 += 1)
            {
                var_43 = (((arr_13 [i_8 - 2] [i_8 - 1] [i_8 - 1]) ? -15109 : (arr_13 [i_8 - 1] [i_8 + 1] [i_8 - 2])));
                arr_52 [i_1] [i_8] [i_18] [i_8] = (~26119);
                arr_53 [i_8] = 14123;
            }
            var_44 = ((!(((10032 ? -1312 : var_0)))));
            arr_54 [i_8] = (!3458);
            var_45 = 32756;
        }
        var_46 |= arr_40 [i_1] [i_1] [i_1] [i_1] [i_1];
        var_47 = (max(var_47, 10001));
    }
    #pragma endscop
}
