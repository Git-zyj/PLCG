/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177411
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += ((((var_2 ? var_3 : var_10))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_12 |= (arr_3 [i_0] [i_0] [i_0]);
                arr_5 [i_0] [i_0] [i_0] = -1199630196;
                var_13 *= (arr_0 [i_0]);
            }
        }
    }
    #pragma endscop
}
