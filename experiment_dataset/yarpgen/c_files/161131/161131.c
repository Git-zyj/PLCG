/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161131
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= var_14;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        arr_13 [i_2] = -5559;
                        var_16 = ((var_6 / (arr_7 [i_0] [i_0 - 2] [i_0 + 1])));
                        var_17 |= ((~(1 > var_3)));
                    }
                }
            }
        }
        var_18 = 32766;
        var_19 = (((var_1 && 32744) || (((-32757 ? 0 : 26)))));
    }
    /* LoopNest 2 */
    for (int i_4 = 4; i_4 < 16;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            {
                                arr_27 [i_4] [i_5] [i_7] = (min(((var_7 ? var_2 : (arr_17 [i_7] [11] [i_6]))), var_14));
                                var_20 += max(-1, (arr_5 [i_4 + 1] [i_4 - 1]));
                            }
                        }
                    }
                }
                arr_28 [i_5] [i_5] = -32763;
                var_21 = (max(var_21, (min((0 > 32763), var_6))));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    for (int i_10 = 3; i_10 < 16;i_10 += 1)
                    {
                        {
                            arr_34 [i_10] [i_5] [i_5] [i_5] [15] = 254;
                            var_22 = (max(var_22, var_0));
                            var_23 = (min(var_23, (((~((min(32767, (arr_12 [i_10 - 2] [i_10 - 1] [22] [i_10 - 3] [i_10 - 1] [i_5])))))))));
                            var_24 ^= (min((var_11 > var_13), ((-(((var_2 + 2147483647) << (15589 - 15589)))))));
                            var_25 = ((!(arr_29 [8] [i_5])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
