/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114497
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_12 = (((6297 > 1810900766) == (((var_0 < (arr_0 [i_0] [i_0]))))));
        var_13 = (max(var_13, (((((-6318 / (arr_1 [i_0]))) % (((arr_0 [i_0] [i_0]) & 366177222)))))));
        arr_2 [i_0] [i_0] = (((var_3 % -6312) >= (((((arr_1 [i_0]) || (arr_1 [i_0])))))));
    }
    var_14 *= (((((var_3 * var_8) * (var_0 > var_9))) & ((((((var_9 << (var_10 - 652538181))) < (-6298 || 229)))))));
    var_15 = ((((((var_10 & -6319) >= (62909 * 6318)))) + (((var_9 <= var_4) ^ ((0 >> (9223372036854775807 - 9223372036854775780)))))));
    #pragma endscop
}
