/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166019
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [7] = ((((234 - (var_6 - var_0))) % var_2));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
                    {
                        arr_12 [i_0] [i_2] [i_0] = (1 < 22);
                        var_15 = (var_0 / var_13);
                    }
                    for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
                    {
                        arr_15 [i_0] = var_13;
                        arr_16 [i_0] [i_0] [i_1] [i_2] [i_0] = var_9;
                        var_16 = 1;
                    }
                    var_17 = (max(var_17, 946365905));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 18;i_6 += 1)
                        {
                            {
                                arr_23 [i_0] [i_1] [i_2] [6] [i_0] |= (1 * var_12);
                                var_18 = var_6;
                            }
                        }
                    }
                    arr_24 [i_0] [i_0] [i_2] = 1;
                }
            }
        }
    }
    var_19 = var_10;
    #pragma endscop
}
