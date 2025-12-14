/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115270
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-var_0 ? (((max(var_5, var_9)) - -var_9)) : var_2));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_11 = (arr_0 [i_1] [i_0]);
                var_12 = (arr_0 [i_0] [2]);
            }
        }
    }
    var_13 ^= (0 == 1);
    #pragma endscop
}
