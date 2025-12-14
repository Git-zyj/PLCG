/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((~(~var_4)));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (arr_0 [i_0] [9]);
        arr_5 [i_0] = ((~(max(917504, var_4))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        arr_9 [i_1] = 1893142477;
        arr_10 [i_1] = ((~(~2401824819)));
    }
    for (int i_2 = 1; i_2 < 10;i_2 += 1)
    {
        arr_13 [i_2] [i_2] = (((((~(~var_3)))) ? (((!(arr_11 [i_2])))) : (((!(arr_7 [i_2 + 4]))))));
        arr_14 [i_2] = (!(((~(arr_11 [i_2])))));
    }
    var_13 ^= var_11;
    #pragma endscop
}
