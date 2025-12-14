/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161418
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_10 = (((29968 & var_8) + (29192 << 0)));
        var_11 = ((-28872 - ((((-1 % var_8) == -1)))));
    }
    var_12 = (min(var_12, 6899689945122955742));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            {
                var_13 = (var_7 == 1);
                arr_8 [i_1] [i_1] = 2986135697307164771;
                var_14 = (min(var_14, ((((29968 % 1193) & 1)))));
            }
        }
    }
    #pragma endscop
}
