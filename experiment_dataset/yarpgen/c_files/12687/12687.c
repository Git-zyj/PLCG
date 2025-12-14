/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12687
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    var_14 |= var_11;
                    arr_7 [3] [i_1] [3] = (((var_11 - var_0) || (((var_4 / (var_10 <= var_3))))));

                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        arr_12 [i_0 + 1] [i_1] [i_3] &= ((!(((4199915402 ? 402658926 : 58117)))));
                        var_15 = ((var_2 == (((min(var_1, var_13)) - -var_10))));
                    }
                    /* vectorizable */
                    for (int i_4 = 3; i_4 < 12;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            var_16 |= var_9;
                            var_17 = (max(var_17, var_4));
                            arr_21 [i_1 + 1] [i_1 + 1] [i_4] [i_5] [i_1 + 1] = (var_8 <= var_4);
                        }
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            var_18 *= ((((var_8 ? var_0 : var_11))) ? var_9 : var_0);
                            arr_24 [12] [12] [i_6] [12] [4] [i_4] [12] = ((var_3 ? var_3 : var_1));
                        }
                        var_19 = ((!(var_6 != var_2)));
                        arr_25 [i_0 + 1] [i_1] [i_2] [i_4] [i_4] = (var_7 * var_0);
                    }
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        arr_30 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] = ((var_4 | ((((var_12 || (var_8 < var_10)))))));
                        var_20 = (min(var_20, ((min(((((min(var_12, var_10))) ? ((var_9 ? var_0 : var_9)) : (max(var_6, var_8)))), (((11891405796617077598 ? var_13 : 498597860))))))));
                    }
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            arr_36 [i_8] [i_8] = var_13;
                            arr_37 [i_0] [i_1 + 1] [i_2] [i_8] [i_9] [i_9] = var_4;
                            var_21 *= var_3;
                        }
                        for (int i_10 = 0; i_10 < 14;i_10 += 1)
                        {
                            arr_41 [i_0] [i_0] [i_0] [i_8] [i_8] = (max(((min(var_6, (498597860 != 1832913419)))), (max(var_8, var_11))));
                            var_22 = ((var_3 ? (((var_6 ? var_12 : var_2))) : var_0));
                            var_23 = ((((!(((var_13 ? var_0 : var_10))))) ? var_12 : ((-(max(var_9, var_12))))));
                        }
                        for (int i_11 = 0; i_11 < 14;i_11 += 1)
                        {
                            arr_46 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] = ((-(max((var_13 * var_13), (min(var_4, var_7))))));
                            arr_47 [i_8] [i_1 + 1] [i_2] [i_1 + 1] [i_11] = (var_0 > var_4);
                        }
                        var_24 = (-var_8 % -var_4);
                        arr_48 [5] [i_1] [i_2] [i_8] = var_4;
                    }
                }
            }
        }
    }
    var_25 = var_13;
    #pragma endscop
}
