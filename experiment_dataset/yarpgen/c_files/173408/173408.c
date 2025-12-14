/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173408
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_20 |= ((((((2 > (arr_2 [i_0 + 1]))))) % (~8688117523286454050)));
                arr_5 [13] [13] = ((((max((arr_4 [i_0 - 1]), var_2))) && 41799));
            }
        }
    }
    var_21 = var_13;
    var_22 = var_3;
    var_23 += var_0;
    #pragma endscop
}
