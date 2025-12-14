/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162954
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 -= ((-(~var_5)));
        var_12 ^= 1395057837907453690;
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 19;i_3 += 1)
            {
                {
                    var_13 -= (((((((((arr_3 [i_3 + 1]) ? (arr_2 [3]) : 18446744073709551615)) <= -var_3)))) <= (arr_6 [0])));
                    var_14 -= (arr_7 [i_1] [i_2 + 1] [16] [10]);
                }
            }
        }
        var_15 = max((min(var_10, var_0)), var_5);
    }

    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        var_16 = (max(var_16, (((!(arr_2 [i_4]))))));
        arr_12 [i_4] = (var_4 > var_5);
        var_17 -= ((!((min(((3 ? (arr_8 [i_4] [9]) : 11895184420669740376)), (((arr_11 [i_4] [i_4]) ? var_8 : (arr_7 [8] [12] [i_4] [8]))))))));
    }

    for (int i_5 = 2; i_5 < 17;i_5 += 1)
    {
        arr_15 [i_5] = (((1 ? 0 : 0)));
        var_18 = var_4;
        var_19 = (arr_13 [1]);
    }
    #pragma endscop
}
