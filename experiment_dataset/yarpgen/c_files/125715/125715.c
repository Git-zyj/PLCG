/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125715
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= ((!(var_9 || var_2)));
    var_11 = (~var_5);
    var_12 = ((-(var_8 * var_9)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [2] &= ((var_9 && (~var_3)));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
                        {
                            arr_15 [i_0] [i_3] [i_2 + 1] [i_2] [i_1] [i_0] = (!var_6);
                            var_13 = var_6;
                            arr_16 [i_0] [i_0] [i_2] [7] [5] [i_2] [i_3] = (~var_1);
                        }
                        for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
                        {
                            arr_19 [i_0] [i_1] [i_0] [1] [i_5] = var_9;
                            var_14 = var_2;
                        }
                        var_15 = var_2;
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        arr_22 [i_6] = ((-(var_6 - var_2)));
        var_16 = var_5;
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 17;i_10 += 1)
                        {
                            {
                                arr_35 [i_10] [i_10 + 2] [i_9] [i_6] [2] [i_7] [i_6] = (-(var_3 | var_9));
                                var_17 = var_8;
                                arr_36 [i_6] [i_7] [i_8] [i_9] [i_6] = (max(var_0, (((var_7 <= (min(var_5, var_8)))))));
                                var_18 = ((var_5 * (var_5 >= var_3)));
                            }
                        }
                    }
                    var_19 = var_8;
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 20;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 18;i_12 += 1)
                        {
                            {
                                var_20 = ((!(max(var_8, var_6))));
                                var_21 = var_7;
                                arr_43 [i_6] [i_6] [i_6] [i_8] [i_11] [i_6] [i_12 - 1] = ((-(max(var_3, var_5))));
                                var_22 *= var_4;
                                var_23 = (min(var_23, 3310400679));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = (min(var_24, var_7));
    #pragma endscop
}
