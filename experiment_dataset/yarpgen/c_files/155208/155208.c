/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155208
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_11 += ((121 ^ ((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [8]))))));
        arr_4 [i_0] = (!246);
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_12 |= (min((((((var_10 ? (arr_6 [i_1]) : (arr_2 [i_1] [9])))) ? (var_7 > var_6) : (var_3 + 107))), (arr_2 [i_1] [i_1])));
        var_13 += (min(((((!var_6) ? ((((arr_1 [i_1]) != 81))) : (((0 != (arr_0 [i_1]))))))), ((107 ? (arr_1 [i_1]) : (arr_1 [i_1])))));
        var_14 = ((-107 ? (((((((arr_0 [5]) / var_3))) ? (var_5 < -121) : -121))) : ((-var_4 * ((var_8 % (arr_8 [i_1])))))));
    }
    var_15 = (((((~((var_2 ? var_8 : var_4))))) ? (((~56619) ^ (var_1 | 238))) : (~107)));
    #pragma endscop
}
