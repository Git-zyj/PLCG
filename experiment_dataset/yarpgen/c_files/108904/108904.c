/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108904
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(24709, 40826));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_1] [i_2 - 2] = (-(max((arr_3 [i_2] [3]), (~var_11))));
                    arr_8 [i_0] [i_1] [i_2] = (((min(((max(38, 40827))), (max(var_13, var_14)))) > ((min(var_6, (arr_6 [i_2 - 2] [i_2 - 2] [i_0]))))));
                }
            }
        }
    }
    var_19 = var_11;
    var_20 = (max(-var_0, ((19232 / (max(var_11, var_9))))));
    var_21 = (min(var_21, ((max(((((var_13 ? var_10 : 24713)) << (var_6 - 190))), 40822)))));
    #pragma endscop
}
