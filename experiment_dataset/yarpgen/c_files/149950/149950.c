/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_11));
    var_14 = var_8;
    var_15 = 0;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_4 [i_0] = 167;

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_16 = 88;
            arr_7 [i_0] [i_1] = 89;
            arr_8 [i_0] [i_0] [i_1] = 45500;
            arr_9 [i_0] [i_0] [i_0] = 1;
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 3; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        {
                            var_17 = (min(var_17, 45642));
                            var_18 = -27;
                            arr_20 [i_0] [i_2] [i_2] [i_4] [1] = 0;
                            arr_21 [i_2] [i_5] = 37320688;
                        }
                    }
                }
            }

            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {

                for (int i_7 = 1; i_7 < 18;i_7 += 1)
                {
                    var_19 = (min(var_19, 20036));
                    var_20 = 42819;
                    var_21 *= 10067;

                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        var_22 -= 167;
                        var_23 = 2142216304;
                        arr_30 [i_2] [i_8] = 0;
                        var_24 += 128;
                    }
                    for (int i_9 = 0; i_9 < 20;i_9 += 1) /* same iter space */
                    {
                        var_25 = 45500;
                        var_26 = -13743;
                    }
                    for (int i_10 = 0; i_10 < 20;i_10 += 1) /* same iter space */
                    {
                        arr_36 [i_2] = 0;
                        arr_37 [i_0] [i_2] [i_6] [i_7] [i_6] [i_2] = 45500;
                    }
                    var_27 = 1;
                }
                var_28 += 0;
                var_29 ^= 0;
                var_30 = 8128;
            }
            arr_38 [i_2] = 32038;
            arr_39 [i_0] [i_0] &= 0;
        }
    }
    #pragma endscop
}
