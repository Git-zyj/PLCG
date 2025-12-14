/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167390
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] = (var_7 == 1);
        arr_4 [i_0] = (~var_8);
        arr_5 [i_0] = (((!((!(arr_0 [i_0]))))) ? 25621 : var_10);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_9 [i_1] = (-var_2 + var_2);
        arr_10 [0] = ((~(arr_6 [20])));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 0;i_2 += 1)
    {
        arr_15 [2] [i_2] = -28;
        arr_16 [i_2] [i_2] = 10181809903847022945;
        arr_17 [i_2] [i_2] = (arr_11 [i_2 + 1]);
    }
    var_12 = ((9400416928226786782 && (!124)));
    var_13 = 132;
    var_14 = var_4;
    #pragma endscop
}
