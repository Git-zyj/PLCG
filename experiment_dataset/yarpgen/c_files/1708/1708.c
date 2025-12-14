/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;
    var_11 = (max(var_6, ((min(var_8, var_7)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_12 = (min(var_12, -12));
                var_13 = ((!(arr_3 [i_0 + 1] [i_0 - 2] [i_0 - 2])));
                var_14 = ((~(arr_2 [i_0])));
            }
        }
    }
    var_15 = ((var_6 ? var_2 : (!var_6)));
    #pragma endscop
}
