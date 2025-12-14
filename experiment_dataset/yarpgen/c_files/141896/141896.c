/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141896
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((~(((~var_7) << (((~30) + 41))))));
    var_13 -= (((((255 ? (var_3 & var_2) : 166))) ? (((var_0 * 19) - var_1)) : (~-66)));
    var_14 = ((-(((!-23) & -70))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_15 = (((min(((max(29449, 24973))), 2147483618))) ? 1 : (((-17 ? -14 : 9395))));
                    arr_9 [i_1] |= (((arr_3 [i_0] [8]) | ((((max(4374, 1))) | (arr_4 [i_0 + 1])))));
                }
            }
        }
    }
    var_16 = 3741463127;
    #pragma endscop
}
