/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107191
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((max(13045106327988503379, 1920906682499765049)) ? (min(var_5, 2643048432223054653)) : (var_2 < var_13)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] [9] [i_2] [i_1] = min(2643048432223054653, ((0 ? 4786171517654018348 : var_16)));
                    var_21 = 135;
                }
            }
        }
    }
    #pragma endscop
}
