/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146863
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_0;
    var_11 = (max(var_11, (((((((min(var_5, 33776997205278720))))) <= ((18565 ? (max(-1, var_2)) : var_3)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_0] = arr_1 [11];
                var_12 |= 0;
            }
        }
    }
    #pragma endscop
}
