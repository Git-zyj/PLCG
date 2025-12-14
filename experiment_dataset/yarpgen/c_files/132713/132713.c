/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= var_15;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_2] = 1998723290;
                    arr_11 [i_0] [i_0] [i_0] [i_2] = -16024;
                }
            }
        }
    }
    var_17 = ((0 ? ((((245 ? 1910946209 : -9223372036854775799)))) : (max(((max(var_14, var_4))), (min(16024, var_8))))));
    #pragma endscop
}
