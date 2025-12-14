/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173020
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += ((~(((~2996546138094814720) ^ var_13))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 3; i_2 < 11;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_19 = (min(var_19, (arr_6 [8] [i_0])));
                                var_20 = (arr_7 [0] [i_1] [i_1]);
                                arr_12 [i_1] = (((arr_0 [i_2 - 1] [i_3 - 1]) << (((arr_0 [i_2 - 2] [i_3 - 1]) - 21003))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 9;i_6 += 1)
                        {
                            {
                                var_21 = (((arr_8 [i_1]) / (arr_8 [i_1])));
                                arr_19 [i_0] [7] [i_2] [i_1] [i_0] = ((2996546138094814720 ? 17924935630714199639 : (arr_11 [i_0] [i_0] [i_2] [i_5] [i_6])));
                            }
                        }
                    }
                }
                arr_20 [i_0] [i_1] = (((((arr_0 [i_0] [i_1]) ? (arr_17 [i_0] [i_1] [i_1] [i_1] [i_0] [i_1]) : var_8))) ? (2996546138094814741 >> 23) : (arr_4 [i_1] [i_1] [i_1]));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            for (int i_9 = 3; i_9 < 24;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 23;i_11 += 1)
                        {
                            {
                                arr_36 [i_7] [i_9] [i_8] [i_7] [i_10] [i_10] [24] = (arr_26 [i_7] [i_8]);
                                var_22 = (((((min(-2996546138094814742, 64)))) * 0));
                                var_23 += (~34);
                            }
                        }
                    }
                    arr_37 [i_9] [i_8] = var_16;
                    var_24 = (((arr_33 [i_9 + 1] [i_9 - 1] [i_9] [i_9 - 1]) ^ (((arr_33 [i_9 + 1] [19] [i_9] [i_9 - 3]) ^ 1))));
                }
            }
        }
    }
    #pragma endscop
}
