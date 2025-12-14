/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, (((var_11 ? -var_9 : var_8)))));
    var_14 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_15 = ((((!(((var_12 >> (var_0 - 550092272)))))) ? var_2 : (((((var_10 ? var_12 : var_10))) ? ((var_3 ? var_3 : var_12)) : var_2))));
                    var_16 -= var_6;
                    arr_9 [10] [i_1] [15] [i_2] = ((!(((((min(var_4, var_5))) ? (max(var_1, var_9)) : (((var_5 ? var_12 : var_7))))))));
                }
            }
        }
    }
    var_17 &= ((((((((213307361 ? 2204402710 : 1023))) ? ((var_1 ? var_5 : var_4)) : var_4))) ? ((-((var_2 ? var_5 : var_9)))) : var_6));
    #pragma endscop
}
