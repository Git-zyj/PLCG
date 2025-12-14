/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = var_0;
                var_13 = var_2;
                var_14 ^= var_4;
                var_15 = var_6;
                var_16 += var_9;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 8;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 9;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 10;i_4 += 1)
            {
                {

                    for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
                    {
                        var_17 = (max(var_17, var_10));
                        arr_17 [i_2] [i_3] [7] [i_2] [i_2] [i_5] = -12;
                        var_18 = var_3;
                        arr_18 [i_2] [i_3 - 2] [10] = var_7;
                    }
                    for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
                    {
                        var_19 = var_5;

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            var_20 = var_2;
                            var_21 = var_3;
                            arr_24 [i_2] [i_2] [i_6] = var_8;
                            var_22 = var_2;
                            var_23 = (min(var_23, var_4));
                        }
                    }
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        var_24 = (min(var_24, var_8));
                        var_25 = var_6;
                        arr_27 [i_2] [i_4] = var_3;
                        var_26 = (min(var_26, var_7));
                    }
                    for (int i_9 = 2; i_9 < 7;i_9 += 1)
                    {
                        var_27 = (min(var_27, var_9));
                        arr_31 [i_2] [i_2] [i_2] = var_7;
                        var_28 = (max(var_28, var_9));
                        arr_32 [i_2] [i_2] [i_2] [i_2] [i_9] [i_2] = var_0;
                        var_29 = (min(var_29, var_12));
                    }
                    var_30 = var_2;
                    var_31 = var_2;
                    var_32 = (min(var_32, var_6));
                }
            }
        }
    }
    var_33 = var_3;
    #pragma endscop
}
