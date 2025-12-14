/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113431
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, var_11));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_15 = (12288 >= 111);
        var_16 = (min(var_16, ((((((48488 ? -8151337541335866765 : (-2147483647 - 1)))) || (arr_0 [i_0] [i_0]))))));
        arr_2 [i_0] = ((1966489743496549743 || (arr_0 [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        arr_6 [i_1] = ((!(arr_5 [i_1])));
        arr_7 [i_1] = (((arr_1 [i_1 - 1] [4]) != 56592));
    }
    #pragma endscop
}
