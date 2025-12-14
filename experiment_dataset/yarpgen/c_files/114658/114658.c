/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114658
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((10952287330685758736 > var_11) * var_17));

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {

            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                var_21 = ((10952287330685758736 && ((((var_19 & 7494456743023792888) ? ((-22 ? 7494456743023792860 : var_16)) : 55707)))));

                for (int i_3 = 2; i_3 < 10;i_3 += 1)
                {
                    arr_9 [9] [i_1 + 2] = ((!((10882721587816466590 > (var_15 && var_8)))));
                    arr_10 [i_0] [i_0] [i_1 - 2] [i_2] [i_3] = 104;
                }
            }
            arr_11 [i_0] [2] = (((((~(4213925274565194695 > var_19)))) && ((((((2 ? 234 : var_16))) ? (((var_11 ? 18 : var_0))) : (4894160169218120076 | var_11))))));
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_22 = (!var_16);
            arr_15 [i_0] [i_0] [7] = 111;
        }

        for (int i_5 = 2; i_5 < 10;i_5 += 1) /* same iter space */
        {
            var_23 = (((29974 << 1) ? var_5 : -1));
            var_24 = ((var_6 ? 52 : (((!(var_8 - 53329))))));
            var_25 = ((var_17 ? 19444 : 35570));
            arr_18 [i_0 - 2] [i_0 - 2] = ((((1 ? var_17 : 10882721587816466605)) << (!var_0)));
            var_26 = 29973;
        }
        for (int i_6 = 2; i_6 < 10;i_6 += 1) /* same iter space */
        {
            arr_22 [i_0] [i_0] [i_0] = -64;
            arr_23 [i_0] = ((var_7 << (((((~44170) + 44195)) - 24))));
        }
        var_27 = ((var_7 ? (!-100) : (((-86 + 2147483647) << (29965 - 29965)))));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
    {
        arr_27 [i_7] [i_7] = ((116 ? (var_16 && var_4) : var_5));
        var_28 = (!98);
        var_29 = ((2968 * (2286515830805966704 / 35577)));
        var_30 = -var_1;
        arr_28 [i_7] [i_7] = (!var_0);
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
    {
        var_31 = (((~35562) ? ((-(11828009632975744129 * 236))) : (~var_5)));
        var_32 = ((!((((var_17 * 1) ? (~-26462) : (-126 / var_7))))));
        arr_32 [3] [i_8] = (((((18446744073709551597 << (21375 - 21356)))) && (17407080487500727266 > 21381)));
        var_33 *= ((((!(!var_1))) && (var_17 ^ 6618734440733807477)));
    }

    for (int i_9 = 2; i_9 < 24;i_9 += 1)
    {
        var_34 = (((!(((51 ? 28 : 26638))))));
        var_35 = (((((var_9 | 1) > (~var_7))) ? (~204) : (((!(!127))))));
        var_36 = var_5;
        var_37 = (170 && 2147483647);
    }
    #pragma endscop
}
