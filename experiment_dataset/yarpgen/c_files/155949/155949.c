/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155949
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_1] = (!var_8);
                arr_7 [i_1] [i_1] = ((((max((var_3 - var_10), 17743))) - (min(((var_10 ? var_1 : var_15)), 1626908672167344543))));
            }
        }
    }
    var_16 = var_10;
    #pragma endscop
}
