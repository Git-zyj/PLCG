/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_7;

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = (max((max(var_4, 34194)), ((max((arr_1 [i_0]), 34213)))));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 19;i_1 += 1) /* same iter space */
        {
            var_18 += 34186;
            var_19 = 54421;
        }
        for (int i_2 = 1; i_2 < 19;i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            arr_18 [i_3] = 4236600145407218816;
                            var_20 = 3649153616;
                            var_21 -= 71;
                            var_22 *= 1;
                        }

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            var_23 = -5193573476994241882;
                            var_24 = 44360;
                            var_25 = 185;
                        }
                    }
                }
            }
            var_26 *= (max(((max((arr_11 [i_0] [i_2 + 1]), var_5))), (max(186, -1721968441))));
        }
        /* vectorizable */
        for (int i_7 = 1; i_7 < 19;i_7 += 1) /* same iter space */
        {
            var_27 = -1721968441;
            arr_25 [i_0] [i_0] [i_0] = 4435902403152227186;
            arr_26 [i_7] = 1721968438;
            arr_27 [i_0] [16] = 126;
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            var_28 = (max(var_28, 34194));
            var_29 = 34184;
            var_30 = 9223372036854775807;
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 20;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 16;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 17;i_11 += 1)
                    {
                        {
                            arr_36 [i_9] [i_9] [i_9] [i_9] [i_9] = 948818480;
                            var_31 = (max(var_31, 60356));
                            arr_37 [i_0] [i_0] [i_0] = 1721968440;
                        }
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_12 = 0; i_12 < 20;i_12 += 1)
        {
            arr_42 [i_12] [i_12] = 31;

            for (int i_13 = 0; i_13 < 20;i_13 += 1)
            {
                arr_47 [i_0] [i_12] [i_12] [i_12] = 153;
                var_32 = -119;
            }
            var_33 = 1721968450;
        }
        var_34 = (max((max(-2449025738865149062, (arr_1 [i_0]))), ((max((arr_1 [i_0]), (arr_1 [i_0]))))));
        var_35 = (max(((max(var_16, 0))), (max((arr_19 [i_0] [i_0] [5] [i_0] [i_0]), (arr_19 [i_0] [i_0] [i_0] [i_0] [i_0])))));
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 20;i_14 += 1) /* same iter space */
    {
        var_36 = 16777215;
        arr_50 [i_14] = 31;
        arr_51 [i_14] = 3;
        arr_52 [i_14] = 216;

        for (int i_15 = 3; i_15 < 17;i_15 += 1)
        {
            var_37 = (max(var_37, 165));
            arr_56 [i_14] = 255;
            var_38 -= 31;
            arr_57 [i_14] = 1721968428;
            arr_58 [i_14] [i_14] [i_14] = 16383;
        }
        for (int i_16 = 0; i_16 < 20;i_16 += 1)
        {
            arr_63 [i_14] = 103;
            arr_64 [i_14] [i_16] [i_16] = 192;

            for (int i_17 = 2; i_17 < 18;i_17 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_18 = 3; i_18 < 19;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 20;i_19 += 1)
                    {
                        {
                            var_39 = 103;
                            arr_72 [i_14] [i_14] [i_17] [i_14] [15] = 150;
                        }
                    }
                }
                var_40 = 2147483641;
                arr_73 [i_14] [i_16] = 1721968441;
            }
            for (int i_20 = 2; i_20 < 18;i_20 += 1) /* same iter space */
            {
                var_41 = 13;
                var_42 = -1721968426;
                var_43 = 45222;
                /* LoopNest 2 */
                for (int i_21 = 1; i_21 < 19;i_21 += 1)
                {
                    for (int i_22 = 3; i_22 < 19;i_22 += 1)
                    {
                        {
                            var_44 ^= 21458;
                            var_45 = 240;
                            var_46 = 0;
                            arr_84 [i_14] [i_14] [i_14] [i_14] [i_21 - 1] [i_14] [i_22 - 1] = 120;
                        }
                    }
                }
            }
            for (int i_23 = 2; i_23 < 18;i_23 += 1) /* same iter space */
            {
                var_47 -= -2726348564708414277;
                arr_87 [i_14] [i_14] = 200;
            }
        }
    }
    var_48 = var_14;
    var_49 = (max(var_12, var_0));
    var_50 -= var_14;
    #pragma endscop
}
