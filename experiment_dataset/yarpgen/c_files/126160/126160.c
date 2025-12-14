/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((var_3 | var_2) ? (((var_12 ? var_12 : -215))) : var_11));
    var_17 = (((((-var_11 ? 31752 : ((12560 ? 53 : 98486310))))) ? (max((((var_5 ? var_12 : var_0))), (9223372036854775807 - var_2))) : (-32767 - 1)));

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        var_18 = (((((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : 31746)))) ? (((arr_0 [i_0]) | (arr_1 [i_0] [i_0]))) : (arr_1 [i_0] [i_0])));
        var_19 += ((!(((((min(15347, (arr_0 [i_0 - 3])))) ? 16384 : (49152 < 17457))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_5 [i_1] = (((6002 / var_13) ? ((((arr_2 [i_1] [i_1]) < (arr_1 [11] [i_1])))) : (((arr_0 [i_1]) ? (arr_2 [i_1] [i_1]) : (arr_4 [i_1])))));
        var_20 = (arr_0 [i_1]);
    }
    var_21 = (((var_13 ? (-1487928801 - 65) : var_6)));
    var_22 = (min(var_22, var_3));
    #pragma endscop
}
