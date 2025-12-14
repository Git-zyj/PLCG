/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139823
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = (min((max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))), (arr_1 [i_0] [i_0])));
        arr_2 [i_0] |= (arr_1 [i_0] [i_0]);
        var_14 |= 51531;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            {
                                var_15 = (max(var_15, (((var_10 ^ var_10) ? 2242539457088119852 : (var_11 * var_7)))));
                                var_16 |= (arr_11 [i_5] [i_4] [i_3] [2] [i_1]);
                                arr_16 [i_4] [i_4] [i_2] [18] [18] = ((-(var_7 || var_1)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            {
                                var_17 = ((((arr_10 [i_2] [3] [i_2] [i_2]) < 2242539457088119872)));
                                var_18 = var_5;
                            }
                        }
                    }
                }
            }
        }
        var_19 = var_0;
        arr_23 [i_1] [19] = (((arr_21 [i_1] [14] [i_1] [i_1]) <= (arr_3 [i_1])));
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        arr_27 [i_8] [i_8] = -var_6;
        var_20 -= (arr_6 [0]);
        var_21 = (min(var_21, (((((((arr_19 [22] [i_8] [i_8] [i_8] [i_8] [i_8]) / 26308))) ? (((~(arr_13 [i_8] [8] [i_8] [i_8] [9])))) : (min((arr_9 [i_8] [6]), var_10)))))));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 25;i_9 += 1)
    {
        var_22 = (min(var_22, (((2242539457088119852 * (arr_28 [i_9]))))));
        var_23 = (var_1 > var_11);
        arr_31 [i_9] [i_9] = ((-(1181099600 >= 147)));
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 16;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 16;i_11 += 1)
        {
            {
                var_24 = (arr_8 [i_10] [i_11] [i_10]);
                var_25 -= var_1;
            }
        }
    }
    var_26 = ((4081162107 ? -6467314847754719474 : 109));
    var_27 += (((((((29130 ? var_2 : var_4))) ? ((var_4 ? var_11 : var_8)) : var_4)) + var_9));
    var_28 = 3113867695;
    #pragma endscop
}
