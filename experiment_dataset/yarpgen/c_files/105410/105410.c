/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105410
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_13 = 54844;
                    arr_10 [8] [i_2] = var_1;
                    var_14 &= (min(var_1, ((((0 / var_9) - -54864)))));
                }
            }
        }
    }
    var_15 = var_3;
    var_16 = (max(var_1, (((!(var_5 + var_7))))));
    #pragma endscop
}
