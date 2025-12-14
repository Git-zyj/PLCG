/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183048
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((min(var_7, (-25026 & -25026)))) ? (max(((var_12 ? var_6 : -1)), (var_0 % var_4))) : (((var_2 - -95) + var_6))));
    var_14 = (min(var_2, (var_7 == 3791695036)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 8;i_2 += 1)
            {
                {
                    var_15 |= -1881783932;
                    arr_6 [0] &= (8192 * (arr_4 [i_1] [i_2 - 1] [i_0]));
                }
            }
        }
        var_16 = 3;
        arr_7 [i_0] = (((((-1 ? -3 : -3))) ? (arr_0 [i_0]) : var_1));
        arr_8 [i_0] = (-5 / -7);
    }
    /* vectorizable */
    for (int i_3 = 4; i_3 < 13;i_3 += 1)
    {
        var_17 = (arr_9 [i_3 - 2] [i_3 - 4]);
        arr_11 [i_3] = (((arr_10 [i_3 - 1] [i_3 + 2]) ? (arr_10 [i_3] [i_3 + 3]) : (arr_10 [i_3 - 1] [i_3 - 1])));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                {
                    var_18 &= (((arr_14 [i_3 + 2] [i_3 - 1]) <= var_11));
                    arr_17 [i_5] [i_5] = var_1;
                    arr_18 [i_5] [i_3] [i_5] = var_10;
                }
            }
        }
        var_19 = ((var_7 != (arr_13 [i_3 + 3] [i_3 + 3])));
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 13;i_7 += 1)
            {
                {
                    arr_25 [i_7] [i_6] [i_3 - 4] = (var_2 == 14059250072769146518);
                    arr_26 [i_3] [i_3] = (((arr_13 [i_3 - 3] [i_7 + 2]) || var_1));
                }
            }
        }
    }
    #pragma endscop
}
