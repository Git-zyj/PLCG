/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165986
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_14 &= arr_3 [1] [1];
                var_15 = (arr_1 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_16 = (arr_0 [i_3]);
                            var_17 = (min((min(1643277466, (arr_8 [i_0] [i_0 + 2]))), ((min(0, 1)))));
                            var_18 = (min((arr_2 [i_0]), 0));
                        }
                    }
                }
            }
        }
    }

    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        arr_17 [i_4] [i_4] = (arr_16 [i_4]);
        var_19 = (min(234, 1));

        /* vectorizable */
        for (int i_5 = 1; i_5 < 1;i_5 += 1)
        {
            arr_21 [17] &= (arr_14 [i_4]);
            /* LoopNest 2 */
            for (int i_6 = 3; i_6 < 24;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    {
                        var_20 = (arr_20 [i_6 - 3]);
                        arr_28 [i_4] = 17702828878942559838;
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 23;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    {
                        arr_34 [i_4] = (arr_24 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1]);
                        var_21 += (arr_26 [i_8 - 1] [i_8 + 1] [i_8 - 1] [i_8 + 2]);
                        var_22 = (arr_15 [i_5 - 1]);

                        for (int i_10 = 3; i_10 < 21;i_10 += 1)
                        {
                            arr_37 [i_4] [6] [i_9] [i_4] [i_4] [i_4] |= (arr_27 [i_10] [i_10 + 3] [i_10 + 3] [i_10] [i_10 + 2] [i_10]);
                            var_23 &= 255;
                            arr_38 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [18] &= (arr_19 [i_4] [i_4] [i_4]);
                            arr_39 [i_10] = (arr_24 [i_4] [i_4] [i_4] [i_4]);
                        }
                        var_24 += (arr_26 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1]);
                    }
                }
            }
        }
        for (int i_11 = 0; i_11 < 25;i_11 += 1)
        {
            arr_43 [i_11] [i_11] = (max(((max(0, 32758))), (arr_22 [6] [i_11])));
            var_25 = 1;
        }
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 25;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 25;i_13 += 1)
            {
                {
                    var_26 = 255;
                    var_27 -= 1;
                    /* LoopNest 2 */
                    for (int i_14 = 1; i_14 < 24;i_14 += 1)
                    {
                        for (int i_15 = 2; i_15 < 22;i_15 += 1)
                        {
                            {
                                arr_55 [11] = (max(1044480, 255));
                                var_28 = (arr_23 [21] [i_12]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
