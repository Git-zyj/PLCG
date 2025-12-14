/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179672
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((var_16 >= var_12) ? (((-var_3 ? var_13 : var_10))) : ((var_14 ? var_0 : (0 / 3)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_21 = (((((var_8 || var_9) & (arr_6 [i_1 - 3] [3] [i_1] [i_0 + 3])))) ? var_2 : (arr_1 [i_0]));
                    arr_8 [13] [13] [i_1] [i_2] = var_10;
                }
            }
        }
    }
    var_22 = (min((((var_10 ? (var_11 ^ var_3) : (((var_15 + 2147483647) >> (var_0 - 309207307)))))), var_16));
    #pragma endscop
}
