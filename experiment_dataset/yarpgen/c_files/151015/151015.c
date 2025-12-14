/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151015
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_11;
    var_21 = 10316444868260102809;
    var_22 = (max((((var_1 / -105) ? (~var_17) : var_18)), (max(2923115247579698828, (min(var_0, var_15))))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 1;
        arr_3 [i_0] [i_0] = (min(47, (!7)));
        var_23 = (min(var_23, ((max((((~var_14) * (!1194328412))), (arr_1 [i_0] [i_0]))))));
        var_24 = ((2 >> (((((arr_0 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))) - 15571277722017441261))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_7 [i_1] = (max(((((var_1 ? (arr_4 [i_1]) : 4131395236)))), 823720486));
        arr_8 [i_1] = (max(1, ((((min(1, 0))) ? (arr_1 [i_1] [i_1]) : (arr_5 [i_1] [i_1])))));
        var_25 = (min(var_25, (((((min(((var_12 ? 0 : 18446744073709551615)), (12056525047784200372 >= var_18)))) ? (min(((((arr_6 [18]) > 18169569686767637747))), (max(-8168561386017046904, var_12)))) : -9223372036854775800)))));
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_26 += var_2;
        arr_11 [i_2] = var_14;
    }
    var_27 = (((((+-1) + 2147483647)) >> (((((var_9 ? var_18 : var_1))) ? (var_14 && 0) : 3451060759))));
    #pragma endscop
}
