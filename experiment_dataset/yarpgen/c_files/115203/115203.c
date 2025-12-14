/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115203
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_1 [i_0]);
        var_11 = -108;
        arr_3 [i_0] [i_0] = var_10;
    }
    for (int i_1 = 2; i_1 < 10;i_1 += 1)
    {
        var_12 = ((((((arr_0 [i_1 + 1] [i_1 - 2]) ? 11387547035401449000 : (arr_0 [i_1 - 2] [i_1 + 1])))) ? ((255 ? (arr_0 [i_1 - 2] [i_1 + 1]) : 31)) : var_1));

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            var_13 = (((var_1 - var_3) ? (arr_4 [i_1 + 1]) : var_10));
            var_14 = (arr_0 [i_1 - 2] [i_2]);
        }
        /* vectorizable */
        for (int i_3 = 1; i_3 < 9;i_3 += 1)
        {
            var_15 = var_6;
            arr_11 [5] [1] = var_7;
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 7;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 0;i_7 += 1)
                {
                    {
                        var_16 = 254;
                        arr_26 [1] [1] [7] [i_6] [i_4] [i_7 + 1] = (254 ? var_0 : (((253 << (var_7 - 237)))));
                        var_17 = ((var_4 ? (arr_23 [i_4] [i_4] [i_6 + 1] [i_5] [i_4]) : var_1));
                        var_18 = var_2;
                    }
                }
            }
            var_19 ^= (~var_0);
        }
        arr_27 [i_4] [8] = (~240);
        arr_28 [i_4] = var_5;
        arr_29 [i_4] = 17;
    }
    var_20 = var_6;
    var_21 = var_0;
    var_22 = ((var_6 ? ((var_6 ? (~255) : var_2)) : var_10));
    var_23 = (((~-1205361431) ? var_9 : ((((var_7 ? 4493210420154074219 : var_9))))));
    #pragma endscop
}
