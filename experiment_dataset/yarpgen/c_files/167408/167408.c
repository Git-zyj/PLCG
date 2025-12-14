/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167408
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= (((9 & var_15) ? (((var_0 == var_15) ? var_14 : ((max(var_0, var_8))))) : var_14));
    var_20 = var_3;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_21 = ((-(((arr_7 [i_0] [i_1]) & (min(12, var_3))))));
                        var_22 = ((var_18 ? 2251799809490944 : var_18));
                        var_23 = var_9;
                    }
                }
            }
        }
        var_24 = ((((min((arr_5 [i_0]), -832474118))) ? (((!(arr_5 [i_0])))) : (((arr_5 [i_0]) & var_18))));
    }
    #pragma endscop
}
