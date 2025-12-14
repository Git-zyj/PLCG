/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130942
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_21 = var_8;
                arr_5 [14] [i_0 - 1] = ((arr_4 [i_0] [i_0]) ? (arr_0 [i_1]) : var_7);
                var_22 = ((var_1 ? ((((max(var_7, var_4))))) : var_9));
                var_23 = (min(var_23, (arr_2 [i_1] [i_0])));
            }
        }
    }
    var_24 = (max(var_4, var_8));
    var_25 = (var_12 ? var_3 : (((max(var_13, var_14)))));
    var_26 = var_4;
    #pragma endscop
}
