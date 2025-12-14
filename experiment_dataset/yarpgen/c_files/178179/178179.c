/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178179
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_15 = ((3051983387 ? (min((arr_1 [i_0]), (((33 ? var_1 : var_0))))) : 1));
        arr_4 [i_0] = -1858660761;
        arr_5 [i_0] [i_0] = var_0;
        var_16 = ((926 ? (((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : var_3)) : (arr_2 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_17 *= (((-119 ? (1 * var_0) : 1)));
        var_18 = ((var_6 + var_4) ? 62 : 1);
        var_19 = (max(var_11, ((3464328703 ? (-2147483647 - 1) : 18446744073709551615))));
    }
    var_20 = (min(var_9, var_8));
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_21 = var_7;
                    var_22 = (min(((1 ? ((var_7 ? 2747244677260168250 : 0)) : 27013)), ((min((-3747611421049178530 & 2147483647), (((1 ? 0 : 1))))))));

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
                    {
                        var_23 = (1 + 1);
                        var_24 = (((arr_14 [i_2 - 1] [i_4] [i_2 - 1]) | var_5));
                        var_25 = (min(var_25, (((var_8 >> (((var_13 & var_7) - 539442727)))))));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
                    {
                        var_26 *= var_1;
                        var_27 = (1 ? 286422304 : 4);
                        arr_22 [i_2] [i_2] [i_4] [i_3] [18] [i_2] = ((arr_16 [i_2 - 1] [i_2 - 2]) >> (arr_16 [i_2 - 2] [i_2 - 2]));
                    }

                    for (int i_7 = 2; i_7 < 20;i_7 += 1) /* same iter space */
                    {
                        var_28 = (min(var_28, -8151298192550835702));
                        var_29 = (((max((arr_13 [i_2 + 1]), -25406))) ? 970233572984575356 : ((min((arr_15 [i_4] [i_7] [i_7 + 2]), (3264533411 * var_5)))));

                        for (int i_8 = 3; i_8 < 20;i_8 += 1)
                        {
                            var_30 = (((min(3439588383, (max(var_12, (arr_14 [i_2] [i_4] [i_8]))))) * (((max((arr_16 [i_7] [i_7]), (arr_24 [i_4] [i_8] [i_4])))))));
                            arr_28 [i_4] [i_3] [i_2] [i_7] [i_8] = ((-(!4230921055379944857)));
                            var_31 = (((-(arr_19 [i_2 - 1] [i_3] [i_7 + 2] [i_7 + 2] [i_8 + 2] [i_8]))));
                        }
                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            arr_31 [i_2] [i_2 - 1] [i_3] [i_4] [14] [i_7] [i_4] = 1;
                            var_32 = (min(var_32, 1));
                        }
                    }
                    for (int i_10 = 2; i_10 < 20;i_10 += 1) /* same iter space */
                    {
                        arr_34 [i_4] [i_3] [i_4] [i_3] [i_3] [i_3] = (855378912 ^ 13933936868190973550);
                        arr_35 [i_2] [i_2] [i_2] [i_3] [i_4] [i_4] = 1;
                        var_33 = (min(var_33, (max(1, ((max(13, (arr_9 [i_2 + 1]))))))));
                        var_34 = (((max(1, 8924))));
                    }
                }
            }
        }
    }
    var_35 = (min(373123373, -2147483630));
    #pragma endscop
}
