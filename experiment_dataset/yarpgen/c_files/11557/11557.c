/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11557
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((((var_8 % var_2) ? var_0 : (var_6 - var_10)))) || ((min(-var_7, ((var_8 ? -690834988 : var_9)))))));
    var_15 &= var_6;
    var_16 = -1516473455;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            {
                var_17 = ((max(var_10, (arr_1 [6] [i_1 - 2]))));
                var_18 = ((((max(8192, 2))) & (arr_4 [i_0])));
            }
        }
    }
    #pragma endscop
}
