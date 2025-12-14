/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151469
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    arr_6 [i_0] = ((((max(((min(12175, -12194))), (min(-556331873, 1152921504606846975))))) ? 16130 : ((116 | (arr_1 [i_0])))));
                    var_19 ^= (min(((1152921504606846972 ? ((min((arr_4 [i_0] [i_2]), 12193))) : ((var_11 ? 65535 : (arr_4 [i_0] [i_0]))))), -1));
                    var_20 = (arr_4 [i_0] [i_1]);
                }
            }
        }
    }

    for (int i_3 = 2; i_3 < 21;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    {
                        arr_19 [i_3] [i_3] [i_5] [i_5] [i_6] = (((((arr_8 [i_5]) << (6185254385251968446 - 6185254385251968442))) >> ((((-(arr_8 [i_6]))) - 3781265468))));
                        arr_20 [i_3 - 1] [i_3] [i_4] [i_5] [i_6] = 140;
                        arr_21 [i_4] [i_3] = (max(1152921504606846980, 1));
                    }
                }
            }
        }
        arr_22 [16] &= (min((max(((min(1, 11701))), (((arr_9 [12]) ? (arr_12 [2]) : (arr_13 [i_3] [i_3] [i_3]))))), ((-(arr_14 [20] [i_3] [i_3] [8])))));
        var_21 = (arr_9 [i_3]);
    }
    /* vectorizable */
    for (int i_7 = 4; i_7 < 14;i_7 += 1)
    {
        var_22 = arr_17 [8] [8];
        var_23 = (((arr_7 [1] [1]) ? (arr_7 [12] [12]) : (arr_7 [18] [18])));
    }
    #pragma endscop
}
