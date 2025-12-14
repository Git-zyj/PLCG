/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((max(-38, 832114139))) ? var_3 : var_9));
    var_21 = ((var_19 ? (((var_12 ? var_2 : var_14))) : 1816613393));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_22 = (((max(16723, (arr_4 [i_0] [i_2])))));
                    var_23 = -832114162;
                }
            }
        }
    }
    #pragma endscop
}
