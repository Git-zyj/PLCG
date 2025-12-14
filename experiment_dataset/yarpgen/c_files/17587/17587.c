/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17587
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((var_17 || var_11) < var_12));
    var_19 = -8629142693814789493;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_20 = var_11;
        var_21 = (max(var_21, (min(((456041737 >> (27531 - 27516))), 3838925558))));
    }
    for (int i_1 = 1; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_22 += (arr_2 [i_1]);
        var_23 = (min(-1286747837, (min((arr_2 [i_1 - 1]), (arr_4 [i_1 - 1])))));
    }
    for (int i_2 = 1; i_2 < 19;i_2 += 1) /* same iter space */
    {
        var_24 = (((((var_3 ? 456041737 : (arr_6 [i_2])))) * (((arr_7 [i_2]) ? (arr_5 [i_2] [i_2 + 1]) : var_9))));

        for (int i_3 = 1; i_3 < 20;i_3 += 1)
        {
            arr_12 [i_2] = (min((min((((arr_2 [i_3]) ? var_4 : (arr_5 [i_2] [i_2]))), ((((arr_3 [15]) ? (arr_3 [i_2]) : var_4))))), 3461328713));
            var_25 = var_12;
            arr_13 [i_2] = ((59758 ? 37 : ((((min(13287607791926375345, 13740472844368594732))) ? -8843996601124011474 : 77))));
        }
        var_26 = (~456041737);
        var_27 = ((((((((4706271229340956893 ? 669889051 : -1572589508))) ? 0 : (arr_3 [i_2 - 1])))) + ((-(4706271229340956883 + -28)))));
    }
    #pragma endscop
}
