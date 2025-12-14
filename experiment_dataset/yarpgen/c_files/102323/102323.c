/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102323
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] [i_0] = (((!var_1) ? (24 * 22) : var_6));
                arr_7 [i_0] [i_0] [i_1] = ((var_3 << (((((~232) + 253)) - 14))));
                arr_8 [i_0] [i_1] = ((var_7 ^ (arr_2 [i_1 + 1])));
                arr_9 [i_0] [i_1] = (((1 / var_2) + (((arr_4 [i_1 + 3] [i_1 - 1] [i_1 + 2]) * (arr_4 [i_1 + 3] [i_1 + 1] [i_1 - 1])))));
            }
        }
    }
    var_10 &= 98;
    #pragma endscop
}
