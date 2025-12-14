/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [10] = 0;
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 = (min(var_16, (((var_6 % (5137 >= 5137))))));
                    arr_9 [i_0] [i_2] [i_2] = (1 > 1);
                    var_17 ^= -var_10;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_18 ^= ((var_5 >> (var_14 - 14785462751218514494)));
                                var_19 = (max(var_19, -7683553874356491215));
                                var_20 = (((5137 <= 36325) + 1));
                                arr_14 [i_2] [1] [i_2] [1] [i_2] [i_2] = (10266488765820343689 + var_6);
                                arr_15 [13] [13] [i_1] [14] [i_2] [13] = -1;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                {
                    var_21 = 1789270777;
                    var_22 = (+(((var_6 & -6694473426722832610) >> (-122 + 161))));
                    var_23 = -1789270778;
                    arr_22 [i_7] [i_6] [i_7] = -7526613597709727672;
                    arr_23 [i_7] [i_7] = ((-(4992 && 2367638032894836220)));
                }
            }
        }
    }
    #pragma endscop
}
