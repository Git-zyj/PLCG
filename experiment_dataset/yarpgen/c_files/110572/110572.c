/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110572
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_7;
    var_18 &= ((var_6 != ((min(var_4, (-123 != var_8))))));

    for (int i_0 = 1; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_19 = (max(var_19, (arr_0 [i_0 + 3])));
        var_20 -= (((((~((var_11 ? 32768 : -1024))))) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 + 2])));
    }
    for (int i_1 = 1; i_1 < 14;i_1 += 1) /* same iter space */
    {
        var_21 = arr_3 [i_1] [i_1];
        var_22 ^= ((((min(((var_14 ? (arr_0 [i_1]) : (arr_3 [i_1] [i_1 + 2]))), (148 == 1)))) ? (((((arr_1 [6]) ? (arr_3 [i_1] [i_1]) : var_14)) % 1)) : (max((((!(arr_2 [i_1])))), (arr_0 [i_1 - 1])))));
        arr_4 [i_1] = (!var_9);
        var_23 |= (((((min(var_16, (arr_0 [i_1])))) ? (arr_0 [i_1 + 3]) : (((arr_1 [14]) ? (arr_3 [i_1] [i_1]) : (arr_2 [i_1]))))) * ((-(arr_2 [i_1 + 2]))));
    }
    #pragma endscop
}
