/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165486
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_7 [i_0] [14] [21] = ((var_18 ? 1 : (-2147483647 - 1)));
                    arr_8 [i_0] = ((((var_11 ? ((2147483647 ? 127 : 41068)) : var_13))) ? var_12 : (((arr_5 [i_2] [i_1] [i_0]) ? var_16 : var_2)));
                    var_20 ^= (arr_6 [i_2] [i_2] [i_2] [i_2]);
                }
            }
        }
        arr_9 [i_0] = (4156660444824008237 ? 1 : 0);
        var_21 = (!var_12);
        arr_10 [i_0] = var_19;
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        arr_14 [i_3] [i_3] = var_10;
        var_22 = (min(var_22, ((((arr_6 [8] [i_3] [i_3] [i_3]) < var_8)))));
        arr_15 [i_3] [i_3] |= var_17;
        arr_16 [i_3] [i_3] |= ((var_7 ? (1 * var_6) : 47));
        arr_17 [i_3] = ((141 % (arr_11 [i_3])));
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        var_23 = ((((((arr_21 [i_4]) ^ var_9))) ? ((var_14 ? var_13 : var_5)) : (arr_19 [i_4])));
        var_24 = (arr_5 [i_4] [i_4] [i_4]);
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 0;i_7 += 1)
                {
                    {
                        var_25 = (max(var_25, (((115 ? (((arr_28 [i_7 + 1] [10] [i_5] [i_4] [i_4]) ? var_16 : var_9)) : (arr_24 [i_6] [i_7 + 1] [i_7]))))));
                        var_26 = 18;
                        arr_30 [i_4] [i_5] [i_6] [13] [i_5] [13] = (max(var_6, (((((var_6 ? var_5 : var_9))) ? ((var_2 ? var_1 : 123)) : 53914))));
                        var_27 = (min(var_27, var_16));
                    }
                }
            }
        }
    }
    var_28 = ((((((((var_5 ? var_13 : var_0))) ? ((var_0 ? var_2 : var_17)) : (var_18 + var_13)))) ? (min(var_0, var_16)) : (12866 >= var_11)));
    var_29 *= ((max(var_17, var_10)));
    var_30 = var_10;
    #pragma endscop
}
