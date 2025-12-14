/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119363
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((var_13 ^ var_14) >> (65510 - 65491))) + ((((2984549294 - var_10) ? -8134605828606721984 : (!-8134605828606721976))))));
    var_16 *= (((~var_11) && var_7));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 365115869483132848;
        var_17 = ((var_4 * (arr_1 [i_0])));
        arr_3 [i_0] [i_0] = ((((((arr_0 [i_0]) ? (arr_1 [i_0]) : var_8))) && ((((((arr_0 [i_0]) + 9223372036854775807)) >> (-8134605828606721984 + 8134605828606722046))))));
        arr_4 [i_0] = ((((((arr_1 [8]) ? (arr_1 [i_0]) : (arr_1 [i_0])))) * (arr_1 [i_0])));
        var_18 = ((((((~-8134605828606721997) / (arr_0 [0])))) ? (max(6450512587666512466, (min((arr_1 [7]), 8134605828606721983)))) : -28));
    }
    var_19 = (max(var_19, (((((max(var_3, -5751801423115700501) | (37614 | 5971551510222199077))))))));
    #pragma endscop
}
