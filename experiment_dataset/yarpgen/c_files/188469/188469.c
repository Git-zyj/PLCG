/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188469
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (~var_11);
    var_17 = (min(var_17, var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = (18 ^ (min(9, (min((arr_2 [i_0]), 1)))));
                var_18 = (min(var_18, (((((var_2 % (-2147483647 - 1))) <= (min(var_8, (-2147483647 - 1))))))));
            }
        }
    }
    #pragma endscop
}
