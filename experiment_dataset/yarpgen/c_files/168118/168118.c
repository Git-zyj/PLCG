/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168118
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= (((((-(128 ^ var_2)))) ? (((var_4 == 114) ? (var_0 + var_3) : ((var_3 ? 71 : var_4)))) : var_3));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_1] [i_0] [i_0] |= var_8;
                    var_12 += ((((var_1 ? 6 : (arr_5 [i_0])))));
                }
            }
        }
    }
    #pragma endscop
}
