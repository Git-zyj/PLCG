/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_10 += (arr_2 [i_0]);
                var_11 = var_0;
                var_12 += (arr_2 [i_1 - 1]);
            }
        }
    }
    var_13 = (max(var_13, var_6));
    var_14 = var_9;
    var_15 = (min((var_8 * var_7), 3359978233));
    var_16 = (max(var_16, var_1));
    #pragma endscop
}
