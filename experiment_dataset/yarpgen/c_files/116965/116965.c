/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116965
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((max((var_4 == 1), var_15)) ^ (min(((min(4, var_6))), -536684771))));
    var_20 = (max(var_20, (~35)));
    var_21 = var_9;
    var_22 = (max((max((!12748), var_12)), (max(var_12, (var_4 && 20)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [14] [i_0] = min((~3153167885), 1);
                var_23 = ((1141799393 <= (min(((var_17 + (arr_1 [i_1]))), (arr_1 [i_1])))));
            }
        }
    }
    #pragma endscop
}
