/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_12 ^= var_9;
                arr_6 [i_0] = max((((((var_11 ? 0 : 10108112)) >> (((arr_3 [i_1] [i_0]) - 151649106))))), ((-(arr_4 [i_1]))));
                var_13 *= (((10108095 ? 4284859183 : (!var_8))));

                /* vectorizable */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    var_14 |= ((10108110 + (arr_9 [i_1 + 2] [i_1 - 1] [i_1 - 2] [i_1])));
                    var_15 = (min(var_15, 10108095));
                    var_16 = 126;

                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        var_17 = (((10108096 <= 10108115) ? -5267350748269602124 : 4284859183));
                        arr_13 [i_3] [i_3] = 2655556584;
                        var_18 = 14495437128154789038;
                        arr_14 [i_0] [0] [i_1 - 2] [i_2 + 2] [i_3] [i_3 + 2] = ((9223372036854775807 ? -258965285087991575 : 10108107));
                        arr_15 [i_0] [i_1] [i_1] &= var_1;
                    }
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        arr_18 [i_0] [i_0] [i_0] [i_4] = ((!(arr_11 [i_1 - 1] [i_1 - 1] [i_2 + 1] [i_1 - 1])));
                        var_19 ^= var_1;
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            var_20 |= 10108095;
                            var_21 = -258965285087991598;
                        }
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            var_22 |= (((((10108093 ? var_3 : 63))) ? -0 : ((0 ? var_10 : 4284859183))));
                            var_23 = -31;
                            arr_26 [1] [i_7] [1] [i_7] = (((arr_12 [i_2 + 2] [i_7]) ? 392940139911685719 : var_0));
                        }
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            var_24 = (max(var_24, (~-10108091)));
                            var_25 -= 13765736154400249237;
                            arr_30 [i_0] [i_0] [i_1] [i_2] [1] [i_8] = var_5;
                            var_26 = (min(var_26, (((~(arr_21 [i_0] [i_0] [i_0] [i_0]))))));
                        }
                        for (int i_9 = 0; i_9 < 18;i_9 += 1)
                        {
                            var_27 = (min(var_27, ((1073741823 & (arr_28 [i_0] [i_1 - 1] [i_2])))));
                            var_28 = (1 % 1);
                            arr_33 [i_0] = 4284859196;
                            var_29 = var_3;
                            var_30 = var_11;
                        }
                        arr_34 [i_0] [i_1] [i_2] [i_2] = 1073741823;
                        var_31 = (!var_7);
                        var_32 = ((var_11 >> (var_10 - 3228614569179149325)));
                    }
                }
                for (int i_10 = 2; i_10 < 16;i_10 += 1)
                {
                    var_33 = ((+(min(96, (((arr_28 [i_10] [i_1] [i_0]) + var_4))))));
                    var_34 = 71;
                }
            }
        }
    }
    var_35 = (1073741822 + 8467234052925994121);
    #pragma endscop
}
