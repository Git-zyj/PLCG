/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_12 = (max((((max(-594408995, (arr_0 [i_1]))))), ((-((~(arr_2 [i_0])))))));
                var_13 = var_8;
                var_14 = (min(var_14, (((((min((arr_3 [i_0]), var_9))) ? ((max(109, (arr_3 [i_1])))) : 25930)))));
            }
        }
    }
    var_15 = 2595792339;
    var_16 = (((var_10 ? var_10 : var_8)));
    #pragma endscop
}
