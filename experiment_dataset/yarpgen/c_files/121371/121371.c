/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121371
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_7 [i_0] = (((!(arr_1 [i_0 + 1]))));
                var_17 = var_3;
                var_18 = ((+(((((arr_4 [i_0] [i_1] [i_1]) ? 13684882345062266652 : var_1)) - 4761861728647284963))));
            }
        }
    }
    var_19 = (min((((min(var_11, var_15)) / 4761861728647284963)), (max((var_7 / 4761861728647284963), var_1))));
    #pragma endscop
}
