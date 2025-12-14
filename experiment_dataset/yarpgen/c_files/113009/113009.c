/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113009
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_7;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_10 [i_1] = (1 % var_9);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_18 [i_0] [i_0] [i_2 - 1] [i_2 - 1] [i_1] [i_2 - 1] [i_0] = (6044137709988152675 % 12208);
                                arr_19 [i_0] [i_1] [i_2] [i_1] [i_4] [i_0] [i_2] = 5907913158404384754;
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 2; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    {
                        var_14 = 21816;
                        arr_26 [i_5] [i_5] = var_4;
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 17;i_8 += 1)
    {
        arr_29 [i_8] [i_8] = (min((min(var_7, 6044137709988152675)), (-598523855 | 6044137709988152669)));
        var_15 = (min(var_15, var_11));
        var_16 = (max(var_16, var_12));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 25;i_9 += 1)
    {
        /* LoopNest 2 */
        for (int i_10 = 3; i_10 < 23;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 25;i_11 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 25;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 25;i_13 += 1)
                        {
                            {
                                var_17 *= (var_3 <= var_10);
                                arr_43 [i_10] = var_11;
                                arr_44 [i_10] [i_10] [i_10] [i_10] [14] [i_10] = var_9;
                                arr_45 [i_10] = (-32767 - 1);
                                arr_46 [i_9] [i_9] [i_11] [i_10] [i_13] = 93;
                            }
                        }
                    }
                    arr_47 [i_10] = (var_7 | -581201736);
                    var_18 = (1073741760 >> (810821415893830203 - 810821415893830201));
                    var_19 = (var_7 % -1150545636);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 25;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 25;i_15 += 1)
            {
                {
                    var_20 = (max(var_20, var_9));
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 25;i_16 += 1)
                    {
                        for (int i_17 = 1; i_17 < 24;i_17 += 1)
                        {
                            {
                                arr_60 [9] [9] [i_17] [22] [9] = (856297824 < var_0);
                                var_21 -= var_11;
                            }
                        }
                    }
                    arr_61 [i_9] [i_9] [i_9] |= (((var_7 + 9223372036854775807) >> (-1150545618 != 1150545635)));
                }
            }
        }
    }
    for (int i_18 = 1; i_18 < 1;i_18 += 1)
    {
        /* LoopNest 3 */
        for (int i_19 = 1; i_19 < 21;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 22;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 22;i_21 += 1)
                {
                    {
                        var_22 = min(12151417956455637665, ((max(19, var_10))));
                        arr_72 [i_18] = -1887106346;

                        for (int i_22 = 3; i_22 < 21;i_22 += 1)
                        {
                            arr_76 [i_18] = (((((max(1204315593, 15071224905478917804)) - var_4)) + var_7));
                            var_23 = 2330119526;
                            arr_77 [i_18] [1] = -4146963732261633624;
                        }
                        /* vectorizable */
                        for (int i_23 = 1; i_23 < 20;i_23 += 1)
                        {
                            arr_81 [13] [13] [i_18] [i_21] [i_21] [10] [i_19] = 3754398904;
                            arr_82 [i_18] [i_19] [i_19] [i_19] [i_19 - 1] = (var_1 >= var_5);
                        }
                        arr_83 [2] [2] [i_21] &= (7 * var_6);
                    }
                }
            }
        }
        arr_84 [i_18] = (((((min(var_5, (var_3 > 6785040331846184874))))) & (min((min(21530, 540568392)), (var_7 == 747376892)))));
    }
    var_24 = (max(3754398908, 1));
    #pragma endscop
}
