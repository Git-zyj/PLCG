/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151176
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((!(((var_4 ? var_5 : var_0)))))) % var_15));
    var_19 = (max(var_19, ((((-(!18)))))));

    for (int i_0 = 1; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_20 *= ((var_7 < (((((~var_13) || var_2))))));
        var_21 = (min((((!(((13315 % (arr_1 [i_0]))))))), (arr_0 [i_0 - 1] [i_0 + 1])));
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((((((var_12 ? (arr_3 [i_1] [15]) : var_2)))) ? (((((arr_1 [i_1]) << (-1 + 54))) | 4)) : 21444));
        var_22 = ((((((var_2 << (((arr_0 [i_1] [i_1]) + 14624)))))) - (arr_3 [i_1] [i_1])));
        arr_7 [i_1] = var_17;
    }
    var_23 |= (min(var_13, (~18446744073709551615)));
    var_24 = var_15;
    #pragma endscop
}
