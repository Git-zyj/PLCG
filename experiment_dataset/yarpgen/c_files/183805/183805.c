/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183805
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = max(1, var_15);
                var_20 = (max(-1, ((170 ? (arr_2 [i_0] [i_1]) : (arr_2 [i_1] [i_0])))));
            }
        }
    }
    var_21 = ((1 ? 1 : (((~36) ? var_1 : 1))));
    var_22 = 1;
    #pragma endscop
}
