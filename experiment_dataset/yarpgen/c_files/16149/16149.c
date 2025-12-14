/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = ((1001 >> ((-21850 * (((var_3 == (arr_0 [i_0] [i_0]))))))));
        arr_3 [i_0] = ((~((max(var_2, var_1)))));
        var_15 = var_11;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_16 ^= 6893;
        var_17 ^= ((var_13 % (arr_4 [2])));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        var_18 += 76;
        var_19 = var_10;
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 16;i_3 += 1)
    {
        var_20 *= ((46 ? (arr_7 [i_3 + 1]) : (arr_6 [i_3 + 1])));
        arr_13 [7] = (((25137 < 91) > (((arr_10 [i_3 - 1] [i_3 - 1]) / var_10))));
        arr_14 [1] [i_3] = ((-(arr_12 [i_3 - 1])));
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                {
                    var_21 = ((min(35881, (arr_21 [i_5 + 2] [i_5] [i_5 + 1]))));
                    var_22 = (((~29655) != (max((~3763), var_2))));
                    arr_22 [i_4] [i_4] [i_4] [5] = ((~(max(((29667 ? var_7 : -3185326659718836017)), (arr_20 [i_4] [i_5 - 2] [i_5] [i_6])))));
                }
            }
        }
    }
    #pragma endscop
}
