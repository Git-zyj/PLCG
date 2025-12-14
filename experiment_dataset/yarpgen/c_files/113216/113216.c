/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((-((~(~2626403825)))));
    var_21 = ((-(((min(var_7, var_13))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [i_0] [6] [i_0] = ((((((var_8 | var_1) ? (~var_16) : (((arr_2 [i_0] [i_0] [i_0]) ? -1 : 1))))) ? 1 : (1 + var_15)));
                arr_5 [i_1 - 3] [i_1 - 2] [i_0] = (arr_0 [i_0]);
                var_22 = (((-(arr_1 [i_0]))) < ((((var_16 << (var_6 - 3291731843))))));
            }
        }
    }
    var_23 -= var_16;
    #pragma endscop
}
