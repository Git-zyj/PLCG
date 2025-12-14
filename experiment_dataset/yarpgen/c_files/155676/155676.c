/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (min((((((max(var_4, -51))) ? 12864 : var_10))), ((var_3 ? (max(var_3, 24736)) : (arr_2 [i_0])))));
        var_11 = (min((arr_1 [i_0 - 2] [i_0 + 1]), ((((arr_0 [i_0 - 1] [i_0 - 2]) ? var_5 : (arr_2 [i_0]))))));
    }
    var_12 = -24739;
    #pragma endscop
}
