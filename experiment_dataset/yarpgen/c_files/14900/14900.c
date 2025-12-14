/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14900
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_20 = ((min(((max(-26045, -32368))), var_8)));
        var_21 |= (((~-1479233151) ? (((~((min((arr_3 [9]), var_18)))))) : (((arr_1 [i_0] [i_0]) ? var_10 : (~5936778458859155777)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] = (min(4, ((var_0 ? var_3 : ((max(-52, var_11)))))));
                    var_22 |= min((((3674692492 ? -32369 : -52))), (max((arr_6 [i_0] [0] [i_2] [i_2]), (arr_6 [6] [13] [6] [i_2]))));

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        arr_12 [i_0] = (max(35207, (((((arr_8 [i_0] [i_0] [10] [9]) == var_17)) ? (var_8 || 8105804509771178586) : ((min(-15043, -1511)))))));
                        arr_13 [i_0] [8] [i_2] [i_3] &= (arr_4 [14] [i_1] [7]);
                        var_23 = (min((((arr_10 [i_0]) ? -var_14 : (arr_1 [14] [i_0]))), (min(530738980, (~252)))));
                        arr_14 [5] [10] [i_2] [i_1] [9] = ((((!(arr_3 [i_2]))) && var_5));
                    }
                    var_24 = var_9;
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 13;i_5 += 1)
                        {
                            {
                                arr_19 [14] = ((var_12 ^ ((min(((~(arr_3 [i_4]))), (arr_5 [i_5 - 2] [i_4 + 3]))))));
                                var_25 -= ((!((!(((var_0 ? 1758676287 : 26)))))));
                            }
                        }
                    }
                }
            }
        }
        var_26 *= ((var_5 / (min(530738980, 58053712))));
    }
    for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
    {
        arr_22 [i_6] = (~2536291006);
        var_27 = max((max(-12935162356018501600, var_16)), (((((var_0 || (arr_17 [i_6] [i_6] [i_6] [2] [i_6]))) || (arr_21 [i_6])))));
    }
    var_28 |= var_10;
    #pragma endscop
}
