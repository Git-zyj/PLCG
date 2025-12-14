/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104475
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= 44967;
    var_12 = 9249982738818066978;
    var_13 ^= max((max(var_10, var_7)), var_1);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_14 = (max(var_14, (((!(arr_0 [i_0]))))));
        arr_2 [i_0] [i_0] = (((10723512023673991402 >= 4096) * (!524287)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 9;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_15 += 5510362178762068381;

                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            arr_17 [i_1] [i_2 + 2] [i_2] = 1;
                            arr_18 [i_1] [i_1] = var_10;
                            arr_19 [i_1] [i_1] [i_1] [i_1 + 1] [i_1] [i_1] [i_1 + 1] = var_0;
                        }
                        for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
                        {
                            arr_22 [i_1] = var_7;
                            var_16 = (-121 & 4144896915);
                        }
                        for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
                        {
                            var_17 ^= ((!(arr_0 [i_3])));
                            arr_25 [i_1 + 1] [i_2] [i_3] [i_1 + 1] [i_7] [i_2 - 1] [i_1] = ((var_0 ? 1 : 1));
                            arr_26 [i_7] [i_1] [0] [i_1] [i_1] = (~0);
                        }
                        for (int i_8 = 2; i_8 < 10;i_8 += 1)
                        {
                            var_18 -= var_9;
                            var_19 = (min(var_19, (arr_15 [i_1] [i_2] [i_3] [i_4] [i_8])));
                            var_20 ^= var_8;
                            var_21 += 1;
                        }
                        arr_29 [i_1] [i_2] [i_1] [i_3] [i_2] = var_8;
                    }
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        var_22 ^= 299447575318723690;
                        arr_32 [i_1] [i_1] [i_1] [i_9] = 2187610067;
                        var_23 = (arr_12 [i_1 + 1] [i_2 + 1] [i_3] [4]);
                    }
                    for (int i_10 = 2; i_10 < 9;i_10 += 1)
                    {
                        arr_35 [5] [i_1] [0] [9] = (~var_0);
                        var_24 = (max(var_24, (arr_11 [i_1 + 1])));
                        var_25 = (min(var_25, var_6));
                        var_26 = (max(var_26, (arr_7 [i_1] [i_2 + 2])));
                    }
                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        var_27 *= var_7;
                        var_28 = (((arr_20 [i_3]) ? var_5 : 1));
                        var_29 = (max(var_29, var_5));
                        arr_38 [0] [i_2] [i_11] [i_2] |= (arr_5 [i_11]);
                        var_30 *= (!var_5);
                    }
                }
            }
        }
        arr_39 [0] [0] |= 11;
    }
    #pragma endscop
}
