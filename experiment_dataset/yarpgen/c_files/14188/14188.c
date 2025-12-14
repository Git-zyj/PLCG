/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14188
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((128 ^ var_17) > var_15));
    var_21 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_22 = (arr_5 [i_2] [i_1] [i_0]);
                    arr_9 [i_0] [i_1] [i_2] = ((((var_1 ? (arr_4 [i_1]) : ((var_11 ? (arr_3 [i_1]) : var_4)))) == (((var_1 ? (var_15 ^ 157) : (var_6 == var_9))))));
                    var_23 = (min(var_23, var_12));
                }
            }
        }
    }
    var_24 = (min(var_6, (((((var_1 ? var_6 : var_5))) && var_13))));
    #pragma endscop
}
