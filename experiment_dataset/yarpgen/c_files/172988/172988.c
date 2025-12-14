/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172988
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] [7] = ((~((((min(var_3, var_2))) ? var_2 : var_19))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_2] [i_0] [i_0] = (((!(((var_2 ? var_18 : var_0))))));
                    arr_12 [i_0] [1] = (((((var_7 ? (var_4 ^ var_17) : var_16))) ? ((((var_11 ? var_2 : var_12)) ^ ((var_15 ? var_2 : var_10)))) : (var_16 == var_6)));
                }
            }
        }
    }
    var_20 = var_15;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            {
                arr_19 [2] &= (((var_7 >= (var_3 > var_5))));
                arr_20 [i_4] [i_4] [i_4] = (!var_15);
            }
        }
    }
    var_21 |= var_16;
    #pragma endscop
}
