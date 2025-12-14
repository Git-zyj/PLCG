/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103703
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_11 = ((-37 != ((max((arr_1 [i_0 - 1]), (arr_0 [i_0 + 2]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_12 = (min(var_12, (-127 - 1)));
                    arr_9 [i_2] [i_1] [i_1] [16] = -101;
                }
            }
        }
    }
    var_13 = var_9;
    #pragma endscop
}
