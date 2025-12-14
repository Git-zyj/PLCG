/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_3;
    var_21 |= (var_3 ^ var_4);

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (((((arr_1 [i_0]) << (((arr_0 [i_0]) - 27)))) & ((~(arr_0 [i_0])))));
        var_22 |= ((((arr_1 [i_0]) * (((arr_0 [i_0]) * (arr_0 [i_0]))))) | (((((arr_0 [i_0]) / 109)) * 5)));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_23 = ((min(((5 ? (arr_4 [i_1]) : 44688)), (((13 >= (arr_1 [i_1])))))));
        var_24 = (((((arr_1 [i_1]) >= (arr_1 [i_1])))) >= (~37));
    }
    #pragma endscop
}
