/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119962
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(0, -2024848137));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_15 = (((6 ? 0 : 3966802538666724303)));
                arr_7 [i_0] [i_1] = (max(3, (var_11 > 0)));
                var_16 = -6;
                var_17 = (((11 & -350479606) << ((((min(9253, var_7))) / 350479605))));
            }
        }
    }
    var_18 = max((min(var_13, 54509)), 16508);
    var_19 = var_8;
    #pragma endscop
}
