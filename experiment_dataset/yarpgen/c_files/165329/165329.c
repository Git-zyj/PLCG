/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((-(((max(var_11, var_12))))));
    var_21 = var_1;
    var_22 = var_8;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_23 = (!var_0);

        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        {
                            var_24 -= (var_0 <= 0);
                            arr_13 [i_0] [i_0] [12] [i_0] [i_0] = (arr_11 [i_0] [i_1] [i_0] [i_1] [i_1 + 1] [14] [i_1 - 1]);
                            var_25 = (max(var_25, 0));
                            arr_14 [i_0] [i_0] [i_2] [9] [i_4] = ((~(((arr_5 [6]) + var_12))));
                        }
                    }
                }
            }
            arr_15 [i_0] [i_0] = ((~(arr_7 [i_0] [i_1 - 3] [i_1] [i_1 - 3])));
        }
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            var_26 += (-1 != -32214);
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        {
                            var_27 += (((((arr_16 [i_0] [i_5] [i_8]) ? var_13 : var_14))) ? ((((!(arr_0 [i_6]))))) : 836352891);
                            var_28 = -0;
                            var_29 = 91;
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {
                for (int i_11 = 3; i_11 < 13;i_11 += 1)
                {
                    {
                        var_30 = (((arr_5 [i_0]) ? (var_12 < -1356700540) : (((arr_4 [i_10] [i_10] [i_10]) ? var_0 : var_17))));
                        var_31 -= 0;
                        var_32 = (((-2 + 13244) ? (arr_31 [1] [i_9] [i_9] [i_11]) : (arr_2 [5] [i_9] [5])));
                        var_33 = -0;
                    }
                }
            }
        }
        var_34 = ((var_4 ? (arr_18 [6]) : var_10));
        arr_34 [i_0] = (!3083249407597153122);
    }
    for (int i_12 = 3; i_12 < 21;i_12 += 1)
    {
        var_35 = ((~(arr_35 [i_12 - 3])));
        var_36 = (max(var_36, (((((min(164, 0))) >= (0 != 1552572444623462853))))));
    }
    for (int i_13 = 0; i_13 < 12;i_13 += 1)
    {
        arr_39 [i_13] = ((!((max((arr_6 [i_13] [i_13] [i_13]), (arr_6 [i_13] [i_13] [i_13]))))));
        var_37 = (min((((arr_0 [i_13]) ? (arr_0 [i_13]) : (arr_0 [i_13]))), ((((arr_9 [i_13] [7] [15] [i_13]) && (1 <= 0))))));
    }
    #pragma endscop
}
