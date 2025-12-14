/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162133
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_19 = (max(8407539728992920299, ((0 ? -1211535870039833185 : 1152921504606842880))));
        var_20 = var_10;
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {
        var_21 |= (max(((var_16 ? var_0 : (arr_0 [i_1]))), ((max(821859340, 1)))));
        var_22 = (((((arr_1 [i_1]) & (arr_2 [i_1] [i_1])))) ? (arr_2 [i_1] [i_1]) : (arr_1 [i_1]));
        var_23 = (((((arr_0 [i_1]) ? (arr_4 [i_1]) : var_16)) == ((var_10 * (arr_1 [8])))));
        var_24 = 2147352576;
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
    {
        var_25 = (max(var_25, ((((var_15 ? (((arr_0 [i_2]) | (arr_2 [i_2] [i_2]))) : (arr_3 [i_2]))) % ((var_12 ? 4160894370782252300 : (arr_5 [i_2])))))));
        var_26 = arr_5 [i_2];
    }
    var_27 = var_18;
    var_28 = 9223372036854775790;
    var_29 = (((4611686018427387888 ? 1 : -8089000234042501540)) >> (((((-9223372036854775807 - 1) - -9223372036854775803)) + 19)));
    #pragma endscop
}
