/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 18;i_2 += 1)
            {
                {
                    arr_7 [3] [i_1 + 1] [7] [i_0] = ((~(min((arr_5 [i_0 + 3] [i_1 + 1] [i_2 - 3]), (max(var_3, var_9))))));
                    var_10 = (max(var_10, var_1));
                }
            }
        }
    }
    var_11 &= var_4;
    var_12 = var_1;
    #pragma endscop
}
