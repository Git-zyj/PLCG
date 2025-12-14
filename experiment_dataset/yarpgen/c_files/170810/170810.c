/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170810
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_4 ? ((min(((max(12, var_19))), 102))) : (min(var_13, (170 && var_6)))));
    var_21 = var_12;
    var_22 = var_18;
    var_23 = (!var_19);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_24 |= (((~82) ^ (min((arr_6 [2] [6]), (arr_6 [4] [4])))));
                var_25 = (max(var_25, (((-((((((145 ? var_17 : (arr_0 [i_0] [i_1])))) && (~102)))))))));
                arr_8 [i_1] [i_1] [i_1] = (~110);
            }
        }
    }
    #pragma endscop
}
