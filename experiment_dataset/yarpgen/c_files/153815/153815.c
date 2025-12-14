/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153815
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    var_10 += ((255 ? 15833265016421414186 : 1));
                    var_11 ^= var_7;
                    var_12 = (((((0 ? ((min(var_1, 1))) : (arr_1 [i_0])))) ? (max(var_9, (arr_1 [i_0]))) : (((-(arr_2 [i_0 + 1] [i_0 + 1] [i_0 + 3]))))));
                    var_13 = -1688528928052751775;
                    var_14 = ((min(60, ((-9 ? var_9 : var_8)))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    var_15 = var_8;

                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {

                        for (int i_5 = 1; i_5 < 14;i_5 += 1)
                        {
                            arr_18 [i_0] [i_1] [i_3] [8] [i_0] [i_4] [i_4] = -61;
                            var_16 = (min(var_16, (((((var_9 ? var_5 : (arr_1 [i_4]))) == 46)))));
                        }
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            var_17 = ((~(arr_2 [i_0 + 4] [i_0 + 3] [i_3])));
                            var_18 ^= ((var_0 ? (arr_8 [i_0 + 3] [i_0 + 1] [i_0 + 4]) : (arr_8 [i_0 + 3] [i_0 + 1] [i_0 + 4])));
                            arr_22 [i_3] [i_0] [i_4] [i_3] [i_3] [i_0] [i_0] = (arr_9 [i_0] [i_0 + 4] [12]);
                        }
                        for (int i_7 = 3; i_7 < 14;i_7 += 1)
                        {
                            var_19 = 2071720051;
                            arr_26 [i_0] [10] = -1;
                        }
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            var_20 &= ((!(arr_9 [i_4] [i_0 - 1] [i_4])));
                            var_21 = (arr_0 [i_0] [i_0]);
                            arr_29 [i_0] [i_4] [3] [i_0] [i_0] = (arr_25 [i_8] [i_4] [i_3] [i_1] [i_0]);
                        }
                        var_22 = (arr_12 [i_0 + 1] [i_0] [i_0 - 2]);
                    }
                    for (int i_9 = 1; i_9 < 1;i_9 += 1)
                    {
                        var_23 -= (((arr_32 [i_9] [i_9] [13] [i_9 - 1] [i_9 - 1] [i_9]) / (arr_14 [i_9 - 1] [0] [i_0 + 2])));
                        var_24 ^= 0;
                    }
                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        arr_35 [i_0] [i_0] [i_3] [i_0] [i_3] = (arr_33 [i_0] [i_0] [i_0] [i_0 + 4] [i_0 + 2]);
                        var_25 ^= (((~var_7) ? (((((arr_20 [4]) + 2147483647)) >> (((arr_7 [i_0]) + 462345073)))) : ((var_9 ? 791550391 : (arr_1 [0])))));
                    }
                    arr_36 [5] [i_1] [i_0] = ((arr_12 [i_0 + 2] [i_0] [i_0 + 1]) ? var_6 : var_7);
                }

                for (int i_11 = 4; i_11 < 12;i_11 += 1)
                {
                    var_26 = 69;
                    var_27 = (((((max(-61, 1)))) / var_8));
                    arr_40 [i_0] [i_0] [i_0] [i_0] = 115;
                }
            }
        }
    }
    var_28 *= ((var_6 ? ((var_7 ? var_5 : var_4)) : -var_5));
    #pragma endscop
}
