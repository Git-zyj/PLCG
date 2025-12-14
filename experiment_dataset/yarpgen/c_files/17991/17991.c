/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17991
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 9200884067922000186;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_17 = (min(var_17, var_7));
        arr_3 [i_0] = var_9;
        var_18 = 4647949796376188310;
    }
    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {
        var_19 &= var_9;
        var_20 = (max(var_20, (((((((10014 && 74707377) ? -10014 : -10015))) ? ((((arr_4 [i_1 + 2]) || (arr_4 [i_1 + 2])))) : var_2)))));
    }
    var_21 &= (max(-10025, -10037));
    #pragma endscop
}
