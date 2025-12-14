/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0 + 1] = ((+((4148745045248804016 << (((arr_0 [i_0 + 2] [i_0 + 1]) - 49344))))));
        var_11 += (((((761253201 != (arr_0 [i_0] [i_0]))))) ? (((arr_1 [i_0]) ? -16384 : (arr_1 [i_0 - 1]))) : (((min(var_10, 161)))));
        var_12 = ((((max(((-1471267756 ? var_10 : (arr_0 [3] [i_0 + 1]))), ((25990 ? (arr_0 [i_0] [i_0 - 2]) : (arr_0 [i_0] [i_0])))))) ? (min(((max(var_8, 7))), ((16377 ? (arr_0 [7] [i_0]) : var_0)))) : ((((1561969952048591736 < (((arr_0 [i_0] [i_0]) ? 121 : var_7))))))));
    }
    for (int i_1 = 2; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_13 = (arr_0 [i_1] [i_1]);
        var_14 = (((arr_4 [1] [i_1]) ? var_2 : 39550));
        var_15 = (var_8 ? ((((91 <= ((max(-16373, 93))))))) : ((((max(var_7, var_3))) ? ((var_1 ? var_2 : (arr_0 [i_1 - 2] [1]))) : ((max(var_0, 25998))))));
        var_16 *= (((arr_1 [i_1 + 2]) == ((((((arr_3 [i_1 - 2] [i_1]) == var_8)) ? (arr_3 [12] [i_1 - 2]) : (arr_3 [i_1] [i_1 + 1]))))));
    }
    var_17 = var_2;
    var_18 = var_0;
    var_19 *= var_3;
    #pragma endscop
}
