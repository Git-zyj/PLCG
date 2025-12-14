/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17319
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0 + 2] = ((((((min(var_2, 17679135880349046842))) ? (max(var_1, 17679135880349046842)) : ((80 ? var_8 : 17073943947328560089)))) % (((min((arr_0 [i_0 + 1] [i_0 + 1]), (arr_0 [i_0 + 1] [i_0 + 1])))))));
        var_20 -= (arr_2 [9] [i_0]);
        var_21 = ((var_18 ? (min((((var_15 > (arr_1 [i_0])))), (1546207208545865084 % var_10))) : 1));
        var_22 = ((!((((var_15 ? 4593168903618033830 : (arr_0 [i_0 + 1] [i_0])))))));
    }
    for (int i_1 = 2; i_1 < 16;i_1 += 1)
    {
        var_23 *= ((-(((((arr_4 [i_1]) - 164)) - (arr_4 [i_1 + 1])))));
        arr_6 [i_1] [i_1] = ((((~(~-27199)))) ? ((-(arr_5 [i_1]))) : ((((arr_4 [i_1 + 2]) % (arr_4 [i_1])))));
    }
    var_24 = (((min(((var_4 ? var_5 : var_17)), (-27194 > -85)))) ? ((-3037676638429297149 ? var_18 : ((max(var_5, var_4))))) : (((~((max(var_15, 2047)))))));
    var_25 = ((((min(((max(var_14, var_5))), (var_0 + var_11)))) - (max((-5984 - var_7), (15515711276516702735 + var_5)))));
    var_26 = ((var_8 ^ ((((!((max(var_17, var_16)))))))));
    #pragma endscop
}
