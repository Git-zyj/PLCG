/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_16 = (max(var_16, ((((-(65535 - var_10)))))));
                var_17 = (min(var_17, (((((((arr_2 [i_1 + 2] [i_1 + 1] [i_0]) / (arr_2 [i_1 - 1] [i_1] [i_0])))) ? ((max(65527, (!7940)))) : var_2)))));
            }
        }
    }
    var_18 = (~var_2);
    var_19 = (max(var_19, (!var_7)));
    #pragma endscop
}
