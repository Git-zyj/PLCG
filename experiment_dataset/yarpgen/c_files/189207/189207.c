/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((((((arr_0 [i_0]) ? (min(-16, 3492434150)) : (min((arr_1 [i_0] [i_0]), var_5))))) ? ((var_11 ? var_15 : var_1)) : ((((arr_0 [i_0]) ? 3492434150 : (arr_0 [i_0]))))));
        var_16 = ((-((~(arr_1 [i_0] [i_0])))));
        var_17 = ((~((+(min((arr_0 [i_0]), 137438953471))))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_18 = (arr_4 [i_1]);
        var_19 = var_13;
    }

    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_20 = (min((~var_1), (~var_14)));

        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            var_21 = (max((arr_0 [i_3 + 1]), -11));
            var_22 = (~((((arr_3 [i_3] [14]) >= (((var_2 && (arr_1 [i_2] [i_3]))))))));
            var_23 = (((((var_4 ? (arr_1 [i_3 + 1] [i_3 + 1]) : (arr_3 [i_3 + 1] [i_3 + 1])))) ? ((min(var_7, (arr_7 [i_3 + 1] [i_3 + 1] [i_3 + 1])))) : (~var_3)));
            var_24 = ((2147483624 ? 0 : 496));
        }
        for (int i_4 = 1; i_4 < 7;i_4 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    {
                        var_25 = var_5;

                        for (int i_7 = 2; i_7 < 9;i_7 += 1)
                        {
                            var_26 = (min(1, 1778093349));
                            var_27 = (arr_16 [i_2] [i_4]);
                            arr_20 [i_2] [i_7] [i_5] [i_6] [i_7] [i_6] [i_7] = (--1);
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_8 = 2; i_8 < 9;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    {
                        arr_29 [i_2] [i_2] [i_2] [i_2] = (1 < -137438953479);
                        var_28 = min((~122), (var_0 | var_7));
                    }
                }
            }
            arr_30 [6] [i_4] [i_2] = (((var_9 / -1878409838) / ((-(arr_27 [i_4 + 3] [i_4] [i_4 + 2])))));
            var_29 = var_8;
            var_30 = ((-(((arr_14 [i_4] [i_4] [i_4 + 2] [i_4 + 1] [i_4 + 3] [i_4 - 1]) | (arr_17 [i_4 + 1])))));
        }
        for (int i_10 = 1; i_10 < 7;i_10 += 1) /* same iter space */
        {

            for (int i_11 = 0; i_11 < 11;i_11 += 1)
            {
                /* LoopNest 2 */
                for (int i_12 = 3; i_12 < 8;i_12 += 1)
                {
                    for (int i_13 = 2; i_13 < 10;i_13 += 1)
                    {
                        {
                            var_31 = (~6782695864992531408);
                            arr_41 [i_11] [i_10 + 4] [i_2] = (~var_9);
                            var_32 = (arr_21 [i_13 + 1] [i_12 + 2] [i_12] [i_10 - 1]);
                        }
                    }
                }
                arr_42 [i_2] [0] = ((~(arr_32 [i_10 - 1])));
                var_33 = (122 + 61);
            }
            for (int i_14 = 2; i_14 < 10;i_14 += 1)
            {
                var_34 = arr_22 [i_2] [i_10 - 1] [i_14] [i_14];
                arr_45 [i_2] [i_10 + 4] [i_14] = 61;
                var_35 = var_3;
            }
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 11;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 11;i_16 += 1)
                {
                    {
                        var_36 = ((arr_25 [i_16] [i_10 + 3] [10] [1] [1] [i_2]) ? ((var_12 ? 46078 : var_15)) : (var_9 < 1878409838));
                        arr_51 [1] [5] [1] [i_16] = var_1;
                        var_37 = 1;
                        arr_52 [i_2] [i_10] [i_10] [i_15] [i_16] = (~15734);
                        var_38 = var_6;
                    }
                }
            }
            var_39 = (min(((~((-1601569898 ? var_12 : (arr_49 [i_2] [i_2] [i_10] [i_10]))))), (~var_15)));
            var_40 = max(var_13, ((min(-1878409838, -11085))));
        }
    }
    var_41 = (((((1 != (-9223372036854775807 - 1)))) > var_15));
    #pragma endscop
}
