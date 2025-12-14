/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_19 ^= ((-19482 - (((((2421292170 ? 9381749021839950699 : 1))) ? (arr_1 [i_0]) : (var_6 + 1617091020)))));
        var_20 += ((!((((arr_1 [i_0 - 1]) ? (arr_1 [i_0 + 2]) : (arr_1 [i_0 + 1]))))));
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        var_21 = -509141650;
        arr_6 [i_1] = (((10758338384813868732 ? (arr_4 [i_1 + 1]) : 474314767)));
    }
    var_22 = (((!var_16) ? (max(var_17, var_11)) : var_10));
    #pragma endscop
}
