/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178293
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= var_12;
    var_21 -= var_7;
    var_22 = ((var_18 ? var_19 : (min((max(var_4, var_18)), ((max(var_16, 3089852898186539774)))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_7 [2] [2] &= 241;
                var_23 ^= ((var_11 ? -21123 : (((arr_3 [10]) ? ((((arr_6 [10] [10]) <= (arr_2 [i_0])))) : var_15))));
            }
        }
    }
    #pragma endscop
}
