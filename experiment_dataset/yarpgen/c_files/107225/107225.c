/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((((var_9 ? var_9 : var_0)) + var_1))) ? var_3 : (min(var_9, ((var_8 ? var_8 : var_3))))));

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        arr_4 [2] = (arr_1 [i_0 + 3] [i_0 + 3]);
        arr_5 [1] = (((((((~var_5) + 2147483647)) >> (((min(0, var_3)) + 1360142806)))) == var_9));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 14;i_1 += 1)
    {
        arr_9 [i_1 + 2] [i_1] = -var_9;
        arr_10 [i_1] [14] = ((arr_1 [i_1 - 1] [i_1 + 3]) ? var_8 : 0);
        arr_11 [i_1] [i_1] = (((var_7 || var_0) >= (arr_0 [i_1 + 1])));
    }
    var_11 = ((~((((min(var_3, var_5))) ? var_9 : (max(0, 1))))));
    var_12 = ((((((((var_1 ? var_0 : 21286))) ? ((var_7 ? var_9 : var_1)) : 8))) ? var_5 : var_4));
    #pragma endscop
}
