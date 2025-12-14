/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((((max(35, 11))) || -var_9));
                arr_6 [i_0] = (-(arr_1 [i_0] [i_1 + 1]));
            }
        }
    }
    var_11 = (min(var_11, var_0));
    var_12 = var_0;
    #pragma endscop
}
