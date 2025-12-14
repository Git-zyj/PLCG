/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152094
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_11 = var_2;
        var_12 = ((((max(7718218551188583571, (arr_2 [i_0])))) ? (((((var_1 ? 0 : var_4))) ? (max((arr_0 [i_0]), var_8)) : (arr_1 [i_0 + 3]))) : ((((max((arr_2 [i_0]), (arr_2 [i_0 - 1]))) ? var_7 : 1)))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_13 = (((((-843714053 ? 119 : 122))) ? ((((arr_0 [i_1]) ? ((max(0, var_7))) : var_3))) : -2043882747240768116));
        arr_5 [i_1] = (~2074032497);
        var_14 = var_1;

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 0;i_3 += 1)
            {
                var_15 -= (max((((1435297474 ? 1435297474 : 6275132505652454680))), 119));
                arr_12 [i_1] [i_1] [i_1] = -636870280;
                var_16 = ((var_7 ? (arr_6 [i_3 + 1]) : -1));
                var_17 += 0;
            }
            var_18 = (max((((7718218551188583578 ? 1 : 12171611568057096935))), (!1)));
        }
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            var_19 = (min(var_19, ((((((var_1 ? ((var_4 ? 1 : (arr_6 [i_1]))) : var_3))) ? ((((1 > (arr_0 [i_4]))))) : -8)))));
            var_20 = ((!(((((max(601314720, 1))) ? 20 : -15)))));
            var_21 = (max(var_21, ((max((!233), ((var_5 ? 0 : var_3)))))));
        }
    }
    for (int i_5 = 1; i_5 < 14;i_5 += 1)
    {
        arr_17 [i_5] = 57715;
        var_22 = ((((max(1, 57718))) ? (((arr_15 [i_5 + 3]) ? (~-30) : 4386469932641706667)) : -1));
    }
    var_23 = ((((var_3 ? var_7 : 230934278))) ? ((((max(var_4, var_3))) ? ((-12010 ? 1 : -6182)) : 113)) : ((var_10 ? 0 : (~107))));
    var_24 = var_10;
    #pragma endscop
}
