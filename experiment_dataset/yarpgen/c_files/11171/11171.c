/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11171
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_12 = (max(var_12, (-1 % 22)));
                    arr_9 [i_0] [13] [i_0] = -21757;
                }
            }
        }
    }
    var_13 = ((!(((var_11 ? var_5 : var_10)))));
    var_14 = (max(var_14, var_2));
    var_15 = (min((((-641012986 && (1 + 83)))), ((var_4 ? (~var_7) : var_9))));
    #pragma endscop
}
