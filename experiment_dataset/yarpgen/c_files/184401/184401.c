/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184401
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((~var_12) ? var_9 : (var_6 - var_8)));
    var_20 = (((((((min(var_6, var_17))) ^ var_1))) ? var_14 : var_18));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_21 = ((((arr_0 [i_0 - 3] [i_1 - 4]) && (arr_0 [i_0 - 3] [i_1 - 1]))));
                    var_22 = min((((((((arr_2 [i_0 - 2]) >= (arr_2 [i_0 - 2])))) > (((var_16 >= (arr_1 [7]))))))), ((((var_2 ? var_17 : var_1)) ^ ((((arr_1 [i_1 - 3]) / var_14))))));
                }
            }
        }
    }
    #pragma endscop
}
