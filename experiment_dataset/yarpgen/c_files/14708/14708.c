/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_12 | (-7376202832640300795 % -7376202832640300795)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 6;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] [i_1] &= 109;
                    arr_10 [i_1] [i_0] [i_0] [i_0] = (min(-75, var_7));
                    var_14 = min(112, 96);
                }
            }
        }
    }
    #pragma endscop
}
