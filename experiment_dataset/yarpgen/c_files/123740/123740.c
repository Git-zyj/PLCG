/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123740
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_6;
    var_20 = ((min(((var_12 ? var_4 : 4094143219)), (var_2 > var_3))));
    var_21 = 62390;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] [i_0] = 65530;
                arr_6 [i_0 + 1] [i_0] [21] = 175329561;
            }
        }
    }
    #pragma endscop
}
