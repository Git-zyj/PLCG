/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_0;
    var_18 = ((min((49 >= 42), var_8)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((var_8 ? (arr_3 [i_0] [i_1]) : (min(((((arr_3 [i_0] [i_1]) ? var_13 : var_4))), (max(var_6, (arr_3 [i_0] [i_0])))))));
                var_19 = (arr_1 [i_0]);
            }
        }
    }
    var_20 = (((var_9 * 49) / var_16));
    #pragma endscop
}
