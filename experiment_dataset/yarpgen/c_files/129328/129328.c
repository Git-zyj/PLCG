/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129328
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;
    var_12 = max(75, var_10);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] = (((((~((max(143, var_1)))))) ? ((max(-15427, -15419))) : 184));
                var_13 |= ((114 ? -32759 : 194));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_14 -= ((var_4 ? (min(126, ((var_2 ? var_3 : var_7)))) : (min(((var_3 ? 126 : 141)), 27989))));
                            arr_14 [i_0] [i_0] [1] [1] = ((((min(-var_9, ((min(12272, 876)))))) ? (arr_2 [i_2 - 2]) : (((!((min(34, var_6))))))));
                            var_15 -= (((((((var_2 ? -5607 : (arr_8 [i_0] [i_0] [3])))) ? ((max((arr_5 [9] [i_1]), 60))) : 255)) >> (147 - 123)));
                            arr_15 [i_0] [i_0] [i_2] [i_3] = (!var_3);
                            arr_16 [i_0] [2] [16] [i_3] = ((((max(213, var_0))) >= (arr_8 [i_2 + 1] [i_2 + 1] [i_1])));
                        }
                    }
                }
                var_16 = 129;
                arr_17 [i_1] = (min((((((204 ? 4911 : -12273))) ? -21986 : 16855)), (((!127) ? -18492 : 142))));
            }
        }
    }
    #pragma endscop
}
