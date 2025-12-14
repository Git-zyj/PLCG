/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148693
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            {
                var_20 = ((((var_1 ? var_8 : (arr_2 [i_1 - 2] [i_1 - 2]))) > 11));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_8 [i_0] [i_2] = 9060135492229127779;
                    var_21 = (max(var_21, 14349));
                }
                /* vectorizable */
                for (int i_3 = 2; i_3 < 20;i_3 += 1) /* same iter space */
                {

                    for (int i_4 = 2; i_4 < 20;i_4 += 1) /* same iter space */
                    {
                        arr_17 [i_4] = 10;
                        var_22 = (((arr_14 [i_1 - 4] [i_1 + 1] [i_1 - 3]) << (((arr_3 [i_3 - 2] [i_4 - 2] [i_4 + 1]) - 287643970))));
                        var_23 = var_1;
                    }
                    for (int i_5 = 2; i_5 < 20;i_5 += 1) /* same iter space */
                    {

                        for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
                        {
                            arr_23 [1] [1] [1] [i_5] [i_6] = (((var_18 & 19256) << (((~var_14) + 63713))));
                            var_24 = (max(var_24, (-14350 >= -9060135492229127779)));
                            arr_24 [18] [i_3 + 1] [i_5] [i_5] = (!1553782498);
                        }
                        for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
                        {
                            arr_27 [i_5] [i_5] [i_3 + 1] [i_3 + 1] [i_3 + 1] = (var_1 + var_0);
                            arr_28 [i_0] [i_0] [i_5] [i_5] [i_5] [i_0] = (19237 * 19256);
                        }
                        arr_29 [i_0] [i_0] [i_0] [i_0] [i_5] = var_12;
                        arr_30 [i_0] [i_5] [4] [i_5] [i_5] = ((((!(arr_20 [i_0] [i_0] [i_1 - 1] [i_3] [i_5]))) ? (((var_1 ? var_5 : (arr_26 [i_0] [i_1] [i_3] [3])))) : (arr_16 [i_0] [11])));
                    }
                    var_25 -= var_18;
                    arr_31 [10] [1] [i_1] [10] = arr_22 [i_0] [i_1] [i_1] [i_3 - 2] [15];
                }
                for (int i_8 = 2; i_8 < 20;i_8 += 1) /* same iter space */
                {
                    var_26 = (arr_1 [i_8]);
                    var_27 = 65535;
                    var_28 = (((arr_32 [i_0] [i_1] [i_8]) ? (((var_18 ? ((min(var_18, 19263))) : (min((arr_15 [i_0] [i_1] [8] [i_8] [i_8 + 1]), var_6))))) : (min(var_12, var_12))));

                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        arr_38 [i_0] [0] [0] [i_9] [i_9] = ((11 ? ((var_15 ? (max(var_17, (arr_11 [i_0] [i_8] [5]))) : (((max((arr_12 [i_1] [16] [i_9]), var_0)))))) : (((((!(arr_32 [i_0] [i_1 - 1] [3]))) ? 44456 : (arr_35 [i_1] [1] [i_8 - 1] [12]))))));
                        arr_39 [i_8] [i_0] = (max(((((((arr_22 [9] [i_8] [16] [0] [0]) ? (arr_19 [15] [i_1] [i_8] [i_9]) : var_14))) ? var_9 : ((var_3 ? (arr_33 [i_0] [3]) : 98)))), (193 >= 5299829906850067920)));
                    }
                }
                arr_40 [i_0] = (794326170880506758 >= 19252);
                var_29 = ((!(((((((arr_10 [i_0] [i_0] [i_1]) ? 46279 : (arr_33 [i_1] [i_1])))) ? -var_18 : var_13)))));
                arr_41 [i_0] [i_1] = 9223372036854775807;
            }
        }
    }
    var_30 = var_19;
    var_31 = (((min(var_8, -1))) ? (((14343 | 63) & (46273 | var_1))) : var_1);
    #pragma endscop
}
