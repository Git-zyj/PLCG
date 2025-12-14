/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172196
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, (((var_11 ? var_13 : var_11)))));
    var_20 = (((var_16 + 9223372036854775807) << (((var_4 + 150) - 58))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_4 [i_0] = (((arr_3 [i_0]) - (arr_2 [i_0])));
        var_21 = 8796093022207;
        var_22 = (min(var_22, ((((((!(!-32766)))) % ((max(var_6, (arr_0 [i_0])))))))));
        arr_5 [i_0] &= ((max((arr_0 [i_0]), ((var_17 ? (arr_2 [i_0]) : var_3)))) | (arr_1 [i_0]));
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        var_23 ^= (max((((((14458 ? -32766 : 1379984218)) | var_9))), (2465896750979248024 - 96)));
        arr_9 [i_1] [i_1] = ((32765 ? (!14458) : ((((((arr_6 [i_1]) + (arr_7 [i_1 + 1])))) ? (arr_7 [i_1 + 1]) : (min(8796093022190, var_17))))));
        arr_10 [i_1] = (!((!(arr_8 [i_1 + 1]))));
        var_24 = (((((!(arr_7 [i_1])))) >> (((arr_7 [5]) - 168))));
    }
    #pragma endscop
}
