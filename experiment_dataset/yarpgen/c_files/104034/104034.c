/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104034
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((((1 ? 46 : 210))) ? ((0 ? var_5 : var_11)) : (min(-64, var_1))))) ? (((var_16 >> (((~1151073070) + 1151073098))))) : ((((min((-32767 - 1), 10496))) ? 3267272068 : 13))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_21 = (min((((!(((49183 ? 46 : 49)))))), ((((((arr_9 [i_2] [i_0]) ? (arr_2 [i_2]) : var_6))) ? var_3 : (arr_4 [i_0])))));
                    arr_10 [i_1] = (~-10490);
                    var_22 = (((((var_3 ? ((var_19 ? (arr_7 [i_0] [i_0] [i_1] [i_2]) : var_12)) : (((arr_5 [i_0]) / var_3))))) ? ((1 ? (((64 ? -1 : 1))) : var_5)) : (((~(((arr_7 [i_1] [i_2] [i_2] [i_0]) ? (arr_2 [12]) : 65535)))))));
                    var_23 = (min(var_23, (((-((min(var_8, (arr_2 [i_1])))))))));
                }
            }
        }
    }
    var_24 = var_17;
    #pragma endscop
}
