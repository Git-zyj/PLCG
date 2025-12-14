/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143596
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_13 / var_0);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = (arr_5 [i_1 - 1] [i_1 - 1]);
                arr_7 [i_0] [i_1] [i_1] = ((~((((((arr_5 [i_0] [i_0]) ? (arr_1 [i_1]) : var_2))) ? (arr_1 [i_1 + 1]) : (max((arr_0 [i_1]), var_11))))));
            }
        }
    }
    var_19 = ((((((((~var_9) + 2147483647)) >> (-var_8 - 1291301655)))) ? var_17 : (((((var_17 ? var_3 : var_4))) ? ((var_6 ? var_2 : var_13)) : var_10))));
    #pragma endscop
}
