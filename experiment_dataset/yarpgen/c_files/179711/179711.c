/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179711
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_7, var_4));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = (max(var_19, ((max(2130818430, (min((arr_1 [i_0]), 2164148865)))))));
        arr_4 [16] = (max((((((4294967294 ? 2130818418 : -2483999000691579475))) ? ((2142311034165562306 ? -2483999000691579475 : 7340)) : (2483999000691579475 - var_3))), (2130818428 + var_14)));
        arr_5 [13] = ((~(50150 * -105)));
    }
    var_20 = ((((min((var_1 > 108), ((1 ? var_5 : var_5))))) != ((var_4 ? ((63 ? 2164148865 : 1383582731)) : (var_4 - var_2)))));
    var_21 = ((var_11 ? var_7 : var_14));
    #pragma endscop
}
