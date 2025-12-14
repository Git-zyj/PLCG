/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15530
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((-6 * var_11) ? var_4 : (((31 % 113) ? ((min(var_9, var_3))) : ((min(var_11, var_11)))))));
    var_13 |= (((((31 ? -6 : -38)) + 37)));
    var_14 = var_9;
    var_15 = var_5;

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 = (arr_4 [i_1]);
                    arr_8 [i_2] [i_2] [i_0] = ((((min((arr_3 [i_0]), var_0))) ? var_8 : (arr_3 [18])));
                    arr_9 [i_0] [5] [i_2] = (min(-29, (((((arr_4 [i_2]) ? (arr_1 [1]) : (arr_0 [i_2]))) - (arr_0 [i_0])))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 21;i_4 += 1)
            {
                {
                    var_17 *= (max(((((((arr_11 [i_4]) ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : -14226)) != ((max((arr_5 [16]), var_5)))))), 16));
                    var_18 = (arr_4 [i_0]);

                    for (int i_5 = 1; i_5 < 20;i_5 += 1)
                    {
                        arr_16 [i_0] [1] [1] [11] [i_5] [i_3] = 39;
                        var_19 = ((((max(((max(var_8, 130))), -230))) * (((-4672884880975528323 + var_10) * (arr_5 [i_0])))));
                    }
                    arr_17 [i_4] [i_3] [i_3] = (max((arr_7 [i_4 - 1] [i_3 + 1] [17] [17]), (min((arr_7 [i_4 + 1] [i_3 + 4] [i_3] [i_3]), (arr_14 [i_3] [i_3 + 4] [i_0] [i_3])))));
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
    {
        var_20 = (min(var_11, (arr_3 [i_6])));
        arr_22 [i_6] |= (arr_14 [18] [i_6] [i_6] [18]);
    }
    for (int i_7 = 3; i_7 < 20;i_7 += 1)
    {
        var_21 = arr_23 [i_7];
        var_22 |= var_6;
        var_23 *= ((((((arr_1 [i_7 - 2]) ^ (((!(arr_0 [i_7]))))))) ? (((arr_19 [i_7 - 2] [i_7 - 1]) ? (arr_5 [i_7 - 3]) : (arr_5 [i_7 + 1]))) : (144 % 14)));
        var_24 = (max((max((arr_10 [i_7 - 3] [4] [i_7]), (arr_10 [i_7 + 1] [i_7] [1]))), (((112 ? var_2 : -10744)))));
        var_25 |= var_5;
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 15;i_8 += 1)
    {
        var_26 = (max(var_26, (arr_23 [i_8])));
        var_27 |= (arr_2 [i_8]);
    }
    #pragma endscop
}
