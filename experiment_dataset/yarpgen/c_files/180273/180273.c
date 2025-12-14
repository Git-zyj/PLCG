/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180273
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_11 = (arr_0 [i_0]);
                var_12 = ((((((arr_3 [i_0 - 2]) ? ((min(65496, var_3))) : ((((arr_4 [i_0] [i_1] [10]) && 2572243532437417541)))))) ? (((((6 ? -125 : -52))) ? (arr_4 [i_0] [i_0] [i_1]) : 9223372036854775807)) : ((((max(var_2, (-9223372036854775807 - 1)))) ? ((var_0 ? 7936454827436723537 : 9223372036854775790)) : (arr_0 [i_0])))));
            }
        }
    }
    var_13 = 1;
    var_14 *= var_0;
    var_15 = var_3;
    #pragma endscop
}
