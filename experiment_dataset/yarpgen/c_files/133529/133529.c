/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133529
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_12;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = -1;
        var_18 = 136;
        var_19 *= (max((((arr_2 [i_0] [i_0]) ? (!32767) : -5941)), ((((arr_2 [i_0] [i_0]) && (arr_2 [i_0] [i_0]))))));
        var_20 = (min(1, ((1 | ((min((arr_0 [i_0]), 116)))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = ((((((arr_3 [i_1]) << (((max(1766040819, 1)) - 1766040797))))) && ((((arr_3 [i_1]) ^ (arr_5 [i_1]))))));
        var_21 -= ((((1 ? 4746251128973321541 : -1129996963)) * var_9));
        var_22 = (arr_5 [21]);
        var_23 ^= (min((arr_4 [i_1] [i_1]), ((((min(1, 0)))))));
    }
    for (int i_2 = 2; i_2 < 19;i_2 += 1)
    {
        var_24 = 26548;
        var_25 = ((((((var_3 ^ 1) ^ (((!(-32767 - 1))))))) ? (max((arr_9 [i_2 + 1]), (arr_9 [i_2 + 1]))) : ((((arr_5 [i_2 + 1]) ? (arr_8 [i_2 - 1]) : ((-17833 ? 1 : var_10)))))));
        arr_10 [i_2] = 0;
    }
    var_26 = var_13;
    #pragma endscop
}
