/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114948
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 9223372036854775805;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] = 0;
                var_17 += ((!((2147483647 || (-2147483647 - 1)))));
            }
        }
    }
    #pragma endscop
}
