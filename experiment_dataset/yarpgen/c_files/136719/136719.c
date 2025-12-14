/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min((((var_5 >= (!var_1)))), (((-2214882261151856240 && var_6) % var_5))));
    var_11 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_12 = -var_6;
                var_13 = var_9;
                arr_4 [i_0] [i_1 + 2] [i_0 - 1] = ((15 ? 1 : 50));
                arr_5 [7] = 65535;
            }
        }
    }
    #pragma endscop
}
