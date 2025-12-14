/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163606
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 5;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_0 [i_0]) + (((!((min((arr_1 [i_0]), var_6))))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_11 = 18446744073709551611;
            arr_6 [i_1] [i_0] = (arr_1 [i_1]);
            var_12 = (arr_1 [i_1]);
            var_13 = ((3 ? ((-63 ? (arr_0 [i_0]) : 18446744073709551585)) : 5));
        }
        arr_7 [i_0] = 3;
    }
    for (int i_2 = 1; i_2 < 22;i_2 += 1)
    {
        arr_10 [i_2] [i_2] = ((((-(max(18446744073709551610, (arr_8 [i_2]))))) ^ (min(3477400891, (max((arr_8 [i_2]), 3477400897))))));
        var_14 |= ((1 ? -var_1 : (((max(26, -24665))))));
        arr_11 [i_2] = 82;
        arr_12 [i_2] = 6709737973369628920;
    }
    #pragma endscop
}
