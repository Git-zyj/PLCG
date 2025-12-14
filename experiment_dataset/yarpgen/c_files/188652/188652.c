/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_0 [i_0 - 1]) ? var_12 : (arr_0 [i_0 - 1])));
        var_13 = 4576;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = ((18446744073709551615 ? (arr_6 [i_1]) : (arr_6 [i_1])));
        arr_8 [i_1] = (((arr_0 [i_1]) ? (arr_4 [i_1] [i_1]) : (arr_6 [i_1])));
        var_14 = 1;
        var_15 = ((((62230 ? (arr_4 [i_1] [i_1]) : (arr_5 [i_1]))) & (((~(arr_2 [2]))))));
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
    {
        var_16 = (arr_1 [15]);
        var_17 = (arr_2 [i_2]);
        var_18 = ((((max((var_12 * var_10), 255))) ? ((max((arr_6 [i_2]), (arr_2 [i_2])))) : (arr_6 [i_2])));
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 19;i_4 += 1)
            {
                {
                    arr_16 [i_2] [i_3] [i_2] = 1;
                    arr_17 [i_4] [i_2] [i_2] [i_2] = (((arr_4 [i_3] [i_2]) % var_8));
                    var_19 = 4255809285241115470;
                }
            }
        }
        arr_18 [i_2] = (arr_14 [i_2]);
    }
    var_20 = var_0;
    #pragma endscop
}
