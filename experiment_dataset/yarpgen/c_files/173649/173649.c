/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173649
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (((((var_0 ? ((-1 ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0 + 1]))) : ((((-14 + 2147483647) >> 1)))))) ? (max(((771955060963869336 ? var_6 : (arr_0 [i_0 + 1]))), 96)) : ((((((-1 ? -1156559958 : 1930873696970262501))) ? (arr_1 [i_0 - 1] [i_0]) : 225)))));
        var_10 *= (3 % var_2);

        /* vectorizable */
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            var_11 = (arr_4 [i_0 + 1] [i_1 - 3]);
            arr_7 [4] |= 23;
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_10 [i_0 + 1] [i_2] [i_0] = (arr_8 [i_2]);
            arr_11 [i_0] [i_2] = ((-(arr_9 [i_0 - 1] [i_0] [i_0 + 1])));
            var_12 = (((arr_4 [i_2] [i_2]) ? 1162540158 : (arr_0 [i_2])));
        }
        var_13 -= ((~((-93 - ((53146 * (arr_3 [i_0])))))));
        var_14 -= ((-(((arr_3 [i_0 - 1]) ? (arr_3 [i_0 + 1]) : var_1))));
    }
    for (int i_3 = 1; i_3 < 10;i_3 += 1) /* same iter space */
    {
        var_15 &= (max(((max((arr_3 [i_3 - 1]), (arr_3 [i_3 + 1])))), (min((arr_14 [0]), (arr_14 [4])))));
        var_16 ^= (arr_13 [i_3 - 1] [6]);
    }
    for (int i_4 = 1; i_4 < 10;i_4 += 1) /* same iter space */
    {
        var_17 = (((arr_15 [i_4]) * ((((arr_16 [i_4 - 1]) - (arr_16 [i_4 + 1]))))));
        var_18 |= -1033949435;
        var_19 = (arr_6 [i_4 - 1]);
    }
    var_20 = 16384;
    var_21 = ((var_8 - ((max((max(var_9, var_0)), -1)))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 0;i_6 += 1)
        {
            {
                var_22 = (min(((((var_3 / var_9) ? var_2 : (((arr_20 [i_6 + 1] [i_5]) / -51))))), (max((((10741645675373742404 ? 1 : 1))), ((var_2 ? -8311942724780590683 : 0))))));
                arr_22 [i_5] [i_6] = (((((8124292257213928577 - (arr_20 [i_6 + 1] [i_6])))) || 1));
            }
        }
    }
    var_23 = var_4;
    #pragma endscop
}
