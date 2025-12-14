/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134982
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, var_12));

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_15 = var_12;
        var_16 = (min(var_16, (((((var_10 ^ var_9) % 288230376084602880)) % ((((var_6 ? 5070238488097745657 : var_4)) ^ var_6))))));
        arr_2 [i_0] = max(var_10, ((max(8526225992349449296, 5070238488097745658))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_17 = 11486177845483780502;
        var_18 = (!var_7);
    }
    var_19 = (((9007199254740991 ? 14299062776672165599 : 8329499283619240594)));
    var_20 = (9872227028870796736 >= 0);
    #pragma endscop
}
