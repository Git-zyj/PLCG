/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121690
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= (var_13 + var_1);
    var_17 = ((var_0 <= (min((!var_13), (min(var_3, var_2))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_18 = var_15;
        arr_3 [i_0] = (var_6 / (arr_2 [i_0]));
    }
    for (int i_1 = 3; i_1 < 16;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = var_3;
        var_19 = (-1627900280 / 3083258);
    }
    for (int i_2 = 3; i_2 < 16;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = ((((((max(var_4, var_3))) ? -58 : (arr_5 [i_2]))) < var_13));
        arr_10 [i_2 - 1] [i_2] = (((!1627900311) | ((min(var_14, (((!(arr_7 [i_2])))))))));
        var_20 ^= ((min((arr_8 [i_2]), var_3)));
    }
    var_21 |= (~8357741427136197334);
    #pragma endscop
}
