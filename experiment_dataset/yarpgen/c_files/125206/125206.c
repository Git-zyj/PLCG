/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125206
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((18 || (((var_10 ? -536870911 : 1306015273)))));
    var_18 = var_9;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_19 ^= (((((17 ? 18 : 15))) ^ var_6));
        var_20 = (min(var_20, (((+(max((((arr_0 [8]) ? var_3 : -1353)), -1339)))))));
        arr_4 [12] [i_0] &= (((arr_0 [0]) * (min((arr_0 [1]), var_9))));
        var_21 &= 1338;
    }

    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_22 -= (max(((max(37196, 7200))), (min((arr_5 [i_1]), 17656373037132401788))));
        var_23 = (min(var_23, ((((((((((arr_7 [i_1]) ? 3968 : -683112421))) ? (min(1353, var_7)) : ((0 ? 1350 : 6144))))) ? (min((arr_6 [i_1]), var_13)) : ((((min(12325, 16384))))))))));
        var_24 = (min(var_24, ((((-(~65519)))))));
    }
    #pragma endscop
}
