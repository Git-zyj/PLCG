/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102392
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = -var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((~(((var_3 * var_5) ? (arr_4 [i_1]) : (arr_5 [i_1])))));
                arr_7 [i_0] [i_1] = ((((max((((arr_2 [i_1] [10]) * var_2)), (min(var_4, var_2))))) <= (~var_18)));
            }
        }
    }
    var_21 = var_9;
    #pragma endscop
}
