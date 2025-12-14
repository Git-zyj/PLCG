/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((-(var_4 < var_0)));
    var_12 = (max(var_12, 1));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 += 1;
        arr_2 [i_0] = 1;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_14 = (min(var_14, ((((0 < var_5) ? var_7 : (arr_3 [i_1] [i_1]))))));
        var_15 = (max(var_15, (arr_3 [0] [i_1])));
    }

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_16 |= (~-1);
        arr_8 [1] [i_2] = (((arr_5 [i_2]) ? ((min(1, 1))) : ((-(arr_1 [i_2] [i_2])))));
        var_17 = arr_6 [i_2];
        var_18 += var_3;
        arr_9 [0] &= var_0;
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 0;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    arr_20 [i_3] = 1;
                    var_19 = var_2;
                    var_20 = 1;
                    var_21 = (var_4 < (((((1 ? 1 : 0))) ? (~1) : ((1 ? 0 : 0)))));

                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {
                        var_22 = (arr_10 [i_3]);
                        var_23 &= ((((min(var_6, 0))) ? 1 : ((var_8 ? ((1 ? 1 : 1)) : ((1 ? 0 : 1))))));
                    }
                    /* vectorizable */
                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        var_24 += (((arr_13 [1]) ? (arr_13 [1]) : 1));
                        arr_26 [i_3] [i_4 + 1] [i_3] [i_3] = 1;
                        var_25 = ((1 ? 1 : 1));
                        var_26 = (max(var_26, (arr_11 [i_3] [i_7])));
                    }
                }
            }
        }
        arr_27 [i_3] = arr_23 [i_3] [i_3];
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        var_27 = (max(var_27, 1));
        var_28 = (max(var_28, (((1 >> (arr_28 [i_8] [1]))))));
        var_29 = (min(var_29, (((1 ? 1 : 1)))));
        arr_30 [1] |= 1;
        var_30 = (min(var_30, 1));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        var_31 = (min(var_31, (arr_3 [i_9] [i_9])));
        var_32 = 1;
        var_33 = (min(var_33, (((1 << (((arr_17 [i_9] [i_9] [i_9]) ? (arr_10 [1]) : 1)))))));
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                {
                    arr_40 [i_10] [i_10] = ((0 ? 1 : 1));
                    var_34 = ((((((arr_11 [1] [i_9]) & 1))) ? (arr_17 [i_11] [i_10] [i_9]) : 1));
                    var_35 &= var_10;
                    arr_41 [i_10] = (~1);
                }
            }
        }
        var_36 += arr_33 [i_9];
    }
    var_37 &= var_6;
    #pragma endscop
}
