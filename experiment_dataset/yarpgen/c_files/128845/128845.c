/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_0] = ((!((!(!45967)))));
                var_20 = ((0 ? (((((arr_3 [6] [14]) + -32755)) - var_17)) : (43860 + 238)));
            }
        }
    }
    var_21 |= (((~23511) > var_9));
    var_22 = var_19;
    #pragma endscop
}
