/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122687
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_21 = (min(var_21, ((((!2147483647) >= (arr_3 [8] [i_1]))))));
                var_22 = ((!64719) & (arr_0 [i_0]));
            }
        }
    }
    var_23 = (min(255, 23138));
    var_24 = (((((((var_11 ? var_7 : var_11)) <= var_13))) & var_1));
    #pragma endscop
}
