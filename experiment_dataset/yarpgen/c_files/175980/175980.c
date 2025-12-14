/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175980
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        var_20 = (max(var_20, (((-(((arr_2 [i_0]) ? (arr_2 [i_0 - 1]) : (arr_0 [6] [i_0]))))))));
        var_21 &= (~(var_7 + var_7));
        var_22 = (min(var_22, ((((arr_1 [i_0 - 2]) ? (arr_1 [i_0 - 2]) : (arr_1 [i_0 + 3]))))));
        arr_4 [i_0] = (arr_1 [i_0 - 2]);
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        var_23 = ((((((((((arr_5 [2]) + 2147483647)) >> (var_1 + 3861519272045925569))) * (!var_19)))) ? (((((arr_5 [i_1]) || ((min(212, 1610486937))))))) : ((((min(1, 1610486937))) ? ((((arr_5 [i_1]) ? var_6 : var_8))) : ((var_17 * (arr_6 [i_1] [i_1])))))));
        var_24 = (max(var_24, (((!(((239 ? (arr_6 [i_1] [i_1]) : var_3))))))));
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
    {
        var_25 ^= 1953586088;
        var_26 = 826296124;
        var_27 = (-2147483647 - 1);
        var_28 = (min((var_13 || 12998444126311157684), ((min(var_14, 0)))));
    }
    for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
    {
        var_29 = (((var_6 ^ (var_12 || var_1))));
        arr_12 [i_3] = ((min((-2147483647 - 1), 2068401788631130322)));
        var_30 = (arr_7 [i_3] [i_3]);
        var_31 = ((-(((((var_1 ? (arr_7 [15] [i_3]) : 2341381207))) & ((var_3 ^ (arr_11 [i_3])))))));
    }
    var_32 &= ((-(min((((248 ? var_16 : var_14))), (~var_18)))));
    #pragma endscop
}
