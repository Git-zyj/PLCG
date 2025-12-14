/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, ((((((var_0 >= 291252915) ? (var_13 ^ var_16) : (!0))) ^ var_16)))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = (max((min((~2339219755), (max(255, 1)))), ((min(((var_4 ? var_19 : (arr_0 [i_0]))), ((max((arr_2 [10] [10]), 0))))))));
        var_21 *= var_4;
        var_22 = (min(var_22, var_15));
    }
    for (int i_1 = 2; i_1 < 7;i_1 += 1)
    {
        arr_6 [i_1 + 2] [3] = var_2;
        var_23 = 8589934591;
        arr_7 [i_1] = ((var_2 ? var_1 : 43));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {

        for (int i_3 = 1; i_3 < 14;i_3 += 1)
        {
            var_24 = max((((arr_10 [i_3 + 2]) & (arr_10 [i_3 - 1]))), (arr_11 [i_3 + 1] [i_3 + 2]));
            var_25 *= var_19;
        }
        for (int i_4 = 1; i_4 < 12;i_4 += 1)
        {
            var_26 = (min(var_26, ((1 ? ((0 ? (((127 ? 1 : -31866))) : var_7)) : 8267781556131896570))));
            arr_17 [i_2] [i_4 + 4] [i_4] = arr_15 [i_2] [i_4 + 3] [i_4];
            arr_18 [i_2] = (arr_15 [i_4 + 3] [i_4 + 4] [i_4 + 1]);
        }
        for (int i_5 = 2; i_5 < 14;i_5 += 1)
        {
            arr_21 [i_5] [1] = (((((((arr_11 [9] [i_5]) - var_15)) == (1 || var_1))) ? (!var_17) : var_3));
            var_27 |= ((((var_9 ? (arr_8 [i_5 - 1] [8]) : (arr_8 [i_5 - 2] [i_5]))) & (((((arr_15 [i_2] [i_5 + 2] [i_2]) >= (55229 < 1)))))));
        }
        var_28 = (max(((((((((arr_10 [i_2]) + 2147483647)) << (31865 - 31865))) >> (2000933453829845906 - 2000933453829845885)))), (max(((max(1, (arr_12 [i_2])))), (arr_14 [i_2] [i_2])))));
    }
    #pragma endscop
}
