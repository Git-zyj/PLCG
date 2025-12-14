/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160101
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max((((253 ? ((max(17, var_12))) : var_6))), ((((16 ? var_15 : var_11)) * var_4))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_21 = (max((((arr_4 [i_1]) ^ (max((arr_3 [2] [i_0] [i_0]), 2)))), ((((arr_4 [i_0]) ? var_18 : ((max(17, (arr_2 [i_0] [i_1] [i_1])))))))));
                var_22 ^= (((arr_4 [i_0]) ? (((!(!var_13)))) : (((arr_1 [i_1] [i_1 + 2]) ? var_6 : (((!(arr_4 [i_0]))))))));
            }
        }
    }
    var_23 ^= var_19;
    var_24 = var_12;
    #pragma endscop
}
