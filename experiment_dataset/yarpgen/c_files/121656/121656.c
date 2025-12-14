/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121656
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                var_18 += (((14465 * var_1) ? (arr_3 [i_0]) : (max((arr_1 [1]), (var_16 < var_10)))));
                arr_6 [8] [i_1] |= ((((max(((max(var_5, var_12))), (max((arr_2 [2] [i_1]), 1))))) ? 1 : ((var_13 ? (arr_2 [0] [0]) : var_6))));
                var_19 ^= 0;
                var_20 = (max(var_20, (((((((arr_0 [i_0] [6]) ? (min(3072249636, var_13)) : 1))) ? (arr_0 [i_0] [2]) : (min((max(var_16, (arr_1 [4]))), (arr_3 [i_1]))))))));
            }
        }
    }
    var_21 |= (((20056 ? 1 : 8506)));
    var_22 ^= (((var_7 == var_17) ? (max(311964371, var_7)) : var_0));
    #pragma endscop
}
