/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126204
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= ((~((((622614206528693352 ? 11295073443618257023 : -3754798825212493031)) & var_7))));
    var_17 = (min(var_17, (((!((min((4432839198834927398 ^ -452181818), ((((var_2 + 2147483647) >> (var_9 + 808848611234459711))))))))))));

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((+(((min((arr_1 [7] [i_0]), (arr_0 [i_0]))) >> (var_3 && var_1)))));
        var_18 = ((+(((arr_0 [i_0 + 1]) ? ((60 ? -42 : -30121)) : ((var_5 * (arr_1 [i_0] [i_0])))))));
        arr_3 [5] [i_0] = var_1;
        var_19 = var_7;
        var_20 += (arr_0 [i_0 - 1]);
    }
    for (int i_1 = 2; i_1 < 23;i_1 += 1)
    {
        var_21 = ((((((30133 | 97) & var_7))) ^ (min((((var_15 ? var_2 : var_2))), ((var_1 ^ (arr_5 [i_1])))))));
        var_22 ^= ((45651 >= ((((((arr_4 [i_1]) ? (arr_4 [i_1]) : var_8))) - (~var_9)))));
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        arr_8 [i_2] = var_5;
        var_23 = (((((+(((arr_4 [i_2]) + var_9))))) || (((min(var_14, var_15))))));
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        arr_12 [i_3] [i_3] = min(((var_0 ? ((min(var_14, var_13))) : (arr_11 [i_3]))), (((-17315 / -120) * var_13)));
        var_24 = (max(var_24, (min((((var_7 ? var_5 : (arr_10 [i_3])))), ((8446804363409183249 | (12829 & 228)))))));
    }
    #pragma endscop
}
