/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184084
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_17 = (max((min((~var_7), (arr_0 [i_0 - 2]))), 0));
                var_18 &= ((!38072) ^ var_6);
            }
        }
    }
    var_19 |= ((var_14 ? (((9223372036854775807 & var_10) | (!var_13))) : ((min((1 * var_2), ((max(56, 107))))))));
    #pragma endscop
}
