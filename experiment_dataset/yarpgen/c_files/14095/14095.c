/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14095
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_15 ? var_16 : var_14));
    var_20 = var_1;
    var_21 = (min(var_21, ((((var_5 ? ((var_9 ? var_9 : -720)) : (var_8 != var_7)))))));
    var_22 = max((((2146435072 >= 0) ? ((var_3 ? 2147483620 : var_10)) : (max(var_2, var_2)))), ((((var_16 ? var_0 : var_18)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 16;i_2 += 1)
            {
                {
                    var_23 ^= (((arr_5 [i_0]) ? (max(((min(7, -47))), ((var_7 ? 0 : var_6)))) : 1367829831));
                    var_24 = (min(var_24, ((((arr_1 [i_2]) + ((var_13 ? (((arr_6 [i_0] [i_1] [1] [i_2 + 1]) ? (arr_2 [i_0] [i_1] [i_1]) : 268085871)) : (arr_4 [8]))))))));
                }
            }
        }
    }
    #pragma endscop
}
