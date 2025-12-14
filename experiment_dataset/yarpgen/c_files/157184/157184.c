/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157184
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -60;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        arr_11 [i_3] &= (arr_0 [i_2] [i_1]);
                        arr_12 [i_1] [i_1] [i_1] [i_1] [i_3] = 123;
                        var_12 = (min(var_12, (arr_1 [i_3])));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        var_13 = (((((arr_15 [i_4] [i_2] [i_2] [1] [i_1]) >= var_10)) ? (arr_16 [i_4] [i_1] [i_0] [i_2 + 2] [4] [i_4]) : (arr_3 [i_0] [i_1])));
                        var_14 += (23294 / 31);
                    }
                    arr_17 [i_0] [i_1] [i_2 + 1] [i_1] = (arr_5 [i_1] [i_2]);

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        arr_21 [11] [i_1] [i_0] [i_5] [i_0] = var_8;
                        var_15 = (arr_6 [10] [i_2 + 2]);
                        var_16 &= (((arr_15 [i_0] [i_2 + 2] [i_2] [i_2] [i_0]) || (arr_15 [i_0] [i_2 + 2] [i_2] [i_5] [i_2 + 2])));
                        var_17 += (44335 <= 4095);
                    }
                    arr_22 [i_1] = (((((arr_10 [i_2 + 1] [i_1] [i_2] [12]) <= (arr_9 [i_1] [i_2 + 1] [i_2] [i_2]))) ? ((((var_6 ? var_7 : 4075)) | (arr_16 [i_2] [i_1] [i_2 + 2] [i_2] [i_2 + 1] [i_2 - 1]))) : (-126273879 == -973344682)));
                }
            }
        }
    }
    #pragma endscop
}
