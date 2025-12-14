/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_4 [i_0] |= 0;
        var_14 = 246;
        arr_5 [i_0] |= -2938;
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_15 += 28;

            for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
            {

                for (int i_4 = 3; i_4 < 24;i_4 += 1)
                {
                    var_16 = 13309933652050924509;
                    var_17 += 3980542145038963671;
                    arr_15 [i_1] [i_1] [i_2] [23] [1] [i_4] = 10;
                    var_18 ^= 28;
                }
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    var_19 = 1910260992;
                    arr_19 [i_2] [i_2] [i_2] [i_2] [i_2] [i_5] = 4294967291;
                    arr_20 [i_2] [i_2] = -141175380356538176;
                    arr_21 [i_2] [i_2] [i_3] [22] = 255;
                    arr_22 [19] [i_2] [i_2] = 2563340338461875212;
                }
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    var_20 = 27;
                    var_21 = 194;
                }

                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {

                    for (int i_8 = 1; i_8 < 24;i_8 += 1)
                    {
                        arr_32 [i_1] [2] [i_8] [23] [i_2] [i_3] = 4294967295;
                        var_22 = (max(var_22, 255));
                    }
                    var_23 = 4116853297;
                    var_24 += 139;
                    var_25 -= 3045514940;
                }
                for (int i_9 = 1; i_9 < 24;i_9 += 1)
                {
                    var_26 -= 1;
                    var_27 = (max(var_27, 2563340338461875212));

                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        arr_39 [i_1] [i_2] [i_2] [i_9] [i_10] = 314118298;
                        var_28 = 140737488355327;
                    }
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        var_29 = (max(var_29, 11857837271236689900));
                        var_30 = 53068;
                        var_31 |= 982020818;
                        arr_42 [8] [i_2] [i_3] [i_9 + 1] [i_11] = -86;
                    }
                }
                for (int i_12 = 0; i_12 < 0;i_12 += 1)
                {
                    arr_45 [i_2] [i_2] [1] [i_12 + 1] = 1024;
                    arr_46 [i_1] [21] [21] [i_2] = 18446744073709551615;

                    for (int i_13 = 0; i_13 < 25;i_13 += 1)
                    {
                        arr_49 [21] [23] [i_3] [i_2] [i_2] [i_13] [i_1] = 36;
                        arr_50 [i_13] [i_2] [i_1] = -403906398;
                    }
                    arr_51 [i_2] [i_2] = 254;
                }
            }
            for (int i_14 = 0; i_14 < 25;i_14 += 1) /* same iter space */
            {
                var_32 = 1;

                for (int i_15 = 0; i_15 < 25;i_15 += 1) /* same iter space */
                {
                    arr_58 [i_2] [11] = -1054;
                    arr_59 [i_1] [i_2] [i_2] [i_1] = 7739637641429507884;
                    var_33 = 15240;

                    for (int i_16 = 0; i_16 < 25;i_16 += 1)
                    {
                        var_34 = (min(var_34, 7457935486964682205));
                        arr_64 [i_1] [i_2] [i_14] [i_1] [i_2] = 9415;
                    }
                }
                for (int i_17 = 0; i_17 < 25;i_17 += 1) /* same iter space */
                {
                    arr_67 [7] [i_2] [i_2] [i_17] = 55737;
                    var_35 -= 4294967295;
                    var_36 = 4294967295;

                    for (int i_18 = 0; i_18 < 25;i_18 += 1)
                    {
                        arr_70 [i_1] [i_2] [i_2] [17] [i_1] = 7457935486964682205;
                        arr_71 [i_2] [i_2] [i_2] [19] = 1991032984;
                        arr_72 [20] [i_17] [i_2] [i_18] = 255;
                    }
                }
            }

            for (int i_19 = 2; i_19 < 23;i_19 += 1)
            {
                var_37 = 0;
                var_38 += 239;

                for (int i_20 = 0; i_20 < 25;i_20 += 1) /* same iter space */
                {
                    var_39 = -403906398;
                    var_40 = -9415;
                }
                for (int i_21 = 0; i_21 < 25;i_21 += 1) /* same iter space */
                {
                    var_41 = 13024;
                    var_42 ^= 403906407;
                }
            }
            for (int i_22 = 0; i_22 < 25;i_22 += 1)
            {

                for (int i_23 = 1; i_23 < 23;i_23 += 1)
                {
                    var_43 = 1;
                    arr_86 [i_1] [2] [i_2] [i_23 + 1] [i_2] = 4294967295;
                    var_44 = 1;

                    for (int i_24 = 0; i_24 < 25;i_24 += 1)
                    {
                        var_45 = (min(var_45, 7457935486964682216));
                        var_46 -= 4095;
                    }
                }
                arr_89 [i_2] [i_2] = 1;
                var_47 = 562460274513850397;
                arr_90 [i_1] [i_2] [i_2] [i_22] = 2967426591;
            }
            var_48 = (max(var_48, -403906427));
        }
        var_49 = 24;
        var_50 -= 2147483647;
        arr_91 [i_1] = 524287;
        arr_92 [i_1] = 36028792723996672;
    }
    var_51 = 1;
    var_52 = 1703111916;
    var_53 = 0;
    #pragma endscop
}
