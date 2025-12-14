/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151459
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_2;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_17 = (arr_2 [i_0]);
        var_18 = ((var_13 ? 14468 : 22142));
    }
    for (int i_1 = 1; i_1 < 24;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_19 ^= 153;
            var_20 = ((+(min((((arr_6 [i_1 + 1]) ? var_15 : 140285208)), ((max(var_6, var_0)))))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_13 [i_3] [i_3] = (arr_7 [i_1 + 1] [i_1] [i_1 + 1]);
            var_21 ^= (((arr_6 [i_1 + 1]) ? -28382 : (arr_8 [i_1] [18] [i_3])));
            var_22 = -3771192647483940259;
        }
        var_23 = (min(((((arr_12 [i_1 - 1] [18]) == (arr_7 [i_1 + 1] [i_1 - 1] [i_1])))), (min(var_6, (arr_12 [i_1 - 1] [0])))));
        var_24 = 1;
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        var_25 -= (((arr_4 [i_4]) ? (arr_4 [i_4]) : 86));
        arr_17 [1] = (((arr_4 [i_4]) ? ((1 ? (arr_12 [i_4] [i_4]) : var_13)) : (arr_3 [i_4])));
    }
    #pragma endscop
}
