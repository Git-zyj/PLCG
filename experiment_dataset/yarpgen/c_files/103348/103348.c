/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(-12793, var_5));
    var_12 += ((var_5 * (((((var_0 ? var_7 : -27339))) + var_6))));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = var_4;
        arr_3 [i_0] = ((~(arr_1 [i_0 - 1] [i_0 - 1])));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 16;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 2; i_2 < 19;i_2 += 1) /* same iter space */
        {
            var_13 = ((-18370 ? 359826425824197471 : 1443731092));
            arr_9 [i_1] = (((arr_5 [i_1] [i_1 + 1]) == 18385));
            var_14 = ((((arr_4 [i_2]) ? -31225 : (arr_5 [i_1] [i_1]))));
        }
        for (int i_3 = 2; i_3 < 19;i_3 += 1) /* same iter space */
        {
            var_15 = ((((arr_10 [i_1]) | -2328390707598686413)));
            var_16 -= (((arr_11 [i_3]) % (((arr_13 [6]) ? (arr_10 [4]) : (arr_11 [i_3])))));
            var_17 ^= ((arr_5 [i_3] [i_3 - 2]) ? (arr_7 [i_3 - 1] [i_3] [i_3 + 1]) : (((arr_4 [i_1 + 3]) ? (arr_6 [i_1] [i_3 - 2]) : var_2)));
            var_18 = (~(arr_5 [i_1] [i_1]));
            var_19 = (arr_8 [i_1] [i_1 - 1]);
        }

        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            var_20 = -18377;
            arr_17 [i_1] = (((arr_13 [i_1 - 2]) ? (arr_13 [i_1 - 2]) : (arr_13 [i_1 - 2])));
        }
        arr_18 [i_1] = ((arr_5 [i_1] [i_1 - 2]) ? (arr_10 [i_1 - 2]) : (((arr_4 [i_1 - 3]) ? (arr_16 [8]) : 562949953421312)));
        arr_19 [i_1] [i_1] = ((~(arr_15 [i_1 + 3])));
    }
    for (int i_5 = 3; i_5 < 16;i_5 += 1) /* same iter space */
    {
        var_21 = (~(((~(arr_22 [i_5])))));
        arr_23 [i_5] = -5056608748084400361;
    }
    #pragma endscop
}
