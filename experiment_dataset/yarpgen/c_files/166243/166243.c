/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_18 &= -3098369546937199826;
        var_19 = ((+(((arr_0 [i_0]) / (((arr_0 [i_0]) ? 3098369546937199825 : (arr_1 [i_0])))))));
        var_20 &= ((!3027074416875796943) ? (arr_1 [i_0]) : (arr_0 [i_0]));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 24;i_1 += 1)
    {
        var_21 ^= -var_14;

        for (int i_2 = 1; i_2 < 24;i_2 += 1)
        {
            var_22 = (max(var_22, (arr_3 [i_1 - 1])));
            var_23 = (min(var_23, var_10));
            arr_8 [8] [i_2] [i_2 + 1] &= (arr_2 [2]);
        }
        arr_9 [8] [8] |= arr_7 [18];
        arr_10 [i_1 - 2] [i_1] = (~3098369546937199826);
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        arr_13 [i_3] = (((!(arr_4 [i_3] [i_3]))) ? (((((arr_12 [i_3] [i_3]) == var_2)))) : (((arr_1 [i_3]) ? 137 : (arr_4 [i_3] [i_3]))));
        arr_14 [i_3] = (~28);
    }
    var_24 = ((-(max(((9087651317587090552 ? -5607003167391040064 : -5697628166912685684)), var_3))));
    #pragma endscop
}
