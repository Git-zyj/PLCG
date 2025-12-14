/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101570
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, var_11));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = -102;
        var_15 *= ((((min((arr_0 [4]), (arr_0 [12])))) ? 0 : (((((arr_0 [1]) || (arr_0 [10])))))));
    }
    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {
        var_16 = (-(arr_4 [i_1 - 1]));
        var_17 ^= (~14124);

        /* vectorizable */
        for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
        {
            var_18 = -14131;
            arr_8 [i_1] [i_2] = (((arr_7 [i_1] [i_2] [i_1 + 2]) ? (arr_7 [i_2] [i_2] [1]) : var_0));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
        {
            var_19 = (min(var_19, (arr_6 [i_1])));
            var_20 *= (((arr_3 [i_3] [i_1]) ? var_6 : ((var_2 ? (arr_5 [i_3] [i_1]) : -73))));
            arr_12 [i_1] = (((arr_10 [i_1 + 2] [i_1 + 2] [i_1 - 1]) ? (arr_7 [i_1 + 1] [4] [i_1 + 2]) : var_9));
        }
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_21 |= (((arr_7 [12] [10] [i_4]) ? (((max((arr_3 [i_4] [i_4]), (arr_11 [i_4]))))) : (max((-1953593709006625932 ^ 92), ((~(arr_1 [6])))))));
        var_22 = var_5;
        arr_16 [i_4] [i_4] = (max((((arr_3 [i_4] [i_4]) ? 2468 : ((((arr_14 [i_4]) != -14))))), ((max(-64, -31)))));
    }
    for (int i_5 = 3; i_5 < 13;i_5 += 1)
    {
        arr_19 [i_5] = (arr_10 [i_5] [i_5] [i_5 + 2]);
        /* LoopNest 3 */
        for (int i_6 = 1; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 13;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 14;i_8 += 1)
                {
                    {
                        var_23 = (max(((((arr_23 [i_6] [i_6]) ? (arr_7 [i_7] [i_6] [i_7]) : var_11))), ((~((~(arr_9 [i_6])))))));
                        arr_26 [i_6] = ((1 ? 24 : (min((arr_24 [i_6] [i_6]), (((arr_4 [i_5]) >> (((arr_10 [i_5] [i_5] [i_7]) - 27))))))));
                    }
                }
            }
        }
        var_24 = ((!((((arr_24 [6] [6]) ? -8930408450983557608 : (arr_24 [0] [i_5 + 1]))))));
        var_25 = (min(var_25, var_7));
    }
    var_26 = var_5;
    #pragma endscop
}
