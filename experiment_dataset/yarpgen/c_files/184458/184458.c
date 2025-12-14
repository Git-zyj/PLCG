/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184458
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] = var_1;
                    var_13 += (max(-1862827490629073742, 0));
                    var_14 -= (arr_4 [i_2] [i_1] [4]);
                    var_15 = (!0);
                }
            }
        }
    }
    var_16 = (((-2147483647 - 1) ? 32191 : 0));
    var_17 = var_11;
    var_18 = (min(var_18, ((var_6 | ((var_3 ? -6962349363465312077 : var_3))))));
    #pragma endscop
}
