/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127808
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 52116;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_20 = (min(var_20, (((((138715371 | (~0)))) ? (((((16022 | var_5) + 2147483647)) << ((((~(arr_1 [i_0]))) - 1450679197)))) : ((((min((arr_1 [i_0]), 619))) ? (~2147483633) : 1859774150))))));
        arr_3 [i_0] [i_0] |= 4294967295;
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_8 [i_1] = ((((max(var_16, 622)) ^ (max((arr_1 [10]), (arr_4 [9] [11]))))));
        arr_9 [i_1] [i_1] = (max(((4128768 ? (arr_4 [i_1] [i_1]) : (arr_4 [i_1] [i_1]))), ((((16022 ? 0 : 22262))))));
        var_21 *= min((!13914), (~2259108634));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        arr_12 [i_2] [i_2] = (min(1768628530, 268435455));
        arr_13 [i_2] = ((-(min((511 * var_8), 0))));
        var_22 = max(((~(arr_10 [i_2]))), (arr_1 [9]));
    }

    for (int i_3 = 2; i_3 < 12;i_3 += 1)
    {
        var_23 &= min(((-(!26050))), (((65535 | 0) | (arr_2 [i_3 + 1]))));
        arr_16 [8] = (((arr_0 [i_3 + 1]) ? ((0 ? (arr_4 [i_3 - 2] [i_3 - 2]) : (arr_7 [i_3 + 1]))) : (min((arr_4 [i_3 - 2] [i_3 - 2]), 36873))));
        var_24 += (arr_15 [0] [9]);
    }
    #pragma endscop
}
