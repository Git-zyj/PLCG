/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181136
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [6] [i_1] [7] = var_13;
                var_15 -= 31972;
            }
        }
    }
    var_16 = (((((-31973 ? -31972 : -3699))) ? -var_3 : (((var_14 >= (var_11 / 57344))))));
    var_17 = ((var_6 ? ((min(-var_11, 3686))) : 3686));
    #pragma endscop
}
