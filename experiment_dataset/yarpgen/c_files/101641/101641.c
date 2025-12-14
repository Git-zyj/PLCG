/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101641
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_19 = var_5;
        var_20 = (min((23 + 18061252248205224045), (((!((min(26, 61440))))))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_7 [9] [i_1] = (((1 != -255) ? ((((max(26, 65535))) % (var_4 ^ 1))) : (max(((var_9 ? var_10 : 24)), (33554431 >= 9371180652744693418)))));
        var_21 *= ((((min(var_12, (9371180652744693418 >= 1)))) ? ((((!(((253 ? 0 : -1213119104))))))) : var_16));
        var_22 *= ((1359 ? (((553379793 ? 432970664 : 0))) : 8015980455626600004));
        var_23 = (((((var_14 ? var_0 : var_1))) | (((((var_17 ? var_17 : 35)))))));
    }
    for (int i_2 = 1; i_2 < 12;i_2 += 1)
    {
        var_24 |= ((((max(var_11, var_17))) == ((208 ? var_0 : 31))));
        arr_10 [i_2] [i_2] = (((((var_14 * ((-1323403011 ? var_1 : var_15))))) ? ((((9371180652744693404 >> 41) <= (var_1 ^ var_7)))) : ((3717531269042759944 ? ((var_12 ? var_11 : 1)) : 1))));
        var_25 = (((((((min(var_5, 1442))) ? (max(var_2, -1)) : 1))) ? (((~var_0) ? 1 : (max(var_3, 0)))) : (var_14 ^ var_14)));
        var_26 = ((((((!((max(33, 1194032088))))))) == ((26 ? (-31 ^ -4562608059649385621) : (((17492690548565514127 ? 3584 : var_15)))))));
    }
    var_27 |= (max((max(var_17, (max(var_6, var_14)))), var_17));
    var_28 = (max(((((var_0 ? 511 : 18013298997854208)) >> ((((112 ? 160 : 66846720)) - 149)))), ((((var_16 ^ var_8) > -4912)))));
    var_29 |= (max(22956, (18446744073709551614 + 18421111724782582183)));
    #pragma endscop
}
