/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162983
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((+(min((2299560049 != 11167), 11167))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_16 = (arr_7 [i_0] [i_1] [i_1] [i_0]);
                                var_17 = ((+((((arr_1 [i_0]) * var_6)))));
                            }
                        }
                    }
                    var_18 = (max(var_18, var_9));
                    arr_11 [0] [i_0] [i_1] = ((!(!1)));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 15;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 15;i_8 += 1)
                    {
                        {
                            arr_28 [15] [i_6] [i_6 - 1] [i_7] [i_6 - 1] [i_5] = 0;

                            for (int i_9 = 3; i_9 < 13;i_9 += 1)
                            {
                                var_19 += 11167;
                                arr_31 [i_5] [i_5] [i_5] [i_5] [1] [i_5] = 1;
                                var_20 *= var_9;
                            }
                        }
                    }
                }
                arr_32 [i_5] = var_6;
                var_21 &= (arr_29 [i_6] [0] [12] [i_6]);
                var_22 += ((11167 >> (arr_29 [i_5] [i_5] [0] [i_5])));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 16;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 16;i_11 += 1)
                    {
                        {
                            var_23 = (i_5 % 2 == zero) ? ((+(((var_1 + 9223372036854775807) << (((arr_22 [7] [i_5]) - 129)))))) : ((+(((var_1 + 9223372036854775807) << (((((((arr_22 [7] [i_5]) - 129)) + 125)) - 58))))));
                            var_24 = (max(var_24, var_3));
                        }
                    }
                }
            }
        }
    }
    var_25 = var_11;
    var_26 = var_6;
    #pragma endscop
}
