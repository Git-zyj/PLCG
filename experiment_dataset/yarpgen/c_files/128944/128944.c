/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128944
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_17 = 2357340547;
                var_18 = ((((3157608945 ? (min(var_4, -284085776)) : (arr_3 [i_0] [i_0] [i_1]))) & (min((arr_0 [i_0] [i_0]), 892069717))));
                var_19 = 284085776;
                var_20 = (81 - 9879911939303624504);
            }
        }
    }
    var_21 = (min(var_13, var_2));
    var_22 = (~var_7);
    #pragma endscop
}
