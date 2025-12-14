/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (3 * ((max(var_3, var_6))));
    var_14 |= (!var_5);
    var_15 = (var_5 <= 17767);

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_16 = 6761084395885130596;
            var_17 -= (((((min(-19658, var_7)) + var_0))) ? (max(4109071512221246, (((17316 ^ (arr_5 [i_0] [i_0])))))) : 1);
        }
        var_18 = (arr_4 [i_0]);
        arr_6 [i_0] = arr_0 [i_0];

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 3; i_3 < 8;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    {
                        var_19 = (14283771402470152216 > (((var_6 ? var_0 : ((var_8 ? (arr_4 [i_2]) : var_0))))));
                        var_20 = max((!17949268159847572706), (!4109071512221237));

                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            arr_15 [i_0] [i_0] [i_4] [i_0] [i_0] = arr_8 [i_0];
                            var_21 = (max(var_21, (4109071512221238 + 18446744073709551602)));
                            var_22 = var_4;
                        }
                        var_23 -= (((((arr_2 [i_0 + 1]) <= ((var_5 ? var_2 : (arr_10 [i_0] [i_0]))))) ? (((!(arr_9 [i_0] [i_0])))) : (!15861965000182926464)));
                    }
                }
            }
            var_24 = (min(var_24, ((((((!(((var_4 ? (arr_1 [i_0] [i_0]) : 15633384488906717945)))))) | ((var_3 ? (((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_4 [i_2]) : var_0)) : (!var_3))))))));
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            var_25 = (min(var_25, ((max(var_11, var_12)))));
            var_26 = (((21297 <= (min(var_10, (arr_14 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]))))));
        }
    }
    for (int i_7 = 0; i_7 < 11;i_7 += 1)
    {
        arr_23 [i_7] [i_7] = 65535;
        var_27 = ((var_12 + ((((max(18446744073709551609, (arr_20 [i_7])))) ? 18446744073709551602 : (min(var_3, 2584779073526625155))))));
        var_28 = ((!((((arr_20 [i_7]) ? (arr_22 [i_7] [i_7]) : 14107709081025627144)))));
        var_29 = (((!936432666624782560) > (((((arr_20 [i_7]) + 2147483647)) >> (((arr_20 [i_7]) + 314))))));
        var_30 -= min(18446744073709551601, (18175417191729621719 >= 1342371721754819686));
    }
    #pragma endscop
}
