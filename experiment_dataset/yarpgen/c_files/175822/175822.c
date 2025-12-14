/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_17 = (min(var_17, (((var_12 / ((((arr_1 [i_0]) || 5674769004155947572))))))));
                var_18 = (max(var_18, ((((arr_2 [i_0] [i_1]) | (arr_4 [i_0]))))));
            }
        }
    }
    var_19 ^= (min(var_10, var_12));
    #pragma endscop
}
