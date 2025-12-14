/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, var_6));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    arr_6 [i_2] = ((0 ? (((((var_10 ? var_0 : var_9))))) : var_11));
                    arr_7 [i_2] [i_1] [i_2] = var_6;
                }
            }
        }
    }
    var_16 = ((0 > ((((var_10 ? var_5 : var_9)) & var_7))));
    var_17 = var_13;
    #pragma endscop
}
