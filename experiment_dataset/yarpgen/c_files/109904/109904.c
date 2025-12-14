/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109904
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_11 == var_10);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_0] [i_1 - 1] [i_2] [i_3] = var_7;
                            var_13 -= 252;
                            arr_10 [i_0] [23] [i_2] [i_3] [i_2] &= (min(((9348 ? ((min(var_9, 54925))) : 13307)), ((min((arr_8 [i_0]), 0)))));

                            for (int i_4 = 2; i_4 < 22;i_4 += 1) /* same iter space */
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_2] [i_2] [i_4] = -22825;
                                var_14 = (min(var_14, var_10));
                            }
                            for (int i_5 = 2; i_5 < 22;i_5 += 1) /* same iter space */
                            {
                                var_15 |= 0;
                                var_16 = (min((max((arr_6 [i_0] [i_1] [i_2] [i_3] [i_5]), (((arr_11 [i_0] [i_0] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_3] [i_5]) ? (arr_8 [10]) : var_11)))), ((min(var_9, 54312)))));
                                arr_17 [i_0] [i_1] [i_0] [0] [i_5 + 2] = 3;
                                arr_18 [i_0] [i_1] [i_2] [i_3] = ((!((((!var_1) ? -9223372036854775803 : (((max((arr_11 [i_5 - 2] [i_3] [i_1] [i_0] [i_2] [i_1] [i_0]), var_0)))))))));
                            }
                            arr_19 [i_0] [i_1 - 1] [i_2] [i_3] [i_1 - 1] = 1937697059;
                        }
                    }
                }
                arr_20 [i_0] [i_1] = (((((-7359665237846892692 ? 255 : 26572))) == (min(-2457249175469454430, var_5))));
            }
        }
    }
    var_17 = var_7;
    #pragma endscop
}
