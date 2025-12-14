/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((min(91, (min(-115, -96))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_11 = (max(var_11, -91));
        arr_2 [i_0] [i_0] = (((var_5 / var_7) | var_7));
        var_12 *= 31;
        arr_3 [i_0] = (((((-(arr_0 [i_0])))) ? var_3 : var_8));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_13 -= (min((max(1, -97)), (((var_4 && (arr_4 [i_1]))))));
        arr_6 [i_1] = (((~255) % (var_7 % var_2)));
        arr_7 [i_1] = (((!562949953421311) && (((48655 / (-32 && -8960))))));
        var_14 = (((min(58720256, 1))) ? ((((!(arr_0 [i_1]))))) : (max((min(var_2, 40119)), (1073741824 && 4236247069))));

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            var_15 = (~var_7);
            arr_11 [i_1] [i_1] [i_2] = ((((min(2478428277, var_4))) && (var_2 && var_4)));
        }
        for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
        {
            var_16 &= ((6589120954380863547 ? (((var_0 && var_7) ? (~-27) : var_6)) : (((!(arr_5 [i_3]))))));

            /* vectorizable */
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                arr_16 [i_4] [i_4] [i_3] [i_1] = ((-(arr_4 [i_1])));
                arr_17 [i_4] [i_1] [i_1] = (arr_0 [i_4]);
            }

            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                arr_20 [i_1] [i_1] [i_3] [i_3] = ((+(((arr_10 [i_1] [i_3] [i_5]) / var_0))));
                var_17 *= min(((1 ? 605719861 : (arr_5 [i_1]))), var_0);
            }
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                arr_23 [i_1] = (var_4 % 29);
                var_18 = (!var_6);
            }
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                var_19 = (min(var_0, var_1));
                var_20 = (25402 && 3904867321);
                arr_27 [i_1] [i_1] [i_1] [i_7] = ((8527543506171857365 * (!33524)));
                var_21 = (((((min(var_3, var_8)))) ? ((min((min(var_6, (arr_14 [i_1] [i_3] [i_7]))), (!var_0)))) : ((~(min(var_2, 39099))))));
            }
            /* vectorizable */
            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                arr_32 [i_1] [i_8] [i_8] = ((8527543506171857336 ? -1065929682 : (-15757 % 974451178356473371)));
                var_22 *= -8330;
            }
        }
        for (int i_9 = 0; i_9 < 17;i_9 += 1) /* same iter space */
        {
            arr_35 [i_1] [i_9] [i_1] = (~-8527543506171857366);
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 17;i_11 += 1)
                {
                    {
                        arr_41 [i_9] [i_9] [i_10] = ((((((arr_29 [i_1] [i_10]) ? var_2 : (arr_39 [i_1] [i_1] [i_1] [i_1] [i_9])))) && (((var_7 | (arr_39 [i_1] [i_9] [i_9] [i_10] [i_9]))))));
                        arr_42 [i_1] [i_9] [i_1] = (min((((arr_24 [i_1] [i_1] [i_1] [i_1]) % var_4)), ((max(-26, -21)))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 17;i_12 += 1) /* same iter space */
    {
        var_23 = var_0;
        var_24 += (((arr_15 [i_12] [i_12] [i_12] [i_12]) ? -88 : 4419104625024668211));
        arr_45 [i_12] [i_12] = 2534705303;
        var_25 = (((~var_4) ? (-816629835284918299 / 18446744073709551615) : (~14905)));
    }
    var_26 = var_8;
    #pragma endscop
}
