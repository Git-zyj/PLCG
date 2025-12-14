/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= ((var_4 ? var_3 : ((~((-1 ? var_5 : var_5))))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_20 = (((arr_1 [i_0]) && ((((-1374314536430322071 + 9223372036854775807) >> 0)))));
        var_21 ^= (((((arr_3 [i_0]) ? (arr_1 [i_0]) : (arr_3 [i_0]))) >> (((min((arr_2 [i_0]), (arr_3 [i_0]))) - 3935274976))));
        arr_4 [i_0] = (((!2353010253) - ((0 ? (arr_1 [i_0]) : 511))));
        var_22 |= ((!((((var_1 != var_7) ? var_9 : (arr_1 [i_0]))))));
    }
    #pragma endscop
}
