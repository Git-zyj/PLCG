/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_7, var_1));
    var_15 |= var_7;

    for (int i_0 = 2; i_0 < 10;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((~((max(1, 15)))));
        var_16 = (((-9223372036854775807 - 1) == (arr_2 [i_0 - 1])));
    }
    for (int i_1 = 2; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_17 = (((max((arr_4 [i_1 - 2]), (arr_4 [i_1 + 3]))) != ((((!(arr_4 [i_1 + 3])))))));
        var_18 = 9223372036854775807;
        var_19 -= ((((((14801337273834362289 ? 2435 : (arr_5 [i_1]))) - (((arr_4 [i_1]) ? (arr_0 [i_1]) : -23221)))) != ((var_11 ? (((arr_5 [i_1]) ^ 15)) : (arr_0 [i_1])))));
    }
    #pragma endscop
}
