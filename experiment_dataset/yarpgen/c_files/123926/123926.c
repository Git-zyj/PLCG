/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123926
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, (((((((2398609643061137287 ? -1536283499 : 1536283508)))) ? ((((((var_0 ? var_2 : var_0)) + 2147483647)) << (var_0 - 4275))) : var_1)))));
    var_12 = (((((var_3 * (max(var_8, var_0))))) ? var_5 : var_10));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    arr_7 [i_0] [1] [i_0] [i_1] = (arr_2 [i_2 + 2] [i_2]);
                    var_13 = (min(var_13, (~17578655727745469649)));
                }
            }
        }
    }
    var_14 = var_1;
    var_15 |= (var_3 | var_1);
    #pragma endscop
}
