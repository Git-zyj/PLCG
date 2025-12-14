/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172774
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= ((-1 ? 33491 : 32040));
    var_18 = var_1;
    var_19 = ((!(((-1 ? ((2306557652 ? 18446744073709547520 : 789152950)) : -16)))));

    for (int i_0 = 2; i_0 < 9;i_0 += 1) /* same iter space */
    {
        var_20 = (arr_0 [i_0]);
        arr_2 [i_0] [i_0] = (~32036);
        var_21 -= ((((((arr_0 [i_0 - 2]) ? 46 : (arr_0 [i_0 - 2])))) ? (min((!var_9), 35)) : ((((var_12 != (min(var_3, (arr_1 [i_0])))))))));
        var_22 = (max(var_22, ((((var_13 / var_15) ? (32024 / 4095) : (var_11 / 18446744073709547520))))));
    }
    for (int i_1 = 2; i_1 < 9;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = 58190;
        var_23 *= 6;
    }
    for (int i_2 = 2; i_2 < 9;i_2 += 1) /* same iter space */
    {
        arr_8 [i_2] [i_2] = var_15;
        var_24 = (min(var_24, ((((15 * (((48574 ? 2306557663 : 31)))))))));
    }
    #pragma endscop
}
