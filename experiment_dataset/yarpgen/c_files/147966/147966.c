/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                var_13 = min((~50147), (max(2147483643, ((53857 ? var_5 : (arr_2 [i_1 - 2]))))));
                var_14 = ((((11679 ? (min(4294967286, var_7)) : var_2)) >> ((807402580 ? 9 : 18446744073709551615))));
            }
        }
    }
    var_15 = (53854 - 2147483643);
    #pragma endscop
}
