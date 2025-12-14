/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178637
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = min(-var_9, ((1 ? -432074919288327249 : 1487230976)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_15 = (((((arr_3 [i_0] [i_0]) == (arr_8 [i_0] [i_2]))) ? ((((arr_2 [i_2]) ? 1 : (arr_3 [0] [i_1])))) : (((arr_3 [i_2] [i_2]) ? 432074919288327249 : var_4))));
                    arr_9 [i_2] [i_1] = ((((var_3 + (-9223372036854775807 - 1))) - ((((arr_7 [i_0] [i_0] [i_2]) ? (arr_7 [i_0] [i_1] [i_2]) : (arr_7 [i_2] [i_0] [i_0]))))));
                    arr_10 [i_2] [i_1] [i_1] = (!9223372036854775807);
                }
            }
        }
    }
    var_16 *= ((((min((min(1, var_5)), var_6))) ? (((((var_4 ? (-9223372036854775807 - 1) : var_11))))) : ((1968499785 & (-32767 - 1)))));
    #pragma endscop
}
