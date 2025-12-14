/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 = (max(((min(var_9, var_1))), ((((((arr_2 [i_0]) / var_2)) <= 1)))));
                var_16 = (((((-(((arr_3 [i_0] [i_1] [i_0]) ? var_6 : (arr_2 [i_0])))))) * (((max(208, (arr_3 [i_1] [i_0] [i_0]))) / ((min((arr_1 [i_0]), 45867)))))));
                var_17 = (min((min(-var_8, (max(var_12, 18446744073709551615)))), ((max((min(253, var_2)), ((min(var_13, 3))))))));
            }
        }
    }
    var_18 = (min(var_18, var_9));
    #pragma endscop
}
