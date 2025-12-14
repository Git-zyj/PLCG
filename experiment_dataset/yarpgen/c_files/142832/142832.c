/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142832
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_13 += ((var_9 || var_8) ? (((min(var_10, 202)))) : var_7);

        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
            {
                var_14 = var_2;
                var_15 = 2147483647;
                var_16 = ((((((max(6, var_0))) ? var_8 : (((6 >> (var_1 - 108871246)))))) >> ((179 >> (var_2 - 43678)))));
                arr_7 [i_0] = (max(var_6, -1995125278));
                var_17 = (((var_7 == 1419385227) * 1));
            }
            /* vectorizable */
            for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
            {
                arr_11 [i_3] [i_0] [i_0] = (var_6 >= 65535);
                var_18 += ((-var_1 % ((var_2 ? 179 : 77))));
                var_19 = var_4;

                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    var_20 = ((4 << (var_10 - 172)));
                    var_21 = 1364572637;

                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        arr_17 [i_0] [i_0] = (var_3 & var_6);
                        var_22 = (var_0 | var_1);
                        var_23 = var_5;
                    }
                    var_24 = ((((var_7 << (20883 - 20882))) % var_11));
                    var_25 = (!4095);
                }
                for (int i_6 = 4; i_6 < 17;i_6 += 1)
                {
                    arr_20 [i_0] [i_0] [i_0] [i_6] = var_11;
                    var_26 = (min(var_26, (var_6 >= var_1)));
                }
                arr_21 [i_0] [i_1] [i_0] = (var_9 ^ 4022534698);
            }
            /* vectorizable */
            for (int i_7 = 0; i_7 < 18;i_7 += 1) /* same iter space */
            {
                var_27 += ((4294967273 && (-32767 - 1)));
                var_28 = 2532875023;
            }

            /* vectorizable */
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {

                for (int i_9 = 1; i_9 < 1;i_9 += 1)
                {
                    arr_29 [i_0] [13] [i_8] [i_8] [1] [i_0] = (((var_2 - var_5) >= (var_11 - var_4)));
                    var_29 += (((var_2 - var_12) <= (var_5 <= var_12)));
                }
                var_30 += var_7;
            }
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 18;i_10 += 1)
        {
            arr_32 [i_0] = (var_3 * var_12);
            arr_33 [i_0] [16] [i_0] = ((272432580 ? 3 : 2979566679722949407));

            for (int i_11 = 0; i_11 < 18;i_11 += 1)
            {
                arr_37 [i_0] [i_10] = (5001 >= 245);
                var_31 = ((var_11 >> (207 - 205)));
            }
            for (int i_12 = 1; i_12 < 15;i_12 += 1)
            {
                var_32 = (((-2147483647 - 1) - 1155525289));

                for (int i_13 = 2; i_13 < 17;i_13 += 1)
                {
                    var_33 = ((166 ? 2147483647 : 7985780856854671410));
                    arr_46 [i_0] = ((5001 ? (var_4 == 90) : (var_9 || var_4)));

                    for (int i_14 = 4; i_14 < 17;i_14 += 1)
                    {
                        var_34 = var_2;
                        arr_49 [14] [i_0] [i_0] [i_0] [i_0] = -var_11;
                        arr_50 [i_0] [i_0] [i_10] [i_0] [i_12] [i_0] [i_14 - 4] = var_11;
                    }
                    for (int i_15 = 1; i_15 < 14;i_15 += 1)
                    {
                        var_35 = var_7;
                        var_36 += (((272432598 == 1) ? -1860493704 : (var_9 <= var_9)));
                        arr_53 [i_0] [i_0] [i_13 - 1] [i_15] = ((var_11 ? var_7 : var_7));
                        var_37 += (5081249900506897563 - 84);
                    }
                    for (int i_16 = 0; i_16 < 18;i_16 += 1)
                    {
                        var_38 = (var_5 || var_6);
                        var_39 = ((var_9 << (var_9 - 11197645714687609324)));
                        var_40 = (var_11 ? 4022534672 : 166);
                    }
                    var_41 = (~9747);
                }
                for (int i_17 = 2; i_17 < 16;i_17 += 1)
                {
                    arr_59 [i_0] [i_0] [i_0 + 1] [1] = 32759;
                    var_42 = ((var_0 ? 63813 : var_1));
                    var_43 = ((21023 ? (-2147483647 - 1) : var_6));
                    arr_60 [i_0] [i_12] [i_10] [i_0] = (65535 <= 90);
                    arr_61 [i_0] = var_2;
                }
                arr_62 [i_0] [i_0] [16] [11] = (735003427 + 5212);
                var_44 = var_9;
            }
        }
        /* vectorizable */
        for (int i_18 = 0; i_18 < 18;i_18 += 1)
        {
            var_45 = var_3;
            var_46 = ((((var_5 ? 4022534672 : 5208))) ? (~var_6) : 1);
            arr_65 [i_0] = (1 <= ((1479289543 ? 202 : 0)));
            var_47 += (var_11 + var_10);
        }
    }
    var_48 = (min((~var_3), (((min(1901551121064680718, 208)) >> 1))));
    #pragma endscop
}
