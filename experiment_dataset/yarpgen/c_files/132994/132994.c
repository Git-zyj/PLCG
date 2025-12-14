/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_7;

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (max((arr_1 [i_0 - 1] [i_0 - 1]), (min(4294967295, -8478509564066972608))));
        var_13 = (min((((arr_1 [i_0 - 1] [i_0 - 2]) ? (min(var_1, 2790513850)) : (min(var_5, 0)))), (((arr_0 [i_0]) >> (((arr_1 [i_0 - 2] [i_0]) - 3422842089))))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_7 [i_1] = ((+(((arr_3 [i_1]) - -126))));
        var_14 -= (min((min((arr_4 [i_1] [i_1]), var_11)), (min((arr_4 [i_1] [i_1]), (arr_4 [i_1] [i_1])))));
        arr_8 [3] = var_6;
        var_15 = ((+(min((arr_4 [i_1] [i_1]), (arr_4 [i_1] [i_1])))));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 15;i_2 += 1)
    {
        arr_11 [i_2] = 226;
        arr_12 [i_2] = (arr_9 [i_2]);
        var_16 -= (((((~(arr_9 [i_2])))) && var_9));
    }
    #pragma endscop
}
