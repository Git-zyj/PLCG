/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((var_2 ? ((var_2 ? var_8 : 4294967295)) : var_6)) != var_12));
    var_16 = (((var_3 < ((-15 ? var_13 : 1992367545)))) ? ((var_5 ^ ((var_0 ? var_6 : var_11)))) : var_10);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = -399568945;
        arr_3 [i_0] &= arr_1 [i_0];
        var_17 = ((-(arr_1 [i_0])));
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        var_18 = var_3;
        var_19 = (max((max(-1067471597, 3368905140)), (arr_5 [i_1] [i_1 + 1])));
        var_20 = max((arr_5 [i_1] [i_1]), var_14);
        arr_6 [i_1] = ((min(1852494316, 255)) ^ ((324899904 ? -1894870249 : 361819845)));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 23;i_2 += 1)
    {
        arr_10 [i_2] |= (1966486995 ? 361819845 : -1420751724);
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 24;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    {
                        var_21 = var_3;
                        var_22 &= ((!(((1720826249 ? 1908966677 : 0)))));
                    }
                }
            }
        }
        arr_17 [i_2] &= (arr_12 [i_2 + 2] [i_2 - 1]);
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            {
                arr_22 [i_6] = (((((((((arr_8 [i_6] [i_6]) ? (arr_5 [i_7] [i_7]) : (arr_11 [i_6])))) ? (((arr_14 [i_6] [i_7] [i_7] [i_7]) ^ (arr_9 [i_6]))) : (((-224033252 ? -1981996957 : 1894870247)))))) ? (arr_21 [i_7]) : (((((arr_16 [i_7]) <= var_0)) ? (arr_4 [i_6]) : (((var_1 ? (arr_15 [i_6]) : -1409788542)))))));
                var_23 -= (((((arr_8 [i_6] [i_6]) ? 2442472986 : var_7)) <= (max((arr_9 [i_6]), -var_4))));
                var_24 = ((3933147450 ? 1457728707 : 2636916029));
            }
        }
    }
    #pragma endscop
}
