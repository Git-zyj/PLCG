/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= var_6;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_18 |= var_6;
        var_19 ^= ((233 ? var_10 : var_6));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_20 ^= (((arr_8 [i_4] [i_3] [i_0] [i_1] [i_0] [i_0]) != 2748486455));
                                var_21 = (~var_5);
                            }
                        }
                    }
                    arr_14 [i_0] [i_0] [i_1] [i_2] &= ((!(!1546480839)));
                    var_22 *= (var_14 == 7173026193652580142);
                }
            }
        }
        var_23 = (arr_13 [i_0] [i_0]);
    }
    for (int i_5 = 1; i_5 < 18;i_5 += 1)
    {
        arr_17 [i_5 + 1] = (min(var_7, var_16));
        var_24 = var_6;
        arr_18 [i_5] [i_5 - 1] = 1546480839;
    }
    for (int i_6 = 4; i_6 < 21;i_6 += 1)
    {
        var_25 = (min(((-7859 ? var_7 : var_1)), (-2147483630 & -2147483630)));
        var_26 -= (((((var_3 > (63 && var_8)))) / (((((arr_20 [i_6]) >= var_6))))));
        arr_23 [i_6 - 1] [i_6 - 2] = var_16;
    }
    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {
        var_27 ^= (~var_4);
        var_28 = (var_14 - var_14);
        var_29 = var_16;
        var_30 = (7838 && 176);
    }
    #pragma endscop
}
