/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_8;
    var_18 = var_11;

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_19 = ((((min(((7340556515822301081 ? 2383756241243170574 : 120)), (((14413 ? var_16 : 1)))))) ? (arr_1 [i_0 - 1]) : -582244637));

        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            arr_5 [i_1] [i_0 + 1] = ((+(((-102 / 14158) ? (arr_0 [i_0] [i_0 - 2]) : (arr_1 [i_0 - 2])))));
            var_20 ^= var_15;
            var_21 = ((-4889 ? 582244636 : (((-1639614322 ? var_15 : 128)))));
            var_22 ^= ((((min(var_0, (arr_2 [i_0 - 2])))) ? -14158 : ((14158 ? -29776 : (arr_0 [i_0] [i_1 + 2])))));
        }
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_23 = ((((!(arr_8 [i_2]))) ? ((var_11 ? 0 : var_11)) : ((((!(arr_8 [i_2])))))));
        arr_9 [i_2] = (7407322146434602031 ^ 18446744073709551615);
        arr_10 [i_2] = (((min((~var_6), (~14427484803469048807))) > ((-(arr_7 [i_2])))));
        var_24 = ((+((((((arr_6 [i_2]) ? 154 : (arr_6 [i_2])))) ? (arr_8 [i_2]) : (1008 && 3619299503888064227)))));
        arr_11 [15] = (4888 / 1);
    }
    #pragma endscop
}
