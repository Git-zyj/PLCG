/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182655
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_10 = (arr_3 [i_0] [i_0] [i_0]);
                arr_4 [i_1] [i_0] = ((((arr_3 [i_0] [i_1] [i_1]) ? var_8 : (arr_2 [i_0 - 1] [i_0] [i_0 - 1]))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_11 = (arr_7 [i_0 + 2] [i_0] [i_0] [i_0] [i_0]);
                                var_12 = (max(var_12, 431099264));
                                arr_12 [i_4] = var_4;
                                var_13 = (max(var_13, ((max((!9), 977590258)))));
                                var_14 = (((((arr_10 [i_0] [i_1] [i_4 + 2] [i_2] [i_4]) ? ((max(var_8, (arr_11 [10] [4] [i_3 + 1] [i_2] [i_0] [i_0] [i_0])))) : (min((arr_9 [11] [i_0 + 3] [11] [i_0 + 3]), (arr_5 [1] [1]))))) == var_1));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            {
                var_15 = ((-(arr_17 [i_5])));
                var_16 = (min(var_16, (arr_17 [i_5])));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 1;i_9 += 1)
            {
                {
                    arr_28 [i_9] [i_8] [10] [i_7] = (arr_21 [i_8] [i_9]);
                    var_17 = (max(var_17, (arr_23 [i_9] [i_8] [i_7])));
                }
            }
        }
    }
    var_18 = ((((((min(3353611688, var_5)) + 1859229150))) ? var_8 : ((15755780382150339123 ? var_1 : 2812924272))));
    #pragma endscop
}
