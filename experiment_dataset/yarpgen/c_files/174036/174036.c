/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174036
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((32150 * (((!(12373183120517624637 + 12))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = 1904907366;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((16273447262864631059 ? var_3 : -1904907366));
                        var_15 = (arr_5 [i_1]);
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 20;i_4 += 1)
                    {
                        arr_14 [i_1] = (((arr_8 [i_0] [i_1] [i_4 - 1] [i_4 + 1]) ? (arr_8 [i_0] [i_4 - 1] [i_4 + 1] [i_4]) : var_2));

                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            arr_17 [i_0] = (((arr_5 [i_4 - 1]) > var_5));
                            var_16 *= var_6;
                            var_17 = ((2 ? (~0) : -12186));
                            arr_18 [i_5] [i_5] [i_1] = var_12;
                        }
                        for (int i_6 = 1; i_6 < 17;i_6 += 1)
                        {
                            arr_22 [i_1] [i_1] [i_6] [i_1] [i_6] [i_0] [i_0] = ((~(arr_16 [i_0] [i_4 - 1] [i_4] [i_4] [i_4 - 1] [i_4 - 1] [i_6])));
                            arr_23 [i_0] [i_0] [i_2] [i_4 + 1] [i_6] [i_6 + 2] = (!var_13);
                        }
                        arr_24 [i_0] [6] = (((((~(arr_2 [i_4 + 1] [i_0])))) ? -0 : var_3));
                        arr_25 [i_0] [i_1] [11] [i_4] [i_4 - 1] = (((arr_13 [i_4 - 1] [i_4 + 1] [i_1]) ? var_0 : var_13));
                        arr_26 [i_0] [i_0] = var_5;
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            {
                                arr_31 [i_7] [i_7] [i_0] [i_1] [i_7] = ((!(((5179218583980642801 ? 1 : ((2 ? 1567375414 : var_3)))))));
                                var_18 = ((+((((min((arr_4 [i_1] [i_1] [i_8]), 3))) ? ((var_6 ? 2173296810844920557 : 18446744073709551595)) : ((18446744073709551615 ? (arr_19 [i_0] [i_0] [i_0] [i_0] [i_0]) : var_5))))));
                                arr_32 [i_0] [i_0] [i_7] [i_0] [i_8] [i_1] = ((!((max(((max(var_4, var_1))), (max(var_10, var_4)))))));
                                arr_33 [i_7] [i_1] = (min(-18, (min((!var_6), (max(-3137171907263490942, 0))))));
                            }
                        }
                    }
                    arr_34 [i_1] [i_0] = (((min((arr_2 [i_1] [i_2]), (arr_2 [i_0] [i_2])))) > 2173296810844920557);
                }
            }
        }
        var_19 = 18446744073709551615;
    }
    var_20 = (min((min(var_1, var_5)), 1936380822));
    #pragma endscop
}
