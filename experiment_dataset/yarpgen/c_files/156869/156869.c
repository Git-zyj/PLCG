/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156869
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_21 = (max(var_21, (((14429282964758580490 ? 39049 : 1)))));
                var_22 = (((arr_3 [i_1] [i_0]) > (min(var_18, (26486 - -2242789307857457832)))));
                arr_6 [i_1] [7] [i_0] = (((~(arr_5 [6] [9]))));
            }
        }
    }
    var_23 = ((var_4 ? var_13 : ((var_16 ? 26481 : -7651134591530585765))));
    #pragma endscop
}
