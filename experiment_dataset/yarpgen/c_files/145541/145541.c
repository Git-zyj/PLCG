/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145541
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_10 = (min(var_10, (arr_1 [i_0])));
        var_11 = (arr_0 [4]);
        arr_2 [i_0] = ((((max((arr_1 [i_0]), (arr_0 [i_0])))) ? ((-7653285843925879719 + (arr_1 [i_0]))) : ((((arr_1 [i_0]) % var_1)))));
    }
    var_12 ^= ((~var_0) ? var_9 : 4175453305187942454);
    var_13 = (min(((var_3 ? var_0 : ((min(var_0, var_0))))), (14271290768521609162 ^ 4175453305187942454)));
    #pragma endscop
}
