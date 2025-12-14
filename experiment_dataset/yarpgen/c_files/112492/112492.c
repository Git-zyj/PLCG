/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    var_12 &= (((((4294967295 ? 2044 : 2044))) ? (((arr_2 [i_0] [i_0]) ? (arr_1 [i_0] [i_1]) : (((arr_6 [i_2] [i_1] [i_0] [i_0]) ? (arr_2 [i_1] [i_2]) : (arr_5 [i_2] [i_1] [4]))))) : (arr_3 [i_0] [i_1])));
                    var_13 = (((arr_4 [i_1]) ? (arr_6 [i_0] [i_1] [i_1] [i_1]) : (arr_2 [10] [10])));
                    var_14 = (arr_6 [i_0] [24] [i_1] [i_2]);
                }
            }
        }
    }

    for (int i_3 = 2; i_3 < 23;i_3 += 1)
    {
        var_15 = (((((((((arr_1 [i_3] [15]) ? (arr_1 [i_3] [i_3]) : (arr_2 [i_3 - 2] [i_3 - 2])))) ? ((((arr_8 [i_3 + 1] [i_3]) ? (arr_6 [i_3] [10] [i_3] [i_3]) : (arr_1 [i_3] [i_3])))) : (arr_2 [i_3] [i_3])))) ? (arr_3 [19] [i_3 - 2]) : (arr_9 [22] [i_3])));

        /* vectorizable */
        for (int i_4 = 2; i_4 < 22;i_4 += 1)
        {
            var_16 += (((arr_5 [i_3] [i_3] [i_3]) ? 2044 : ((-1393903444 ? 17179987140324167161 : 2760194864))));
            var_17 = (arr_8 [i_3] [i_4]);
            var_18 &= (arr_8 [i_3] [i_3]);
            var_19 = ((((((arr_0 [i_3 - 2]) ? (arr_3 [i_4] [i_4]) : (arr_1 [i_3 - 2] [18])))) ? (arr_4 [i_4]) : (arr_7 [i_3] [i_3])));
        }
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            arr_16 [i_3] [i_5] [i_5] = (arr_13 [i_3 - 1] [i_5]);
            var_20 = arr_2 [i_3] [i_5];
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            {
                var_21 = (arr_9 [i_6] [i_6]);
                var_22 = (((arr_0 [i_6]) ? (arr_0 [i_7]) : (((arr_8 [23] [i_6]) ? -341096391 : (arr_11 [i_6] [i_7])))));
                var_23 = (((arr_6 [i_7] [i_7] [i_6] [i_6]) ? (arr_11 [i_6] [i_7]) : (arr_6 [i_7] [i_7] [i_7] [i_7])));
            }
        }
    }
    var_24 = var_8;
    #pragma endscop
}
