/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125487
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0 + 2] [i_0] = (((((((min((arr_0 [i_0]), (arr_1 [i_0 + 2])))) ? var_11 : ((min(1, 1)))))) & ((~(~3475487785)))));
        arr_3 [i_0] [i_0 - 1] = 1;
        arr_4 [i_0] [i_0] = ((+(((arr_0 [i_0]) ? (arr_0 [i_0]) : 18446744073709551591))));
    }
    var_14 &= (var_6 ^ ((min(var_11, var_7))));
    var_15 = min((min((max(3744106001, var_3)), 1)), var_7);
    #pragma endscop
}
