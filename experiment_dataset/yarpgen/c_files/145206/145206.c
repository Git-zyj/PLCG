/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145206
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_16 ^= ((((var_2 ? (arr_4 [i_1] [6]) : var_9))) ? var_7 : (min((((var_8 ? var_14 : var_3))), (((arr_0 [8]) ^ 5354967089515983142)))));
                arr_6 [i_0] [i_1 + 3] [i_0] = ((+((((((536805376 >> (((arr_1 [i_0 - 3]) - 5515))))) && ((((arr_3 [i_0]) % var_12))))))));
            }
        }
    }
    #pragma endscop
}
