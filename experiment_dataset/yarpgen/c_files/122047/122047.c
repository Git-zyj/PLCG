/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122047
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = 511;
        arr_4 [i_0] = var_14;
        arr_5 [16] = 65025;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = var_4;
        var_18 *= var_8;

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        {
                            var_19 = -var_4;
                            arr_19 [i_1] [i_1] [i_1] [i_1] [i_5] [i_2] = (~9);
                            arr_20 [i_1] [i_1] [7] [i_1] [i_1] = 160;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        {
                            arr_27 [i_1] [i_1] [i_6] [i_7] = 6808654986764742046;
                            var_20 = 492;
                            var_21 = 4838828340826199625;
                        }
                    }
                }
                arr_28 [i_1] [i_1] [i_3] [i_1] = 56336;
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        {
                            var_22 = 96;
                            arr_35 [i_1] [i_1] [i_1] [i_1] = -607620393;
                            var_23 = 0;
                        }
                    }
                }
                var_24 ^= 607620416;
            }
            for (int i_10 = 0; i_10 < 10;i_10 += 1)
            {
                var_25 = var_8;

                for (int i_11 = 0; i_11 < 10;i_11 += 1) /* same iter space */
                {
                    arr_43 [i_10] [i_10] = var_3;

                    for (int i_12 = 0; i_12 < 10;i_12 += 1)
                    {
                        var_26 = 984700527368560859;
                        var_27 = var_7;
                    }
                }
                for (int i_13 = 0; i_13 < 10;i_13 += 1) /* same iter space */
                {
                    var_28 = 10880305672414242943;

                    for (int i_14 = 0; i_14 < 10;i_14 += 1)
                    {
                        arr_52 [i_10] [i_10] [i_2] = 190;
                        var_29 = var_3;
                    }
                }
                for (int i_15 = 0; i_15 < 10;i_15 += 1) /* same iter space */
                {
                    arr_55 [i_10] [i_10] [i_10] [i_2] [i_10] [i_10] = var_17;
                    arr_56 [i_10] [i_2] [i_10] [i_10] [i_10] [i_15] = var_13;
                    var_30 = var_4;
                }
            }
            for (int i_16 = 0; i_16 < 10;i_16 += 1)
            {
                var_31 = var_17;
                arr_59 [i_1] [i_1] [i_1] = 6808654986764742046;
                arr_60 [i_1] [i_1] [i_1] = var_12;
            }
            arr_61 [i_1] = var_8;

            for (int i_17 = 0; i_17 < 10;i_17 += 1)
            {
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 10;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 10;i_19 += 1)
                    {
                        {
                            arr_70 [i_1] [i_1] [i_17] [i_18] [i_19] = 2040;
                            arr_71 [i_19] |= 1039130238397962918;
                            arr_72 [i_1] [i_1] [7] [i_1] [i_1] = 250;
                        }
                    }
                }
                arr_73 [i_1] = (!51010070);
                arr_74 [i_1] [i_1] [i_1] = var_5;
                arr_75 [i_1] [i_2] [i_17] = -6808654986764742075;
            }
        }
    }
    for (int i_20 = 0; i_20 < 17;i_20 += 1)
    {
        arr_78 [5] = var_7;
        arr_79 [10] [i_20] &= -1134057849426201359;
    }
    /* vectorizable */
    for (int i_21 = 0; i_21 < 13;i_21 += 1)
    {
        var_32 = var_13;
        arr_82 [i_21] = var_5;
        var_33 = 41423;
    }
    var_34 = var_1;
    #pragma endscop
}
