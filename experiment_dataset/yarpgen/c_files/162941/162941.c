/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (~((-2147483636 ? 808660021 : 32719)));
        var_16 = (((((13380 || ((((arr_0 [i_0]) ? var_10 : 7614)))))) + (~13380)));
    }
    for (int i_1 = 2; i_1 < 7;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
        {
            var_17 = (((-7 < -25656) << (((arr_5 [i_1 + 3] [i_1 + 1]) + 25342))));

            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                var_18 = (0 - -21056);
                var_19 ^= (~13380);
            }
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
        {

            for (int i_5 = 2; i_5 < 7;i_5 += 1)
            {
                var_20 = (-32767 != var_14);
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        {
                            var_21 = (min(var_21, var_11));
                            var_22 = (((((var_14 || (arr_9 [i_4] [i_4] [i_7])))) <= (!var_3)));
                        }
                    }
                }
            }
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                var_23 = ((var_11 ? 714426929 : var_4));
                var_24 = (min(var_24, -9602));
                var_25 = (((((-170990616 & (-32767 - 1)))) || (((0 << (-12270 + 12283))))));
                var_26 ^= 25656;
                var_27 &= 254;
            }
            for (int i_9 = 3; i_9 < 10;i_9 += 1)
            {

                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    arr_34 [i_1] [i_4] [i_9] [i_10] [i_10] = var_4;
                    arr_35 [i_1 - 2] [i_4] [i_1] [i_1] = (-var_13 != var_11);
                    arr_36 [i_4] [i_4] [i_4] = ((-23720 <= ((var_11 ? var_15 : -18025))));
                }
                for (int i_11 = 0; i_11 < 11;i_11 += 1) /* same iter space */
                {
                    var_28 = var_10;
                    var_29 += (~var_9);
                    var_30 = (max(var_30, var_0));
                }
                for (int i_12 = 0; i_12 < 11;i_12 += 1) /* same iter space */
                {
                    arr_41 [i_1] [i_4] [i_12] = (-512 && 30949);
                    var_31 = arr_30 [i_4];
                }
                for (int i_13 = 0; i_13 < 11;i_13 += 1)
                {
                    arr_44 [i_4] = var_11;
                    arr_45 [i_1 + 3] [i_1] [i_4] [i_4] [i_1] [i_13] = (6 > 13210);
                    var_32 |= ((496 ? var_2 : -13191));
                }
                arr_46 [i_1 - 1] [i_1] [i_4] = ((-23999 || (arr_20 [i_9 + 1] [i_9 - 3] [i_9 - 3] [i_1 + 3] [i_1 + 4])));

                for (int i_14 = 0; i_14 < 11;i_14 += 1)
                {
                    var_33 = (min(var_33, -7592));
                    var_34 *= 13190;
                    var_35 = (min(var_35, (((~((-8361 ? 888720964 : (arr_48 [i_1] [i_4] [i_9] [i_14]))))))));
                }
                var_36 = var_14;
                var_37 = var_8;
            }
            for (int i_15 = 2; i_15 < 9;i_15 += 1)
            {
                var_38 = var_0;
                arr_52 [i_4] [i_4] [i_15] = (~(arr_33 [i_1 + 4] [i_4] [i_15] [i_15]));
            }
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 11;i_16 += 1)
            {
                for (int i_17 = 3; i_17 < 10;i_17 += 1)
                {
                    {
                        var_39 = (min(var_39, ((var_12 ? (arr_1 [i_16]) : 0))));
                        var_40 = 22660;
                        var_41 |= -1211856219;
                    }
                }
            }
            var_42 += var_6;
        }
        arr_57 [i_1] = 21240;
    }
    /* LoopNest 2 */
    for (int i_18 = 0; i_18 < 19;i_18 += 1)
    {
        for (int i_19 = 0; i_19 < 19;i_19 += 1)
        {
            {
                arr_62 [i_18] = (var_9 == 28119);
                arr_63 [i_18] [i_19] [i_19] = var_9;
                var_43 = (((((~var_9) | (1081847913 & 0))) << (((((~var_3) | ((-145041370 ? (arr_59 [i_18]) : var_4)))) - 32234))));
            }
        }
    }
    var_44 = ((27436 >> (((((((var_12 ? var_4 : var_11))) ? 2047 : ((9567 ? 10975 : var_10)))) - 2047))));
    #pragma endscop
}
