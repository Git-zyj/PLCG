/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_3;
    var_17 = 0;
    var_18 |= ((((((~var_10) ? (-128 < -1186342726) : -var_8))) > (~18446744073709551602)));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_19 |= (((min(((((arr_1 [i_0 + 1] [i_0]) + (arr_0 [i_0 + 1])))), (((arr_1 [i_0] [i_0]) + 15289407317727521316)))) >= (((arr_1 [i_0] [i_0 - 1]) ? var_14 : 15289407317727521316))));
        var_20 = (min(((var_6 ? (arr_0 [i_0 + 1]) : 36039773)), (arr_2 [i_0] [20])));
        var_21 = 36039762;
    }
    #pragma endscop
}
