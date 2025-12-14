/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167728
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_2, var_17));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((-5 ? var_11 : (arr_2 [i_0] [i_0])));
        var_20 = (min(var_20, (((((var_14 ? 6111 : (arr_0 [i_0]))) > ((((arr_1 [i_0]) == 31))))))));
        arr_4 [i_0] = (arr_2 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_21 *= ((((((arr_5 [i_1]) ? (arr_7 [i_1]) : (arr_7 [i_1])))) ? (arr_7 [i_1]) : (arr_7 [i_1])));
        var_22 ^= (((arr_2 [i_1] [i_1]) - (((arr_7 [i_1]) ? (((arr_6 [i_1] [i_1]) ^ (arr_2 [i_1] [i_1]))) : (arr_5 [i_1])))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 15;i_4 += 1)
            {
                {
                    var_23 = ((+(((arr_14 [i_2]) ? -33 : (arr_15 [i_2] [i_3] [i_3] [i_4 - 1])))));
                    arr_17 [i_3] [i_3] [i_3] [i_4] = (var_4 ? (arr_15 [i_3] [i_3] [5] [i_4 - 1]) : (arr_15 [i_3] [i_3] [i_3] [i_4 - 1]));
                }
            }
        }
        var_24 *= (arr_7 [11]);
    }
    var_25 = var_2;
    var_26 = (var_7 % var_17);
    #pragma endscop
}
