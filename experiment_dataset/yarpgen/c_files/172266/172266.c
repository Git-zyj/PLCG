/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172266
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 7812976215085752883;
    var_13 -= var_6;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 18;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0 - 2] = (((arr_1 [i_0 + 1] [i_0 - 2]) ? var_10 : var_7));
        var_14 = var_6;
        var_15 = (arr_1 [i_0] [i_0]);
        var_16 = (max(var_16, (((var_8 * (arr_2 [i_0 + 1]))))));
    }
    for (int i_1 = 3; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_17 += ((var_1 - (arr_1 [i_1] [i_1 + 1])));
        arr_6 [i_1] = 63488;
        var_18 |= (7451802768018516113 ^ 2071);
    }
    var_19 = (max(var_19, -4));
    #pragma endscop
}
