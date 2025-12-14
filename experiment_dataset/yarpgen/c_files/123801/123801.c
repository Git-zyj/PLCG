/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123801
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((((~var_13) + 9223372036854775807)) << (min(var_8, var_12))))) || (var_10 / -var_13)));

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        var_21 = (((724676991 & 54) != (((arr_2 [i_0]) % (arr_2 [i_0])))));
        var_22 = ((~((~(arr_0 [i_0 + 3] [i_0 + 3])))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_23 = var_17;
        var_24 = ((((~(max((arr_2 [i_1]), var_7)))) ^ (~10)));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_25 = ((var_2 >> (((((arr_8 [i_2]) ^ var_16)) + 87))));
        var_26 = (((54 ^ 208) || var_3));
    }
    var_27 &= ((-(-63 != -7983279041626466633)));
    var_28 = ((((var_8 | (var_5 % var_14)))) >= (((var_12 - var_2) | var_15)));
    var_29 = (((((var_7 | var_1) | (var_8 <= var_8)))) ^ (((max(var_17, var_19)) - (min(208, 3119612635)))));
    #pragma endscop
}
