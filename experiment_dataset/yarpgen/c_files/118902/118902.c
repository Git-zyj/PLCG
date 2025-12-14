/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118902
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= 1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    arr_8 [i_0] [i_0] = (((252 <= 28672) ? (var_1 | 17293822569102704640) : (~var_0)));
                    arr_9 [i_0] = var_7;
                    var_15 = (min(var_15, ((!(((-717253678 % (max(-717468016, 57539)))))))));
                }
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    var_16 += ((!(~28664)));
                    arr_14 [i_3] [i_3] [6] = (8589934591 | 1363431979);
                    var_17 = (max(-23938, ((min(67108848, 11949)))));
                    var_18 += 1;
                    var_19 = (!32760);
                }

                for (int i_4 = 4; i_4 < 9;i_4 += 1) /* same iter space */
                {

                    for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
                    {
                        var_20 = (min(var_20, (!1383067673035098164)));
                        var_21 += min((~32765), -12765876571269591229);
                        arr_21 [i_0] [i_1] = 2199023255550;
                    }
                    for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
                    {
                        arr_24 [i_0] = 1;
                        var_22 = (max(var_22, var_13));
                        var_23 = -32760;
                        var_24 = -256;
                    }
                    arr_25 [i_0] [9] [i_4 - 4] = (max((var_11 < -603703081), (min((~239), (max(1104364338, var_9))))));
                    var_25 = 4220914647837722646;
                }
                /* vectorizable */
                for (int i_7 = 4; i_7 < 9;i_7 += 1) /* same iter space */
                {
                    var_26 = (!-1);
                    var_27 = 32756;
                }
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    arr_31 [i_8] [i_8] [i_1] [i_0] = (max(((-((-105 ? 65535 : var_13)))), var_5));

                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        var_28 -= (max((var_9 / 16492), (max((min(var_0, var_7)), (max(4294967295, -24965))))));
                        arr_36 [i_0] [i_0] [i_0] [i_0] = (!(((min(4398046510848, 3)))));
                    }
                }
                for (int i_10 = 2; i_10 < 8;i_10 += 1)
                {
                    arr_39 [i_0] [i_0] [i_10] [i_10] = (max(1, var_4));
                    var_29 = (min((104 ^ 255), ((((min(-2342, var_4))) & 10663711339693897625))));
                    arr_40 [i_0] [i_0] [i_0] [i_10] = (min((((-75 ? (18489 / 1) : 247))), (1897932088 * var_10)));
                    var_30 = (max(var_30, ((max(1, (!1))))));
                }

                for (int i_11 = 0; i_11 < 11;i_11 += 1)
                {
                    arr_43 [i_0] [i_0] [i_11] &= -var_7;
                    var_31 = (min(var_31, (((((!18446744073709551611) ? ((var_2 ? var_5 : -28228)) : -2671234645))))));
                }
            }
        }
    }
    var_32 = (min(var_32, ((((((!(((-25420 ? var_11 : var_11)))))) << (((~var_1) - 1996242840)))))));
    var_33 = (min(var_33, ((((var_13 & var_1) ^ (~1))))));
    var_34 = var_13;
    #pragma endscop
}
