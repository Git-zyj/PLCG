/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_11 = ((~((252 ? 3912577279 : -98))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    {
                        var_12 = (arr_7 [i_0] [i_0] [i_2 - 2] [i_3] [i_0]);
                        var_13 -= (((arr_8 [i_0 + 1]) ? var_1 : (arr_8 [i_0 - 2])));
                    }
                }
            }
        }
        var_14 = ((-(arr_1 [i_0 - 2])));
        /* LoopNest 3 */
        for (int i_4 = 4; i_4 < 9;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 7;i_6 += 1)
                {
                    {
                        var_15 *= (((arr_0 [i_6 + 3]) ? (arr_14 [7] [i_4 - 3] [i_4 + 1] [i_0 - 3]) : 0));
                        var_16 ^= (((arr_8 [i_0 - 2]) ? (arr_8 [i_0 - 2]) : (arr_5 [i_4 - 2] [i_4 - 3] [i_4 + 1])));
                        var_17 = var_2;
                    }
                }
            }
        }
        var_18 = arr_16 [8] [i_0 + 1] [i_0 + 1];
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 16;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 16;i_10 += 1)
                {
                    {
                        var_19 = 97;
                        var_20 = (min(var_20, var_0));
                    }
                }
            }
        }
        var_21 = var_8;
        var_22 ^= var_7;
    }
    var_23 |= (max((max(((max(var_9, -106))), var_6)), (max(var_3, (min(var_6, 38124))))));
    #pragma endscop
}
