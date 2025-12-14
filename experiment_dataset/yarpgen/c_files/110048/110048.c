/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110048
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -var_6;
    var_12 = ((var_6 ? (min(-var_4, var_4)) : ((var_10 ? (106 / 2341446666) : var_7))));
    var_13 = ((var_5 ? (((-1058823106 + var_7) ? ((max(var_5, var_1))) : (1 < 18446744073709551613))) : -var_2));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((-935790812 ? 6456337232797394271 : (arr_0 [i_0]))) / (arr_0 [i_0])));
        var_14 = (min(var_14, (((~((-29 - (arr_1 [i_0]))))))));
        var_15 = (max(var_15, (~-935790795)));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_16 = 4294967295;
        arr_5 [2] [i_1] = (((((935790811 - var_5) ? (arr_4 [i_1] [i_1]) : (((arr_4 [i_1] [i_1]) ? (arr_4 [8] [i_1]) : (arr_3 [i_1] [13]))))) == (((arr_3 [i_1] [i_1]) ? -var_9 : ((var_3 ? (arr_3 [16] [1]) : 84))))));
    }
    #pragma endscop
}
