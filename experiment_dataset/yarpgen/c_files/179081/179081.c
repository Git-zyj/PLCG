/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 36435;
    var_16 = var_6;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_17 = (max(var_17, ((((((arr_1 [i_0]) > (arr_2 [i_0]))) ? 2732627539 : (arr_2 [i_0]))))));
        var_18 = (((((((var_2 ? var_14 : var_1))) ? (min(var_8, var_6)) : 32767)) - (((-(16944 + 2732627531))))));
        arr_3 [i_0] = (arr_0 [i_0]);
        var_19 = ((((((arr_0 [i_0]) ? (arr_2 [i_0]) : var_1))) ? ((((arr_2 [i_0]) && (arr_2 [i_0])))) : ((((arr_2 [i_0]) && 32256)))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 12;i_1 += 1)
    {
        var_20 = ((arr_5 [i_1]) ? ((~(arr_4 [i_1]))) : (((arr_4 [i_1]) ^ var_11)));
        arr_6 [i_1] = ((10084999899121787553 ? -1726975835 : (~2732627539)));
    }
    var_21 = ((5 ? (((12849744561667118839 ? 2230822043 : 10792119652888043604))) : ((((!(((var_6 ? var_14 : -5787288880813294067)))))))));
    var_22 = (((((var_3 ? 1562339750 : 0)) & 1562339733)));
    #pragma endscop
}
