/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min((min(var_4, var_4), (min(var_6, var_7)))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    arr_6 [i_0] [2] [i_0] [8] &= (min(((min((~var_4), (~83)))), (((~2147483647) ? var_12 : -var_2))));
                    var_14 = (min(((0 ? 8672541911451120883 : -83)), ((24304 ? 18370813737840581305 : 2147483647))));
                }
            }
        }
    }

    for (int i_3 = 2; i_3 < 23;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 2; i_4 < 24;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
            {

                /* vectorizable */
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    var_15 = (max(var_15, var_6));
                    arr_16 [i_4] = (!var_10);
                }
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    var_16 += var_7;
                    var_17 = (min(var_17, ((min(75930335868970327, 3659579215)))));
                    var_18 = ((185 ? 24289 : ((min(1095216660480, 0)))));
                }
                var_19 = (min(((~((var_3 ? var_2 : var_6)))), (((var_12 ? -var_0 : var_6)))));
                var_20 = (((min((~var_5), (((var_4 ? var_6 : var_12)))))) ? ((-(min(var_11, var_11)))) : (((((min(var_9, var_11))) ? var_10 : (min(var_9, var_12))))));
            }
            for (int i_8 = 0; i_8 < 25;i_8 += 1) /* same iter space */
            {

                for (int i_9 = 0; i_9 < 25;i_9 += 1) /* same iter space */
                {
                    arr_25 [i_4] [4] [i_8] = var_5;
                    arr_26 [i_9] [i_9] [i_4] = (min((((!((min(13790, var_7)))))), (((((var_7 ? var_9 : var_1))) ? var_8 : (((var_4 ? var_1 : var_12)))))));
                    var_21 = ((((min(4294967266, 3659579215))) ? ((((((var_9 ? var_12 : var_11))) ? var_3 : ((var_2 ? var_12 : var_9))))) : ((8607243831719668201 ? 10699261182958102499 : 2335445052))));
                }
                /* vectorizable */
                for (int i_10 = 0; i_10 < 25;i_10 += 1) /* same iter space */
                {
                    var_22 = (min(var_22, var_5));
                    arr_29 [i_4] [i_4] [i_8] [i_4 + 1] [i_4] [i_3 - 2] = var_4;
                    arr_30 [i_4] = (((((var_5 ? var_1 : var_0))) ? (~var_1) : -19517));
                }
                var_23 = (min((((((var_1 ? var_12 : var_7))) ? (min(var_12, var_2)) : var_3)), var_1));
                arr_31 [i_8] [i_4] [i_8] [11] = (((min((min(var_11, var_4)), (((var_12 ? var_9 : var_7)))))) ? ((((min(var_2, var_6))) ? ((min(var_6, var_7))) : (min(var_4, var_2)))) : (((min(var_12, var_5)))));
            }
            /* vectorizable */
            for (int i_11 = 0; i_11 < 25;i_11 += 1) /* same iter space */
            {
                var_24 = (max(var_24, ((-var_2 ? ((var_4 ? var_5 : var_4)) : (((var_10 ? var_7 : var_0)))))));
                arr_35 [i_4] [i_4 + 1] [i_4] = ((var_6 ? 24638 : ((var_6 ? var_7 : var_1))));
                arr_36 [i_3] [i_3] [i_4] = ((-134217728 ? 41232 : 3069));
            }
            var_25 = (min(var_25, (((~(((!var_1) ? 18446744073709551610 : (!var_6))))))));
        }
        for (int i_12 = 0; i_12 < 25;i_12 += 1)
        {
            arr_39 [i_3 + 1] [i_3] [i_3] = var_2;
            var_26 = ((-((2748950805592525977 ? ((1612151388 ? 1494846573 : 4367499632604709347)) : 15))));
            arr_40 [i_3] [i_12] [24] = (min(-var_4, var_7));
        }
        var_27 = (min(((((min(var_9, var_8))) ? (min(var_5, var_2)) : (min(var_2, var_8)))), (min(var_5, ((var_4 ? var_2 : var_6))))));
        var_28 = (max(var_28, ((min(((~((var_9 ? var_8 : var_10)))), ((~((min(var_9, var_8))))))))));
    }
    for (int i_13 = 2; i_13 < 23;i_13 += 1) /* same iter space */
    {
        arr_43 [i_13] [i_13 + 2] = (min((min((~var_2), ((min(var_4, var_8))))), ((((!var_3) ? ((var_8 ? var_4 : var_1)) : (~var_6))))));
        arr_44 [i_13] = (min(((min(-var_4, var_1))), ((var_8 ? (min(var_2, var_11)) : (~var_10)))));
    }
    #pragma endscop
}
