/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133189
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_3;
    var_15 = (-4057 + var_2);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 = ((min((40 / var_8), (arr_5 [i_0] [i_0] [i_0]))));
                    var_17 = arr_3 [i_0] [i_2];
                    var_18 -= ((max(((min(var_9, var_6)), ((var_3 ? (arr_2 [5] [i_2]) : var_5))))));
                    arr_8 [i_0] [i_1] [i_2] = var_7;
                }
            }
        }
    }
    #pragma endscop
}
