/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122588
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(32740, 32740));
    var_18 = min(((32740 ? 0 : -1092084770)), -84);

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_19 = (87 == 3644884909);
        var_20 = (max(-99, (max(2147483647, 1))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_5 [i_1] = min(var_4, var_0);
        var_21 = (((max((min((arr_1 [i_1]), 15344516963979372100)), (15344516963979372098 < 116)))) ? (min(((((arr_0 [i_1]) + -1))), (max((arr_0 [i_1]), 189866276819105433)))) : var_0);
        var_22 = (((((((max(1, (arr_1 [i_1])))) ? ((-1842695725 ? -9223372036854775806 : 2147483638)) : (((max(var_14, var_12))))))) ? (((((-3911558905485788244 ? 6489661940021710321 : 1842695734))) ? ((max(1, var_0))) : (!1842695724))) : ((max(-20011, 20011)))));
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        var_23 = (min(var_23, (min((((((556352051 ? (arr_1 [i_2]) : 3102227109730179528))) ? (((min(var_1, var_5)))) : ((2147483647 ? (arr_7 [i_2]) : (arr_6 [i_2]))))), ((max((arr_8 [i_2]), 1842695725)))))));
        var_24 ^= ((45 ? -19035 : 1842695730));
    }
    for (int i_3 = 1; i_3 < 20;i_3 += 1)
    {
        var_25 = (min(((min((((arr_0 [i_3]) ? (arr_10 [4] [i_3]) : (arr_0 [i_3]))), ((-20019 / (arr_0 [i_3])))))), 3651341491));
        var_26 ^= (min((((arr_9 [i_3 - 1]) | -1842695725)), ((((var_2 ? var_15 : (arr_10 [i_3] [16]))) >> (((min((arr_9 [i_3]), var_7)) - 8795014877313786605))))));
    }
    var_27 = (var_7 ? (!var_7) : (max(var_11, -var_5)));
    #pragma endscop
}
