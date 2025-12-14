/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125924
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((18446744073709551615 ? 469762048 : 557480585))) ? (((((var_1 ? var_11 : var_2))) ? var_7 : (((var_8 ? var_10 : var_11))))) : var_5));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    arr_10 [i_1] [i_1] [i_1] = var_7;
                    var_13 = var_8;
                    arr_11 [2] [i_0] [i_0] [i_2] &= ((((((((var_0 ? var_3 : var_10))) ? var_11 : var_4))) ? var_11 : (((((var_4 ? var_2 : var_6))) ? var_11 : var_11))));
                }
            }
        }
    }
    #pragma endscop
}
