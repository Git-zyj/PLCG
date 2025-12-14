/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_11 = (((((1 ? (-9223372036854775807 - 1) : 879854831))) || (1 || 1610612736)));
        arr_3 [i_0] [i_0] = ((((min(var_5, 3780214155))) && ((max((min(32762, 1087660037)), 1)))));
        arr_4 [8] = (max((((var_6 ? (var_8 && 514753141) : ((max(var_5, var_5)))))), (((var_0 | 5636012503548134481) | -128))));
    }
    for (int i_1 = 2; i_1 < 12;i_1 += 1)
    {
        var_12 = (((((max(0, 18446744073709551585))) ? (3 % var_1) : var_2)));
        arr_7 [i_1] [i_1] = (((((((-32767 - 1) / 5410197248522644075)) % var_5)) * (var_7 / 54615)));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_13 = (!-var_0);
        arr_10 [i_2] [18] |= var_5;
        var_14 = (max(var_14, ((((var_4 && 65527) | ((var_6 ? 1 : var_7)))))));
        var_15 = ((((~-21) ? 3780214163 : (max(-26744, 9179211938700426454)))));
    }
    var_16 = (var_4 && var_9);
    #pragma endscop
}
