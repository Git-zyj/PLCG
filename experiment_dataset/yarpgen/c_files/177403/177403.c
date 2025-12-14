/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177403
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_6;
    var_20 = var_11;
    var_21 = var_1;

    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0 - 4] [i_0] = (arr_0 [i_0] [i_0 - 3]);
        arr_5 [i_0] [i_0 - 3] = ((((2688831030 + (arr_1 [i_0 + 2]))) / (arr_3 [i_0])));
        var_22 = ((((arr_0 [i_0] [i_0 + 2]) ? var_4 : (arr_1 [i_0]))));
        var_23 = (!1);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_24 = -var_18;
        var_25 = ((-15 > var_0) ? ((57 ? -15 : (arr_8 [17]))) : (~1));
        var_26 = (~-26);
        var_27 = -var_7;
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_28 = (((((arr_2 [i_2]) || var_9)) || (((!0) || (arr_0 [i_2] [i_2])))));
        arr_12 [i_2] [i_2] = (~1);
        var_29 = (((((arr_6 [i_2] [i_2]) + ((74 ? var_7 : (arr_2 [i_2]))))) ^ 0));
        var_30 = ((((min(-81, (min(var_18, (arr_10 [i_2])))))) ? ((~(~72))) : (((min(var_14, var_3))))));
        var_31 = ((((((((arr_0 [i_2] [i_2]) - (arr_11 [i_2]))) - (((-73 ? -78 : var_2)))))) - (32 + 4424708953197470720)));
    }
    #pragma endscop
}
