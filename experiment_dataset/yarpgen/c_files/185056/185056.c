/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (max((arr_3 [i_0] [i_0]), (var_7 - var_0)));
                var_11 = (max(((~((2147483647 ? var_3 : var_0)))), var_9));
            }
        }
    }
    var_12 |= ((-2147483647 ? var_3 : (5186420047508636896 > 2147483647)));
    #pragma endscop
}
