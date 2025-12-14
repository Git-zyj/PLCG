/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174517
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        arr_11 [6] = (max(-379379847, ((max((arr_5 [i_2] [i_1] [i_0]), var_3)))));
                        arr_12 [i_2] [i_3] [i_2] [i_1] [i_0] [i_0] |= ((-((-24815 ? 27722 : var_6))));
                        var_10 = (9007061815787520 + var_5);
                    }
                }
            }
        }
        arr_13 [i_0] = ((~((((((2450007434 ? 55028 : 1))) < 1758106933)))));
        var_11 = (((((var_5 ? var_3 : var_2))) ? (((max(var_3, var_5)))) : var_6));
    }
    var_12 = 233;
    var_13 *= var_6;
    #pragma endscop
}
