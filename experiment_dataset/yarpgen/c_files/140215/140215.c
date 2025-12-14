/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140215
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_7;
    var_18 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_19 = 1;
                var_20 = var_3;
            }
        }
    }
    var_21 = (max((((((1 ? 13 : -23098))) & var_12)), var_15));
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            {
                var_22 = 4294967282;
                var_23 = -10639;
                var_24 *= ((~((1 ? 48 : (arr_11 [i_2 - 2] [i_2 - 1])))));
            }
        }
    }
    #pragma endscop
}
