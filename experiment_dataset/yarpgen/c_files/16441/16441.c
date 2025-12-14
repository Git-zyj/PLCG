/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16441
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_12 = (~var_10);
                var_13 = (min((arr_0 [i_1]), 8163438791049986015));
                arr_6 [i_1] [i_1] |= -8163438791049986016;
                arr_7 [i_0] = (max((arr_2 [15] [i_0]), (arr_4 [i_0] [17])));
            }
        }
    }
    var_14 = ((((max((~var_9), var_2))) ? (min(5011621554302772529, (((var_8 ? var_11 : var_0))))) : var_8));
    var_15 = var_11;
    var_16 = var_2;
    #pragma endscop
}
