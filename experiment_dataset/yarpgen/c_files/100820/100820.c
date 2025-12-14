/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100820
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((12396328712747618330 ? -22568 : 12396328712747618330)) == -29681)));
    var_17 = var_2;
    var_18 = (min(4294967286, 6050415360961933286));

    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        var_19 ^= (max((min((min(12396328712747618330, (arr_1 [i_0]))), (arr_0 [i_0 - 1]))), (arr_1 [i_0])));
        var_20 += (min((715039294 ^ 107), (((arr_1 [i_0 + 1]) ? ((var_6 | (arr_0 [i_0 - 4]))) : 20413))));
    }
    for (int i_1 = 2; i_1 < 9;i_1 += 1)
    {
        arr_4 [i_1] = (-(min(1193841012, -1193840985)));
        var_21 += (((arr_3 [i_1 - 2]) && ((min((arr_3 [i_1 - 1]), (arr_3 [i_1 + 1]))))));
        var_22 = (min(var_22, (((4294967295 ? (-9223372036854775807 - 1) : -3343375440785841140)))));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        arr_8 [i_2] = (arr_6 [i_2]);
        var_23 ^= -4088391076393922858;
        arr_9 [i_2] = -23802;
        arr_10 [i_2] &= ((((((arr_0 [i_2]) / var_3))) ? (((arr_7 [i_2] [i_2]) ? var_11 : (var_8 / 41619))) : ((((-(arr_5 [14])))))));
        arr_11 [i_2] = 30111;
    }
    #pragma endscop
}
