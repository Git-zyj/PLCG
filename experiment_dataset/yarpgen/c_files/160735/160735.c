/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160735
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_16;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_11 [i_2] [i_0] [i_2] [i_3] [i_2] [i_3] = arr_7 [i_0] [i_0] [i_1] [i_3];
                            var_18 = (min(var_18, ((min((214172311 == 0), 123)))));
                        }
                    }
                }
                var_19 = (((max((arr_8 [i_0] [i_0] [i_0]), -var_11)) < var_9));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 18;i_5 += 1)
        {
            {
                arr_19 [i_4] = (((((((min((arr_3 [i_4] [i_5 + 1]), (arr_5 [i_4] [i_5] [i_4])))) ? (arr_5 [i_4] [i_4] [i_4]) : (arr_3 [i_5 + 1] [i_4])))) ? ((((var_16 ? var_14 : (arr_15 [i_4] [i_4]))) / (arr_12 [i_4] [i_4]))) : ((((var_16 ? var_13 : 0))))));

                /* vectorizable */
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    var_20 = (arr_17 [i_6] [i_5 - 1] [i_5 - 1]);
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            {
                                arr_27 [i_4] [i_4] [i_4] [i_4] [i_8] = (~2067139095);
                                var_21 -= 1589963709;
                            }
                        }
                    }
                    arr_28 [i_4] [i_4] [i_4] = (i_4 % 2 == zero) ? ((((3862025008460270781 | -71) >> (((arr_9 [i_4]) ? var_11 : 0))))) : ((((3862025008460270781 | -71) >> (((((arr_9 [i_4]) ? var_11 : 0)) - 2497999573)))));
                    arr_29 [i_4] [i_4] [i_4] [i_4] = ((var_0 ? 70 : (arr_18 [i_5 - 1])));
                }
                for (int i_9 = 1; i_9 < 18;i_9 += 1)
                {
                    var_22 = (((((max(-2067139095, var_3))) && (!214172311))));
                    arr_34 [i_4] [i_4] = ((((!(!4827))) && (((((0 ? 0 : 127)) - (((min(var_9, (arr_15 [i_5] [i_9 - 1]))))))))));
                }
                for (int i_10 = 1; i_10 < 18;i_10 += 1)
                {
                    var_23 = (((6011410645741171915 || 2962830124) ? (((((92 ? 233 : 4561126453485474052))))) : (((-2147483647 - 1) * (arr_1 [i_4])))));
                    arr_38 [i_4] = ((+((-163 % (min((arr_30 [i_10 - 1] [i_10 - 1] [i_10]), 1))))));
                }
                var_24 = (min(var_24, ((((((60708 ? 0 : (-2147483647 - 1)))) | -3818785456419902485)))));
                arr_39 [i_4] [i_4] [i_4] = (((((-(~-2067139096)))) >= (min(1, (arr_8 [i_5 - 1] [i_5 - 1] [i_4])))));
                var_25 = ((min((((92 == (arr_33 [i_4] [i_5 - 1] [i_4])))), (((arr_23 [i_4] [i_5 - 1] [i_4]) - var_2)))));
            }
        }
    }
    var_26 += 2147483647;
    #pragma endscop
}
