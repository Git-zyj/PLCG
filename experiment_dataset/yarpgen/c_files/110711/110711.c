/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110711
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_10 = (max((((arr_0 [i_0 - 1]) ? (min((arr_0 [i_0]), 3072453943)) : var_8)), (((((var_5 ? 3072453943 : (arr_3 [i_0])))) ? 3072453936 : 3072453936))));
        var_11 += 16053751155877655910;
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = (arr_7 [i_1]);
        arr_9 [i_1] [i_1] = (max(((var_4 ? (arr_0 [i_1 + 1]) : 3072453920)), ((((((arr_0 [i_1 - 1]) + 2147483647)) >> (((arr_0 [i_1 - 1]) + 26181)))))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_12 = (arr_10 [i_2] [i_2]);
        var_13 ^= (((((-((1222513347 ? 3072453953 : (arr_13 [i_2])))))) ? ((max(var_1, 1222513359))) : (arr_10 [i_2] [i_2])));
        var_14 = ((min(1222513353, 28703)));
        var_15 = ((((max(-15629, 2146734172))) ? (((arr_10 [i_2] [i_2]) - (arr_13 [i_2]))) : ((min(1222513375, (arr_13 [i_2]))))));
    }
    var_16 = var_9;
    var_17 = ((var_6 ^ var_5) ? (((var_0 ? var_6 : ((var_0 ? var_1 : var_3))))) : var_0);
    #pragma endscop
}
