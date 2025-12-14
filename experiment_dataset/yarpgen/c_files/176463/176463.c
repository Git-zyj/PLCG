/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176463
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= var_8;
    var_17 = (-var_5 - 1);
    var_18 = ((((!(1 & 7201187734461797790))) || var_7));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_19 = (max((((arr_6 [i_3] [i_1] [13] [i_1 + 1]) ? 10240 : (arr_7 [i_1] [i_1] [1] [i_1 - 1]))), ((min(var_3, (arr_6 [i_0] [i_0] [i_0] [i_0]))))));
                            var_20 -= ((((max(139, var_9))) >> ((((max((arr_9 [i_1 - 2] [i_1]), (arr_9 [i_1 - 2] [i_1])))) - 51))));
                            var_21 = (arr_1 [i_1 + 2]);
                            var_22 = 9;
                        }
                    }
                }
                var_23 = ((((((1 ? 63 : 7201187734461797790))) ? -6447603030972256734 : (((-22741 ? 1 : 5666))))));
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        {
                            arr_14 [12] &= (arr_12 [1] [i_1 + 2] [i_1 + 1] [i_4 + 1]);
                            arr_15 [i_0] [i_5] [i_5] [i_0] = (arr_9 [i_4] [i_4]);

                            for (int i_6 = 2; i_6 < 19;i_6 += 1)
                            {
                                arr_18 [i_5] [i_5] [16] = (~10);
                                var_24 -= ((((((arr_10 [i_1 + 1] [i_1 - 2] [i_1 + 1] [i_1 - 2]) ? -8192 : (arr_10 [i_1 + 1] [i_1 - 2] [i_1 + 1] [i_1 - 2])))) ? (((arr_2 [i_4 + 1]) ? 5933585842345000093 : 13024817582632812982)) : ((((arr_12 [12] [i_5] [i_5] [1]) ? var_2 : (arr_12 [1] [i_4] [i_4] [1]))))));
                            }
                            var_25 = 3;
                            arr_19 [i_5] [i_5] = ((((((arr_17 [i_0] [i_0] [i_5] [i_1] [i_4] [i_5]) ? var_3 : var_11))) - ((((((6447603030972256733 ? -6447603030972256728 : 591890527))) ? 194 : (~1))))));
                        }
                    }
                }

                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    arr_22 [i_0] [i_1] [i_7] [i_7] = ((!(1 && 1)));
                    var_26 = (min(13445771064098780623, (arr_3 [i_1] [i_1 - 2])));
                    var_27 = (max(var_27, (((!(1 >= 1534267123501312095))))));
                    var_28 = ((-((min((arr_1 [i_1 + 1]), (arr_1 [i_1 + 2]))))));
                    var_29 = var_7;
                }
            }
        }
    }
    var_30 = (((~var_12) ? ((87 ? 174 : 202)) : var_6));
    #pragma endscop
}
