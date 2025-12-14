/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_11 = ((89 ? -89 : -89));
        var_12 = (arr_1 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_13 = (0 * 72053195991416832);
        arr_5 [i_1] [10] = (min((min((arr_3 [i_1]), (arr_3 [i_1]))), 89));
        arr_6 [i_1] [i_1] = ((~(min(((max(48946, (arr_1 [i_1] [2])))), (arr_3 [i_1])))));
        arr_7 [i_1] [i_1] = var_3;
        arr_8 [i_1] [i_1] = ((54116 ? -89 : 17367902357734332488));
    }
    for (int i_2 = 4; i_2 < 15;i_2 += 1)
    {
        var_14 *= (min(((((arr_9 [i_2] [i_2]) - var_8))), var_6));
        var_15 = (((arr_4 [i_2 + 2]) ? 65535 : 55555));
        arr_13 [i_2] [i_2] = (arr_12 [i_2]);
        var_16 = (arr_3 [i_2]);
        var_17 *= (max((((var_8 * ((min(var_4, var_9)))))), (((var_0 * 89) * var_6))));
    }
    var_18 = 18446744073709551614;
    var_19 = var_6;
    var_20 = (min(var_4, ((var_7 > ((var_0 ? var_4 : -89))))));
    #pragma endscop
}
