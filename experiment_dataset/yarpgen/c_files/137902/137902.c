/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137902
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, (((~(~var_6))))));
    var_14 = (~var_4);
    var_15 += var_0;
    var_16 *= (max((((((max(4092, -4092))) ? 13084 : var_11))), (min((((-4068 ? 31 : var_2))), (4092 / var_6)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_17 &= (arr_3 [6]);
                var_18 = (min(18151652670328887689, 1784460947));
                arr_4 [i_0] [i_1] = ((((arr_1 [0]) ? 1612564292 : (arr_2 [i_0] [i_1] [i_1]))));
            }
        }
    }
    #pragma endscop
}
