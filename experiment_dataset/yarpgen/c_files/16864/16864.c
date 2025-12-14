/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16864
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_20 = ((((((var_0 ? 128 : var_10))) & ((var_2 << (((arr_0 [i_0] [i_0]) - 31156)))))));
                var_21 = ((((((((var_1 ? var_7 : 19438))) ? (((!(arr_3 [7] [i_1])))) : 24))) ^ ((-(arr_3 [i_0] [i_1])))));
            }
        }
    }
    var_22 = ((((((!(((var_13 ? 2507075370807985314 : 2507075370807985314))))))) % (~var_0)));
    #pragma endscop
}
