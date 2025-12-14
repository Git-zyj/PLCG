/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_3;
    var_13 = var_0;
    var_14 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_15 |= (((((-(arr_6 [i_2] [i_2])))) ? var_5 : var_6));
                    var_16 = var_6;
                    arr_10 [i_0] [i_2] [i_2] = 37758;
                    arr_11 [i_0] [i_1 - 2] [i_1 + 1] [i_0] = var_10;
                }
            }
        }
    }
    var_17 *= (((((max(var_4, var_7)))) ? (min(var_4, (var_9 % var_4))) : var_3));
    #pragma endscop
}
