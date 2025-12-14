/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114276
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    arr_9 [4] [4] [i_1] = (max((arr_5 [i_0] [i_0] [i_0]), ((((arr_1 [i_1 - 1] [i_1 + 1]) / (arr_1 [i_1 - 3] [i_1 + 1]))))));
                    var_14 = var_13;
                }
            }
        }
    }

    for (int i_3 = 1; i_3 < 13;i_3 += 1)
    {
        var_15 = 3364725920;
        var_16 ^= (~1889601502);
        /* LoopNest 3 */
        for (int i_4 = 2; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    {
                        arr_22 [10] [i_4] [5] [i_6] [i_3] [5] = (((arr_21 [i_3] [i_3] [i_5 - 1] [i_6] [i_4 + 1]) ? (min(var_1, var_12)) : 1889601487));
                        var_17 = var_10;
                        var_18 = (arr_11 [i_3]);
                        var_19 = (arr_16 [0] [i_4] [2] [i_6]);
                    }
                }
            }
        }
    }
    var_20 ^= 2405365797;
    #pragma endscop
}
