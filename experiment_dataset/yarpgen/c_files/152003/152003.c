/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152003
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_12 *= ((((min((arr_5 [i_1]), 2262279913))) ? ((max((arr_5 [i_1]), (arr_5 [i_1])))) : (max((arr_7 [i_0 - 2] [i_1]), var_5))));
                var_13 = ((((max((arr_0 [i_0] [i_0 - 1]), (arr_0 [i_0] [i_0 - 1])))) ? (arr_0 [i_0] [i_0 - 1]) : (((arr_0 [i_0] [i_0 - 1]) ? (arr_2 [i_0]) : (arr_0 [i_0] [i_0 - 1])))));
            }
        }
    }
    var_14 = (var_5 <= var_0);
    var_15 -= ((0 ? var_11 : ((((((var_3 ? var_9 : var_9))) ? var_8 : var_6)))));
    var_16 = 1;
    #pragma endscop
}
