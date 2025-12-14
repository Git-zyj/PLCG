/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189487
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_12 = (min(var_12, (~3246428174)));
        arr_2 [i_0] = var_0;
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_5 [i_1] = ((!(((var_11 * (var_1 / var_0))))));
        var_13 = ((((min((arr_3 [i_1] [i_1]), (arr_3 [i_1] [i_1])))) ? (((~(max(var_9, 1048539137))))) : (((arr_3 [i_1] [i_1]) ? (arr_3 [i_1] [i_1]) : (arr_3 [i_1] [i_1])))));
        arr_6 [i_1] = ((+((((min((arr_3 [i_1] [i_1]), (arr_4 [i_1])))) ? ((((!(arr_3 [i_1] [i_1]))))) : (min(7439, (arr_3 [i_1] [i_1])))))));
        var_14 |= 16745671620178246582;
    }
    var_15 -= var_5;

    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        arr_11 [i_2] |= 193;
        var_16 = (max(7439, ((65535 ? 2511528486 : (arr_9 [i_2])))));
        var_17 -= (max((arr_9 [i_2]), ((((arr_7 [i_2]) ? (!var_9) : var_0)))));
        var_18 *= (((arr_8 [i_2]) ? (!var_10) : (min(((((arr_10 [i_2]) || (arr_9 [i_2])))), ((var_7 ? (arr_7 [i_2]) : (arr_10 [i_2])))))));
    }
    #pragma endscop
}
