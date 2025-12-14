/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_12 = (min(var_12, var_9));
        var_13 = (min(var_13, (~2865453769)));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_5 [i_1] = (((((((202 ? 65535 : var_8))) ? var_1 : 58090))) ? ((~(arr_2 [i_1]))) : 1429513527);
        arr_6 [i_1] = (((min(var_7, (arr_1 [i_1] [i_1]))) <= 32767));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 11;i_2 += 1)
    {
        var_14 = var_0;
        var_15 = ((647832628 & (arr_1 [i_2 - 2] [1])));
    }
    var_16 = var_8;
    #pragma endscop
}
