/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114012
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_11 = -2078621588;
            var_12 = (max(var_12, ((((arr_4 [i_0]) ? (((arr_3 [i_0] [i_0]) + 17449154255131322823)) : (((var_8 ? 1 : (arr_2 [12] [i_1])))))))));
            var_13 = 29352;
        }
        var_14 = -997589818578228793;
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 19;i_3 += 1)
            {
                {
                    arr_11 [i_0] [i_3] [i_0] = (arr_10 [i_0] [i_0] [i_2] [i_3]);
                    arr_12 [i_0] [i_2] [i_3 + 1] [i_2] = ((arr_10 [i_2 - 2] [i_2 + 1] [i_3] [i_3 + 3]) ? (arr_10 [i_2 - 1] [i_2 - 1] [i_3] [i_3 + 1]) : (arr_10 [i_2 - 2] [i_2 - 1] [i_2] [i_3 + 3]));
                }
            }
        }
        var_15 = -4095;
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        var_16 = ((~(arr_10 [i_4] [i_4] [i_4] [i_4])));
        var_17 = var_6;
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 24;i_5 += 1)
    {
        var_18 = (min(var_18, (arr_17 [i_5 + 1])));
        /* LoopNest 2 */
        for (int i_6 = 4; i_6 < 24;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {
                {
                    var_19 = (arr_20 [i_6 + 1]);
                    var_20 = 17449154255131322803;
                    arr_25 [i_5] [i_5] [i_5] = (((arr_20 [i_7]) ? 6 : (((arr_23 [11] [i_6] [i_6] [i_6]) ? (arr_19 [i_5 + 1] [i_6] [i_7]) : (arr_18 [i_5] [i_6])))));

                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        var_21 = ((var_4 || (arr_19 [i_5] [i_5] [i_5])));
                        var_22 *= ((-var_4 ? (arr_27 [i_5] [i_6 - 4] [21] [i_8]) : ((var_5 ? var_4 : (arr_27 [i_5 - 1] [i_6] [i_7] [i_8])))));
                        var_23 -= (arr_27 [i_5 + 1] [i_6 - 4] [i_6 - 2] [i_6]);
                        var_24 = (arr_24 [i_6] [i_6] [i_6 - 3]);
                    }
                }
            }
        }
    }
    var_25 = (min(((min((max(2120998468, var_2)), 8))), ((var_4 ? var_3 : var_4))));
    #pragma endscop
}
