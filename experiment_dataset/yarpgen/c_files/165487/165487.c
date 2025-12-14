/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165487
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, (((((var_12 >> (var_3 - 62077))) % var_0)))));
    var_20 = ((((((var_8 / var_10) ? var_11 : var_9))) ? ((var_15 ? var_0 : ((var_0 ? var_7 : var_2)))) : var_11));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_21 *= (~110);
                var_22 = (min(var_22, ((((~-var_10) < (min((arr_3 [i_0]), (min(-10, 5891317933319213546)))))))));
            }
        }
    }
    #pragma endscop
}
