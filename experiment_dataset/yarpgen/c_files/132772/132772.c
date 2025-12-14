/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132772
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                var_16 = var_0;
                var_17 = (1359916803648423451 >= 9223372036854775807);
            }
        }
    }
    var_18 = 9223372036854775807;
    var_19 = ((min((-9223372036854775807 - 1), 7686649713475513044)) & (938878997361366050 >= 9223372036854775807));
    #pragma endscop
}
