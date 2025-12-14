/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119458
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= -var_17;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_21 = (min((-9223372036854775807 - 1), (((!(arr_0 [i_0]))))));
        arr_2 [i_0] [i_0] = (arr_1 [i_0]);
        var_22 = ((-(((!((max(0, 255))))))));
        var_23 = ((!((((((0 ? 2 : -8183605489664023634))) ? (arr_0 [1]) : (arr_0 [i_0]))))));
        var_24 = (arr_1 [i_0]);
    }
    var_25 &= 32755;
    var_26 = var_3;
    #pragma endscop
}
