/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113590
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, var_3));

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_15 = ((((max(((-9223372036854775796 ? -416619789390608844 : (arr_0 [i_0]))), ((max(var_4, (arr_0 [i_1]))))))) ? (arr_1 [i_0]) : ((var_9 ? var_10 : ((-9223372036854775799 ? 2294982309 : 4340006832825267438))))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        var_16 = (((((~(min(3320312387, 0))))) ? (((arr_8 [i_2]) ? 3320312387 : (arr_8 [i_2]))) : ((~(((arr_9 [i_0] [i_2]) ? 4151906184 : 231))))));
                        var_17 = (((((~-4340006832825267434) < (((max((arr_2 [i_1]), (arr_9 [i_2] [i_2]))))))) ? (min(4284742349535131062, (arr_11 [i_0 - 1] [i_2] [i_3] [i_2]))) : ((((((0 ? var_3 : (arr_3 [i_3])))) ? (((arr_8 [3]) ? (arr_8 [i_3]) : 0)) : (var_0 || 1))))));
                        var_18 |= ((98 ? ((((arr_11 [i_0 - 1] [i_0 - 1] [i_2] [i_2]) == (arr_11 [6] [i_1] [i_2] [i_3])))) : (arr_2 [11])));
                        var_19 = (((((39 ? ((1 ? -4340006832825267439 : 4228436017085948496)) : (arr_10 [i_3])))) ? var_1 : var_12));
                    }
                }
            }
            var_20 -= (max((max((arr_3 [i_0 - 1]), (arr_4 [i_0 + 1]))), (((87 <= ((2294982319 ? (arr_6 [i_0 - 1] [5]) : 4151906177)))))));
        }
        var_21 = (min((arr_7 [i_0] [i_0 + 1] [i_0 + 1]), (((var_0 + 5) ? 4503049871556608 : -10560150805724854073))));
        var_22 = (arr_5 [i_0]);
    }
    var_23 = var_13;
    var_24 = ((var_12 ? 0 : (max(2269814212194729984, -var_3))));
    #pragma endscop
}
