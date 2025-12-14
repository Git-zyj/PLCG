/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166859
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(94, 24243));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_19 = -2147483647;
                var_20 *= var_15;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            {
                var_21 = ((41293 << ((((-342999640 ? 41349 : 14937)) - 41347))));
                arr_11 [i_2] = ((342999616 ? -104 : -93));
                arr_12 [i_2] [i_3] [i_3] = (((max(222, -30147))));
                arr_13 [i_3] [i_2] = (arr_9 [i_2]);
            }
        }
    }
    #pragma endscop
}
