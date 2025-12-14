/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140107
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 |= (~169);
                var_21 -= ((-1 - 10) ? (arr_4 [i_1]) : (min((arr_4 [i_0 - 1]), (arr_1 [i_0 - 1]))));
            }
        }
    }
    var_22 = ((var_18 ? (min((min(-10, var_19)), -var_16)) : (max(15, var_1))));
    var_23 = ((var_17 ? var_15 : (((((96 ? 96 : -82))) ? var_5 : ((118 ? 18446744073709551615 : -670547164))))));
    var_24 = (min(var_8, ((var_11 ? -670547162 : -125))));
    #pragma endscop
}
