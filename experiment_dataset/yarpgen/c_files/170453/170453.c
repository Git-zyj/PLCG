/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170453
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_6 ? var_2 : (~var_14));
    var_19 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = 598711641;
                var_21 = (min(var_21, (arr_2 [i_1] [i_1])));
                arr_4 [i_0] [i_1] [i_1] = ((((~(arr_1 [i_0 - 1]))) - -var_1));
            }
        }
    }
    #pragma endscop
}
