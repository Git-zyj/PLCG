/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100564
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, var_7));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_11 = ((-18014398509416448 ? var_9 : ((~((var_1 ? var_0 : var_0))))));
                    arr_8 [i_2] [i_1] [i_0] = (((min((arr_6 [i_1]), (arr_6 [i_1])))) ? (max(var_9, var_5)) : (((~((max((arr_3 [i_1]), var_1)))))));
                }
            }
        }
    }
    var_12 = (max((!1), 48));
    #pragma endscop
}
