/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_4;
    var_13 = (max(var_0, var_9));
    var_14 = (max(var_14, var_2));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_1 - 1] [i_0] [i_0] = ((~((var_10 * (arr_2 [i_0] [i_1] [i_1])))));
                var_15 &= ((var_10 & (max(((((arr_4 [i_1 - 1] [2] [i_0]) >> (var_10 + 125)))), (18 / var_4)))));
            }
        }
    }
    var_16 |= (var_4 || var_3);
    #pragma endscop
}
