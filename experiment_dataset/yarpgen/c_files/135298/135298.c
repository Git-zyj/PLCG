/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135298
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;
    var_11 = ((var_7 && (232 + 4127)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    var_12 = 48140360830137061;
                    var_13 = var_4;
                    var_14 = ((((((arr_1 [i_0 + 2]) ? 4080 : var_6))) ? ((max((var_1 & var_1), -1))) : var_6));
                    var_15 = (arr_2 [i_1] [i_2]);
                }
            }
        }
    }
    #pragma endscop
}
