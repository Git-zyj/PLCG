/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_7;
        arr_3 [i_0] = (arr_0 [i_0]);
        var_12 = (min(var_12, (arr_1 [i_0])));
        var_13 = (((~(arr_0 [i_0]))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_14 = 0;
        arr_6 [i_1] [i_1] = (((arr_1 [i_1]) + (((var_6 + (((min(1, -94)))))))));
    }
    var_15 = (max((max(93, 26147)), var_1));
    #pragma endscop
}
