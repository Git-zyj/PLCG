/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178146
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= -9223372036854775801;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_17 = min(1, (((arr_2 [i_0]) ? 1474507545479274496 : 2630819870)));
        var_18 = (((((arr_2 [i_0]) && (arr_1 [i_0]))) ? ((((arr_1 [i_0]) && 1371247757))) : (arr_1 [i_0])));
    }
    var_19 ^= (var_13 && var_3);
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 12;i_5 += 1)
                        {
                            {
                                var_20 = (max((((!(arr_2 [i_5])))), (min((min(3302800703207598390, (arr_14 [i_1] [i_2]))), ((min(2146959360, 1371247757)))))));
                                arr_17 [i_1] [i_2] [i_3] [i_5] = (-2147483647 - 1);
                                var_21 = (((max((min((arr_2 [i_2]), (arr_12 [i_1] [i_3]))), (arr_16 [i_1] [i_2] [i_3] [i_3] [i_5]))) <= 65526));
                            }
                        }
                    }
                }
                var_22 = (((((arr_0 [i_1]) ? 2923719557 : var_5)) - (min(var_6, (arr_14 [i_1 + 2] [i_1 + 2])))));
            }
        }
    }
    #pragma endscop
}
