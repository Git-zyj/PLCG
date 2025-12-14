/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110095
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_12 = ((-27851 ? (arr_3 [i_0 - 2]) : (((((var_11 ? (arr_2 [1] [1]) : (arr_2 [i_0] [i_1])))) ? (arr_3 [i_0 + 1]) : -484299016))));
                var_13 += (arr_0 [i_1]);
            }
        }
    }
    var_14 = -27851;
    var_15 |= var_10;
    var_16 = var_10;
    #pragma endscop
}
