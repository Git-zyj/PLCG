/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_1;
    var_18 *= (((min(1, (102 / var_8)))) ? 1 : ((var_10 ? ((111 ? 0 : 177)) : -1024608055)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [8] [1] = (((arr_1 [i_0] [i_0]) ? var_0 : (arr_0 [i_0] [i_0])));
        var_19 = 102;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            var_20 -= (arr_6 [i_1] [i_2]);
            arr_9 [1] [4] = (((arr_0 [1] [8]) ? (arr_5 [2] [0] [i_1]) : var_9));
            var_21 = (min(var_21, 22));
            arr_10 [i_2] [0] [1] = (~-4);
            var_22 = ((!(((-91 ? (arr_8 [1]) : 30665)))));
        }
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            var_23 = (arr_1 [i_3] [6]);

            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    arr_18 [3] [2] [i_4] [6] = var_7;
                    var_24 = (((arr_15 [7] [1] [i_4]) ? (arr_0 [i_4] [1]) : (arr_15 [i_1] [7] [i_5])));
                    var_25 = 1511453157;
                    arr_19 [i_1] [8] [i_4] = ((58 ? 207 : var_16));
                }
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        var_26 = (min(var_26, (arr_5 [2] [4] [i_6])));
                        var_27 = ((-(arr_24 [i_1] [i_3] [i_3] [9] [i_7] [i_6] [i_7])));
                        var_28 ^= (((arr_16 [i_1]) ? var_16 : -108));
                    }
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        arr_28 [i_8] [i_6] [1] [0] [0] = -68;
                        arr_29 [i_1] [i_3] [8] [1] [4] = (((arr_3 [i_3]) ? 10 : (~var_7)));
                        var_29 = (var_8 != 43185);
                    }
                    var_30 = (max(var_30, (var_10 & var_14)));
                    var_31 = (arr_4 [3]);
                    arr_30 [9] [1] [i_4] [i_6] |= ((56 ? ((var_7 ? (arr_8 [8]) : (arr_22 [0] [i_3] [7]))) : 48));
                }
                var_32 -= -4;
            }
            arr_31 [1] [8] [2] = ((~(arr_1 [i_3] [i_1])));
        }
        var_33 += (((arr_16 [1]) ? 108 : ((49 ? 21 : var_2))));

        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {
            arr_34 [i_9] = (((-422290697 - 142) == -51892));
            arr_35 [4] [i_9] = (((21 < var_7) == var_0));
            arr_36 [i_9] [i_9] [i_1] = -var_7;
        }
        for (int i_10 = 0; i_10 < 10;i_10 += 1)
        {
            arr_40 [1] = var_4;
            arr_41 [i_1] = var_0;
        }
        for (int i_11 = 0; i_11 < 10;i_11 += 1)
        {
            var_34 = ((var_3 ? (arr_8 [6]) : (arr_13 [i_11] [i_1])));
            var_35 ^= var_14;
            arr_44 [6] [1] = (arr_37 [i_1]);
        }
        for (int i_12 = 0; i_12 < 10;i_12 += 1)
        {
            var_36 = (1 == 108);
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 10;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    {
                        arr_53 [0] [i_13] [i_13] [3] = (112 / -4);
                        var_37 = ((1040 ? (arr_32 [i_1] [i_12]) : 18615));
                    }
                }
            }
        }
    }
    for (int i_15 = 0; i_15 < 1;i_15 += 1)
    {
        arr_56 [i_15] = ((-1775572684 ? ((1 + (arr_55 [i_15] [i_15]))) : (arr_54 [i_15])));

        /* vectorizable */
        for (int i_16 = 0; i_16 < 1;i_16 += 1)
        {
            var_38 = (422290698 % (arr_55 [i_15] [2]));
            /* LoopNest 3 */
            for (int i_17 = 0; i_17 < 20;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 20;i_18 += 1)
                {
                    for (int i_19 = 1; i_19 < 1;i_19 += 1)
                    {
                        {
                            arr_67 [10] [i_16] [i_16] [17] = (var_14 | var_0);
                            var_39 += (!-4477599578817762369);
                            var_40 -= ((-31 ^ (arr_66 [i_19 - 1] [i_16] [i_17] [19] [i_19])));
                        }
                    }
                }
            }
            arr_68 [i_16] [10] [i_15] = (((arr_60 [i_16] [i_15] [6] [i_15]) ? (arr_60 [i_16] [0] [12] [i_16]) : 1));

            for (int i_20 = 3; i_20 < 19;i_20 += 1)
            {
                arr_71 [i_20] [1] [i_16] [i_16] = (!1);
                /* LoopNest 2 */
                for (int i_21 = 0; i_21 < 20;i_21 += 1)
                {
                    for (int i_22 = 0; i_22 < 20;i_22 += 1)
                    {
                        {
                            arr_77 [i_16] = var_6;
                            var_41 = ((1 ? (arr_64 [i_20 - 3] [13] [13] [i_21]) : 172));
                            var_42 = 0;
                            arr_78 [i_16] [i_16] = -var_6;
                        }
                    }
                }
                var_43 = var_2;
                /* LoopNest 2 */
                for (int i_23 = 1; i_23 < 1;i_23 += 1)
                {
                    for (int i_24 = 0; i_24 < 20;i_24 += 1)
                    {
                        {
                            var_44 = (min(var_44, 127));
                            var_45 = (!1);
                            var_46 = (-4190981894233505592 + var_10);
                            var_47 = (!var_1);
                            arr_84 [i_16] [i_24] [1] [i_23] [i_24] [0] = 1;
                        }
                    }
                }
            }
        }
        for (int i_25 = 0; i_25 < 20;i_25 += 1)
        {
            arr_87 [16] [1] [i_25] = ((11968588768157828918 ? (min((arr_70 [i_15] [i_25] [i_25]), (84 && 6528))) : (((arr_54 [i_25]) ? 105 : -0))));
            var_48 -= 65535;
            var_49 = ((+(((arr_74 [18]) ? (arr_72 [i_15] [i_15] [2] [i_15]) : (arr_64 [10] [i_15] [i_25] [i_25])))));
        }
    }
    #pragma endscop
}
