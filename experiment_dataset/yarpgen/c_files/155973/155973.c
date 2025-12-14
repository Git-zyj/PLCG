/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155973
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_10 = (max(var_10, ((((9061 ? (min(var_0, 12442405256954411260) : var_5)))))));
        var_11 *= (((((var_4 ? (arr_0 [i_0]) : (arr_1 [i_0])))) ? ((((min(var_3, (arr_1 [i_0])))) ? ((-(arr_1 [i_0]))) : (arr_1 [i_0]))) : (var_4 + 1552056112)));
    }
    var_12 |= (max((~var_3), var_4));
    var_13 = -1686494278;
    #pragma endscop
}
