/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= ((((((var_4 ^ var_3) ^ (var_4 ^ var_4)))) & ((var_1 | (var_0 & var_1)))));
    var_11 = (((var_1 & var_2) / (var_0 | var_5)));

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_12 ^= (((((var_3 | var_3) / var_2)) % (((var_2 % var_9) ^ (var_0 <= var_4)))));
        var_13 &= ((var_3 >= (((var_7 < (var_0 ^ var_8))))));
    }
    for (int i_1 = 1; i_1 < 8;i_1 += 1) /* same iter space */
    {
        arr_4 [7] = var_4;
        arr_5 [8] = ((var_1 | var_5) | (((((var_9 <= var_7) == (var_2 == var_5))))));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 8;i_2 += 1) /* same iter space */
    {
        arr_9 [8] = (((var_8 & var_4) / (var_4 & var_5)));
        var_14 = (max(var_14, (var_9 / var_5)));
    }
    var_15 = var_7;
    #pragma endscop
}
