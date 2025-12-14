/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_17 = (((arr_0 [i_0] [i_0]) * ((4412071672333428361 ? (arr_0 [i_0] [i_0]) : 0))));
        var_18 = (((arr_1 [i_0]) || var_7));
        arr_2 [i_0] = -50;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_19 = (((17745161326611399452 / 18446744073709551612) ? (((var_5 ? (arr_4 [i_1]) : var_8))) : (4 * 7)));
        var_20 -= ((((((arr_4 [1]) ? (arr_4 [i_1]) : 1970094469))) ? (arr_4 [i_1]) : (((arr_4 [i_1]) ? (arr_3 [i_1]) : (arr_4 [i_1])))));
    }
    for (int i_2 = 2; i_2 < 19;i_2 += 1)
    {
        arr_7 [i_2] = (max(14034672401376123251, 126));
        arr_8 [i_2] = ((((((5221588938478994888 ? (arr_5 [i_2] [i_2 - 2]) : (arr_6 [i_2 + 1])))) && var_4)));
    }
    var_21 = ((!(((8451 ? 0 : 23726)))));
    var_22 = (((var_16 <= var_16) ? (((((min(57085, 240))) < 1))) : (max(var_16, (var_10 && var_6)))));
    var_23 = (min(var_23, (((~(((var_11 * var_10) ? 39 : var_5)))))));
    #pragma endscop
}
