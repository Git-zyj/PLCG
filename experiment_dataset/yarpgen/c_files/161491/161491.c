/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161491
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_0;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_21 = (min(var_21, (((var_7 | var_1) | (~var_14)))));
        arr_3 [i_0] = var_15;
    }
    for (int i_1 = 1; i_1 < 8;i_1 += 1)
    {
        arr_8 [i_1] = (~var_7);

        for (int i_2 = 3; i_2 < 8;i_2 += 1)
        {
            var_22 = (min(var_22, ((((~var_11) << ((((var_13 & (~var_10))) - 636)))))));
            var_23 = var_16;
            var_24 = var_19;
            arr_13 [i_1] [i_2] [i_2] = (~-155220018);
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_18 [i_1] [i_1] [i_1] = -var_9;

            /* vectorizable */
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    arr_25 [i_1] [i_1] [i_4] [i_5] = (~var_14);
                    var_25 = (var_14 - var_10);
                }
                arr_26 [i_1] = var_0;
                /* LoopNest 2 */
                for (int i_6 = 3; i_6 < 8;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 9;i_7 += 1)
                    {
                        {
                            arr_34 [i_1] [i_3] [i_7 - 1] [i_7 - 1] = (~var_4);
                            arr_35 [i_1] [i_3] [i_4] [5] [1] [5] [i_1] = (~var_15);
                            var_26 = (min(var_26, var_7));
                        }
                    }
                }
            }
            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {
                var_27 *= (((~(~var_7))));
                arr_38 [8] [i_1] [i_8] [i_8] = 4287061903;
            }
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {
            var_28 = (~var_7);
            var_29 = (var_8 | var_8);
            var_30 = (-129 >= var_7);
        }
        var_31 = var_11;
        var_32 ^= ((var_5 >> (var_11 - 155)));
    }
    for (int i_10 = 0; i_10 < 24;i_10 += 1)
    {
        var_33 = var_1;
        arr_46 [i_10] = var_15;
    }
    for (int i_11 = 2; i_11 < 18;i_11 += 1)
    {
        arr_50 [i_11] = var_19;
        arr_51 [i_11] [i_11] = (~var_3);
    }
    #pragma endscop
}
