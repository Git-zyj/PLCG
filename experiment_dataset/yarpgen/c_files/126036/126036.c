/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126036
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_13 = (var_12 ? var_1 : 7551);

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                var_14 ^= 4294967295;
                var_15 = ((max(1, (arr_0 [i_0]))));
                arr_8 [i_0] [i_1] [i_2] = var_5;
            }

            /* vectorizable */
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                var_16 = (min(var_16, (~-488762679)));
                var_17 = ((var_12 ? -1 : 1));
            }
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                arr_14 [i_4] [i_4] = ((6 ? var_2 : var_11));
                var_18 = (((arr_13 [i_4] [i_1] [i_0] [i_0]) ? (((var_11 ^ var_10) ? 3273698005 : (arr_6 [11] [i_4]))) : ((((1 - 65535) ? (arr_6 [i_0] [i_0]) : ((127 ? var_10 : 1)))))));
                var_19 = (arr_13 [i_0] [i_1] [i_1] [i_4]);
                var_20 = (arr_3 [i_0] [6]);
            }
            /* vectorizable */
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                var_21 = (min(var_21, var_6));
                var_22 = -var_11;
                var_23 = (min(var_23, var_8));
                var_24 ^= var_8;
            }
            var_25 = (min(var_25, 16519));
        }
        for (int i_6 = 2; i_6 < 14;i_6 += 1)
        {
            var_26 *= var_9;

            /* vectorizable */
            for (int i_7 = 1; i_7 < 14;i_7 += 1)
            {
                var_27 = 1;
                var_28 = var_5;
                var_29 = (max(var_29, (arr_2 [i_7 - 1] [i_6 + 1] [i_6])));
                var_30 = (16519 <= -var_3);
                var_31 = 16523;
            }
            for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
            {
                var_32 = (min(var_32, (((!((((((48728 ? 4120254231 : 4120254231))) * (var_1 | var_10)))))))));
                var_33 = var_7;
            }
            for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
            {

                /* vectorizable */
                for (int i_10 = 4; i_10 < 13;i_10 += 1)
                {
                    arr_29 [i_0] [i_0] = -56;
                    var_34 = (arr_25 [i_10 - 1]);
                    arr_30 [i_10] = (arr_2 [i_0] [1] [i_0]);
                }
                var_35 = (arr_4 [i_0] [i_0] [i_0] [i_0]);
                var_36 ^= ((((((arr_3 [i_6 - 1] [i_6 - 1]) * (arr_3 [i_6 + 1] [i_6 - 2])))) ? 23451 : ((-(arr_24 [i_0] [i_6 - 2] [i_9])))));
                var_37 = var_3;
            }
        }
        for (int i_11 = 0; i_11 < 15;i_11 += 1)
        {
            var_38 = var_5;
            var_39 = (arr_6 [i_0] [i_11]);

            for (int i_12 = 0; i_12 < 15;i_12 += 1)
            {
                var_40 = var_5;
                arr_38 [i_11] [i_11] [4] = (((((~((((arr_2 [i_0] [8] [i_12]) < (arr_2 [i_12] [i_11] [i_0]))))))) ? (-16519 < 1) : (((var_8 >= (min((arr_26 [14] [i_12]), (arr_31 [i_0] [i_0] [i_12]))))))));
            }
            var_41 += var_9;
        }
        /* vectorizable */
        for (int i_13 = 0; i_13 < 15;i_13 += 1)
        {
            var_42 = ((var_2 ? -16519 : (8796084633600 << 1)));
            var_43 *= ((-(arr_13 [i_13] [i_13] [i_0] [i_0])));
            var_44 = (min(var_44, var_2));
        }
        var_45 -= var_4;
        var_46 = (min(var_46, 43596));
    }

    for (int i_14 = 0; i_14 < 23;i_14 += 1)
    {
        /* LoopNest 3 */
        for (int i_15 = 0; i_15 < 23;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 23;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 23;i_17 += 1)
                {
                    {

                        for (int i_18 = 0; i_18 < 23;i_18 += 1)
                        {
                            arr_57 [i_14] [i_14] = 1;
                            var_47 *= (((var_3 ? var_4 : (arr_56 [i_17] [i_16] [i_15] [i_14]))) >= 63);
                            var_48 += (((((((min(var_12, var_10))) ? 1 : var_7))) / var_3));
                            var_49 = (-1 * 119);
                        }
                        var_50 += ((-16510 == ((min(var_5, var_3)))));
                        var_51 = arr_51 [i_14] [i_15] [i_15] [i_16] [i_16] [i_17];
                    }
                }
            }
        }
        arr_58 [i_14] = 31457280;
        arr_59 [i_14] = 65535;
    }
    /* vectorizable */
    for (int i_19 = 0; i_19 < 12;i_19 += 1)
    {
        arr_63 [i_19] = 1;
        var_52 *= (((((6106352351925296238 ^ (arr_10 [i_19] [8] [i_19])))) ? (((1 <= (arr_26 [i_19] [i_19])))) : var_0));
        var_53 = (~20148);
        var_54 = (max(var_54, var_9));
        var_55 = 941948563;
    }
    var_56 = var_5;
    var_57 = (min(var_57, 16519));
    #pragma endscop
}
