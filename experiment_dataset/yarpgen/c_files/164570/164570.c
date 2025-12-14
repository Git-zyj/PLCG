/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164570
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_12 = var_9;

                /* vectorizable */
                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_13 = var_9;
                        arr_14 [i_1] [i_3] [i_2] [i_2] [i_0] [i_1] = (((arr_3 [i_0] [i_1 + 1]) ? var_6 : ((var_8 - (arr_13 [i_0] [i_2] [15])))));
                    }
                    var_14 = (arr_2 [i_0]);

                    for (int i_4 = 1; i_4 < 14;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            arr_21 [i_0] [i_0] [i_1] [i_0] [i_0] = 27050;
                            arr_22 [i_0] [i_1] [i_2 + 1] [i_4] [i_5] = 365566488;
                            arr_23 [i_4 + 1] [i_1] = ((27063 ? 17 : 65535));
                            arr_24 [14] [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1] = (((var_1 % 2165307778) - var_4));
                        }
                        for (int i_6 = 3; i_6 < 14;i_6 += 1)
                        {
                            var_15 = (!248);
                            arr_29 [i_0] [i_0] [i_1] [i_0] [i_0] = (arr_16 [i_1 + 1] [i_2 - 1] [i_4 + 2] [i_1]);
                        }
                        for (int i_7 = 4; i_7 < 16;i_7 += 1)
                        {
                            var_16 = 136;
                            arr_32 [i_0] [i_1] [i_2] [i_2] [i_7] = (!255);
                        }
                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            var_17 = (max(var_17, ((((arr_0 [i_1]) <= var_6)))));
                            arr_36 [i_2] [i_1 + 1] [i_2] [i_1 + 1] [i_1] [i_1 + 1] = var_2;
                        }

                        for (int i_9 = 2; i_9 < 16;i_9 += 1)
                        {
                            arr_41 [i_9 + 1] [14] [i_2] [14] [i_0] &= (~var_5);
                            var_18 = (((arr_3 [i_9 - 2] [i_9 - 2]) ? (((((arr_26 [i_1]) <= (arr_27 [i_4] [i_4] [i_4 + 1] [i_1] [i_4] [i_4] [i_4]))))) : (arr_16 [i_0] [i_0] [i_0] [i_1])));
                        }
                        for (int i_10 = 0; i_10 < 17;i_10 += 1)
                        {
                            var_19 = (min(var_19, var_0));
                            var_20 = var_0;
                        }
                    }
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        arr_48 [i_0] [i_0] [i_2] [i_1] [i_11] = ((arr_28 [i_0] [i_2 + 1]) ? (!var_9) : var_1);
                        arr_49 [i_1] = -3165018241396608625;
                        var_21 = (min(var_21, (arr_46 [i_0] [i_1] [i_1 + 1] [i_1 + 1])));
                        arr_50 [i_1] [i_1] = arr_33 [i_1];
                        arr_51 [i_1] = (arr_28 [i_0] [i_0]);
                    }
                    arr_52 [i_1] [i_1] = ((~(arr_42 [i_0] [i_2 - 2] [i_2 - 2] [i_0] [i_1 + 1])));
                }
            }
        }
    }
    var_22 = ((134217728 && ((min(var_0, var_8)))));
    var_23 = 65512;
    var_24 = 22;
    var_25 = ((((var_11 * var_4) ? var_2 : var_4)));
    #pragma endscop
}
