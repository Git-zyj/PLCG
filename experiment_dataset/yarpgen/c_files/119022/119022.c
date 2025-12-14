/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119022
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((var_12 >> (var_2 - 20360)))) ? 11437947612187122992 : var_13);

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_16 = (((max((~39080), ((7008796461522428629 % (arr_1 [i_0 - 1]))))) > ((((arr_1 [i_0]) / ((min((arr_1 [i_0 + 1]), (arr_0 [i_0])))))))));
        var_17 = ((-(7 == -2073028860)));
    }
    var_18 = ((var_8 && ((min(-45144, (7008796461522428618 & 11437947612187123002))))));
    #pragma endscop
}
