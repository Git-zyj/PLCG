/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        arr_2 [9] = arr_1 [i_0];
        arr_3 [i_0] [12] = (var_0 ? (~-4483845662758583147) : (((var_1 ? var_8 : -12))));
        arr_4 [i_0] = arr_1 [i_0 - 2];
    }
    for (int i_1 = 3; i_1 < 10;i_1 += 1)
    {
        arr_8 [6] = 0;
        arr_9 [12] [1] = ((((arr_1 [5]) ? (((((arr_6 [10]) > 20244)))) : (arr_7 [i_1 + 1]))));
        var_10 = 5086577275664044531;
        var_11 = (arr_1 [0]);
        var_12 = (max(var_4, var_7));
    }

    for (int i_2 = 1; i_2 < 10;i_2 += 1)
    {
        arr_12 [i_2 + 1] = ((!((max(8468, 13360166798045507085)))));
        var_13 = (max(1161729324618064764, (((((min(60893, var_7)))) ^ (arr_11 [13])))));
    }

    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        var_14 = -20244;
        var_15 |= (arr_13 [i_3] [i_3]);
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_17 [i_4] [i_4] = (max(9664, (max(13360166798045507085, (((13360166798045507084 ? 55881 : (arr_10 [i_4] [i_4]))))))));
        var_16 = (min(var_16, -32751));
        arr_18 [1] = var_5;
    }
    #pragma endscop
}
