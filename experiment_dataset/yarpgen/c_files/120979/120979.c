/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120979
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (arr_0 [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 21;i_3 += 1)
                {
                    {
                        var_13 = (min(var_13, (((arr_10 [i_3 + 1] [i_2] [i_2] [i_1 + 3] [i_0]) % (arr_4 [1] [i_3])))));
                        arr_12 [i_0] [i_0] [i_2] [i_0] [i_2] [4] = ((((arr_8 [i_3] [i_1] [i_1] [i_0]) + 65535)));
                    }
                }
            }
        }
        var_14 = (max(var_14, (arr_8 [i_0] [i_0] [11] [i_0])));
        arr_13 [i_0] = (arr_11 [16] [i_0] [i_0] [i_0] [12]);
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    {
                        arr_23 [i_0] [i_0] [11] [i_0] = ((-var_5 * (arr_10 [i_0] [i_0] [i_4] [i_5] [i_6])));
                        arr_24 [i_0] [i_4] [i_5] [i_6] = ((arr_19 [i_6] [i_6] [i_5]) + 4294967285);
                        arr_25 [i_0] [i_4] [i_5] [i_0] = var_8;
                        var_15 ^= 1071644672;
                        var_16 = (arr_22 [18] [i_4] [i_5] [i_4] [i_6] [i_4]);
                    }
                }
            }
        }
    }
    var_17 = var_11;
    var_18 &= var_0;
    #pragma endscop
}
