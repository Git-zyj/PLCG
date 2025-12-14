/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_18 = (max((min((arr_1 [i_0]), (arr_1 [i_0]))), (arr_1 [i_0])));
                arr_4 [10] [6] |= (max(0, (((var_0 || (arr_0 [10]))))));
            }
        }
    }
    var_19 = (min(var_1, var_1));
    var_20 = ((!(((min(var_1, var_15))))));
    var_21 = var_15;
    #pragma endscop
}
