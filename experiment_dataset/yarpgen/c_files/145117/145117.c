/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(((21 ? 1 : var_3)), var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_1] [i_0] = (~-1517194838);
                arr_9 [i_0] [i_0] [i_0] = ((((var_1 - 1517194844) << (((2777772465 & -32760) - 2777743329)))));
                arr_10 [i_0] = 29489;
                arr_11 [i_0] [i_0] = (32762 % 13729);
            }
        }
    }
    var_11 = ((var_5 ? var_8 : var_9));
    var_12 = ((((((var_5 | var_1) | ((var_0 << (var_6 + 12229)))))) && (((~((min(var_3, var_0))))))));
    #pragma endscop
}
