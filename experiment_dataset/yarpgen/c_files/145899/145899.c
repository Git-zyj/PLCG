/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145899
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_0;
    var_18 = (max(var_18, ((min((min(var_4, var_0)), (min(26257, 140737488355327)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_19 *= var_14;
        var_20 = (min(var_20, var_7));
        var_21 = var_15;
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        var_22 = (min(var_22, (((min(var_16, var_3))))));
        var_23 = -140737488355331;
        var_24 = var_11;
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_4 = 4; i_4 < 15;i_4 += 1)
                    {
                        var_25 = (min(var_25, (~var_6)));
                        var_26 -= 56;
                    }
                    for (int i_5 = 2; i_5 < 14;i_5 += 1)
                    {
                        var_27 *= (((min(var_14, var_1))));

                        /* vectorizable */
                        for (int i_6 = 1; i_6 < 13;i_6 += 1)
                        {
                            var_28 -= var_0;
                            var_29 = (max(var_29, var_14));
                        }
                        for (int i_7 = 1; i_7 < 12;i_7 += 1)
                        {
                            arr_20 [i_2] [i_3] [i_3] [i_2] [i_2] [i_5 + 1] = var_14;
                            var_30 *= (~4271845789755128516);
                            var_31 *= var_3;
                        }
                    }
                    for (int i_8 = 2; i_8 < 13;i_8 += 1)
                    {
                        var_32 = (min(var_32, var_14));

                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            var_33 *= var_14;
                            var_34 = (max(var_34, (~var_16)));
                            arr_26 [i_1] [i_1 + 3] [i_1 + 3] [i_3] [i_1 + 3] [i_8] |= var_3;
                            var_35 *= -var_13;
                            var_36 ^= 21;
                        }
                        arr_27 [i_2] [i_2] [i_2] [i_2] = (~var_1);
                        var_37 = (min(var_37, -51843118141399125));
                    }
                    var_38 = (max(var_38, ((((max(var_11, var_4)))))));

                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        var_39 = (min(var_39, ((min((min(2147483628, 140737488355346)), var_13)))));

                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            var_40 -= var_15;
                            arr_33 [i_2] [i_2] [i_3] [i_10] [12] = ((!((min(var_10, (min(var_1, var_15)))))));
                            var_41 -= ((~((min(var_11, var_13)))));
                            var_42 |= (((max(230, 33003))));
                        }
                        for (int i_12 = 0; i_12 < 16;i_12 += 1) /* same iter space */
                        {
                            var_43 ^= ((-((max(var_15, var_16)))));
                            var_44 = (max(var_44, var_9));
                        }
                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 16;i_13 += 1) /* same iter space */
                        {
                            var_45 = (max(var_45, var_5));
                            var_46 *= var_8;
                        }
                        for (int i_14 = 0; i_14 < 16;i_14 += 1) /* same iter space */
                        {
                            var_47 *= (-(max(var_8, var_7)));
                            var_48 *= var_11;
                            arr_40 [i_14] [i_10] [i_1 + 3] [i_2 - 1] [i_14] &= (max((max((min(var_0, var_8)), var_14)), (!var_10)));
                            arr_41 [i_2] [i_2] [i_3] = var_3;
                            arr_42 [i_1] [i_2] [i_2] [i_2] [i_2] = 18446744073709551597;
                        }
                        var_49 ^= (min(48760, 1));
                    }
                    /* vectorizable */
                    for (int i_15 = 2; i_15 < 15;i_15 += 1)
                    {
                        var_50 &= var_13;
                        arr_46 [i_2] [i_1] [i_1] [i_1 + 1] [i_1] = var_11;
                    }
                    var_51 ^= max((min(var_7, var_4)), 1);
                }
            }
        }
        var_52 = (min(((min((!var_9), var_14))), (max((min(-1, 18446744073709551597)), ((max(var_3, var_12)))))));
    }
    /* vectorizable */
    for (int i_16 = 4; i_16 < 17;i_16 += 1)
    {
        arr_50 [i_16 - 2] = var_1;
        /* LoopNest 3 */
        for (int i_17 = 0; i_17 < 20;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 20;i_18 += 1)
            {
                for (int i_19 = 1; i_19 < 19;i_19 += 1)
                {
                    {

                        for (int i_20 = 0; i_20 < 20;i_20 += 1)
                        {
                            arr_62 [i_16 + 1] [i_17] [i_17] [i_19] [i_16 + 1] = var_12;
                            var_53 |= var_16;
                            arr_63 [i_16] [i_17] [i_18] [i_19 + 1] [i_17] = var_12;
                            var_54 *= var_1;
                            arr_64 [i_16] [i_16] [i_16] [i_17] [i_16] = var_4;
                        }
                        for (int i_21 = 3; i_21 < 19;i_21 += 1)
                        {
                            var_55 *= var_10;
                            arr_68 [i_16] [i_16] [i_17] [i_18] [i_18] [i_16] [i_21] |= 36;
                            var_56 -= var_2;
                        }
                        var_57 = 14613;
                    }
                }
            }
        }
    }
    for (int i_22 = 0; i_22 < 10;i_22 += 1)
    {
        var_58 = (max(var_58, var_5));
        arr_72 [i_22] = (min(230, 54));
        var_59 = var_4;
    }
    #pragma endscop
}
