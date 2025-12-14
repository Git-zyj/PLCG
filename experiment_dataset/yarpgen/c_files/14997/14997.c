/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14997
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= ((11250 ? 80 : (((((128 ? 121 : 134))) | -3992113687322084505))));
    var_12 = ((var_3 ? 0 : (((((var_6 ? var_7 : 121))) ? ((122 ? 119 : 119)) : ((var_0 ? var_10 : var_3))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_13 = (((((min(132, (arr_3 [i_0] [14]))) >= ((((135 == (arr_2 [i_0]))))))) ? ((((arr_6 [i_0]) > ((-8385464124840969176 ? var_5 : 1946926431))))) : 8385464124840969176));
                var_14 ^= (arr_5 [i_0]);
            }
        }
    }
    var_15 = var_8;
    #pragma endscop
}
