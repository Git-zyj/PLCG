/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175868
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_11;
    var_14 = -var_6;
    var_15 = (min(2147483647, ((var_3 ? 14104810418330407767 : (~4341933655379143849)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_8 [i_1] [2] = (((((~((4294967295 << (143 - 128)))))) ? -4341933655379143854 : 14104810418330407767));
                var_16 = (arr_3 [i_0]);
            }
        }
    }
    #pragma endscop
}
