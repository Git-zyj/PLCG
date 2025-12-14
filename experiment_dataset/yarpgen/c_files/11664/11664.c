/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11664
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((1073741823 ? -118 : 7746543103127245748));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_19 = (1192675436 - -579458671161979326);
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_20 = 1125899906842623;
                                var_21 = ((((var_17 - var_10) - (-7746543103127245777 - var_12))) - (var_0 + var_14));
                            }
                        }
                    }
                    var_22 = max((max(8658, (arr_11 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 3] [i_1 + 2] [i_1]))), (((((((arr_11 [i_2] [i_1] [i_1 - 4] [i_0] [9] [i_0]) / -128005879))) && var_12))));
                    arr_15 [i_0] [i_1] [i_2] = var_5;
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_23 = var_0;
                                var_24 = -var_1;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 17;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                {
                    arr_30 [i_7] [i_7] = (i_7 % 2 == zero) ? (((var_17 ? ((-(((arr_22 [i_7]) << (((arr_25 [i_7] [i_7] [i_9]) - 32)))))) : var_0))) : (((var_17 ? ((-(((arr_22 [i_7]) << (((((((arr_25 [i_7] [i_7] [i_9]) - 32)) + 114)) - 7)))))) : var_0)));
                    var_25 = ((max(var_12, (min(var_17, var_17)))));
                    arr_31 [i_7] [i_8] [i_7] [15] = ((var_5 && (((-((var_14 ? var_3 : -263935478)))))));
                }
            }
        }
    }
    #pragma endscop
}
