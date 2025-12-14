/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-(((var_1 > 2816891452) ? (!var_9) : (var_3 < -4)))));
    var_11 &= (((((~-9531) < var_9)) ? (var_3 < var_1) : ((~((var_4 ? 0 : var_6))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_12 &= (((-(arr_2 [i_0]))) - (((((arr_1 [i_1] [i_1]) > var_8)))));
                var_13 = (((arr_3 [4] [i_1] [i_0]) - (1 - -5184672647988059302)));
            }
        }
    }
    #pragma endscop
}
