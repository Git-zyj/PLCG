/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((~9915804489795974965) ? var_11 : (!8530939583913576651)));
    var_13 = var_11;

    for (int i_0 = 3; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_14 = ((!((((arr_0 [i_0 + 2]) ? (var_4 & 389450179064034760) : var_10)))));
        arr_2 [i_0 - 2] = (((!9915804489795974965) ? (((-2030370728 < var_7) ? ((1 ? var_6 : -113)) : (((arr_1 [i_0]) ? 17 : -2030370728)))) : var_2));
    }
    for (int i_1 = 3; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_15 = var_3;
        var_16 = ((-((((var_2 ? var_5 : 109))))));
        var_17 |= (max(var_0, ((8530939583913576650 ? ((var_8 ? var_11 : 6617094331258118182)) : (((min(var_11, var_10))))))));
        arr_6 [i_1] = ((((-var_5 * (65535 / -2009687527))) / 109));
        var_18 = (max(var_18, var_2));
    }
    #pragma endscop
}
