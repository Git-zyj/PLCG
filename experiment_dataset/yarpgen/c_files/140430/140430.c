/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140430
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        var_10 = (min(var_10, (((~((((arr_0 [2]) % (arr_0 [4])))))))));
        arr_2 [i_0] [i_0] = (arr_1 [i_0]);
    }
    var_11 = (((~var_8) ? ((((var_7 ? var_8 : var_8)) >> (((max(var_9, var_2)) - 6342743308518697368)))) : (((max(var_7, var_8))))));
    var_12 += (-(((((var_2 ? var_9 : var_3))) ? var_9 : var_2)));
    var_13 += var_4;
    #pragma endscop
}
