/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135174
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_13 = ((((min((arr_1 [7]), var_5))) * (((!(arr_1 [2]))))));
        var_14 = (min((arr_0 [i_0]), (arr_2 [i_0 + 2] [i_0])));
        var_15 = var_9;
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 6;i_2 += 1)
            {
                {
                    var_16 = (arr_3 [i_0]);
                    arr_7 [i_0] [i_1] [i_0] [i_2 - 3] = var_10;
                    arr_8 [i_0] [i_0] [i_0] = ((var_11 ? var_6 : (((var_10 ? (arr_2 [i_0] [i_0]) : 1)))));
                    arr_9 [i_0] = (max((max((arr_1 [i_1]), var_7)), -7751034263127361776));
                    var_17 &= ((-(max(2614621707, (arr_2 [4] [4])))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 4; i_3 < 10;i_3 += 1)
    {
        var_18 = var_7;
        var_19 = (min(var_19, (arr_10 [0])));
    }
    var_20 = (max(var_20, (((0 ? var_0 : (((var_4 * (~var_9)))))))));
    var_21 |= 1;

    /* vectorizable */
    for (int i_4 = 1; i_4 < 22;i_4 += 1)
    {
        var_22 = var_6;
        var_23 = (arr_12 [i_4]);
        arr_15 [i_4 - 1] = -56;
    }
    for (int i_5 = 3; i_5 < 23;i_5 += 1)
    {
        arr_19 [i_5] [i_5] = (min(448836645, 103));
        arr_20 [i_5 + 1] [11] = var_0;
        arr_21 [i_5] = ((-1009556581 ? (((max(var_0, var_10)) ^ var_9)) : var_6));
    }
    for (int i_6 = 0; i_6 < 0;i_6 += 1)
    {
        var_24 = ((((-((1009556599 ? 65 : 1009556593)))) / var_1));
        var_25 = (((min(-31034, 24730))) ? var_8 : ((1009556557 * (arr_17 [i_6] [i_6 + 1]))));
    }
    #pragma endscop
}
