/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109636
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_4 [15] [i_0] = (arr_1 [i_0] [i_0]);
        var_18 ^= ((-584749688 ? -22341485 : (((arr_1 [i_0] [i_0]) | (arr_1 [i_0] [i_0])))));

        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            var_19 = (arr_3 [i_0] [16]);
            var_20 = 10402960237875869342;
        }
        /* vectorizable */
        for (int i_2 = 2; i_2 < 18;i_2 += 1)
        {
            var_21 = ((arr_0 [i_2]) ? var_17 : (arr_3 [i_0] [i_0]));
            var_22 = (arr_8 [i_2] [i_2] [i_2]);
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        arr_13 [i_3] [i_3] = var_7;
        var_23 |= (var_16 / (arr_6 [i_3] [i_3] [i_3]));
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        var_24 += ((((-var_15 ? 10402960237875869342 : var_16)) / (~-var_6)));

        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            var_25 = max(var_14, var_5);
            arr_21 [i_4] [i_4] [i_4] = 1582555460815164255;
        }
        arr_22 [i_4] [i_4] = (min(((~(arr_16 [i_4]))), (((12879 ? var_0 : 6031)))));
    }
    var_26 = (var_3 ? ((3737476737770172132 / (28230 / var_0))) : var_12);
    #pragma endscop
}
