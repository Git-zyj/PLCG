/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] [i_1 + 3] = (1302472037495957230 == -7055712789358748036);
                    var_12 = ((((min((arr_4 [i_0 + 2] [i_0 + 3] [i_1]), -7055712789358748036))) ? (((-(arr_4 [i_1] [i_0 - 1] [i_1])))) : 17144272036213594405));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 9;i_4 += 1)
        {
            {
                var_13 = ((17433124893993890425 ? (!-7055712789358748036) : (arr_9 [i_4 + 2] [i_4 - 2])));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        {
                            arr_20 [i_3] [i_3] [i_5] [i_3] = (((arr_18 [10] [i_4] [i_5] [i_6]) > (arr_18 [i_6] [i_4 - 1] [i_5] [2])));
                            var_14 ^= arr_16 [i_4];
                            arr_21 [i_3] [i_5] [i_3] = 1302472037495957230;
                        }
                    }
                }

                /* vectorizable */
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    arr_26 [i_3] [i_4 + 3] [i_7] = (var_9 > var_8);
                    var_15 = ((-(arr_2 [i_4 + 2] [i_7])));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 12;i_9 += 1)
                        {
                            {
                                var_16 = (arr_10 [i_7]);
                                arr_31 [i_9] [1] = ((var_6 * (arr_5 [i_4 - 2] [i_4 + 3] [i_4 - 1] [i_3])));
                            }
                        }
                    }
                }
                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {
                    arr_35 [i_3] [11] [i_10] [9] = 44;
                    arr_36 [i_10] [i_4 + 1] [i_4] [11] = var_10;
                    arr_37 [0] [i_4] [i_10] [8] &= ((((((var_10 >= (arr_11 [i_3] [i_4 + 3]))) ? var_1 : (arr_5 [i_4 + 2] [i_4] [10] [i_4 + 3]))) == 1302472037495957230));
                }
                /* vectorizable */
                for (int i_11 = 1; i_11 < 11;i_11 += 1)
                {

                    for (int i_12 = 0; i_12 < 12;i_12 += 1)
                    {
                        arr_46 [i_3] [i_4] [5] [8] = ((18446744073709551615 ^ (arr_18 [i_11 - 1] [i_11] [i_11 - 1] [i_11])));
                        var_17 = (arr_18 [i_4 - 1] [i_4 - 2] [i_11 - 1] [i_11 - 1]);
                    }
                    for (int i_13 = 1; i_13 < 11;i_13 += 1)
                    {

                        for (int i_14 = 0; i_14 < 12;i_14 += 1)
                        {
                            arr_51 [i_3] [i_3] [i_3] [i_3] [i_3] [i_14] [6] = (((arr_30 [i_3] [i_11 + 1] [i_13 + 1] [i_13 + 1] [i_14]) >= (arr_30 [i_4 + 1] [i_11 + 1] [i_13] [i_13 + 1] [i_13 - 1])));
                            var_18 = (max(var_18, 9972));
                        }
                        arr_52 [i_3] [i_3] [i_4 - 2] [i_11] [i_13 + 1] = (((var_5 ? var_6 : 3683128197)));
                    }
                    for (int i_15 = 0; i_15 < 12;i_15 += 1)
                    {
                        arr_56 [i_3] [8] [i_11] [i_3] [i_3] = -var_5;
                        arr_57 [i_3] [i_3] [i_4] [i_11 - 1] [i_4] = (((arr_22 [i_3] [i_11]) & (arr_9 [7] [i_11 - 1])));
                    }
                    arr_58 [i_11] [10] [i_3] = (!1);
                    arr_59 [i_3] [i_11 + 1] = -0;
                    var_19 = (arr_12 [i_4 + 3]);
                }
                for (int i_16 = 0; i_16 < 12;i_16 += 1)
                {
                    arr_64 [i_16] [i_4] [i_3] &= 114;
                    arr_65 [0] [i_3] [i_3] = -var_10;
                }
            }
        }
    }
    #pragma endscop
}
