/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102479
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, (((~((((-4716274198046117642 != 0) < 511))))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_20 = (max(-1199102794554011054, 18446744073709551599));
        var_21 = ((511 ? (arr_0 [i_0] [14]) : ((max((arr_0 [i_0] [i_0]), 0)))));
        arr_3 [i_0] = 1;
        arr_4 [i_0] = (4716274198046117643 | var_15);
    }
    var_22 = (min(var_22, var_18));
    #pragma endscop
}
