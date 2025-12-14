/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171429
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(((((min(var_6, var_2)) ? ((max(var_3, var_1))) : ((max(var_1, var_6)))))), (max((var_3 ^ var_6), (max(var_6, var_0))))));
    var_12 = ((max(((max(var_1, var_6))), ((var_1 ? var_1 : var_8)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] = ((((((max(var_1, var_1))) / var_9)) + (max((var_2 + var_2), ((min(var_9, var_6)))))));
                var_13 = (((max(((max(var_6, var_7)), var_3)))));
            }
        }
    }
    #pragma endscop
}
