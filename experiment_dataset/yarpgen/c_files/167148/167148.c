/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = (3898222871 / 1);
        var_16 = ((var_0 ? (arr_1 [i_0]) : (arr_0 [i_0])));
        var_17 ^= 18041529287911483641;
    }
    var_18 = max(((((39000 ? 405214785798067974 : 17545922657393367824)) - (var_12 > 18041529287911483664))), ((((((-2147483647 - 1) ? 405214785798067974 : var_7)) <= 25))));
    #pragma endscop
}
