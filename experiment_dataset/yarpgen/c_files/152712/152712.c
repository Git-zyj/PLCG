/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 1;
    var_18 = ((var_3 ? ((var_1 ? var_5 : 1)) : ((((((var_12 ? var_7 : var_1))) ? var_13 : var_12)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_19 = 1;
                var_20 = (min(var_20, 0));
            }
        }
    }
    var_21 += ((var_2 ? ((~(7213283937414804894 && var_13))) : (((min(268431360, var_7)) >> (var_4 + 34)))));
    #pragma endscop
}
