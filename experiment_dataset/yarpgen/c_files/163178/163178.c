/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_7;
    var_13 ^= (0 % 255);
    var_14 = (min(var_14, var_2));
    var_15 -= (min(-var_4, var_11));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] = var_3;
                    var_16 = ((+(min((arr_2 [i_1] [i_1 + 1] [i_1 - 1]), (arr_2 [i_1] [i_1 + 1] [i_1 - 1])))));
                    arr_7 [i_0] [i_1] [i_1] [i_1] = var_4;
                    var_17 = (min(var_17, (!var_4)));
                    arr_8 [i_1] [i_0] = max(((((41637 ? 1 : (arr_0 [i_1]))) >= (var_9 & -27))), (arr_3 [i_0] [i_1 - 1] [i_1 - 1]));
                }
            }
        }
    }
    #pragma endscop
}
