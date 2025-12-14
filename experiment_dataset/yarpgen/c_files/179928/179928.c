/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179928
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (((~((var_13 | (max(var_0, var_9)))))))));
    var_16 = ((var_11 ? -var_5 : var_12));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_17 ^= (min((min(var_6, ((min(2005681065, 4294967295))))), ((((-8339179914915989032 + 9223372036854775807) << (116 - 116))))));
                var_18 = ((-(min((arr_3 [i_0]), 145779068))));
                arr_4 [i_0] = var_2;
            }
        }
    }
    var_19 |= var_1;
    var_20 = var_9;
    #pragma endscop
}
