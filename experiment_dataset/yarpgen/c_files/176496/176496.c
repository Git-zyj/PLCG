/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_0] = (~var_14);
                arr_5 [i_0] [i_0] [i_0] = ((~(arr_1 [1])));
            }
        }
    }
    var_16 = (((((1200529596 ? (!12227) : 12242))) ? ((min(12235, 9223372036854775807))) : ((-var_13 + (5969 & var_11)))));
    var_17 = var_13;
    var_18 = (max(var_6, (((var_9 ? (var_0 - 64463) : var_8)))));
    #pragma endscop
}
