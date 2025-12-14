/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_14 = (arr_0 [4]);
        var_15 = ((-(max((min(9338693421781508725, -708702711)), -7281618273397788898))));
    }
    var_16 = -var_13;
    var_17 = ((((min(((var_13 ? 33569 : 0)), var_0))) || ((max(1, (min(15014057429193855570, 4631270127091983369)))))));

    /* vectorizable */
    for (int i_1 = 2; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_18 = 1;
        var_19 = (!var_0);
    }
    for (int i_2 = 2; i_2 < 17;i_2 += 1) /* same iter space */
    {
        var_20 = (((arr_4 [i_2 + 2]) != (min((arr_4 [i_2 + 2]), (arr_5 [i_2])))));
        arr_7 [i_2] = (((((11063325926589224385 - 17504) + (((1 ? (arr_3 [i_2]) : var_2))))) & ((max((arr_5 [i_2 + 2]), -1211447997)))));
    }
    for (int i_3 = 3; i_3 < 22;i_3 += 1)
    {
        arr_10 [i_3] = (min(((-10 & (arr_8 [i_3 - 2]))), ((min((arr_9 [i_3 + 1]), 1)))));
        var_21 = ((((~(arr_9 [i_3]))) <= ((max(-99, 42307)))));
        arr_11 [i_3] = (min((((((max(-2057909592, 15))) >= (min(9799636789764862158, 1498465138))))), var_0));
    }
    #pragma endscop
}
