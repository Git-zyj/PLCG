/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118973
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_11 = var_0;
                        arr_10 [i_0] [i_2] [i_1] [i_0] [i_0] = (((arr_5 [1] [i_2 - 1] [i_1] [i_0 - 1]) / var_1));
                        var_12 *= (((var_7 % -102) || 37));
                    }
                }
            }
        }
        arr_11 [i_0] [i_0] = (arr_8 [i_0] [i_0] [i_0 + 1]);
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        var_13 |= 22;
                        arr_19 [6] [i_4] [6] [i_0] = (arr_15 [i_0] [i_5] [i_0] [i_6]);
                        arr_20 [i_0] [i_0] = var_4;

                        for (int i_7 = 3; i_7 < 21;i_7 += 1)
                        {
                            var_14 = ((arr_18 [i_6] [i_4] [i_4] [i_0] [i_7 - 1]) + (arr_18 [i_0] [i_0] [i_5] [i_0] [i_7 - 1]));
                            var_15 = var_0;
                        }
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            var_16 -= var_6;
                            arr_26 [i_0 - 1] [i_4] [i_5] [i_4] [i_4] [i_0] [i_8] = (arr_22 [i_0]);
                        }
                    }
                }
            }
        }
    }
    var_17 = (((max(1, -9223372036854775794)) | (((max(234, var_2))))));
    #pragma endscop
}
