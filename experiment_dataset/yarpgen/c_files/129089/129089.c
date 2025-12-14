/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129089
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_10 ^= (65535 < (((((((arr_1 [i_0] [i_0]) ? 16386 : (arr_0 [4])))) <= (((arr_2 [i_0]) | 1))))));
        var_11 -= (0 | 72);
    }
    var_12 = (min(var_12, 1074705738));
    var_13 ^= var_4;
    var_14 -= (((max(((max(-88, var_7))), var_1)) >= ((65533 ? 1 : var_4))));
    #pragma endscop
}
