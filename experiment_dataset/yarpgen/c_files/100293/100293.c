/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100293
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_14;
    var_16 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_17 = (min(var_17, 3756079560));
                    var_18 &= (max(((((arr_4 [i_2] [i_1 - 3] [i_0 + 1]) >= (arr_4 [i_0 + 1] [i_0 + 1] [i_2])))), (min((arr_0 [i_0 + 1]), (arr_0 [i_0 + 1])))));
                    arr_7 [i_0] [16] [i_2] [16] = (min(5358, 9853642375207182753));
                }
            }
        }
    }
    var_19 = var_3;
    #pragma endscop
}
