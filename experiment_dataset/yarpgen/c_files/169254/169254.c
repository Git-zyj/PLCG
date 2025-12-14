/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169254
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                var_18 &= ((((max(((38 ? (arr_2 [12]) : (arr_0 [6]))), -13))) & (max(((-2 ? (arr_0 [16]) : (arr_3 [18]))), -var_13))));
                var_19 = (max(var_19, (max(((-(arr_2 [2]))), ((-((110 ? (arr_1 [16]) : (arr_5 [1])))))))));
            }
        }
    }
    var_20 = var_0;
    var_21 ^= (max(((var_14 ? (var_15 != var_10) : var_12)), ((var_5 ? var_11 : var_16))));
    var_22 = ((var_12 >> (-1 + 8)));
    #pragma endscop
}
