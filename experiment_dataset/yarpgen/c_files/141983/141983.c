/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141983
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_3;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_4 [1] = (arr_0 [i_0]);
        arr_5 [i_0] [i_0] = ((129 && (arr_2 [i_0])));
        arr_6 [18] [20] = (((arr_0 [0]) ? (13539822312943015465 % var_9) : 11284785997441222889));
        arr_7 [10] [i_0] = (((arr_2 [2]) >> (2199023253504 - 2199023253494)));
    }
    var_14 = (max(((-144 ? ((min(var_9, 101))) : ((min(144, var_9))))), (870377206 && -727047630)));
    var_15 = var_5;
    #pragma endscop
}
