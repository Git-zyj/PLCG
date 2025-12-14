/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154430
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_1, ((var_0 ? (~var_11) : var_3))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        var_13 = (min(var_13, ((((arr_9 [i_2 - 2] [i_2 - 2] [1] [1] [i_3] [i_3]) ? (arr_7 [14] [14] [i_2 - 2] [i_2 - 2]) : var_8)))));
                        var_14 = (max(var_14, (arr_7 [6] [i_2 + 1] [i_1] [6])));
                        var_15 &= -9223372036854775785;
                    }
                }
            }
        }

        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            arr_13 [i_4] [i_4] [i_4] = (arr_10 [i_4] [i_4]);
            var_16 &= (arr_8 [10]);
        }
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            /* LoopNest 3 */
            for (int i_6 = 2; i_6 < 15;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 15;i_8 += 1)
                    {
                        {
                            arr_27 [i_0] = 219;
                            var_17 = var_1;
                        }
                    }
                }
            }
            arr_28 [i_5] [i_0] [i_0] = (arr_21 [i_0] [i_0]);
        }
    }
    for (int i_9 = 0; i_9 < 16;i_9 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_10 = 1; i_10 < 12;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 16;i_11 += 1)
            {
                for (int i_12 = 1; i_12 < 13;i_12 += 1)
                {
                    {
                        var_18 = (min(var_18, (((219 & ((((0 < -94) && (~var_5)))))))));
                        var_19 = (((arr_36 [i_9] [i_9]) ? ((65533 ? (arr_36 [i_12 + 2] [i_10 + 4]) : var_3)) : ((((arr_26 [i_9] [i_9] [i_10 + 2] [i_10 + 2] [i_9] [i_12]) ? var_1 : (arr_26 [i_10] [i_10] [i_10 + 4] [i_10] [i_10 + 4] [i_10]))))));
                    }
                }
            }
        }
        var_20 = ((((var_7 ? var_1 : var_10)) % (~8688)));
    }
    var_21 = var_8;
    #pragma endscop
}
