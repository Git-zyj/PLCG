/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155107
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= ((var_9 ? (min(var_8, var_5)) : ((min((max(var_1, var_11)), var_10)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_14 -= ((((((arr_0 [i_1]) ? (arr_0 [i_0]) : var_6))) ? ((var_7 ? (arr_0 [i_0]) : -9065848024749451479)) : (((max((arr_0 [i_0]), (arr_0 [i_1])))))));
                var_15 = (max((max(var_9, 0)), (((var_3 ? (arr_0 [i_1]) : (arr_3 [i_0]))))));
            }
        }
    }
    var_16 = var_2;
    #pragma endscop
}
