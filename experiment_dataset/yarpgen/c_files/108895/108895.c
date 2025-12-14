/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (10460 * var_12);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_21 -= (((((arr_1 [i_0 + 3] [i_0 + 3]) | (arr_0 [i_0 + 2])))));
                arr_6 [i_1] = (((arr_2 [i_0] [i_0 + 1]) ? (arr_0 [i_1]) : (arr_1 [i_0 - 3] [i_1])));
                var_22 = arr_5 [i_0 + 1] [i_0 + 2] [i_0 - 2];
            }
        }
    }
    var_23 = var_13;
    #pragma endscop
}
