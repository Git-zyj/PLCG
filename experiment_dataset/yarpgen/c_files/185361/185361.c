/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185361
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;
    var_11 = ((var_7 ? var_4 : ((var_7 ? (var_8 ^ var_7) : (max(14, var_7))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_12 -= (((((((!(arr_2 [i_0] [i_0] [i_1]))) ? ((var_7 & (arr_0 [i_0]))) : -84667746))) > ((65535 ? 665296018 : 4))));
                var_13 ^= (arr_1 [i_0]);
            }
        }
    }
    #pragma endscop
}
