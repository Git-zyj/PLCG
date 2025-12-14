/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= var_0;
    var_20 = (max(var_20, 1023));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_21 ^= (((((-1 ? (arr_0 [i_0 - 1] [i_0 - 1]) : 1))) + (((arr_1 [i_0] [i_0 - 1]) ? (max(3072, var_12)) : ((((arr_1 [i_0] [i_0]) + (arr_1 [i_0] [i_0 - 1]))))))));
        var_22 |= ((((min((!var_3), (((arr_1 [i_0] [i_0]) ? var_6 : var_15))))) ? (arr_0 [i_0] [i_0 - 1]) : (~3089)));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_23 = (max(var_23, ((max((((!(arr_3 [8] [i_1])))), (min((arr_2 [10]), (var_11 && var_3))))))));
        var_24 = (min(var_24, ((((min((arr_3 [1] [1]), (((var_3 ? var_15 : (arr_2 [0])))))) / ((0 ? (((-(arr_4 [12])))) : (arr_3 [4] [4]))))))));

        for (int i_2 = 3; i_2 < 13;i_2 += 1)
        {
            var_25 = (max(var_25, (((((((arr_3 [8] [i_2]) ? 1045 : 64513))) && 64536)))));
            var_26 -= ((((min((arr_5 [12] [12] [i_2]), (arr_7 [i_2])))) ? (min(var_17, (-9223372036854775807 - 1))) : (((-3101 ? 1 : 192)))));
        }
    }

    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_27 *= (max((~var_6), -30316));
        var_28 = (max(var_28, var_8));
        var_29 += ((1019 ? (((((arr_6 [12]) <= var_13)) ? (max((arr_5 [14] [i_3] [i_3]), 1023)) : (arr_6 [0]))) : ((((!(((var_15 ? 4294967295 : var_16)))))))));
    }
    #pragma endscop
}
