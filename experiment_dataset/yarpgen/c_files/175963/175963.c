/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_14 = -9223372036854775807;
                var_15 = 9223372036854775807;
                arr_6 [i_1] = (((-6168223221842990780 ? 20687 : (arr_0 [i_0 - 1]))));
                var_16 ^= (min(225, (arr_2 [i_0 + 1])));
            }
        }
    }
    #pragma endscop
}
