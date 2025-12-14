/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131706
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_12 += 2119112331;

        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            var_13 = (arr_5 [9]);
            arr_6 [i_1] [1] = var_0;
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 17;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    {
                        arr_14 [i_3] = var_11;
                        var_14 = (arr_10 [8] [i_3] [0] [i_0]);
                        var_15 = arr_2 [0] [i_2];
                        arr_15 [i_3] [15] [11] [i_2] [i_0] [i_3] = 19081;
                        var_16 += (arr_11 [10]);
                    }
                }
            }
            var_17 = (var_2 / 2097144);
            var_18 = 2119112331;
        }
        for (int i_5 = 2; i_5 < 17;i_5 += 1)
        {
            /* LoopNest 3 */
            for (int i_6 = 2; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 18;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        {
                            arr_27 [1] [i_6] [0] [i_6 + 3] [i_6] = (((arr_19 [i_8] [4] [i_8]) * (arr_25 [i_7] [18] [7] [4] [i_8] [i_6 - 1] [i_5])));
                            var_19 = var_8;
                            var_20 = (max(var_20, (arr_18 [6] [i_6 - 1] [13])));
                            var_21 = (max(((255 >> (var_6 + 23629))), var_2));
                        }
                    }
                }
            }
            arr_28 [i_5 - 1] [8] = var_11;
        }
        for (int i_9 = 1; i_9 < 18;i_9 += 1)
        {
            var_22 = (min(var_22, (arr_3 [i_9])));
            var_23 = var_11;
        }
    }
    var_24 = var_4;
    #pragma endscop
}
