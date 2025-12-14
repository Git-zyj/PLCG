/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178522
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_16 += ((((arr_3 [i_0] [i_0] [i_0]) ? 172 : 39498)));
                    arr_9 [i_0] [i_0] [i_0] [9] = (max(((+((var_5 ? (arr_1 [i_0]) : 247)))), ((max((arr_5 [i_0] [i_2]), (arr_4 [i_1] [i_1] [i_1]))))));
                    arr_10 [i_0] [i_0] [i_2] = (--var_5);
                }
            }
        }
    }
    var_17 = var_12;

    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        var_18 = ((64 * (((!(1 % 46932))))));
        var_19 = ((((min((((arr_12 [i_3]) ? var_8 : (arr_11 [i_3]))), ((var_6 ? var_10 : (arr_11 [13])))))) ? (max((~var_10), (arr_11 [i_3]))) : ((min(((((arr_11 [i_3]) == 21275))), (min(28, (arr_11 [i_3]))))))));
        var_20 ^= ((((((arr_12 [18]) ? (arr_12 [10]) : var_13))) ? ((max(239, 192))) : (((var_3 && (arr_11 [i_3]))))));
    }
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        var_21 -= ((((min((arr_13 [i_4] [i_4]), 5566))) ? (((var_5 >= (arr_13 [i_4] [i_4])))) : (((arr_14 [i_4]) ? (arr_13 [i_4] [i_4]) : (arr_13 [i_4] [i_4])))));
        arr_16 [17] [17] = (((((82 ? 21275 : 148))) ? ((215 ? ((min(7498, 148))) : ((21275 ? 55426 : (arr_15 [2]))))) : 31693));
        arr_17 [0] = var_0;
    }
    var_22 &= (max(133, (var_2 - var_0)));

    /* vectorizable */
    for (int i_5 = 1; i_5 < 21;i_5 += 1)
    {
        arr_20 [7] |= (((arr_18 [i_5 + 1]) * (arr_18 [i_5 - 1])));
        arr_21 [i_5 - 1] = var_9;
        arr_22 [i_5 + 1] = (((var_0 ? (arr_19 [i_5 - 1] [i_5 - 1]) : 255)));
        var_23 = 31693;
    }
    for (int i_6 = 1; i_6 < 11;i_6 += 1)
    {
        var_24 = -28;
        var_25 ^= (((min(249, 33614))));
        arr_25 [i_6] [6] |= ((((arr_12 [2]) & (arr_12 [14]))));
    }
    #pragma endscop
}
