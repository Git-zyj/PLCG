/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_9 && (((-(var_3 || var_6))))));
    var_19 = var_10;

    /* vectorizable */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = 46099;
        var_20 = ((-(((arr_1 [i_0] [i_0 + 1]) | 460267021))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_6 [i_1] = ((~(max(460267005, 3834700273))));
        arr_7 [i_1] = (((((10912 ? (min(782092998, 65)) : (~460267017)))) ? (min(((2 ? 31922 : var_2)), 645804097)) : ((var_16 ? ((-645804098 + (arr_1 [16] [i_1]))) : 56237))));
        var_21 ^= (((((((max(var_9, var_1))) ? var_3 : ((157 ? 173 : 5824763005538016066))))) ? (((18140793235167198353 ? 3834700282 : 1))) : (((((arr_0 [i_1]) ? var_4 : var_3)) + (arr_1 [i_1] [i_1])))));
        var_22 = ((-(min(((782093001 ? 6 : 646385183614476203)), (((var_17 ? 2517102426 : var_10)))))));
    }
    for (int i_2 = 1; i_2 < 18;i_2 += 1)
    {
        arr_12 [6] &= -38863;
        arr_13 [i_2] = (((var_7 ? (((9167 < (arr_9 [i_2] [i_2])))) : (36872 ^ 1))));
        var_23 += max((~645804100), var_0);
        var_24 = ((~((1946853292905282209 ? (!10929) : ((10914 ? 10905 : 1333849538))))));
    }
    var_25 = 504661530;
    #pragma endscop
}
