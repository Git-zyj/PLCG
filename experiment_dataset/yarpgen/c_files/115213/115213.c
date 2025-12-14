/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((min(var_4, (min(var_0, var_6)))));
    var_13 = 2147483640;
    var_14 = 2147483644;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((((arr_0 [i_0]) ? ((min((arr_0 [i_0]), var_4))) : var_4))) ? ((((((arr_1 [i_0]) ? var_7 : (arr_0 [i_0])))) ? (arr_1 [i_0]) : (2147483612 & var_5))) : (arr_0 [i_0]));
        arr_3 [i_0] = var_6;
        arr_4 [i_0] [i_0] = var_9;
        arr_5 [i_0] |= ((~(min(1945310777, (arr_1 [i_0])))));
    }
    #pragma endscop
}
