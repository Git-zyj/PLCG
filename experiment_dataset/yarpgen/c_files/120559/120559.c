/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120559
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= var_5;

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_12 = (min(var_12, var_6));
        var_13 = var_7;
        var_14 -= var_8;
        arr_4 [i_0] = var_3;
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = var_4;
        var_15 += var_5;
        var_16 = var_8;
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        arr_15 [i_1] [12] [i_2] [i_1] &= var_2;
                        var_17 = var_3;
                    }
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        arr_19 [i_2] [i_2] [i_3] [i_2] [i_5] = var_7;
                        var_18 |= var_9;
                        var_19 += var_4;

                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            arr_23 [i_2] [i_5] [i_2] [i_2 + 1] [i_1] = var_4;
                            arr_24 [i_2] [i_2] [i_2] [i_2] [i_6] = var_7;
                        }
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            var_20 = var_1;
                            var_21 = var_2;
                        }
                    }
                    var_22 = var_4;
                    var_23 = var_4;
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 23;i_8 += 1) /* same iter space */
    {
        var_24 = var_0;
        var_25 = var_4;
        arr_30 [i_8] &= var_2;
    }
    /* LoopNest 3 */
    for (int i_9 = 3; i_9 < 19;i_9 += 1)
    {
        for (int i_10 = 2; i_10 < 20;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 20;i_11 += 1)
            {
                {
                    var_26 = var_2;
                    arr_40 [i_9] [i_11] = var_9;
                }
            }
        }
    }
    var_27 = var_1;
    #pragma endscop
}
