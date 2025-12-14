/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_14 = min(0, -4912092352892028208);
        var_15 ^= 2412661267019942708;
    }
    for (int i_1 = 2; i_1 < 9;i_1 += 1)
    {
        var_16 = (max(var_16, var_9));
        arr_4 [i_1] [5] = var_2;
    }
    var_17 = (max(var_17, (((min(61801, var_6))))));
    var_18 = var_10;

    /* vectorizable */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        arr_8 [i_2] [i_2] = ((((var_3 ? (arr_7 [i_2] [i_2]) : (arr_5 [i_2])))) ? (arr_5 [i_2]) : (arr_7 [i_2] [i_2]));
        arr_9 [i_2] = arr_5 [0];
    }
    #pragma endscop
}
