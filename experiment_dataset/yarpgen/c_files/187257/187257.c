/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_16 = ((((max((var_0 ^ var_8), ((var_0 ? (arr_0 [i_0]) : var_11))))) - (min(var_2, (max(var_4, var_12))))));
                    var_17 += (((arr_1 [i_0]) & (min(var_9, -var_10))));
                }
            }
        }
    }
    var_18 = (((((!(((var_13 ? var_2 : 1303306976)))))) + var_4));
    #pragma endscop
}
