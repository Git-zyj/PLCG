/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((var_0 ^ (~171))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_21 = (max(var_21, ((min((max(((95 ? 1001658964907394867 : var_8)), (arr_0 [i_1] [i_1]))), -17445085108802156763)))));
                arr_4 [i_0] [i_1] = (max((((arr_0 [i_0 - 1] [i_0]) ? var_17 : (4261373985621330247 && var_11))), (min((~4095), 171))));
                arr_5 [i_0] [8] = (arr_3 [i_0]);
                var_22 += 5784313622865975727;
                var_23 += ((95 > ((~(var_19 & var_9)))));
            }
        }
    }
    #pragma endscop
}
