/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149111
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_19;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_21 = (max(var_21, 0));
                arr_5 [i_1] = (!(((var_13 + 0) != ((max(1, var_12))))));
                var_22 = ((((((~(arr_1 [i_0] [i_1]))))) ? var_0 : ((~((0 ? var_18 : var_2))))));
                arr_6 [i_1] [i_0] [1] = 0;
                arr_7 [i_1] = 0;
            }
        }
    }
    var_23 = (max(var_23, var_11));
    #pragma endscop
}
