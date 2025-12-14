/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118150
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_14 ? var_15 : var_1));
    var_19 = ((+(((~var_17) ? (((var_5 ? var_14 : var_4))) : var_8))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 13;i_2 += 1)
            {
                {
                    var_20 = ((30 ? (-9223372036854775807 - 1) : (138 != 1)));
                    var_21 = (max(var_21, (arr_3 [i_0] [i_0])));
                }
            }
        }
    }
    var_22 = 0;
    #pragma endscop
}
