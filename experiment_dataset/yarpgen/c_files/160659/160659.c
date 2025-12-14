/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160659
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_18 = ((-26557 ? 61803 : ((0 ? 13 : -1))));
                var_19 = (max(var_19, ((-107 - (((!(!-1))))))));
                var_20 += (var_3 >> ((((min((arr_1 [i_0] [i_1]), -122))) + 122)));
            }
        }
    }
    var_21 = (max(var_21, var_8));
    #pragma endscop
}
