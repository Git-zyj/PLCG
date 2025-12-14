/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((var_0 <= (((var_14 ? 33503 : var_4))))))) ^ -882926031206381299));
    var_21 = (min(var_21, 76));
    var_22 = ((!((((0 ^ -28) * 511)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_23 = (((((!var_16) || 156)) ? ((((!(!4026792313))))) : 3354203954));
                var_24 = (min(var_24, ((((((181 ? (~0) : ((12746 ? 4095 : 75))))) ? (((((var_3 ? 2 : 156)) >> ((0 ? 181 : 0))))) : 4026792313)))));
            }
        }
    }
    #pragma endscop
}
