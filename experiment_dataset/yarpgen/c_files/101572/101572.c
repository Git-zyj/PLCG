/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101572
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_12;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        arr_13 [i_0] [i_1] [i_3] = var_15;
                        var_19 = var_2;
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                        {
                            arr_20 [i_0] [i_1] [i_2] [5] [i_0] = var_1;
                            var_20 = var_12;
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] = var_4;
                            arr_22 [i_5] [i_5] [6] [i_2] [i_1] [i_0] [i_0] = var_15;
                        }
                        for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
                        {
                            var_21 *= var_10;
                            arr_26 [i_0] [i_0] [i_2] [i_4] [i_6] [i_4] = var_13;
                            arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] = var_14;
                            arr_28 [i_0] [i_1] [i_2] [i_4] [i_6] = var_10;
                            arr_29 [i_6] [i_4] [i_2] [i_1] [i_0] = var_6;
                        }
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            arr_33 [i_0] [i_1] [i_1] [i_4] [2] &= var_14;
                            arr_34 [i_0] [i_4] = var_6;
                        }
                        var_22 = var_15;
                    }
                    arr_35 [i_0] [i_0] [i_0] = var_7;
                }
            }
        }
    }
    #pragma endscop
}
