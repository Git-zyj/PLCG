/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133042
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [i_1] = ((var_10 ? 340068895 : (((var_7 + 2147483647) >> (arr_3 [i_0] [i_1])))));
                var_14 += (min((((arr_5 [i_0] [i_1]) ? (((arr_2 [i_1]) ? var_13 : var_4)) : ((min(var_5, var_7))))), (25626 / 253310282)));
            }
        }
    }
    var_15 = (!((((56561 * var_4) ^ (min(var_13, var_4))))));

    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_16 = ((+((var_2 ? (arr_0 [i_2]) : (arr_0 [i_2])))));
        var_17 ^= ((2731629051795818921 ? 1 : 1));
    }
    var_18 = (min(var_9, (min((min(20, -1095)), 20))));
    #pragma endscop
}
