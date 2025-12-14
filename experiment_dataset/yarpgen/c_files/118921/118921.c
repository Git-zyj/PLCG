/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_10 = (max(var_10, (arr_0 [i_0 - 1])));
        arr_4 [4] [i_0 + 1] = ((((-9223372036854775807 - 1) ? (((var_8 != (arr_2 [i_0])))) : 63358)));
    }
    for (int i_1 = 4; i_1 < 19;i_1 += 1)
    {
        arr_8 [i_1 - 4] [i_1] = (~2173);
        arr_9 [i_1] [i_1 - 3] = ((-63356 * ((2151 * (2178 + var_7)))));

        for (int i_2 = 1; i_2 < 16;i_2 += 1)
        {
            arr_12 [i_1] [i_1] = ((max(((2173 ? 63359 : 2165)), 63340)));
            arr_13 [i_1] = ((!((63385 != (arr_3 [i_1 + 1] [i_1 - 3])))));
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        arr_16 [13] [i_3] = var_5;
        arr_17 [i_3] = (var_0 || var_1);
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        var_11 = (max(((max((~63385), (63344 ^ 63334)))), (((arr_18 [i_4] [i_4]) ? (arr_18 [i_4] [i_4]) : (((arr_20 [i_4]) ? (arr_20 [i_4]) : var_0))))));
        var_12 = (min(var_12, (((63334 << (((((var_7 | 2149) ? (((min(var_1, var_1)))) : var_7)) - 109)))))));
        arr_21 [i_4] = ((((+((63344 ? (arr_20 [i_4]) : var_1)))) != ((min(2149, 63334)))));
        var_13 = (((~(arr_19 [i_4]))));
    }
    var_14 = (max(63349, (((((var_1 ? 63407 : var_3))) ? (min(var_8, 2177)) : (2151 % 2151)))));
    #pragma endscop
}
