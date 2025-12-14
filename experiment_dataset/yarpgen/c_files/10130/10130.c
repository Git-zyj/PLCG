/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10130
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((1 ? var_12 : 221346595));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = 2337356521;
        var_17 = (max(var_17, var_6));
        var_18 = var_5;
    }
    for (int i_1 = 2; i_1 < 19;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = ((((((arr_0 [i_1 + 1] [i_1 - 2]) ? (arr_1 [i_1 - 1]) : (((arr_1 [0]) - var_14))))) ? var_5 : (min((((var_12 ? 1 : var_14))), (arr_1 [i_1])))));
        arr_6 [i_1] = max(1, (((min((arr_0 [2] [1]), 660990117)) >= (((max((arr_4 [i_1]), (arr_3 [i_1] [i_1]))))))));
        var_19 = ((((0 ? (arr_0 [i_1 - 1] [i_1 - 1]) : 1)) & (arr_0 [i_1 - 2] [i_1 - 1])));
        var_20 = (min(var_20, (((3633977178 << ((((var_9 ^ (arr_3 [i_1 - 2] [12]))) + 26027)))))));
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        arr_10 [i_2] = ((~(((arr_0 [i_2] [i_2]) << var_0))));
        var_21 ^= (((arr_9 [i_2]) ? 16437 : var_3));
        var_22 += ((var_7 <= ((16435 ? (arr_0 [i_2] [i_2]) : (arr_0 [i_2] [i_2])))));
        arr_11 [i_2] = ((((max(var_9, (max(288230376151187456, var_0))))) ? (((min((arr_8 [i_2]), 1)))) : var_4));
        var_23 = (arr_8 [i_2]);
    }
    var_24 = ((-(var_2 > var_2)));
    #pragma endscop
}
