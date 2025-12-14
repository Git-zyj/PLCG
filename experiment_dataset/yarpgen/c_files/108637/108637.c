/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108637
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, var_1));
    var_17 = var_5;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = (((max((min(-2582459744890409762, (arr_1 [i_0]))), (arr_0 [i_0]))) / (arr_1 [i_0])));
        var_19 = ((((~(min(var_2, -2582459744890409762)))) | ((((((var_10 ? (arr_1 [i_0]) : 35))) ? (-7472466965916938571 >= var_10) : (arr_1 [i_0]))))));
        var_20 = (min(var_20, ((min(var_4, ((((min(2146, 65))) ? (2582459744890409741 + 1) : 14761770815808900907)))))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_21 = (min(var_21, -134217727));
        var_22 += (((arr_4 [i_1]) ^ ((min((arr_0 [1]), (arr_4 [i_1]))))));
        var_23 = ((((arr_1 [0]) + (arr_1 [18]))));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        var_24 -= (min((180 + 2), -32764));
        arr_7 [i_2] [i_2] = 14761770815808900896;
        var_25 = ((-14761770815808900902 ? ((min(5067848626288824736, 1478294774))) : (((arr_5 [16]) ? -2140 : (22471 & 7293399341078633184)))));
    }
    var_26 = var_13;
    var_27 = ((var_14 << (var_8 - 2861916774945415702)));
    #pragma endscop
}
