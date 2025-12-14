/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106548
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [1] [1] [i_1] [i_1] = (max(var_18, var_18));
                    var_20 = (max(var_20, (((((((arr_5 [i_0]) ? (arr_4 [i_0]) : var_15))) ? (max(var_18, ((var_14 ? 5068219295675148146 : (arr_1 [4] [4]))))) : ((((arr_8 [i_2] [i_2] [i_1] [i_0]) ^ var_9))))))));
                }
            }
        }
    }
    var_21 = var_18;
    var_22 = ((var_1 ? var_15 : (((var_11 ? ((5068219295675148129 ? 34407 : 62542)) : var_8)))));
    #pragma endscop
}
