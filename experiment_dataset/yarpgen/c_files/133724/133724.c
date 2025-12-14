/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133724
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 *= ((((min((arr_1 [i_0]), 123))) ? (arr_3 [i_0] [i_0]) : (max(var_0, (arr_2 [i_1] [i_1] [i_0])))));
                var_19 = 1089683488;
            }
        }
    }
    var_20 = var_10;
    #pragma endscop
}
