/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_7 [i_2] [4] [4] [i_0 + 2] = ((-var_2 >= (((((17643435771998515632 ? var_0 : (arr_6 [i_0] [i_0] [i_0])))) ? (max((arr_3 [i_0] [i_1] [16]), 17643435771998515649)) : (!0)))));
                    var_10 = var_1;
                    var_11 = (max(var_11, (max((arr_6 [i_0] [i_0] [i_0]), (arr_1 [i_0 - 2] [i_0 - 1])))));
                }
            }
        }
    }
    var_12 = (((min(((var_2 ? 12743565539535520261 : var_2)), 18446744073709551615)) == (min(var_5, 18446744073709551598))));

    for (int i_3 = 1; i_3 < 15;i_3 += 1)
    {
        arr_12 [12] |= (arr_2 [6] [i_3 - 1]);
        var_13 ^= ((((((((var_5 ? var_0 : 18446744073709551603))) || var_3)))) ^ (var_1 & var_5));
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        var_14 = var_9;
        var_15 += arr_15 [12] [17];
        arr_16 [i_4] = var_2;
    }
    #pragma endscop
}
