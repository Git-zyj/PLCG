/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172034
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, ((((((~((min(var_9, 28439)))))) ? (min((((-1 ? var_5 : var_12))), ((var_2 ? var_1 : 98)))) : var_9)))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = ((((min(22, ((min(var_12, 3453)))))) ? var_5 : (arr_2 [i_0])));
        arr_4 [i_0] = ((var_7 || (((-3455 ? (arr_1 [i_0]) : -73)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_14 ^= (arr_2 [i_0]);
                    var_15 = (!1);
                }
            }
        }
        arr_11 [i_0] [i_0] = (!-1);
    }
    #pragma endscop
}
