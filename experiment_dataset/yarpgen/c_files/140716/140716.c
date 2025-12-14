/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140716
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, (var_9 ^ 67930007)));
    var_12 = var_7;
    var_13 = (max(var_13, var_4));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 17;i_3 += 1)
                {
                    {
                        arr_10 [4] [i_1] [i_2] [i_3] = (-67930018 - 6);
                        var_14 = (min(var_14, ((((arr_5 [i_0 + 1] [i_0 - 2] [i_0 - 1]) ? 18446744073709551615 : (arr_5 [i_0] [i_1] [i_2 - 1]))))));
                    }
                }
            }
            var_15 |= (1035304876159735304 != 67930007);
        }
        for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
        {
            var_16 = ((~(((arr_9 [i_0]) + -67930008))));

            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                arr_18 [4] [i_4] [i_0] [4] = 18446744073709551611;
                arr_19 [i_4] [i_5] = var_5;
            }
            var_17 = (min(var_17, (((-((1 ? var_5 : var_2)))))));
            arr_20 [10] = (((var_3 || (arr_15 [i_0] [12] [12] [i_4]))));
        }
        var_18 ^= (~var_8);
        var_19 = (max(var_19, (((arr_6 [i_0] [i_0] [i_0 - 2] [i_0 - 2]) ? (arr_6 [i_0 - 1] [i_0 - 2] [i_0 - 2] [i_0 - 1]) : 18446744073709551615))));
        /* LoopNest 2 */
        for (int i_6 = 4; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 17;i_7 += 1)
            {
                {
                    arr_25 [i_7] = ((67930021 ? 1 : -50));
                    var_20 -= (((((var_8 ? var_1 : -67930022))) && (arr_3 [i_0 - 2])));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                var_21 = (((arr_5 [i_0 - 1] [i_7 + 2] [i_9]) || 18028794174047956909));
                                var_22 = (min(var_22, ((((arr_8 [i_9] [i_8] [i_6 - 4] [i_6 - 4] [i_0 + 1]) / (arr_8 [1] [i_6 + 2] [i_7 + 1] [i_8] [i_9]))))));
                                var_23 = (max(var_23, ((((arr_7 [i_0 + 1]) ? (var_0 > var_10) : (var_1 - var_7))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
