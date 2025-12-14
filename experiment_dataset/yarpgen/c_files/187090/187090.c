/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_14;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_18 = (i_0 % 2 == zero) ? ((((((624779521 ? 2147483647 : 17254) << (((arr_1 [i_0]) - 1423616734))))))) : ((((((624779521 ? 2147483647 : 17254) << (((((((arr_1 [i_0]) - 1423616734)) + 1282139207)) - 21)))))));
        var_19 = (min((arr_2 [i_0] [i_0]), 3611405126));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_20 = (((((-(arr_0 [i_1])))) ? var_12 : (((((arr_0 [i_1]) < var_0))))));
        var_21 = ((min((165 / 7208801735109225862), (arr_0 [i_1]))));
        arr_5 [i_1] = (!488099642);
    }
    var_22 = ((var_3 ? (min(1, (~1))) : var_14));
    #pragma endscop
}
