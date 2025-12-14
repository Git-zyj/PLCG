/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103019
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 84;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_17 = (((((84 ? -39 : -17))) ? ((-(arr_0 [i_0]))) : ((max(252, (arr_0 [i_0]))))));
        arr_2 [2] [i_0] = ((124 ? (((!(arr_0 [i_0])))) : 143));
    }
    var_18 |= (((((!-64) == 175)) ? ((((max(3, 220))) ? -34 : (251 == -2))) : 38));
    var_19 *= ((var_14 ? ((((min((-127 - 1), var_15))) ? var_9 : var_0)) : (var_2 - var_9)));
    #pragma endscop
}
