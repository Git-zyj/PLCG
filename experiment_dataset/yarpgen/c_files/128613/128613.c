/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 109;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_11 += -102;
                    arr_8 [i_1] [i_2] [i_1] = (((var_7 + (arr_0 [i_1 - 1] [i_2 + 2]))));
                }
            }
        }
    }
    var_12 += 109;
    var_13 = (var_3 * -var_9);
    var_14 = min(((((101 ? var_0 : var_4)))), (max(-109, (var_2 / -19040))));
    #pragma endscop
}
