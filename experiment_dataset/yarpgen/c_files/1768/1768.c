/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1768
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_4;
    var_13 = ((min(9984568877760039779, 108)));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [1] = arr_0 [i_0] [6];
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        arr_11 [11] [8] [i_2] [10] [i_3] = ((((((arr_2 [i_2]) ? var_2 : (var_8 <= 496890897)))) ? (min(1095282263, 3798076398)) : (((~(arr_6 [0]))))));
                        arr_12 [3] [i_2] [i_2] [i_0] = (((((1095282263 ? 31656 : 17))) ? (arr_7 [i_0] [12] [i_2]) : var_3));
                    }
                }
            }
        }
        arr_13 [3] = (min(0, -47));
        arr_14 [13] = (var_1 ? ((9984568877760039779 ? 2300666979 : 80)) : -61);
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        arr_19 [i_4] [8] = 2637271962;
        arr_20 [i_4] = 60;
        arr_21 [i_4] [i_4] = ((118 ? (arr_18 [i_4]) : 1));
        arr_22 [i_4] [i_4] = (arr_18 [i_4]);
    }
    for (int i_5 = 4; i_5 < 13;i_5 += 1)
    {
        arr_25 [i_5] = ((((((arr_8 [i_5] [11] [i_5]) ? (arr_15 [i_5]) : var_8))) ? -24 : 10707));
        arr_26 [14] = var_10;
    }
    var_14 = (min(var_3, var_0));
    #pragma endscop
}
