/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108783
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_20 -= (min(-var_3, (min((-9223372036854775807 - 1), var_19))));
        arr_2 [i_0] = ((((min((arr_0 [i_0]), var_9))) ? var_9 : ((((arr_1 [i_0]) + 255)))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                {
                    var_21 *= (min((((arr_5 [i_3] [i_2] [i_1]) - 1)), (var_13 - 255)));
                    arr_9 [i_1] [i_2] [i_1] [i_1] = (-9223372036854775807 - 1);
                    var_22 = var_2;
                }
            }
        }
        var_23 -= ((((((arr_4 [i_1] [i_1]) <= (arr_4 [i_1] [23])))) >> (((((arr_4 [i_1] [i_1]) + (arr_4 [i_1] [i_1]))) - 56))));
        arr_10 [i_1] = (((min(331669402, -186692558)) <= ((((!(arr_7 [i_1] [i_1] [i_1] [i_1])))))));
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        var_24 &= ((((arr_12 [i_4] [i_4]) ? ((((arr_13 [i_4]) ? (arr_13 [0]) : var_13))) : 9223372036854775807)) - (((-(((arr_12 [i_4] [i_4]) - (arr_13 [i_4])))))));
        arr_14 [i_4] = ((((-22816 ? (arr_13 [i_4]) : (arr_13 [i_4]))) | ((var_5 << (var_5 - 92)))));
        arr_15 [i_4] = 624933044;
        var_25 *= var_7;
    }
    var_26 += var_13;
    #pragma endscop
}
