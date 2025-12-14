/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127040
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0] = (((7529 && 2147483647) ? ((((min(63, var_8))) ? (51 - var_0) : (max(-8150518038858922886, var_12)))) : (((((~1639144131) <= var_8))))));
                arr_6 [i_0] = (!12038298273070091505);
                arr_7 [18] = (!-71);
            }
        }
    }
    var_15 = max(((((var_8 ? var_3 : var_5)))), 57);
    var_16 = var_13;
    #pragma endscop
}
