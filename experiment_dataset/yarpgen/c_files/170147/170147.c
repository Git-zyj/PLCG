/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((var_12 ? var_10 : var_11)) >= var_1)) ? 3961688547326428713 : (max((1 ^ 3630667951927140116), var_6)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] [12] = -58410;
                var_15 = var_13;
                var_16 = (max(var_13, (((arr_1 [i_0] [i_0]) - (arr_1 [10] [10])))));
            }
        }
    }
    #pragma endscop
}
