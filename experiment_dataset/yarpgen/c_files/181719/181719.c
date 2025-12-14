/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((31137 ? var_12 : var_9)));
    var_15 = max((max(var_12, var_7)), var_7);

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_16 = (min(var_16, ((max((min(16137510328374259019, (arr_1 [i_0] [i_0])), (arr_2 [i_0])))))));
        arr_3 [i_0] = ((!(((+(((arr_2 [i_0]) ? (arr_0 [i_0]) : -1)))))));
        arr_4 [i_0] = ((+(((-32767 - 1) ? 72057456598974464 : (-32767 - 1)))));
        var_17 = ((-var_8 ? (((!var_0) ? 26587 : -32767)) : (((-(((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : var_3)))))));
        var_18 -= ((((min((!var_2), (~11598666820368653424)))) ? ((((!(!2047))))) : (((max(16137510328374259019, 32751)) & -var_7))));
    }
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = (min((2309233745335292596 * -2048), (((-5869852768575168563 || var_2) ? (arr_5 [i_1] [22]) : (~15230350928102360687)))));
        var_19 -= (min(var_6, ((min(8496, 255)))));
    }
    var_20 = (min(var_20, (((((((max(var_2, var_12)) * (!var_0)))) ? -6421 : (var_1 / var_6))))));
    var_21 *= (~(((~var_10) ^ (~6593964124778959059))));
    #pragma endscop
}
