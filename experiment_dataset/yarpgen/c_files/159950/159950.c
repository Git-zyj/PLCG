/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1 - 1] = (!(((~(arr_1 [i_0 - 1])))));
                var_14 -= var_0;
            }
        }
    }
    var_15 = (~var_4);
    var_16 = (~-var_4);
    var_17 = (max((((!((min(var_11, var_5)))))), (~var_1)));
    #pragma endscop
}
