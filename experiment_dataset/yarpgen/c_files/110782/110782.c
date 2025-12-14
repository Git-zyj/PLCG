/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_13 *= (min((min((arr_2 [i_0] [i_1] [i_1]), (arr_1 [i_0]))), 85));
                var_14 = -106;
            }
        }
    }
    var_15 = ((var_5 ? (!100) : var_7));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            {
                var_16 = 41;
                arr_9 [i_2] = (arr_6 [i_3] [i_2]);
                var_17 = (max(var_17, (!456996322)));
            }
        }
    }
    #pragma endscop
}
