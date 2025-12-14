/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162572
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, 4279200379));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_19 -= (((~16727) && 54539));
            arr_5 [i_0] [i_1] = var_2;
            var_20 += 24222;
            arr_6 [i_0] [5] = -16728;
        }
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            arr_9 [i_0] = (arr_4 [i_2]);
            var_21 *= 1781353475;
            arr_10 [4] [15] [i_2] = ((2513613805 ? (arr_4 [i_0]) : (arr_4 [i_0])));
        }
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            var_22 = (((var_16 || var_7) <= -var_5));
            /* LoopNest 2 */
            for (int i_4 = 4; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    {
                        arr_19 [i_4] [i_3] = ((+((var_11 ? (arr_15 [i_0] [i_0] [i_4] [i_0]) : var_1))));
                        arr_20 [i_4] = 174;
                    }
                }
            }
        }
        var_23 = (arr_8 [i_0]);
    }
    var_24 = 3926672310;
    var_25 = (((((((min(var_0, var_8))) >> ((((var_12 ? var_15 : 2513613821)) - 9823152307141810593))))) ? var_6 : var_1));
    #pragma endscop
}
