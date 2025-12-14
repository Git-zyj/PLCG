/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136859
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = (((((~(arr_1 [i_0] [i_0])))) ? (((7390639916776371721 == (arr_0 [i_0] [i_0])))) : (~var_7)));

        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            var_18 = (min((17060931805857486454 * var_3), (8399 % var_14)));
            arr_7 [i_1] = (max((((!((min(8638271246092651816, var_11)))))), ((-(8 > 2147483647)))));
        }
        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {
            var_19 = -22420;
            /* LoopNest 3 */
            for (int i_3 = 2; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        {
                            var_20 = ((-9223372036854775794 ? ((((3416516021 <= 164) % var_9))) : (min(-1586533309197129961, ((max(var_4, 0)))))));
                            arr_21 [i_0] [i_2 - 1] [i_3 - 1] [i_4] [i_3] = -1;
                        }
                    }
                }
            }

            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {

                /* vectorizable */
                for (int i_7 = 1; i_7 < 22;i_7 += 1)
                {
                    var_21 = (min(var_21, ((((-32767 - 1) ? (var_14 ^ -18893) : var_5)))));
                    arr_26 [i_0] [i_0] |= ((((((arr_8 [i_0] [i_7 - 1]) ? var_13 : (-2147483647 - 1)))) ? var_17 : (((0 ? -2083594503 : 1)))));
                    var_22 = (((-28158 ? -7511523963223464514 : var_14)));
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    var_23 = ((5015381489982638929 ? -4429126908917737730 : (12059469635688612719 / -47)));
                    arr_31 [i_0] = (~0);
                }
                arr_32 [i_6] [i_2] [i_0] = 1;
                var_24 = (max(((min((((66 < (arr_18 [i_6] [i_6] [i_6] [i_2 + 1] [i_0])))), 15281))), (((min(34676, (arr_5 [i_6] [i_6]))) - (((max(var_15, -15227))))))));
            }
            var_25 *= ((((min((((var_4 ? 1873781627 : 116))), (arr_30 [i_2 + 1])))) ? (((-(!28)))) : (((var_7 | 0) + -2601556416726218283))));
        }
        var_26 = (((~248) / ((1 ? 10545 : -1))));
    }
    for (int i_9 = 2; i_9 < 12;i_9 += 1)
    {
        var_27 = 8;
        arr_36 [i_9 - 2] = (((((-(72238109 || 4542613815519432957)))) ? (((~(18446744073709551615 > 0)))) : var_3));
    }
    var_28 = (!var_9);
    var_29 = 1;
    #pragma endscop
}
