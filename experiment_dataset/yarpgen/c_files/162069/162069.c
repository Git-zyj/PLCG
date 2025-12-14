/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162069
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, var_5));
    var_20 *= ((!((!(var_15 % 1)))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_21 = var_18;
        var_22 = (!-12);
        var_23 = (min(var_23, (((!1278097991) ? (arr_1 [6]) : (arr_1 [14])))));
        var_24 = (max(3, (1470008608 != -1786270381)));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_25 -= 3;
        var_26 = (max(var_26, ((((((58 ? 58 : 51))) ? ((min(var_17, 61))) : ((-3656809702904915041 ? 52 : 23)))))));
        var_27 = (max(((6 ? 1745194135 : 521989534)), -0));
        var_28 = max((((((var_18 ? var_7 : 0))) ? 3 : (arr_3 [i_1]))), (min((arr_4 [i_1] [i_1]), -2006190628)));
        arr_6 [i_1] |= 488092231;
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
    {
        var_29 = ((56 ? 252 : 2077269596));
        var_30 = (((~912235905819737727) ? var_14 : 3));
    }

    for (int i_3 = 4; i_3 < 17;i_3 += 1)
    {
        arr_12 [0] [0] = (((((arr_11 [i_3 + 1]) <= (var_14 % 44096))) ? ((1974860604 ? (-9223372036854775807 - 1) : 1974860590)) : ((((((arr_10 [i_3 + 2]) ? -272234338 : (arr_11 [i_3 + 3])))) ? (arr_10 [i_3 - 3]) : (min(0, -3091148007256993667))))));
        var_31 = (((arr_10 [i_3 + 1]) == var_3));
        var_32 = ((((var_10 ? ((3984157829 ? -3091148007256993667 : var_13)) : 2147483520)) != ((((max(281474976710592, 3984157829)))))));
        arr_13 [i_3] = ((((((60 - (arr_11 [19]))) & ((-28 ? (arr_11 [i_3]) : var_5)))) % ((((-59 ? 776155489 : -3091148007256993665)) % (arr_10 [i_3])))));
    }
    #pragma endscop
}
