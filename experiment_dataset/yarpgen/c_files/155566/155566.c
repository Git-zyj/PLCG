/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155566
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(2675691781, (((~var_2) ? 2005339754 : (~1923005321)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_2] [i_2] = 2371961975;
                    var_15 = var_10;
                    arr_9 [i_2] [i_2] [i_2] = 11699;
                    arr_10 [i_2] = (max(var_10, 1923005321));
                }
            }
        }
    }
    #pragma endscop
}
