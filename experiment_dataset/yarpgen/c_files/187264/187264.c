/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187264
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 0;
    var_18 = -11078;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = 7217;
                    arr_10 [i_1] [i_2] &= -21208;
                    arr_11 [i_1] [i_1] [i_1] [i_1] &= 220;
                    arr_12 [i_0] [i_1] [i_0] [i_0] = var_10;
                }
            }
        }
    }
    var_19 = var_4;
    var_20 = (~16);
    #pragma endscop
}
