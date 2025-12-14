/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 22;i_3 += 1)
                {
                    {
                        var_11 ^= ((((((arr_4 [i_2 + 1]) ? var_2 : (arr_4 [i_2 + 1])))) / (((arr_3 [12] [12] [i_3 - 1]) ? (arr_3 [16] [16] [i_3 + 1]) : (arr_3 [6] [6] [i_3 + 2])))));
                        var_12 = (((max(-0, var_10))) ? (((arr_2 [i_2] [i_1]) ? ((-(arr_7 [i_0] [i_0] [i_0]))) : var_9)) : var_0);
                        var_13 ^= ((var_6 ? (arr_10 [i_3 - 1] [i_3 + 1] [i_3 + 1] [i_3 - 1]) : (arr_10 [i_3 - 1] [i_3 + 1] [i_3 + 1] [i_3 - 1])));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    var_14 = 65533;
                    var_15 = (min(var_15, (arr_9 [i_4] [i_4])));
                }
            }
        }
        var_16 = (min(((-17657 ? 108 : var_10)), (arr_5 [i_0] [14])));
    }
    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        var_17 = (min(var_17, (arr_14 [i_6] [8] [i_6])));
        arr_19 [i_6] = var_6;
        var_18 = (min(var_18, (arr_12 [i_6] [1])));
        var_19 ^= min((min(((((arr_9 [16] [i_6]) * (arr_3 [6] [i_6] [i_6])))), var_8)), ((((arr_5 [8] [8]) ? ((var_0 | (arr_17 [i_6]))) : (arr_9 [10] [i_6])))));
    }
    for (int i_7 = 1; i_7 < 18;i_7 += 1)
    {
        var_20 -= (arr_1 [i_7 + 3]);
        var_21 = (min(var_21, var_6));
        arr_22 [i_7] = (((-(((((arr_11 [i_7] [i_7]) + 2147483647)) >> (var_0 - 112))))));
        var_22 ^= (max((arr_12 [i_7 - 1] [i_7 + 3]), ((((arr_21 [5]) ? var_1 : var_0)))));
    }
    var_23 = var_2;
    var_24 = var_5;
    #pragma endscop
}
