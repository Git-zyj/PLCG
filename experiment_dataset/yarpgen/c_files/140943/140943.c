/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140943
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_18 = (arr_1 [i_0]);
        var_19 = ((-((((((arr_1 [i_0]) ^ var_11))) ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0])))));
        var_20 ^= ((-(arr_0 [2] [2])));
    }

    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_21 += (arr_3 [i_1]);
        arr_4 [i_1] [i_1] = ((((!((((arr_3 [i_1]) ? -1262200681205498135 : (arr_2 [i_1])))))) ? ((-(((arr_2 [i_1]) ? -9223372036854775789 : var_14)))) : ((((25079 && (!var_12)))))));
        var_22 += 25079;
    }
    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {
        var_23 = (arr_1 [i_2]);
        arr_7 [8] = var_10;
        var_24 = (max(var_24, (((((!(arr_3 [1])))) / (arr_1 [i_2 + 2])))));
        arr_8 [i_2] [i_2] = -2147483645;
    }
    var_25 = ((var_16 ? var_0 : (min((~var_5), (var_7 | var_1)))));
    var_26 = (!((min(16383, var_7))));
    #pragma endscop
}
