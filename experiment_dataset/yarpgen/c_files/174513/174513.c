/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174513
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((max(((-32750 ? var_7 : 32931)), ((min(var_2, var_3)))))) ? var_2 : (min((8841960348759191054 / 550359495), var_3))));
    var_13 = (-11 ? -32756 : 3552152781870564353);
    var_14 = 9223372036854775807;

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_15 ^= (max(((-9223372036854775807 ? var_7 : (((min(136, 177)))))), (((((var_11 ? var_7 : var_3))) ? (((arr_5 [6] [i_1]) | (arr_2 [i_0]))) : ((696752848 ? 22649 : 5908346933149790662))))));
                    arr_8 [i_0] |= ((+(((((arr_1 [i_0]) / (arr_2 [i_0])))))));

                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        arr_12 [i_3] = (((-((-22332 ? 41 : 14)))));
                        var_16 = ((!((((arr_7 [9] [i_1 + 1] [i_1 + 1]) ? (arr_3 [i_0 + 3] [i_1] [i_3]) : (arr_7 [i_0 + 2] [15] [i_3 + 1]))))));
                        var_17 = (arr_0 [i_3]);
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 21;i_4 += 1)
                    {
                        var_18 = var_6;
                        var_19 -= 9604783724950360562;
                    }
                }
            }
        }
        var_20 *= var_11;
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        arr_17 [i_5] = var_8;
        var_21 = (min(var_21, -var_8));
        arr_18 [12] = arr_3 [i_5] [i_5] [i_5];
    }
    #pragma endscop
}
