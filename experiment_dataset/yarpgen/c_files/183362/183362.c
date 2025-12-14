/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183362
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] [i_0 + 1] = (((arr_1 [i_0 - 2] [i_0 - 2]) <= (~17540831023625783839)));
        var_19 = (max(var_19, (arr_1 [i_0] [i_0 - 2])));
        var_20 = ((var_12 <= (arr_0 [i_0 + 2] [i_0 + 1])));
        var_21 = (((arr_2 [i_0] [i_0 + 2]) * var_4));
    }
    var_22 = var_6;
    var_23 = var_2;
    var_24 = var_2;
    var_25 = ((((max(var_1, (max(17540831023625783839, var_9))))) && var_4));
    #pragma endscop
}
