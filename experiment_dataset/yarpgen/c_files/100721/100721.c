/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100721
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(((((max(var_11, var_13))) ? ((7 ? var_0 : 249)) : ((max(var_7, var_6))))), (((251 <= var_1) ? var_0 : var_0))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                var_15 = 7;
                arr_4 [i_1] [i_0] [i_1] &= ((((max((arr_1 [i_1 - 3]), (arr_1 [i_1 - 2])))) ? var_13 : ((18 ? ((var_5 ? var_5 : var_0)) : var_1))));
            }
        }
    }
    #pragma endscop
}
