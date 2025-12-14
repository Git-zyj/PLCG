/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((max(var_0, var_15))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_1] &= (min((arr_4 [i_0]), ((((max(-271, var_13))) | (32 * 44683)))));
                var_20 = (min(var_20, (var_6 != -9603)));
                var_21 ^= (~var_12);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            {
                var_22 = (arr_7 [i_2] [i_3]);
                var_23 = (((arr_8 [i_2] [i_3]) ? (arr_7 [4] [i_3]) : (((var_12 / (arr_8 [i_2] [i_3]))))));
            }
        }
    }
    #pragma endscop
}
