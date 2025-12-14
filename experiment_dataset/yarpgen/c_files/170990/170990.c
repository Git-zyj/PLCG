/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170990
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;
    var_12 = var_1;
    var_13 = var_7;

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_14 = (max(var_14, (arr_0 [i_0 + 1])));
        var_15 ^= (arr_1 [i_0]);
        arr_2 [i_0] [i_0] = (arr_1 [i_0]);
    }
    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {
        var_16 = (max(var_16, (arr_4 [i_1])));
        arr_5 [i_1] = (arr_3 [i_1 - 1] [i_1 - 1]);
        arr_6 [i_1] [i_1] = (arr_3 [i_1 + 1] [i_1]);
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        var_17 = (max(var_17, (arr_8 [i_2] [i_2])));
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 16;i_5 += 1)
                {
                    {
                        var_18 = (arr_14 [i_2]);
                        var_19 = (arr_14 [i_2]);
                    }
                }
            }
        }

        for (int i_6 = 3; i_6 < 16;i_6 += 1)
        {
            arr_22 [i_6 - 3] [i_2] [i_2] = (arr_3 [10] [i_6]);
            var_20 = (arr_21 [i_2] [i_2] [i_6]);
        }
        /* LoopNest 2 */
        for (int i_7 = 4; i_7 < 16;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                {
                    arr_27 [i_7] [i_8] [i_7] = (arr_19 [i_8] [2] [i_2]);
                    arr_28 [i_7] [14] [14] = (arr_16 [i_8]);
                    arr_29 [i_2] [i_7] [i_8] = (arr_3 [i_2] [i_7 - 4]);
                }
            }
        }
    }
    #pragma endscop
}
