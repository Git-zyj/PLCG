/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106612
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= var_4;

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((min(var_2, var_7))));
        var_20 |= ((max((((var_8 & (arr_2 [i_0] [i_0])))), (arr_1 [1] [1]))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_7 [i_1] = ((((min(255, -537266936))) ? (max(var_5, (~var_13))) : (((((min(1601766522, -6506150794605700824))) ? var_2 : var_4)))));
        var_21 = ((((max(var_4, var_1))) ? (arr_4 [i_1]) : (max(((var_6 ? var_0 : (arr_1 [i_1] [14]))), (arr_1 [1] [1])))));
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        var_22 = (!0);
        var_23 = ((-(max(var_8, (arr_8 [1])))));
        var_24 = (min(var_24, (~var_15)));
        arr_11 [i_2] [i_2] = (((~2593088626297893279) ? (!var_6) : (arr_8 [i_2])));
        var_25 = (((((-(~1)))) ? (min(var_18, var_10)) : (((var_12 >> ((((1 ? 1336711715181674470 : 59650)) - 1336711715181674457)))))));
    }
    #pragma endscop
}
