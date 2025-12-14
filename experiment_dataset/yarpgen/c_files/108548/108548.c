/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108548
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        var_16 = (~var_10);
        arr_3 [12] [i_0] = 41;
        var_17 = var_7;
        arr_4 [1] = (((((~var_5) + 2147483647)) << (6279477307184144409 - 1037459481)));
        arr_5 [i_0] [7] = (((((var_5 ? var_0 : var_4))) ? var_9 : ((var_3 ? var_15 : var_3))));
    }
    var_18 = var_11;
    var_19 = var_7;

    for (int i_1 = 2; i_1 < 10;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {

            /* vectorizable */
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                var_20 = ((~((var_9 ? var_11 : var_11))));
                var_21 = var_6;
            }
            /* vectorizable */
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                var_22 = ((870264415 ? 598865117 : var_1));
                var_23 = (~-598865144);
            }
            /* vectorizable */
            for (int i_5 = 2; i_5 < 10;i_5 += 1)
            {

                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    arr_22 [i_1] [i_1] [i_1 + 1] [i_1 - 1] [i_1] [i_1] = ((var_0 ? var_0 : var_8));
                    var_24 = (-598865118 ? -598865104 : var_2);

                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        var_25 = var_7;
                        arr_27 [i_5] [i_5] [i_5 - 2] [i_5] [8] [7] [1] = (var_11 != var_9);
                        var_26 = (~var_15);
                    }
                }
                for (int i_8 = 3; i_8 < 8;i_8 += 1)
                {
                    arr_31 [i_1] [i_1 - 2] [i_5 - 2] [i_5 + 1] = ((var_12 < 56) ? (~var_4) : ((var_6 ? 132 : 3167826898390838328)));

                    for (int i_9 = 2; i_9 < 10;i_9 += 1)
                    {
                        var_27 -= var_11;
                        var_28 -= (var_9 <= var_10);
                        arr_34 [i_1] [i_2] = (((~var_14) > (~var_5)));
                    }
                }
                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {
                    var_29 = var_15;
                    arr_37 [i_10] [i_5] [8] [i_10] = var_11;
                }
                var_30 -= (((((var_13 ? var_10 : var_8))) ? ((-598865116 ? -598865104 : var_15)) : 1235431305));
                var_31 = ((var_3 ? ((var_14 ? var_11 : var_11)) : var_14));
            }
            var_32 = (max(var_32, (((((~(var_9 <= var_11)))) ? ((max(var_11, ((max(var_9, var_4)))))) : (max(((max(var_5, var_12))), ((var_0 ? 1530085763272231700 : -4918038403013155228))))))));
            var_33 = (((max(2007683395, ((var_4 ? var_12 : -3590087552506527980)))) | ((max(var_7, (max(var_11, var_7)))))));
            arr_38 [i_1 - 1] [i_2] = (max((((((var_12 ? -1488125615 : var_5))) ? ((var_14 ? -1377611193 : var_1)) : var_12)), var_14));
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 12;i_11 += 1) /* same iter space */
        {
            arr_42 [i_1] = ((var_14 ? ((var_13 ? var_10 : var_2)) : 34));
            var_34 = ((-7 <= (((var_3 ? var_12 : var_6)))));
            var_35 = ((var_9 ? ((var_7 ? var_4 : var_4)) : var_2));
            var_36 = (max(var_36, -var_0));
            arr_43 [i_1] = (((54 <= var_13) != var_14));
        }
        for (int i_12 = 0; i_12 < 12;i_12 += 1) /* same iter space */
        {

            for (int i_13 = 0; i_13 < 12;i_13 += 1)
            {
                var_37 = (((((max(var_3, var_7)))) ? var_9 : ((((max(var_14, var_9))) ? (max(6308711793267149513, var_4)) : (max(var_15, -593387011))))));
                arr_51 [1] [i_12] [i_1 + 1] = (((((var_7 | 2187658174598892367) ? (max(-702455376341344417, var_14)) : -948826030)) & var_7));
            }
            for (int i_14 = 0; i_14 < 12;i_14 += 1)
            {
                arr_54 [i_1] [i_1] = (max(-29829, (max(var_8, (max(4470038536669315729, var_15))))));
                arr_55 [i_1] [i_12] [i_14] = (max((max((((7084583288787357112 ? var_11 : var_9))), (max(var_3, var_7)))), 104));

                /* vectorizable */
                for (int i_15 = 0; i_15 < 12;i_15 += 1)
                {
                    var_38 = ((var_11 ? var_5 : var_4));
                    arr_58 [2] [i_14] [i_12] [i_1] = ((((var_7 ? var_3 : var_11)) / var_9));
                }
            }
            arr_59 [8] = 412132796;
            arr_60 [i_1] [1] = (max(-var_4, ((((var_3 ? var_9 : var_13)) % ((max(var_9, var_12)))))));
        }

        /* vectorizable */
        for (int i_16 = 0; i_16 < 12;i_16 += 1)
        {
            var_39 = ((var_15 ? 3489079874 : (var_14 + var_13)));
            var_40 = (min(var_40, ((((~var_6) | var_14)))));
            arr_64 [i_16] = 130;
        }
        for (int i_17 = 0; i_17 < 1;i_17 += 1)
        {
            arr_68 [i_17] = (max((~var_1), var_3));
            arr_69 [i_17] [i_17] = var_15;
        }
    }
    var_41 -= max(((((max(var_3, var_2))) ? var_12 : var_14)), var_0);
    #pragma endscop
}
