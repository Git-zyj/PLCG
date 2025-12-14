/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123663
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((max((((0 ? var_1 : 63434)), (max(65535, 669017228))))));

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0]);
        arr_3 [i_0] = ((((max((arr_0 [i_0 - 1]), var_5))) ? (((arr_0 [i_0 - 1]) * (arr_1 [i_0 - 1]))) : ((~(arr_0 [i_0 - 1])))));
        arr_4 [i_0] = (max(9457320104754284120, ((((arr_1 [i_0 - 1]) && var_1)))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = (!9072980444520875228);
        var_11 *= ((0 ? 0 : ((((((-27 + 2147483647) >> (42 - 22)))) ? ((1906274099 ? 1752570856595130740 : -5)) : (((1 ? 167 : 28818)))))));
        var_12 = ((((max((arr_5 [i_1] [i_1]), (arr_6 [i_1])))) ? (min((arr_5 [i_1] [i_1]), (arr_6 [i_1]))) : ((var_9 ^ (arr_6 [i_1])))));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] [i_2] = var_2;
        arr_11 [i_2] = ((min((arr_8 [i_2]), (arr_8 [i_2]))));
        arr_12 [i_2] |= ((((arr_6 [i_2]) ? (arr_6 [i_2]) : ((min(var_5, (arr_8 [i_2])))))) != ((((var_6 != (((arr_6 [i_2]) * -9072980444520875228)))))));
    }
    #pragma endscop
}
