/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144204
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 15;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0 - 1] = (((((-9223372036854775807 - 1) != -9223372036854775799)) ? (max(((139 ? (arr_1 [i_0 + 3] [i_0]) : -16137)), ((max(var_14, var_6))))) : (min(9223372036854775807, -var_8))));
        var_15 = (((min(var_0, (arr_1 [i_0 - 2] [i_0 + 2]))) < var_7));
        arr_3 [i_0] = ((16137 ? (((((arr_0 [i_0]) < (arr_1 [i_0 - 2] [i_0 + 1]))))) : (min(((0 ? (arr_1 [i_0] [i_0]) : var_3)), (!var_5)))));
    }
    for (int i_1 = 2; i_1 < 15;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = -26860;
        arr_8 [i_1] = (((min((arr_5 [i_1 + 3]), (arr_4 [i_1 - 1] [i_1]))) & (min(var_1, (arr_4 [i_1 + 1] [i_1 + 1])))));
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_16 = (((((((arr_1 [i_2] [i_2]) && ((((arr_6 [i_2]) | (arr_9 [3])))))))) != (((min(var_5, var_8)) + ((max(-2, var_7)))))));
        arr_11 [i_2] = -5968704532704040295;
    }
    var_17 -= ((var_8 ? var_12 : ((((((5 ? 76 : var_3))) ? var_7 : (!var_5))))));
    var_18 &= ((var_7 ? var_1 : ((((((var_12 ? var_4 : var_1)) != (((var_3 ? var_14 : var_0)))))))));
    #pragma endscop
}
