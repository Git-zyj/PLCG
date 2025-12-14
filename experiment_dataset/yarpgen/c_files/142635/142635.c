/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142635
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [9] = -var_12;
                var_14 &= var_2;
                var_15 *= ((((((arr_4 [i_1 - 2] [i_1 - 1] [i_1 + 1]) < (arr_4 [i_1 + 2] [i_1 + 1] [i_1 + 1])))) & ((((min(var_12, var_13))) << (((arr_4 [i_0] [i_1 - 1] [i_1 - 1]) + 13543))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 22;i_3 += 1)
        {
            {
                var_16 = (max(var_16, ((((arr_8 [16] [16]) ? (arr_9 [8] [8]) : var_5)))));
                var_17 = (max(var_1, -6454));
            }
        }
    }
    var_18 &= (((((-var_8 ? var_13 : (var_3 < var_12)))) * ((var_0 ? (((var_3 ? var_12 : var_12))) : (6446 & var_7)))));
    #pragma endscop
}
