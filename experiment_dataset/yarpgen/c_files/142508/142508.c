/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142508
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_9));
    var_19 &= ((var_1 ? (max(var_3, (-9223372036854775807 - 1))) : ((((!((max(var_16, var_11)))))))));
    var_20 *= var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_21 = (arr_3 [i_0]);
                var_22 = (max(((((arr_4 [i_1] [i_1] [i_0]) ? var_17 : 18))), (((-19 && (arr_3 [i_0]))))));
            }
        }
    }
    #pragma endscop
}
