/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = max(var_5, (min(((max(var_7, var_10))), (max(var_10, var_0)))));
    var_12 = var_6;
    var_13 = var_1;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_14 = (min(var_14, ((min((~var_4), -248)))));
        var_15 += (min((max(254, 8154787399729226062)), ((max((min(7, 17205)), 54466)))));

        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            var_16 = (max(var_16, ((max(48321, (min((min(var_4, 6762223003043896377)), 1)))))));
            var_17 ^= 14;
        }
        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {

            for (int i_3 = 4; i_3 < 20;i_3 += 1)
            {
                arr_10 [i_0] [i_2] [i_3] = (min((max((min(var_3, var_9)), (arr_8 [i_3]))), var_6));
                arr_11 [i_3] [i_2] [i_3 + 2] = var_3;
                arr_12 [i_3] [i_3] = -5579328649166822168;
            }
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                var_18 ^= var_1;
                var_19 ^= max((arr_2 [i_2] [i_2]), (arr_3 [i_2]));
                var_20 ^= var_6;
            }
            /* vectorizable */
            for (int i_5 = 1; i_5 < 21;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 4; i_6 < 21;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        {
                            var_21 = 851262624;
                            arr_23 [7] [4] [i_5 - 1] [i_5] = var_2;
                            arr_24 [i_5] [i_6] [i_5 + 1] [20] [i_5] = var_10;
                            var_22 = 18539;
                        }
                    }
                }
                var_23 = (min(var_23, (~var_8)));
                arr_25 [i_0] [i_5] = var_3;
            }
            arr_26 [i_2 + 1] [i_0] [i_0] = (arr_2 [i_2 + 1] [i_0]);

            for (int i_8 = 2; i_8 < 19;i_8 += 1)
            {

                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    var_24 = (max(var_8, (~var_9)));

                    /* vectorizable */
                    for (int i_10 = 2; i_10 < 20;i_10 += 1)
                    {
                        arr_35 [i_8] [i_8] [i_8] [i_8] = var_6;
                        arr_36 [i_10] [1] [i_8] [14] [i_8] [i_2] [i_0] = var_8;
                    }
                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        var_25 ^= var_5;
                        var_26 = (max(var_26, (arr_13 [i_0])));
                        var_27 *= var_9;
                        arr_40 [i_0] [i_8] [i_8] [i_8] [i_11] = var_2;
                    }
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 22;i_12 += 1)
                {
                    for (int i_13 = 2; i_13 < 21;i_13 += 1)
                    {
                        {
                            var_28 = (max(var_28, ((min(var_4, 9176294386095757201)))));
                            var_29 = (max(var_29, var_3));
                            var_30 = (max(var_6, (min(-var_5, var_1))));
                            var_31 ^= arr_38 [i_8];
                            arr_47 [i_0] [i_8] = var_10;
                        }
                    }
                }
                arr_48 [i_8] [i_2] = min((min(var_0, ((max(15, var_8))))), ((min(var_10, (arr_1 [i_0])))));
            }
            /* vectorizable */
            for (int i_14 = 0; i_14 < 22;i_14 += 1)
            {
                var_32 ^= var_7;
                var_33 ^= (arr_13 [i_0]);
                arr_51 [i_0] [i_2 + 2] [i_14] [i_14] = var_7;
            }
            var_34 = (min(((max(var_10, ((max(-832588349, 1)))))), (max(281474842492928, 1))));
            arr_52 [i_0] = var_7;
        }
        var_35 *= (min((min(var_6, 8154787399729226074)), 1));
    }
    /* vectorizable */
    for (int i_15 = 1; i_15 < 16;i_15 += 1)
    {
        var_36 = (min(var_36, (arr_19 [i_15] [16] [i_15] [i_15 + 1])));
        arr_56 [i_15 - 1] = -1;
        arr_57 [i_15] [i_15] = -var_8;
    }

    for (int i_16 = 3; i_16 < 9;i_16 += 1)
    {
        var_37 += (~var_5);
        var_38 = var_10;
    }
    #pragma endscop
}
