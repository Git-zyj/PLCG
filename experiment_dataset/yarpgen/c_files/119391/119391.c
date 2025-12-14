/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119391
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((min(var_4, var_0))) - ((-var_3 / (224 / var_3)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = ((((max((arr_8 [11] [i_0] [i_0] [i_2]), (arr_8 [i_0] [5] [i_0] [i_0])))) ? (arr_8 [i_0] [i_1] [i_1] [i_2]) : (!3279689143)));
                    var_13 = (max(var_13, (arr_8 [i_2] [i_1 + 1] [14] [i_1])));
                }
            }
        }
    }
    var_14 = (min(var_14, -107));

    /* vectorizable */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        arr_12 [i_3] [i_3] = 47742;
        var_15 *= ((~(arr_11 [i_3] [i_3])));
        var_16 = 12386;
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 15;i_4 += 1)
    {
        arr_17 [i_4] [i_4] = ((-(arr_13 [i_4 + 2])));
        var_17 += (arr_14 [i_4 + 2]);
        var_18 = ((var_7 ? -14585 : (arr_16 [i_4])));
        var_19 = (((arr_14 [i_4 - 1]) ? -var_3 : var_5));
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {

        /* vectorizable */
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            arr_23 [i_5] |= (arr_0 [i_5]);
            var_20 = (min(var_20, -27134));
            arr_24 [i_5] [i_6] [i_5] = 1130506736;
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {

            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                var_21 = (min(var_21, (arr_10 [i_8])));
                var_22 = ((!((((arr_21 [i_5] [i_7] [2]) ? var_8 : (arr_3 [i_5] [i_7] [i_8]))))));
            }
            arr_31 [i_5] [i_7] = (-27134 * var_1);
            var_23 = (max(var_23, (((-(arr_30 [i_5] [i_5] [i_5]))))));
            var_24 = (max(var_24, (arr_21 [7] [8] [i_7])));
        }
        for (int i_9 = 4; i_9 < 9;i_9 += 1)
        {
            var_25 = ((~((-86 ? (arr_7 [6] [i_5] [i_9] [i_9]) : 49))));
            var_26 &= (min(((~(arr_21 [i_5] [i_9] [i_5]))), (arr_1 [i_5])));
        }
        arr_34 [i_5] = -252;
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 12;i_10 += 1)
    {
        arr_37 [i_10] [i_10] = 3;
        var_27 = (min(var_27, (arr_35 [i_10] [i_10])));
    }
    #pragma endscop
}
