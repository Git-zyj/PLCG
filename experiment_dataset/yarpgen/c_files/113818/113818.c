/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_4;
    var_13 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_14 = (!-0);
                arr_7 [i_0] = ((var_8 ? 13548 : ((-14534 ^ (arr_3 [i_1 + 1] [i_1 - 1])))));
            }
        }
    }
    #pragma endscop
}
