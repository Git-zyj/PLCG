/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146602
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = var_7;
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 12;i_3 += 1)
                {
                    {
                        var_15 = var_1;

                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            var_16 ^= var_2;
                            var_17 = var_10;
                            var_18 = (min(var_18, var_10));
                            var_19 *= var_10;
                        }
                        for (int i_5 = 1; i_5 < 10;i_5 += 1)
                        {
                            var_20 = (max(var_20, var_9));
                            arr_20 [i_1] [i_1] [i_3] [i_5] = var_0;
                        }
                        var_21 = var_13;
                        arr_21 [i_3 - 3] [i_3] [6] [6] [i_1] [i_0] |= var_7;
                    }
                }
            }
        }
        var_22 ^= var_0;

        for (int i_6 = 2; i_6 < 10;i_6 += 1)
        {
            arr_24 [i_0] [i_0] = var_13;
            var_23 = var_0;
        }
    }
    var_24 += var_9;
    #pragma endscop
}
