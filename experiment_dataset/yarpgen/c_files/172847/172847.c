/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, (((var_14 >> (var_2 - 9012699014094990788))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = ((9223372036854775804 >= (9223372036854775804 != 9223372036854775804)));
        var_17 = 13464;
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    {
                        arr_15 [i_1] [i_2] [i_2] [i_4] = (((-8 > var_9) >> ((min(255, var_6)))));
                        arr_16 [9] [i_2] [i_3] [i_4] = (var_2 == 1);
                    }
                }
            }
        }
        var_18 = (max(var_18, ((min(var_5, (var_12 * var_13))))));
    }
    for (int i_5 = 1; i_5 < 15;i_5 += 1) /* same iter space */
    {
        var_19 -= (((min(var_5, -30308))));
        /* LoopNest 2 */
        for (int i_6 = 3; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                {
                    var_20 = (max(var_20, ((((((1 - 9223372036854775800) == (-8 % 1))) && var_13)))));
                    /* LoopNest 2 */
                    for (int i_8 = 4; i_8 < 16;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            {
                                var_21 = (((var_3 - (((min((-32767 - 1), var_1)))))));
                                arr_27 [i_5 + 1] [i_5] [i_5] [i_5] [i_5] [i_9] = (min(8329191745504441907, var_11));
                                var_22 = (min(((((var_8 > 1) | 1))), (max(1, (1 | 0)))));
                            }
                        }
                    }
                    arr_28 [i_5] = (((max(-9223372036854775804, 0)) >= (((1 << (-8401 + 8411))))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        for (int i_11 = 4; i_11 < 16;i_11 += 1)
                        {
                            {
                                arr_34 [6] [6] [i_10] [i_7] [i_11 - 3] [i_10] [0] &= ((((0 & 49500) & 73)));
                                var_23 = (min(var_23, ((max(((min(-5994, (min(219, var_13))))), var_10)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = (max(206, var_6));
    #pragma endscop
}
