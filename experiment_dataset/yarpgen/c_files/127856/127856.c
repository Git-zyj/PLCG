/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127856
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= (min(174, ((max(-648703272, var_12)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 4; i_3 < 18;i_3 += 1)
                    {
                        var_21 = 729701029;
                        var_22 = (~576460752303423487);
                        var_23 -= (var_4 - var_4);
                        var_24 = (min(var_24, var_17));
                    }
                    /* vectorizable */
                    for (int i_4 = 2; i_4 < 18;i_4 += 1)
                    {
                        var_25 = arr_8 [i_0] [i_1 + 1] [i_0];
                        arr_15 [i_0] [i_0] [16] [i_0] [3] [7] = -1242138954;
                        var_26 ^= ((var_16 ? (~127) : var_6));
                        var_27 |= arr_9 [i_4 + 2] [i_1 + 1] [i_2] [i_4 - 2];
                        var_28 = var_18;
                    }
                    var_29 = ((1973666092 ? -1973666092 : 2147483647));
                }
            }
        }
    }
    var_30 = var_14;
    var_31 = ((max(4294967295, 82)));
    #pragma endscop
}
