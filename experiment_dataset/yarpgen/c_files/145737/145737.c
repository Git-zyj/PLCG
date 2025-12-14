/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            {
                var_15 = (((max((arr_1 [i_0]), 1))) ? (((!(((var_5 ? (arr_0 [i_0] [i_1 - 4]) : var_12)))))) : 1);
                arr_5 [i_0] [i_0] [i_1 - 1] = -1424962313;
                var_16 = ((((((arr_3 [i_1 - 1] [i_1 - 4]) ? var_2 : 0))) ? (arr_0 [i_0] [i_1]) : ((min(((var_1 <= (arr_2 [i_1]))), (arr_4 [i_1]))))));
            }
        }
    }
    #pragma endscop
}
