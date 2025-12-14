/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173019
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((min(var_14, (min(53216, 65535)))))) & (((~var_7) ? ((var_9 ? 5288861229523455431 : 13157882844186096186)) : (1 | 237)))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_2] = (max(2047, 125829120));
                    arr_8 [i_2] [i_2] = var_3;
                }
            }
        }
    }
    #pragma endscop
}
