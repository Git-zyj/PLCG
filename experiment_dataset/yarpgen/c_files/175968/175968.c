/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_2;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = min((((max(var_4, 0)) >> (((-12998 + 7) + 13005)))), (arr_2 [i_0]));
        var_15 = var_0;
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            var_16 = ((max((arr_6 [i_1] [i_2] [i_2]), (arr_6 [i_1] [i_1] [i_1]))));
            var_17 = (((((min((max((arr_1 [3]), 168)), (max(-455534097246956677, -1)))) + 9223372036854775807)) >> (((arr_8 [i_2] [i_2] [4]) >> (((((arr_2 [10]) - var_5)) - 12770))))));
            arr_9 [i_2] [i_2] = (arr_2 [i_1]);
        }
        arr_10 [1] = (max((arr_8 [i_1] [0] [i_1]), (max((min(-918382870, (arr_7 [i_1]))), (max((arr_4 [i_1]), var_0))))));
        arr_11 [i_1] = ((((max((arr_7 [i_1]), (arr_6 [i_1] [i_1] [10])))) ? -var_5 : (min((arr_7 [i_1]), (arr_7 [i_1])))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        var_18 = (0 && -1925512268);
        var_19 = (~(arr_12 [i_3] [i_3]));
        var_20 = (((arr_15 [i_3]) ? (arr_14 [i_3]) : (arr_14 [i_3])));
    }
    /* vectorizable */
    for (int i_4 = 3; i_4 < 20;i_4 += 1)
    {
        var_21 |= ((arr_17 [6] [6]) >= (arr_17 [18] [18]));
        var_22 = (((arr_16 [i_4]) / ((2199022206976 << (((-586610367 + 586610427) - 40))))));
    }
    #pragma endscop
}
