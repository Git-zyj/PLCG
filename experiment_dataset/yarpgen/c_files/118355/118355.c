/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118355
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_18 = (min(var_18, (arr_0 [i_0])));
                arr_6 [7] [i_0] = ((-(((arr_5 [i_1]) ? var_0 : (((36028762659225600 && (arr_3 [i_1] [i_1] [i_0]))))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                {
                    var_19 = (min(var_19, (3766573812 || 865)));
                    var_20 = (min(var_20, (arr_8 [12] [9])));
                }
            }
        }
        arr_15 [i_2] [i_2] = (min(((1 ? (arr_1 [14]) : (arr_9 [i_2]))), (arr_1 [11])));
        var_21 = (min(var_21, ((min(223, 268435328)))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_22 -= var_6;

        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            arr_22 [i_6] [i_6] = var_3;
            arr_23 [i_6] = var_14;
        }
        for (int i_7 = 3; i_7 < 24;i_7 += 1)
        {
            arr_26 [1] [19] [1] &= (127 != 32768);
            arr_27 [i_7] [i_5] = (((arr_24 [i_7 - 3] [i_7 - 2] [i_7 - 3]) >= (arr_24 [i_7 - 3] [i_7 - 2] [i_7 - 3])));
        }
        var_23 = (max(var_23, 127));
        var_24 = (min(var_24, 1));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        var_25 &= ((6544 ? (arr_25 [11] [i_8] [i_8]) : var_4));
        var_26 = (max(var_26, ((((arr_18 [i_8]) + 16863)))));
        arr_32 [i_8] = (1712509656 + (((arr_17 [i_8]) ? 34359738367 : -31722)));
        arr_33 [i_8] [i_8] = (!var_4);
    }

    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        var_27 = (max(-512, ((((!(arr_20 [19] [i_9] [i_9]))) ? var_7 : 33554431))));
        arr_36 [i_9] [i_9] = ((var_3 ? (((32768 + ((max((arr_34 [i_9] [i_9]), var_11)))))) : (max((arr_21 [i_9] [i_9] [i_9]), (arr_28 [i_9] [i_9])))));
        var_28 = ((min((((var_7 != (arr_29 [i_9])))), var_7)));
    }
    #pragma endscop
}
