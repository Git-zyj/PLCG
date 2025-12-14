/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172201
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_17 = 4;
                    arr_8 [i_1] [14] = ((((((var_8 - 10515) + var_8))) - (min(-609970370954984106, (arr_1 [i_1] [i_0])))));
                }
            }
        }
    }
    #pragma endscop
}
