/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100512
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_17 = (arr_2 [8]);
                arr_5 [i_0] = (((arr_1 [i_1] [i_0]) ? (arr_2 [i_0 + 1]) : (136 <= 120)));
                arr_6 [i_0] = ((((((arr_4 [i_0 - 1]) ? (arr_4 [i_0 + 1]) : (arr_4 [i_0 - 1])))) ? ((min((arr_4 [i_0 + 2]), (arr_4 [i_0 + 2])))) : (arr_4 [i_0 + 1])));
                var_18 = -103;
            }
        }
    }
    var_19 ^= ((var_9 ? (((var_4 ? var_7 : var_6))) : var_3));
    #pragma endscop
}
