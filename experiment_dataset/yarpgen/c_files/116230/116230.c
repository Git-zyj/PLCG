/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116230
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_13 = 3;
                var_14 = (max(var_14, ((((var_9 + var_10) + var_10)))));
                arr_4 [i_0] = ((((max(0, -1824445060))) ? ((~(!16))) : (~var_8)));
                var_15 = (arr_1 [i_0] [i_0]);
                arr_5 [i_1] [i_0] [i_0] = ((-(max(-89, 862991101575592998))));
            }
        }
    }
    var_16 = -var_8;
    #pragma endscop
}
