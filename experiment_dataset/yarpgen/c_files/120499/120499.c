/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120499
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_0] [i_1] = min((((!(arr_7 [i_1])))), (arr_7 [i_0]));
                arr_9 [i_0] [0] [i_1] = 281474976448512;
                var_18 = (min(var_18, (!10393)));
            }
        }
    }
    var_19 = (((((var_3 ? (max(var_7, var_5)) : (((-7091930949387616136 ? var_11 : var_15)))))) ? ((((var_8 < (!var_11))))) : (max(7091930949387616135, -7091930949387616114))));
    var_20 *= var_14;
    #pragma endscop
}
