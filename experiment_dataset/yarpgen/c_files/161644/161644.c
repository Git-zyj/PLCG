/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((1860851374297933130 - ((((max(var_13, 3818016592)) + (94 * 94))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_21 = (min(var_21, ((((arr_1 [i_0] [i_0]) / (arr_1 [i_0] [i_0]))))));
        var_22 |= (67 ? 1412728045 : (arr_0 [i_0] [i_0]));
    }
    for (int i_1 = 4; i_1 < 12;i_1 += 1)
    {
        var_23 = (((arr_0 [8] [i_1 - 3]) ? (arr_0 [i_1] [i_1]) : ((min(94, (max((arr_1 [i_1] [i_1 - 3]), -95)))))));
        var_24 = (~-1);
    }
    for (int i_2 = 1; i_2 < 18;i_2 += 1)
    {
        var_25 = (min(var_25, (((((~(arr_5 [i_2] [i_2]))) - (~148))))));
        var_26 = (min(var_26, (((~((~(arr_6 [i_2] [i_2 + 1]))))))));
        arr_7 [i_2] |= 2994848542;
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_27 = ((-((var_16 * (((-1098714306 ? var_15 : var_19)))))));
        arr_12 [i_3] [14] = ((~(0 < 0)));
        var_28 = (~0);
        var_29 = (max(var_29, (arr_8 [i_3] [i_3])));
        arr_13 [i_3] = -1;
    }
    var_30 = (min((max((~var_13), var_16)), var_7));
    #pragma endscop
}
