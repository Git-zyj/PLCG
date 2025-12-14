/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min((1 * var_1), var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] = (((((arr_1 [i_1 + 1] [i_1]) ^ (arr_1 [i_1 - 1] [i_1 - 1])))) >= ((var_1 * (!var_9))));
                arr_5 [i_1] = arr_0 [i_0] [i_1];
                var_15 = 0;
                var_16 = var_10;
            }
        }
    }
    #pragma endscop
}
