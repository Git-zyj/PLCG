/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, var_2));
    var_17 = 1;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [i_0] [22] [i_0] |= (4611677222334365696 < 4611677222334365696);
                    var_18 = 4611677222334365696;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_19 = 4611677222334365695;
                                var_20 = (min(((1 ? 1 : -1)), (max(1, (((-9223372036854775807 - 1) ? 24 : -29))))));
                            }
                        }
                    }

                    for (int i_5 = 2; i_5 < 23;i_5 += 1)
                    {
                        var_21 &= (min(19, 4611677222334365696));
                        arr_16 [i_5] [i_5 + 1] [i_1] [i_1] [i_0 + 2] = var_13;
                    }
                    for (int i_6 = 1; i_6 < 22;i_6 += 1)
                    {
                        var_22 = (max(var_22, ((max((((-4845378604138789287 + 9223372036854775807) >> (-var_9 + 4042547038699958953))), (max(15347641557436465289, 200)))))));
                        arr_19 [i_0 + 2] [0] [0] [i_1] [8] = (((((var_14 - ((max(80, 16316)))))) ? (-2147483647 - 1) : var_9));
                        var_23 = 4294967283;
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_7 = 3; i_7 < 17;i_7 += 1)
    {
        var_24 += -52;
        arr_22 [i_7] = (!1596345790);
        var_25 = (-8729341776426881089 % var_13);
    }
    for (int i_8 = 0; i_8 < 19;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 19;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 19;i_10 += 1)
            {
                {
                    var_26 = (max(var_6, -8));
                    var_27 -= 1;
                    var_28 = (~var_1);
                    /* LoopNest 2 */
                    for (int i_11 = 4; i_11 < 18;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 18;i_12 += 1)
                        {
                            {
                                var_29 &= ((var_6 | (~0)));
                                arr_37 [i_8] [i_9] [i_9] [i_8] [5] = ((var_12 < ((min(var_6, var_9)))));
                            }
                        }
                    }
                }
            }
        }
        var_30 = 64;
        var_31 = (max(var_31, ((min(11992, 1)))));
        arr_38 [i_8] = var_0;
        var_32 += 1;
    }
    #pragma endscop
}
