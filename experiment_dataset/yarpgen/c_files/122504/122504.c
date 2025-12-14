/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122504
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((~var_2) | (min((~var_11), var_3))));
    var_15 = (min(var_15, ((min((((var_8 ^ var_6) ? ((var_9 ? var_0 : var_0)) : (~var_4))), (((min(var_10, var_1)))))))));
    var_16 += (((28 && var_1) >> (((!(var_11 == var_3))))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 20;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((arr_0 [i_0 + 1]) ^ (((!(arr_0 [i_0])))));
        var_17 = (arr_1 [i_0 - 1]);
        var_18 = (arr_2 [i_0] [i_0 - 2]);
        var_19 |= ((-(arr_2 [4] [i_0 - 2])));
    }
    for (int i_1 = 3; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_20 = -175;
        var_21 = (max(var_21, (!243)));
    }
    for (int i_2 = 3; i_2 < 20;i_2 += 1) /* same iter space */
    {
        var_22 = ((((!(((arr_9 [i_2] [i_2]) && var_12)))) ? ((min(var_0, (~var_11)))) : (((arr_2 [8] [8]) ? (arr_8 [i_2 - 2]) : (arr_9 [4] [i_2])))));
        var_23 = ((((((((25 ? -4459536787205204684 : -895693370))) ? (~var_7) : ((min((arr_2 [2] [i_2]), var_7)))))) == (((((var_3 ? (arr_2 [6] [i_2 - 2]) : var_12))) ? (var_7 ^ var_0) : var_2))));
        var_24 = (min(var_24, (~-9223372036854775797)));
    }
    #pragma endscop
}
