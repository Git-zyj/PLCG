/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_15 = (max(var_15, ((~(((~var_12) & (~var_6)))))));
                var_16 |= ((21 - ((var_2 ? var_3 : (arr_3 [i_0] [i_1 + 1])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 0;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 19;i_3 += 1)
        {
            {
                var_17 = var_4;
                var_18 -= ((((!((min(1, var_3)))))));
                arr_12 [2] [3] [i_2] = (+(min((((arr_10 [i_2] [i_2]) + -3396589192817140632)), -8663564401154186941)));
            }
        }
    }
    var_19 = var_12;
    #pragma endscop
}
