/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114380
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_10;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    var_12 = (~27);
                    arr_7 [i_0] [13] = ((~(arr_2 [i_2 - 2] [i_2 - 2] [i_0])));
                    var_13 = (((arr_2 [i_2 - 2] [18] [i_0]) ? 217 : 4));
                    var_14 = (((arr_4 [i_0] [i_0] [i_0] [18]) / (arr_2 [i_2 - 2] [i_2] [i_0])));
                }
            }
        }
        var_15 = (min(var_15, 30272));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        var_16 = (32768 * 228);
        var_17 |= 0;
        var_18 = (arr_1 [i_3]);
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        var_19 = ((-(((27 ? 0 : 27)))));
        var_20 -= (((min(1662259238, 32768))) ? (max((arr_1 [i_4]), (arr_3 [i_4] [i_4] [i_4]))) : (((arr_1 [i_4]) ? (arr_1 [i_4]) : (arr_3 [i_4] [i_4] [i_4]))));
    }
    var_21 *= (max((min(((var_0 ? var_7 : var_0)), (3850737610 == 7289))), (((var_1 ? var_10 : var_3)))));
    var_22 = var_7;
    var_23 = 9113093929143507519;
    #pragma endscop
}
