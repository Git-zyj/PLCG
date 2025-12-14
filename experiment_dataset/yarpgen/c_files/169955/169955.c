/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169955
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += ((var_12 ? ((-(max(16, -910100174)))) : var_4));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_17 = ((((((!(arr_5 [i_2] [i_1] [i_0]))))) - (((var_12 + 9223372036854775807) << (((((arr_4 [i_0] [i_2]) + 2597611321603468788)) - 16))))));
                    var_18 = ((((-1108079889 / (((arr_5 [2] [4] [i_2]) ? (arr_3 [i_0]) : -54))))) ? ((~(min((arr_1 [i_2]), var_10)))) : (~23628));
                }
            }
        }
    }
    var_19 = (min(var_19, (((~(max(1, (~var_14))))))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            {
                var_20 = ((((!(((var_0 ? 22217 : var_0))))) ? (((((min(var_3, (arr_4 [i_4] [i_4]))) + 9223372036854775807)) << (((((arr_11 [i_3]) ? 2147483624 : var_2)) - 2147483624)))) : (((arr_6 [i_3]) ? (arr_12 [5]) : ((0 ? var_8 : (arr_12 [i_3])))))));
                arr_13 [i_3] [8] = (((54 & (-11125 % 15510))));
            }
        }
    }
    #pragma endscop
}
