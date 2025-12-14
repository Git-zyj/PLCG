/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153356
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += var_10;
    var_17 = (min(((((var_5 ? var_13 : 5591254052128084444)) ^ var_5)), -var_10));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = ((109 ? 1841118212 : 2220817651171256056));
        var_18 = (max((((arr_1 [i_0]) ? 12855490021581467172 : (arr_1 [i_0]))), ((((~var_15) - ((~(-9223372036854775807 - 1))))))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = (((((((4294967285 ? var_14 : var_12))) + (((arr_6 [i_1] [i_1]) ? (arr_3 [i_1] [i_1]) : 2506429725)))) & (arr_5 [7])));
        var_19 = ((~(((110 * (arr_3 [i_1] [9]))))));
        arr_8 [i_1] = ((((((((arr_6 [i_1] [i_1]) * (arr_4 [i_1])))) ? (max(4137742036616412325, 6029800272846997181)) : -3)) == ((((!var_12) * (min(-3838827086195104977, var_0)))))));
        var_20 = (arr_5 [i_1]);
    }
    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {
        var_21 = (arr_4 [i_2]);
        var_22 = (arr_10 [i_2]);
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        arr_14 [i_3] |= (-9223372036854775807 - 1);
        var_23 = (arr_13 [i_3] [i_3]);
        var_24 = ((((max((arr_13 [i_3] [18]), (arr_13 [i_3] [i_3])))) || ((min((arr_12 [i_3] [i_3]), (arr_12 [i_3] [3]))))));
        arr_15 [i_3] |= (arr_13 [i_3] [i_3]);
    }
    var_25 ^= var_11;
    #pragma endscop
}
