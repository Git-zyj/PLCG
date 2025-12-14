/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161508
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = 0;
                arr_6 [10] [i_1] = (-(min(((max(113, 50870))), 151)));
                arr_7 [i_1] = ((min(81, 6588259824779815792)));
            }
        }
    }
    var_20 = (min(var_20, ((min((min((min(var_1, 11)), var_6)), 5)))));
    var_21 = max(-0, (((((41834 ? var_14 : var_18)) - 119))));

    /* vectorizable */
    for (int i_2 = 1; i_2 < 19;i_2 += 1)
    {
        var_22 = ((((9835145024666048291 ? 9597654872585728931 : 10042581436881560991)) << ((((0 ? 180 : 85)) - 34))));

        for (int i_3 = 4; i_3 < 18;i_3 += 1)
        {
            arr_13 [i_2 + 1] [i_2 + 1] [i_2 + 2] = 11858484248929735830;
            arr_14 [i_2] = var_10;
            var_23 ^= (0 ^ 192);
        }
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 17;i_5 += 1)
            {
                {
                    var_24 = (min(var_24, (var_8 / 7)));
                    arr_21 [8] [i_2] [8] [i_4] = var_13;
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 18;i_7 += 1)
                        {
                            {
                                var_25 = var_19;
                                arr_28 [i_6 + 1] [i_4] [i_6] [i_6] [i_6 - 1] [2] = 11;
                                var_26 -= ((127 >> (((-127 - 1) + 130))));
                                var_27 = 51958;
                            }
                        }
                    }
                    var_28 = 14;
                }
            }
        }
    }
    for (int i_8 = 1; i_8 < 7;i_8 += 1)
    {

        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {
            arr_34 [i_8] [i_9] [i_8] &= var_12;

            for (int i_10 = 1; i_10 < 9;i_10 += 1) /* same iter space */
            {
                arr_39 [i_8] [i_9] [i_9] [i_9] = ((((var_5 + (min(var_10, 0)))) < var_11));
                var_29 += (((11858484248929735815 ? 49152 : 127)));
                arr_40 [i_8] [i_8] = ((max(var_5, var_7)));
            }
            for (int i_11 = 1; i_11 < 9;i_11 += 1) /* same iter space */
            {
                var_30 += var_12;
                arr_44 [i_8] [i_8] [i_9] [i_11] = (-127 - 1);
                var_31 -= ((var_3 < ((min((min(var_13, var_17)), ((min(76, (-127 - 1)))))))));
            }
            arr_45 [i_8] = (-127 - 1);

            /* vectorizable */
            for (int i_12 = 1; i_12 < 10;i_12 += 1)
            {
                var_32 = 29;
                var_33 = (min(var_33, 5439474346400908811));
                arr_48 [i_8 + 4] [i_9] [i_12] [i_12] |= 8192;
            }
            var_34 = (min(var_34, (min(((max(var_7, -68))), (max(var_19, -126))))));
        }
        arr_49 [i_8] = (((min(105, (222 <= 217)))));
    }
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 18;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 18;i_14 += 1)
        {
            {
                arr_56 [i_13] [i_13] = 127;
                var_35 = var_19;

                for (int i_15 = 0; i_15 < 18;i_15 += 1)
                {
                    var_36 = (((min((max(31, 4374705998398513496)), 14072038075311038129)) >> (var_0 - 188)));
                    arr_59 [i_13] [i_14] = ((min(180, 10332711984650142481)));
                }
                for (int i_16 = 0; i_16 < 18;i_16 += 1) /* same iter space */
                {
                    var_37 = (min((max((min(71, 0)), (!var_17))), ((min(65535, var_1)))));
                    arr_64 [6] [i_13] = min(var_9, 0);
                }
                for (int i_17 = 0; i_17 < 18;i_17 += 1) /* same iter space */
                {
                    arr_68 [i_13] = (min((min((min(22886, 5311832960394802867)), 210)), (((185 < 0) - 0))));

                    /* vectorizable */
                    for (int i_18 = 4; i_18 < 16;i_18 += 1) /* same iter space */
                    {
                        var_38 ^= ((!(-127 - 1)));
                        arr_72 [i_13] = ((-(-127 - 1)));
                        arr_73 [i_13] [i_13] [i_13] = (~227);
                    }
                    for (int i_19 = 4; i_19 < 16;i_19 += 1) /* same iter space */
                    {
                        arr_76 [16] [i_14] [i_17] [i_13] = 127;
                        var_39 = (((min((min(17768660623825962056, 110)), 211)) >> ((((max(10332711984650142481, var_19))) - 60425))));
                        arr_77 [i_13] [i_13] [i_13] [i_13] [i_13] = (min(var_18, var_4));
                    }
                    var_40 = ((10 ? (((((min(225, 7168))) ? (48630 * 16905) : 16906))) : -14521446341785947982));
                }
            }
        }
    }
    #pragma endscop
}
