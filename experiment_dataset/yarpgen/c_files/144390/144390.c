/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144390
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (var_8 && 243);
    var_21 = (--32);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_22 *= (min((34 <= 29360128), (((0 && var_16) >= ((var_17 ? 230 : (arr_3 [i_0] [18])))))));
                    arr_9 [i_1] [i_0] [i_1] [16] = (min(((((min(165, 68))) / (arr_8 [i_2] [i_0] [i_0] [i_0]))), ((max((min((arr_8 [i_0] [i_0] [3] [3]), 1)), 0)))));
                }
            }
        }
    }
    #pragma endscop
}
