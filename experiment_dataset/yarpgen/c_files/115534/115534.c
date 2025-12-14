/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115534
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0] = (-(arr_3 [i_0] [i_0]));
        arr_5 [12] &= (arr_3 [6] [i_0]);
        var_13 = (~1470647891);
        arr_6 [i_0] [i_0] = var_5;
        arr_7 [i_0] = (((2576531334 > (arr_3 [i_0] [i_0]))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_14 -= (((arr_1 [i_1] [i_1]) ? (arr_8 [i_1]) : (arr_8 [i_1])));
        arr_11 [i_1] = arr_1 [i_1] [i_1];
    }
    var_15 = (((min(((max(-298378036, 0))), var_6)) ^ ((((var_2 >= (((115 ? 142 : 390088508)))))))));
    var_16 |= var_8;
    #pragma endscop
}
