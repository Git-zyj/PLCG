/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_15 = 183;

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        var_16 = var_8;
                        arr_11 [i_1] [i_1 - 1] [i_1] [1] [i_1] = ((max(((max(var_10, 96))), -110)));
                        var_17 = (arr_8 [i_2]);
                        var_18 = (max(var_18, ((max((max(var_4, (arr_10 [i_0 - 1] [i_1 - 2] [i_1 + 1] [i_3] [6]))), 98)))));
                    }
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        arr_16 [i_0] [i_1] [i_1] [i_0] &= (max((~4199905144), (((max((arr_6 [i_4]), 0))))));

                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            var_19 ^= (arr_4 [i_0] [i_0] [i_0]);
                            arr_19 [i_1] [i_1] [i_2] [22] [i_5] [17] [i_1] = ((65535 && (arr_6 [i_0 - 2])));
                            var_20 += -16;
                        }
                        for (int i_6 = 4; i_6 < 22;i_6 += 1) /* same iter space */
                        {
                            var_21 = (((~-var_13) % var_12));
                            var_22 = (min(var_22, (((~(min(((max(-120, var_2))), 96)))))));
                        }
                        for (int i_7 = 4; i_7 < 22;i_7 += 1) /* same iter space */
                        {
                            var_23 = 1;
                            var_24 = (max(var_24, var_0));
                        }
                    }
                    /* vectorizable */
                    for (int i_8 = 4; i_8 < 21;i_8 += 1)
                    {
                        arr_27 [i_1] = (((arr_26 [i_8 - 2] [i_8 - 2] [i_8 + 1] [i_1]) << var_8));
                        var_25 = (0 ? (4227858432 + 4262837238) : (~-115));
                    }
                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        var_26 = (min(var_26, var_12));
                        var_27 -= 3396085428;
                        arr_31 [i_1] [i_1] [7] [i_1] = (arr_0 [i_9]);
                    }
                    arr_32 [i_1] [i_1] [i_1] = var_14;
                }
            }
        }
    }
    var_28 = var_14;
    #pragma endscop
}
