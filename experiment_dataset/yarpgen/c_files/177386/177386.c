/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177386
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_1] = (arr_0 [i_0]);
                var_17 -= (arr_2 [i_0]);
                arr_5 [16] [i_0] [i_1] = (((arr_2 [i_1]) << ((((-(arr_2 [i_1]))) + 38525))));
                var_18 = 72057592964186112;
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        arr_8 [i_2] = (arr_6 [i_2]);
        arr_9 [i_2] = (arr_7 [i_2] [i_2]);
        arr_10 [i_2] = (arr_7 [i_2] [i_2]);
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        arr_14 [i_3] [i_3] = 1;
        arr_15 [i_3] = var_3;
    }

    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_19 = (((((arr_16 [i_4]) >> (var_7 - 173))) + (arr_18 [i_4] [i_4])));
        var_20 |= (((~(((arr_16 [18]) ? var_0 : var_11)))));
        var_21 -= (((!(arr_17 [i_4]))));
    }
    #pragma endscop
}
