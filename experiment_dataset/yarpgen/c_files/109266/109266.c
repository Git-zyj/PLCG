/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109266
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= (!1640663985);

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_19 = ((-((3787959671007866778 - (1738995938602559649 / -56)))));

        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            arr_5 [i_0] [10] |= (!1022);
            var_20 = 1640663985;
            var_21 = ((!(((65535 & (arr_3 [i_0] [i_0]))))));
        }
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_22 = (min((max(-var_12, -50)), (((min(1640663975, 3787959671007866789))))));
            var_23 = ((var_10 | (65535 - 3787959671007866778)));
            arr_9 [i_0] [i_0] = (-56 ^ 1);
            var_24 = (i_0 % 2 == 0) ? ((((min(15544409219803274620, ((((arr_8 [i_0] [i_2]) | 14))))) >> ((((-(max((arr_7 [i_0] [i_2] [i_2]), var_9)))) + 293))))) : ((((min(15544409219803274620, ((((arr_8 [i_0] [i_2]) | 14))))) >> ((((((-(max((arr_7 [i_0] [i_2] [i_2]), var_9)))) + 293)) - 55)))));
        }
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        var_25 = 4146550386912566342;
        var_26 = (min(((min(var_15, -1))), ((((1014 << (36 - 30)))))));
        var_27 = min(((((arr_7 [i_3] [i_3] [i_3]) && 14658784402701684838))), var_13);
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 10;i_5 += 1)
            {
                {

                    for (int i_6 = 3; i_6 < 11;i_6 += 1) /* same iter space */
                    {
                        var_28 = 1018;

                        for (int i_7 = 4; i_7 < 9;i_7 += 1)
                        {
                            var_29 = 4146550386912566332;
                            var_30 = (min(-1, (arr_19 [i_5])));
                            var_31 = ((((((var_4 > (arr_13 [i_3] [i_3])))) - (-8514 % 59904))));
                        }
                        var_32 = (-95 <= -550650874);
                    }
                    for (int i_8 = 3; i_8 < 11;i_8 += 1) /* same iter space */
                    {
                        arr_27 [i_8] [i_5] [i_5] [i_3] = 8;

                        for (int i_9 = 2; i_9 < 12;i_9 += 1) /* same iter space */
                        {
                            var_33 = var_14;
                            var_34 -= (!1);
                            var_35 = (max((((0 | 14658784402701684813) ? 14658784402701684838 : (~-75))), -124));
                            var_36 += (-2147483647 - 1);
                        }
                        /* vectorizable */
                        for (int i_10 = 2; i_10 < 12;i_10 += 1) /* same iter space */
                        {
                            var_37 = var_8;
                            var_38 += var_4;
                        }
                        for (int i_11 = 1; i_11 < 9;i_11 += 1)
                        {
                            var_39 = (-2147483642 - 5713267393647678595);
                            var_40 = (min(var_40, 64522));
                            arr_36 [i_3] [i_5] [i_3] [i_5] [i_8] [i_3] = var_17;
                            var_41 &= min((-32756 && var_17), ((max((arr_19 [4]), -2147483642))));
                        }
                        var_42 |= (arr_8 [i_5] [i_8 + 2]);
                    }
                    for (int i_12 = 3; i_12 < 11;i_12 += 1) /* same iter space */
                    {

                        for (int i_13 = 3; i_13 < 11;i_13 += 1)
                        {
                            var_43 = ((((65080 - -658370792) | (5408950136625126708 || 2056))));
                            arr_42 [i_3] [i_4] [i_4] [i_5] [i_5] [i_12] [i_4] = 199;
                        }
                        for (int i_14 = 0; i_14 < 13;i_14 += 1)
                        {
                            arr_46 [i_3] [i_4 + 3] [i_5] [i_5] [i_12 + 2] [i_14] = ((1 - ((~(arr_39 [i_5 + 1] [i_5 + 2] [i_5 - 1] [i_5 - 2])))));
                            var_44 = var_7;
                            var_45 += (min(0, 3838667722));
                        }
                        arr_47 [i_5] = (arr_12 [i_4 + 1] [i_4 + 3]);
                        var_46 = var_15;
                    }
                    for (int i_15 = 3; i_15 < 11;i_15 += 1) /* same iter space */
                    {
                        var_47 ^= ((!((((!-106) ^ -550650853)))));
                        arr_52 [i_15] [i_5] [1] = (arr_40 [i_3] [i_3] [i_4] [i_5 - 1] [5]);
                        var_48 = var_14;
                        var_49 = var_15;
                    }
                    arr_53 [i_3] [i_4] [i_5] |= (arr_33 [i_3] [i_3] [i_3] [i_4 + 3] [i_4] [i_5]);
                }
            }
        }
    }
    /* vectorizable */
    for (int i_16 = 0; i_16 < 12;i_16 += 1)
    {
        var_50 = (((-550650874 | var_2) - (arr_45 [i_16] [0] [0] [i_16] [0] [i_16] [i_16])));
        arr_58 [i_16] = 1;
    }
    var_51 = var_8;
    #pragma endscop
}
