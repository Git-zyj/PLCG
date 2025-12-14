/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146890
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_14 = (max(var_14, (((~(min(51, 850060104)))))));
        var_15 = (max(var_15, -76));
        var_16 = (arr_2 [i_0 - 1] [i_0 - 1]);
    }
    for (int i_1 = 1; i_1 < 14;i_1 += 1) /* same iter space */
    {
        var_17 = -17;
        var_18 += ((min((arr_1 [0]), ((((arr_1 [6]) && var_0))))));
        var_19 |= 1;
        arr_7 [9] [i_1] = ((var_5 ? (((((min(4015674053, var_13))) ? -7060133665143809502 : -2342456838204264262))) : ((-1834882980 ? (min((arr_1 [6]), 8489616685467660416)) : ((-8489616685467660417 ? -7060133665143809502 : 15594286588175757583))))));
        var_20 *= 15594286588175757583;
    }
    for (int i_2 = 2; i_2 < 13;i_2 += 1)
    {
        var_21 = (max(var_21, ((((((arr_10 [i_2] [i_2]) && var_8)) ? var_13 : var_8)))));
        arr_12 [11] [i_2] = var_7;
    }
    var_22 = (min((((min(16, var_8)))), var_10));
    #pragma endscop
}
