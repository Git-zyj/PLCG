/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max((((112 && 0) ? var_11 : (max(var_14, var_7)))), ((var_11 ? ((var_7 >> (var_5 - 245))) : (var_1 & var_10)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] &= (arr_2 [i_1]);
                var_17 &= 895057943;
                var_18 -= var_11;
                var_19 = ((var_3 <= ((-(!1)))));
            }
        }
    }
    #pragma endscop
}
