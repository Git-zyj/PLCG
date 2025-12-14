/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156353
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_17 = ((((((arr_5 [i_0] [i_0] [i_2]) - var_4))) ? (((((-(arr_5 [i_0] [i_1 + 1] [i_2])))) ? (((arr_2 [i_0] [i_1] [i_2]) ? 23 : var_8)) : -3939053992)) : (max(3939053975, 220165814))));

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_18 |= (arr_8 [15] [i_1 + 4] [i_2] [i_2] [1] [i_3]);
                        arr_12 [i_1 + 2] [i_1] [i_1 + 2] [i_1] [i_1] = ((((max((arr_8 [i_1 + 2] [10] [i_1 + 3] [i_1] [i_1 + 2] [i_1]), (arr_0 [i_1 + 4] [i_1 - 1])))) - (((arr_0 [i_1 - 1] [i_1 + 3]) ? (arr_0 [i_1 + 4] [i_1 + 1]) : (arr_8 [13] [i_1] [i_1 + 1] [i_1 + 4] [i_1 + 1] [i_1 + 1])))));
                    }
                    var_19 = var_1;
                }
            }
        }
    }
    var_20 &= ((((((var_13 ? var_10 : var_7)))) ? var_10 : (!-var_0)));
    #pragma endscop
}
