/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164320
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_9 ? 0 : (min(var_2, (var_10 + 0)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_16 = (16707579725130143180 ? var_6 : -0);
        var_17 = (var_2 != var_9);

        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            arr_5 [i_0] [i_0] [i_1 - 2] = 500693722;
            arr_6 [i_0] = ((var_8 ? 1 : var_13));
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        {
                            arr_16 [i_0] [10] [i_4] [i_0] = 44716826;
                            arr_17 [i_0] [15] = var_6;
                            arr_18 [i_0] [i_4] [7] [6] [i_0] = var_12;
                        }
                    }
                }
            }

            for (int i_6 = 1; i_6 < 22;i_6 += 1)
            {
                arr_22 [i_0] [i_2] [22] [i_2] = 2;
                var_18 = (0 + 16707579725130143173);
                var_19 = (min(var_19, 0));
                arr_23 [i_0] [i_2] [i_0] [i_6] = (3794273573 * 18446744073709551607);
            }
        }
    }
    #pragma endscop
}
