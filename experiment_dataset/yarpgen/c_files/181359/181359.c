/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((-(max(var_4, var_10))))) >= ((var_0 - (max(var_5, 130528126))))));
    var_13 = ((-var_1 == (min(var_2, (var_9 | 13)))));
    var_14 = (-(max(((max(var_2, 8))), ((-2147483645 ? 532253564 : var_5)))));
    var_15 = (min((221 - var_10), (((min(var_4, var_9)) - (((-1 ? 3762713731 : var_1)))))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            arr_6 [i_0] [i_1 - 1] = ((max(var_3, var_2)));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        {
                            arr_15 [i_0] [i_0] [i_2] [i_3] [i_0] = (max((((var_7 ? 532253576 : 131068))), (((((var_11 ? var_8 : var_6))) ? var_11 : ((max(242, var_0)))))));
                            var_16 -= (~(~21));
                        }
                    }
                }
            }
        }

        for (int i_5 = 1; i_5 < 9;i_5 += 1)
        {
            var_17 += (-((-((max(14, var_6))))));
            arr_18 [11] [i_0] [4] = ((((max(-2023346125, var_4))) ? (max((max((-9223372036854775807 - 1), var_0)), 250)) : ((max(0, var_10)))));
            var_18 = var_6;
            var_19 += (-9223372036854775807 - 1);
        }
        arr_19 [i_0] = (max(((var_11 | ((var_4 ? var_0 : -5508338076904593327)))), ((((max(var_6, var_10)) > (var_2 < var_7))))));
    }
    #pragma endscop
}
