/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168658
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1 + 1] |= var_8;
                var_18 ^= var_12;

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        arr_11 [i_2] [i_1] [2] [1] = var_15;
                        var_19 = var_12;
                    }
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        var_20 = var_1;

                        for (int i_5 = 1; i_5 < 11;i_5 += 1)
                        {
                            var_21 += var_7;
                            var_22 = (max(var_22, var_6));
                            arr_16 [i_5] [i_5] [i_2] [i_4] [i_5] = var_13;
                        }
                    }
                    var_23 |= var_4;

                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        var_24 = var_9;
                        var_25 &= var_13;
                        var_26 = var_7;
                        var_27 = (min(var_27, var_12));
                    }
                    /* vectorizable */
                    for (int i_7 = 4; i_7 < 10;i_7 += 1)
                    {

                        for (int i_8 = 3; i_8 < 11;i_8 += 1) /* same iter space */
                        {
                            var_28 = var_3;
                            var_29 = (max(var_29, var_12));
                        }
                        for (int i_9 = 3; i_9 < 11;i_9 += 1) /* same iter space */
                        {
                            var_30 = var_14;
                            var_31 = var_15;
                        }
                        var_32 ^= var_15;
                        var_33 = (max(var_33, var_6));
                    }
                }
            }
        }
    }
    #pragma endscop
}
