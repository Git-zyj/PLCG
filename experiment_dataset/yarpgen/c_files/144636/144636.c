/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144636
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= ((var_6 ? ((((var_2 < (min(var_5, var_8)))))) : 2225725823860477736));
    var_13 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    var_14 = (max((~-2225725823860477737), (((arr_1 [i_2]) ? var_3 : (arr_6 [i_0 - 1] [i_2 + 1] [i_2] [i_2])))));
                    var_15 ^= ((((max((arr_7 [1] [i_1 - 2] [1]), (arr_7 [i_0] [i_1] [i_2])))) + (min(2225725823860477734, -2225725823860477724))));
                    var_16 = (min(var_16, (arr_6 [i_0] [i_0] [i_0] [i_0])));
                }
            }
        }
    }
    #pragma endscop
}
