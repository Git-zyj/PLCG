/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((((((max(7375466334410029693, 1131944441151561800)) - ((((-1131944441151561801 + 9223372036854775807) >> (var_11 - 39512))))))) ? 10438132372185571147 : (((0 + ((-23 ? 1131944441151561802 : var_12)))))));
        arr_4 [i_0] = (((((22 != (~1131944441151561800)))) % (arr_1 [i_0])));
        arr_5 [i_0] = -22;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_9 [i_1] = (arr_7 [i_1]);
        var_20 = ((-(arr_7 [i_1])));
    }
    var_21 = ((((0 ? (max(var_3, -1131944441151561809)) : (~-19))) + ((((var_13 + var_3) ? var_6 : -19)))));
    #pragma endscop
}
