/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127758
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_4 [i_0] [i_0] &= (((var_6 | (min(var_12, var_11)))));
        arr_5 [i_0] [i_0] = (((arr_1 [i_0]) ? (((!-6047215350407136644) ? (!var_14) : (arr_0 [12]))) : (((0 >= ((var_5 ? var_11 : var_1)))))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_15 = -63623;
        arr_9 [i_1] [i_1] = (max(237, 234));
        var_16 += ((var_3 ? (max(835407923, var_10)) : ((78 ? (min(2, 3925857374)) : ((((var_10 && (arr_8 [i_1])))))))));
        var_17 = 37;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
    {
        arr_12 [i_2] = var_12;
        arr_13 [i_2] [i_2] = -1;
        arr_14 [i_2] [i_2] = -20252;
    }
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        arr_17 [i_3] = (min((((253 == var_8) * -1)), var_10));
        var_18 = (min(-var_10, -1));
        arr_18 [i_3] = 152;
    }

    for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
    {
        arr_21 [i_4] = (((~65535) ? var_10 : var_12));
        arr_22 [i_4] = ((-((36 ? (arr_19 [i_4]) : var_0))));
    }
    for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
    {
        var_19 = (min(var_19, ((((((var_11 ? 79093964 : var_14))) ? (((((var_2 ? var_9 : var_9))) ? 66 : 15360)) : ((1551106368 ? (arr_16 [i_5]) : -44)))))));
        /* LoopNest 3 */
        for (int i_6 = 2; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 24;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 24;i_8 += 1)
                {
                    {
                        var_20 = ((((min((-4050580669776497782 & var_13), 186))) ? (1551106380 == 16906541765062493212) : (((1540202308647058404 == 113) + (-2309322494281441787 != var_4)))));
                        var_21 = 122;
                    }
                }
            }
        }
        var_22 = (min(var_22, ((((((var_5 ? 32761 : ((min(-20302, (arr_20 [i_5] [i_5]))))))) ? (min((~18446744073709551615), 1)) : ((((41 - -32751) ? 186 : -var_5))))))));
    }
    for (int i_9 = 0; i_9 < 25;i_9 += 1) /* same iter space */
    {
        var_23 = ((((min((min((arr_20 [i_9] [i_9]), 41)), var_9))) ? ((-1144790783 ? ((var_5 ? 3506212249 : 17478)) : (!16906541765062493217))) : (arr_20 [i_9] [i_9])));
        var_24 = (((55 ? 2147483647 : 288230376151711743)));
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            for (int i_11 = 2; i_11 < 24;i_11 += 1)
            {
                {
                    var_25 -= ((!(!-9223372036854775807)));
                    var_26 = (4095 * var_1);
                    var_27 = var_3;
                    var_28 += (((166 ? 4424522044098428980 : (arr_33 [i_11 - 1] [i_11 + 1]))));
                }
            }
        }
        var_29 += 112;
    }
    for (int i_12 = 1; i_12 < 16;i_12 += 1)
    {
        arr_44 [i_12] = ((var_14 ? ((-20 ? var_13 : 288230376151711743)) : ((2147475456 ? ((((arr_36 [i_12]) > (arr_27 [6] [i_12] [i_12])))) : (!var_8)))));

        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            var_30 = ((~var_3) % ((-((var_4 ? 187 : 26129)))));

            /* vectorizable */
            for (int i_14 = 2; i_14 < 16;i_14 += 1)
            {
                arr_51 [i_12] [i_13] [i_12] = ((-(((-9223372036854775807 - 1) ? 51533 : 206014285))));
                arr_52 [i_12] [5] [i_12] [5] = var_14;
                arr_53 [i_12] [i_14] [i_13] [i_12] = (((arr_8 [i_12 + 3]) ? 85 : var_1));
                arr_54 [i_12] [i_12] = (((arr_15 [i_13] [i_12]) ? 21 : (arr_24 [i_13])));
            }
            /* vectorizable */
            for (int i_15 = 1; i_15 < 16;i_15 += 1) /* same iter space */
            {
                var_31 = ((var_14 ? (arr_10 [i_12 + 1]) : 66));
                var_32 -= ((1 ? 30 : -6474082087344814007));
            }
            for (int i_16 = 1; i_16 < 16;i_16 += 1) /* same iter space */
            {
                arr_62 [i_12] [i_13] [i_12] = var_13;
                var_33 = (max(var_33, (((~(max((arr_55 [i_16 + 2] [i_13] [i_12 + 2]), 66)))))));
                arr_63 [i_13] [7] [i_12] = var_7;
                arr_64 [i_16] [i_12] [i_12] [i_12] = ((1 ? 18158513697557839896 : 31537));
            }
        }
        var_34 = (((((187 ? var_11 : (arr_27 [i_12] [i_12 + 3] [i_12])))) ? 44 : (arr_27 [23] [i_12 - 1] [i_12])));
        var_35 = (arr_57 [i_12] [i_12] [i_12] [i_12]);
    }
    var_36 = (((var_1 ? var_13 : ((min(14003, var_9))))));
    #pragma endscop
}
