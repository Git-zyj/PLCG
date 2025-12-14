/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149780
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_15 = (((arr_1 [i_0 + 2] [i_0 - 1]) ? (-9223372036854775807 - 1) : (arr_0 [i_0 + 2] [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 7;i_2 += 1)
            {
                {
                    arr_9 [i_2] [2] [2] [i_0] |= ((var_12 * (arr_7 [i_0 + 1] [i_1 - 1] [i_2 + 3] [i_2])));
                    arr_10 [i_0] [i_0] [0] [i_1] = (39 <= 66);
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        arr_13 [i_3] [i_3] = (min((max((!588148118), (~var_5))), ((max((arr_12 [16] [16]), (arr_12 [i_3] [i_3]))))));
        var_16 = (min(var_16, (1563183066 <= 96)));
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            {
                var_17 = (min((1 || var_4), ((~(~1)))));
                /* LoopNest 2 */
                for (int i_6 = 3; i_6 < 24;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 22;i_7 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_8 = 0; i_8 < 25;i_8 += 1)
                            {
                                arr_28 [i_4] [i_5] [i_6] [4] [4] [i_6] = var_8;
                                arr_29 [15] [i_7] [i_6] [i_5] [i_4] = (((var_6 ? var_13 : -40)));
                                var_18 = ((arr_24 [i_7 + 2] [i_7 + 2] [i_6] [i_7] [i_6 - 3] [i_5] [i_7]) ? 105 : (arr_19 [i_4]));
                                arr_30 [i_8] [i_4] [i_6] [18] = (arr_21 [i_5] [i_6 - 3] [i_7] [i_7 + 2]);
                                var_19 = var_14;
                            }
                            arr_31 [i_7] [i_6] [i_5] [i_4] = -3236615188736326167;
                        }
                    }
                }
                var_20 = 4290772992;
            }
        }
    }
    #pragma endscop
}
