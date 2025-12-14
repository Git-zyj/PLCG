/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min((min(((-11160 ? var_6 : var_3)), (((22467 ? var_4 : var_2))))), (max(((11186 ? -11160 : 1143082314)), var_2))));
    var_11 = ((var_3 ? (max(15, 5)) : var_9));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_12 = (min((((((((arr_0 [15]) ? 11159 : var_8))) ? ((1143082332 ? var_3 : 11145)) : (-34 ^ 0)))), (min((((arr_0 [1]) ^ var_7)), (min(var_0, (arr_0 [i_0])))))));
        var_13 = min(245, 3151884998);
        var_14 = ((((max(7349807907531847551, (arr_1 [i_0])))) ? ((max(-31, 48))) : 127));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_15 = var_1;
        var_16 -= 10566;
        var_17 = (i_1 % 2 == 0) ? (((121 ? ((25823 << (((arr_3 [i_1]) - 16725)))) : 32767))) : (((121 ? ((25823 << (((((arr_3 [i_1]) - 16725)) - 10832)))) : 32767)));
    }
    #pragma endscop
}
