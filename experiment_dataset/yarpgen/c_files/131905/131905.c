/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((var_2 + 2147483647) << (var_5 - 437859854)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_11 = arr_4 [i_1] [i_0] [i_0];
                var_12 = (arr_4 [i_1 - 1] [i_1 - 1] [i_1]);
            }
        }
    }
    var_13 |= 1897186154;
    #pragma endscop
}
