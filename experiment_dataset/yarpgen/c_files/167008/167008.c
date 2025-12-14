/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_2 [i_0 - 1]) ? (arr_2 [i_0 - 1]) : (arr_2 [i_0 - 1])));
        arr_4 [i_0] [i_0 - 1] = ((~(arr_2 [i_0 - 1])));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            arr_7 [i_0] [i_0] = (((var_5 ? var_1 : (arr_1 [i_0]))));
            var_12 = (1 | -0);
            var_13 ^= 1209755248;
            var_14 = (~1);
        }
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            var_15 = 3;
            var_16 = var_10;
            var_17 = (((arr_5 [i_0 - 1]) ? var_3 : 3));
            var_18 += ((65523 ? var_8 : -1538531015));
        }
        for (int i_3 = 3; i_3 < 13;i_3 += 1)
        {
            arr_14 [12] |= ((-(arr_13 [i_0 + 1] [i_0 - 1] [14])));
            arr_15 [i_0] [i_0] [i_3] = ((arr_0 [i_0 + 1] [i_3]) - var_5);
            var_19 = ((-8390407057638856621 ? (arr_6 [i_0] [2]) : (arr_6 [i_0] [i_0 - 1])));
        }
        arr_16 [i_0] [i_0] = ((0 ? 48 : (arr_0 [i_0 + 1] [i_0 - 1])));
    }
    for (int i_4 = 2; i_4 < 21;i_4 += 1)
    {
        var_20 = (min((arr_17 [i_4]), (((!1) ? var_6 : var_0))));
        arr_19 [0] = (min(var_8, ((var_3 | (arr_17 [i_4 - 2])))));
        var_21 = (((((((arr_18 [i_4 - 2] [i_4]) >= 1725327349)))) ^ (((arr_17 [i_4]) ? (arr_18 [i_4 - 2] [i_4 + 1]) : (arr_18 [i_4 - 2] [i_4 - 2])))));
    }
    var_22 = ((((((var_6 ? -725585532 : 2)))) ? var_3 : var_0));
    var_23 = (max(var_2, var_2));
    var_24 = ((((max(9, (~109)))) >= ((((min(65523, var_1))) ? (((min(21, 65523)))) : 3357900058668078197))));
    #pragma endscop
}
