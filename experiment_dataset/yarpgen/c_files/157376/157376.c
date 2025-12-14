/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= ((((10994480634551144962 ? var_7 : var_4)) >> (((max(var_3, var_7)) - 14351892514624494134))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_16 ^= (~((~(min(12936689459495514115, 4442361083182088016)))));
                    var_17 = var_8;
                    arr_6 [i_2] [i_2] [i_2] [i_2] &= (5510054614214037504 - 14004382990527463593);
                    var_18 = ((var_1 + (arr_3 [i_0] [i_2])));
                }
            }
        }

        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            var_19 = (min(var_19, (arr_5 [i_0] [i_0] [i_3])));
            arr_9 [i_0] = (+((((arr_2 [i_3] [i_3] [i_3]) ? 12936689459495514110 : 12555201274192345683))));
            var_20 = (((((arr_3 [i_0] [i_3]) ? 9071683850779678152 : (arr_8 [i_3] [i_3] [i_0])))) ? (min((((arr_5 [i_0] [i_3] [i_0]) / var_3)), 3163731961597792969)) : (max(18353435521858717937, (arr_0 [i_3] [i_0]))));
            arr_10 [i_3] [i_0] = (((((arr_8 [i_0] [i_0] [i_0]) ? var_1 : 15354508960196915691))) ? ((5891542799517205929 ^ (arr_4 [i_0] [i_0] [2]))) : (((arr_8 [i_0] [i_0] [i_0]) ^ (arr_4 [i_0] [i_0] [i_0]))));
            var_21 -= var_4;
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        var_22 = 1116892707587883008;
        var_23 = arr_12 [i_4];
    }
    var_24 = min(4062940361205103588, var_5);

    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        arr_16 [i_5] = (((arr_2 [i_5] [i_5] [i_5]) - (arr_14 [i_5])));
        var_25 = 18446744073709551615;
        var_26 = ((((+(((arr_5 [i_5] [i_5] [i_5]) - var_0))))) ? (((arr_2 [i_5] [i_5] [i_5]) ? 0 : (arr_2 [i_5] [i_5] [i_5]))) : ((9375060222929873471 ? var_11 : (((arr_5 [i_5] [i_5] [i_5]) + (arr_14 [i_5]))))));
    }
    #pragma endscop
}
