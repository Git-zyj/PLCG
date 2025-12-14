/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14876
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1] = var_8;
                arr_6 [i_0] [i_1] [17] = arr_1 [i_1];
            }
        }
    }
    var_11 = var_8;
    var_12 = (((((~(var_9 || var_5)))) ? ((((((1595408725 ? var_2 : var_9))) ? var_6 : (((var_9 ? var_7 : 89)))))) : (((var_3 | var_9) ^ var_3))));
    var_13 += var_2;
    #pragma endscop
}
