/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16762
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((max(var_3, 256876455)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_14 += ((~((~((~(arr_1 [8])))))));
                var_15 = (max((((arr_1 [i_0]) ? (max((arr_2 [i_1]), (arr_1 [i_0]))) : var_2)), (!var_5)));
            }
        }
    }
    #pragma endscop
}
