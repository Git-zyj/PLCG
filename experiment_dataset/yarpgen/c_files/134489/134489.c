/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134489
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = (min((((((min(var_0, 1548976277))) ? var_4 : (min(1548976277, var_4))))), var_5));
        arr_5 [i_0] = (arr_3 [i_0] [i_0 - 1]);
        arr_6 [i_0] = (2745991019 % 127);

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_11 = ((!(((((var_5 ? -48 : var_3))) == (arr_9 [i_0] [i_0 - 1] [i_0 - 1])))));

            for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
            {
                arr_13 [i_0] [i_1] [i_2] [i_1] = ((((-(min(var_1, var_0)))) - (((max(var_0, 65535))))));
                arr_14 [i_0 - 1] [i_0 - 1] [i_0 - 1] [5] = ((((var_6 ? 12 : 9078783565398025978)) >> (((min(((var_6 - (arr_9 [i_0 - 1] [i_1] [i_2]))), var_7)) + 4198001880444817571))));
            }
            for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
            {
                var_12 = ((((max(var_6, 11549879871056450431))) ? ((((arr_1 [i_0] [i_0 - 1]) + (arr_1 [i_0] [i_0 - 1])))) : ((3537395741 ? 53 : 1486937426))));
                var_13 = (min((-14763 || var_10), ((!((min(48, 114)))))));
            }
        }
        for (int i_4 = 2; i_4 < 10;i_4 += 1) /* same iter space */
        {
            var_14 *= (~var_9);
            var_15 = (min(var_15, (((-((((max(1486937403, 1))) ? (var_5 - 1) : 164)))))));
            /* LoopNest 3 */
            for (int i_5 = 1; i_5 < 10;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 9;i_7 += 1)
                    {
                        {
                            arr_28 [i_0] [i_4] [i_4] = (min((((var_8 ? var_0 : (arr_22 [i_4 - 2] [i_4 - 2] [i_4 - 1] [i_4 + 2])))), (min(var_8, var_1))));
                            var_16 -= (arr_21 [i_0] [i_0] [10]);
                        }
                    }
                }
            }
            arr_29 [i_4] = ((((var_9 ? var_3 : (arr_24 [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1]))) - (((min(192, 1))))));
        }
        /* vectorizable */
        for (int i_8 = 2; i_8 < 10;i_8 += 1) /* same iter space */
        {

            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                arr_35 [i_0] = -48;
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 12;i_11 += 1)
                    {
                        {
                            arr_41 [i_0] [i_0] [i_0] [i_0] [i_0] = (2808029870 == 138);
                            arr_42 [0] = var_8;
                        }
                    }
                }
                var_17 = ((6494094873886998213 ? -7202091314024508418 : 3813573672));
            }
            var_18 = (min(var_18, (((524272 + ((4238119592 ? 254 : -14684)))))));
        }
        for (int i_12 = 2; i_12 < 10;i_12 += 1) /* same iter space */
        {
            arr_45 [i_0] [i_12] &= (((((((min(var_0, var_3))) ? var_8 : (max(3435273598, var_8))))) ? 16748641392864059587 : (((var_3 ? -2222659718520110676 : (arr_43 [i_0 - 1] [i_0 - 1] [i_12 + 1]))))));
            arr_46 [4] [6] = ((var_7 & 2686398506627375025) ? (((var_6 ? (4095366497535076508 % var_10) : 2251799813685247))) : ((((min(1, var_8))) ? var_0 : 1698102680845492017)));
        }
    }
    /* vectorizable */
    for (int i_13 = 1; i_13 < 1;i_13 += 1) /* same iter space */
    {
        arr_49 [i_13] = var_5;

        for (int i_14 = 0; i_14 < 12;i_14 += 1)
        {

            for (int i_15 = 0; i_15 < 12;i_15 += 1)
            {
                arr_56 [i_14] [1] [i_14] = ((!(((0 ? var_2 : var_10)))));
                arr_57 [i_14] [i_14] [i_15] = 250;
                arr_58 [i_13] [i_14] [i_13] [0] = (arr_48 [i_13 - 1] [i_13 - 1]);
            }
            for (int i_16 = 1; i_16 < 1;i_16 += 1)
            {
                arr_61 [i_14] [i_16] [1] [i_14] = ((-(arr_12 [4] [i_16 - 1] [i_16] [i_16])));
                arr_62 [i_13] [i_14] [i_14] = ((((var_2 ? 2053 : var_5)) / (((1483830558 ? var_10 : 252)))));
            }
            var_19 = -197;
            arr_63 [i_14] [i_13] [i_14] = ((((6 && (arr_22 [i_13] [i_13] [i_13] [i_14]))) ? var_8 : 255));
            arr_64 [0] [0] [i_14] |= ((21920 ? var_4 : var_8));
        }
        arr_65 [i_13] [i_13] = ((~((var_4 ? var_7 : var_9))));
    }
    /* vectorizable */
    for (int i_17 = 1; i_17 < 1;i_17 += 1) /* same iter space */
    {
        arr_68 [i_17] [i_17] = (-var_3 - 0);
        var_20 = (max(var_20, 255));
        arr_69 [i_17 - 1] [0] |= 2037554163316665576;
        arr_70 [i_17] = 3877293039;
    }
    /* LoopNest 3 */
    for (int i_18 = 1; i_18 < 20;i_18 += 1)
    {
        for (int i_19 = 0; i_19 < 22;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 22;i_20 += 1)
            {
                {
                    var_21 = (min((var_4 - var_9), (min((arr_76 [i_18 + 1] [i_18 - 1] [i_18 + 2]), 14763))));
                    /* LoopNest 2 */
                    for (int i_21 = 0; i_21 < 22;i_21 += 1)
                    {
                        for (int i_22 = 2; i_22 < 18;i_22 += 1)
                        {
                            {
                                arr_83 [i_20] = ((((max(var_10, var_2))) || (arr_80 [i_18] [i_18] [i_20] [8] [i_19])));
                                arr_84 [i_20] [i_20] [i_20] = (min((arr_73 [i_22 + 4] [i_19] [i_18 + 2]), (!var_5)));
                                var_22 = 0;
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = ((((max(var_7, var_5))) || ((((((~(-2147483647 - 1)))) ? ((var_4 ? var_9 : var_3)) : var_3)))));
    var_24 = ((var_1 > (((4309200486276034946 ? 1 : 1)))));
    #pragma endscop
}
