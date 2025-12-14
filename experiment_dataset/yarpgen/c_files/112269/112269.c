/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112269
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_14 ? (((((((max((-32767 - 1), 11497)))) <= var_2)))) : (min(var_7, (var_7 <= var_0)))));
    var_19 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] = (1270984664 || 1270984665);
                arr_6 [i_0] [i_1] = (arr_3 [i_0]);
            }
        }
    }
    #pragma endscop
}
