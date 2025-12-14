/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150564
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= var_2;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((-1561760511 - 0) ? (1 & var_8) : (~1)));

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_11 = (((arr_4 [i_0]) ? (((arr_5 [i_0] [i_0] [i_1]) ? 31 : var_6)) : -0));
            var_12 = (arr_2 [i_0]);
            arr_6 [i_0] [2] = (((((var_6 ? (arr_4 [i_1]) : var_6))) ? 1 : (!var_4)));
        }
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            var_13 = 98403991;
            var_14 = (-98403991 / 42);
        }
    }
    for (int i_3 = 1; i_3 < 11;i_3 += 1)
    {
        var_15 = (min(var_15, (((((((arr_10 [i_3 + 1]) - (arr_10 [i_3 - 1])))) ? ((((arr_10 [i_3 - 1]) ? (arr_10 [i_3 + 1]) : (arr_9 [i_3 + 1])))) : (max((arr_10 [i_3 - 1]), (arr_11 [i_3 + 1]))))))));
        var_16 = 930450992;
        arr_12 [i_3] [2] = 1;
    }
    for (int i_4 = 3; i_4 < 21;i_4 += 1)
    {
        var_17 = (((((arr_14 [i_4 + 1]) ? (arr_14 [i_4 - 1]) : 1741686721))) && (((1 ? var_7 : (arr_14 [i_4 + 1])))));
        arr_16 [i_4] = ((var_7 < (((arr_15 [i_4]) ? 1 : (-98403991 * var_9)))));
        var_18 = 1;
        var_19 = ((((((~(arr_13 [i_4]))) << ((((((~(arr_15 [i_4]))) + 188)) - 1)))) & (max((arr_13 [i_4]), (arr_15 [i_4 + 1])))));
        var_20 = ((((1 ? (((((arr_13 [i_4]) <= 1)))) : (max(var_4, -2572485988035720842))))) ? ((-(arr_14 [i_4]))) : ((~(arr_14 [i_4 + 1]))));
    }
    var_21 = (var_4 + var_1);
    var_22 = 255;
    #pragma endscop
}
