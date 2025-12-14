/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189370
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, (~var_10)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] &= ((!(((~((min((arr_3 [i_0] [i_1]), (arr_4 [i_0] [i_1] [i_0])))))))));
                arr_6 [i_0] [i_1] [i_1] = (min(((min(-1, (arr_4 [i_0] [i_0] [i_0])))), (min(((min((arr_1 [i_0]), (arr_4 [i_0] [i_0] [i_0])))), (min((arr_2 [i_1]), 3420910555))))));
            }
        }
    }
    var_13 = -var_4;
    var_14 ^= ((((min(var_2, var_1))) <= var_4));
    var_15 = var_6;
    #pragma endscop
}
