/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122033
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 9;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, (arr_1 [i_0])));
                    var_20 ^= 0;
                    var_21 = (((((arr_7 [i_2 - 4] [i_2 - 1] [i_2 - 4]) + 1498562064))) ? (arr_7 [i_2 + 1] [i_2 - 2] [i_2 - 1]) : (arr_7 [i_2 - 1] [i_2 - 4] [i_2 - 1]));
                }
            }
        }
    }
    var_22 += (((!var_14) != (32767 - var_11)));
    var_23 = var_13;
    #pragma endscop
}
