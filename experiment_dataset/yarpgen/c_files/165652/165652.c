/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_17 |= ((min(((max(-2147483643, var_6))), (min(var_7, 894872758)))));
                    arr_9 [i_0] [i_2] [i_2] [i_0] = (((((min(2147483643, -5960364356507446251))) / 9)));
                }
            }
        }
    }
    var_18 = var_9;
    #pragma endscop
}
