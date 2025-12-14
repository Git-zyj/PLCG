/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12993
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= (max((var_10 / var_11), var_12));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                {
                    var_21 |= (max(((var_16 ? 66060288 : (arr_5 [i_2] [i_2 - 2]))), 14281));
                    arr_10 [i_0] [i_1] [i_2] &= (((arr_6 [i_2] [i_2 - 2] [i_2 + 1]) % (((var_5 ? var_12 : var_9)))));
                }
            }
        }
    }
    var_22 = (((max(var_7, (~55795))) | ((max(var_13, var_5)))));
    var_23 = max(((((~var_2) == (63 <= var_14)))), var_9);
    #pragma endscop
}
