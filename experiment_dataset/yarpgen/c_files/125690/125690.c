/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125690
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(((var_4 ? 8191 : (var_3 * var_6))), var_6));
    var_14 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_15 -= (arr_2 [i_0]);
                var_16 = (max(((2656236790 ? 3786242782 : (3786242782 != 508724514))), 1));
            }
        }
    }
    #pragma endscop
}
