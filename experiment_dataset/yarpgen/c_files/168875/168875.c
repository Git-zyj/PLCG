/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168875
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_14 = -var_7;
                    var_15 = min(2346806577, 3728983952);
                }
            }
        }
    }
    var_16 = (!(((var_3 ? (min(4294967295, var_3)) : ((3176256822 ? var_3 : var_8))))));
    var_17 = (!2054587931);
    #pragma endscop
}
